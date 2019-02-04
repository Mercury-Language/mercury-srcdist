/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__backend_libs__interval__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "backend_libs.interval.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "backend_libs.interval.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "backend_libs.interval.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "backend_libs.interval.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "backend_libs.interval.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "backend_libs.interval.c"
#line 49 "backend_libs.interval.c"
#include "backend_libs.interval.mh"

#line 52 "backend_libs.interval.c"
#line 53 "backend_libs.interval.c"
#ifndef BACKEND_LIBS__INTERVAL_DECL_GUARD
#define BACKEND_LIBS__INTERVAL_DECL_GUARD

#line 57 "backend_libs.interval.c"
#line 58 "backend_libs.interval.c"

#endif
#line 61 "backend_libs.interval.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeClassDeclStruct
	mercury_data_backend_libs__interval__type_class_decl_build_interval_info_acc_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__interval__type_ctor_info_anchor_0,
	mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0,
	mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0,
	mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0,
	mercury_data_backend_libs__interval__type_ctor_info_insert_map_0,
	mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0,
	mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	mercury_data_backend_libs__interval__type_ctor_info_interval_info_0,
	mercury_data_backend_libs__interval__type_ctor_info_interval_params_0,
	mercury_data_backend_libs__interval__type_ctor_info_interval_var_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__interval__type_ctor_info_maybe_needs_flush_0,
	mercury_data_backend_libs__interval__type_ctor_info_rename_map_0,
	mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0,
	mercury_data_backend_libs__interval__type_ctor_info_save_point_0,
	mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0;
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0, 7,8,10,11,12,13,19,18,16,22)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0, 15,23,24,25,26,27,28,41,30,32)
MR_decl_label5(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0, 33,34,35,36,3)
MR_decl_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0, 13,4)
MR_decl_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0, 2,5,6,4)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0, 2,3,7,4,5,13,14,18,21,22)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0, 23,17,27,28,29,31,32,30,34,35)
MR_decl_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0, 36,37)
MR_decl_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0, 2,4,6,7)
MR_decl_label7(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0, 23,5,6,7,9,10,11)
MR_decl_label5(backend_libs__interval__apply_headvar_correction_4_0, 2,4,5,8,6)
MR_decl_label7(backend_libs__interval__assign_open_intervals_to_anchor_3_0, 3,6,8,10,11,7,16)
MR_decl_label6(backend_libs__interval__build_headvar_subst_4_0, 25,3,6,8,9,4)
MR_decl_label5(backend_libs__interval__build_interval_info_in_cases_10_0, 19,4,5,6,7)
MR_decl_label6(backend_libs__interval__build_interval_info_in_disj_11_0, 4,3,5,6,7,8)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 281,4,7,9,10,11,12,14,13,18)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 3,21,25,28,29,23,32,35,36,39)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 38,41,42,43,44,45,31,49,50,51)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 52,53,54,55,56,57,47,61,62,63)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 64,59,67,68,70,73,72,75,66,78)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 77,86,87,88,89,91,85,97,95,103)
MR_decl_label10(backend_libs__interval__build_interval_info_in_goal_5_0, 104,105,102,108,101,114,116,112,120,122)
MR_decl_label5(backend_libs__interval__build_interval_info_in_goal_5_0, 111,126,127,123,93)
MR_decl_label1(backend_libs__interval__construct_anchors_4_0, 2)
MR_decl_label10(backend_libs__interval__create_shadow_vars_10_0, 30,3,4,5,7,8,11,13,9,14)
MR_decl_label7(backend_libs__interval__delete_interval_vars_5_0, 4,5,6,7,11,9,17)
MR_decl_label10(backend_libs__interval__dump_anchor_follow_3_0, 2,3,4,5,8,9,11,12,13,15)
MR_decl_label1(backend_libs__interval__dump_anchor_follow_3_0, 17)
MR_decl_label4(backend_libs__interval__dump_deletion_3_0, 2,5,6,8)
MR_decl_label10(backend_libs__interval__dump_interval_info_3_0, 2,3,6,8,13,14,15,17,18,19)
MR_decl_label10(backend_libs__interval__dump_interval_info_id_4_0, 2,3,4,5,8,11,12,13,6,15)
MR_decl_label10(backend_libs__interval__dump_interval_info_id_4_0, 18,20,21,17,23,26,28,29,25,31)
MR_decl_label10(backend_libs__interval__dump_interval_info_id_4_0, 36,38,40,41,42,33,44,50,52,54)
MR_decl_label1(backend_libs__interval__dump_interval_info_id_4_0, 56)
MR_decl_label3(backend_libs__interval__enter_branch_tail_4_0, 2,3,5)
MR_decl_label1(backend_libs__interval__gather_interval_vars_4_0, 4)
MR_decl_label3(backend_libs__interval__insert_goals_after_7_0, 3,4,6)
MR_decl_label2(backend_libs__interval__lookup_inserts_3_0, 4,2)
MR_decl_label10(backend_libs__interval__make_inserted_goal_9_0, 8,27,10,9,16,17,18,20,21,22)
MR_decl_label1(backend_libs__interval__make_inserted_goal_9_0, 3)
MR_decl_label10(backend_libs__interval__make_inserted_goals_7_0, 51,9,31,11,10,17,18,19,21,22)
MR_decl_label4(backend_libs__interval__make_inserted_goals_7_0, 23,4,25,26)
MR_decl_label3(backend_libs__interval__new_interval_id_3_0, 2,3,6)
MR_decl_label1(backend_libs__interval__no_open_intervals_2_0, 2)
MR_decl_label1(backend_libs__interval__one_open_interval_3_0, 2)
MR_decl_label9(backend_libs__interval__reached_cond_then_3_0, 2,3,6,7,8,9,10,11,12)
MR_decl_label1(backend_libs__interval__record_branch_end_info_3_0, 3)
MR_decl_label10(backend_libs__interval__record_decisions_at_call_site_9_0, 2,4,7,11,9,15,16,17,19,3)
MR_decl_label1(backend_libs__interval__record_decisions_at_call_site_9_0, 21)
MR_decl_label3(backend_libs__interval__record_decisions_in_cases_7_0, 18,4,6)
MR_decl_label5(backend_libs__interval__record_decisions_in_conj_9_0, 34,4,5,8,6)
MR_decl_label10(backend_libs__interval__record_decisions_in_goal_8_0, 3,6,5,10,12,13,14,15,19,9)
MR_decl_label10(backend_libs__interval__record_decisions_in_goal_8_0, 21,26,27,28,29,30,32,33,34,36)
MR_decl_label10(backend_libs__interval__record_decisions_in_goal_8_0, 37,40,25,43,45,46,42,50,48,55)
MR_decl_label10(backend_libs__interval__record_decisions_in_goal_8_0, 54,58,57,53,60,63,52,68,69,72)
MR_decl_label5(backend_libs__interval__record_decisions_in_goal_8_0, 73,67,76,75,189)
MR_decl_label1(backend_libs__interval__record_decisions_in_goal_10_0, 3)
MR_decl_label1(backend_libs__interval__record_interval_end_4_0, 2)
MR_decl_label3(backend_libs__interval__record_interval_no_succ_3_0, 4,2,9)
MR_decl_label1(backend_libs__interval__record_interval_start_4_0, 2)
MR_decl_label3(backend_libs__interval__record_interval_succ_4_0, 4,2,11)
MR_decl_label5(backend_libs__interval__record_interval_vars_4_0, 5,7,2,9,13)
MR_decl_label1(backend_libs__interval__record_model_non_anchor_3_0, 2)
MR_decl_label1(backend_libs__interval__require_access_3_0, 2)
MR_decl_label1(backend_libs__interval__require_flushed_3_0, 2)
MR_decl_label7(backend_libs__interval__shared_left_to_right_deconstruct_2_0, 37,5,8,10,12,2,1)
MR_decl_label7(__Unify___backend_libs__interval__anchor_0_0, 5,6,7,9,30,11,1)
MR_decl_label3(__Unify___backend_libs__interval__anchor_follow_info_0_0, 5,9,1)
MR_decl_label4(__Unify___backend_libs__interval__branch_end_info_0_0, 5,7,11,1)
MR_decl_label3(__Unify___backend_libs__interval__insert_spec_0_0, 4,9,1)
MR_decl_label1(__Unify___backend_libs__interval__interval_id_0_0, 4)
MR_decl_label10(__Unify___backend_libs__interval__interval_info_0_0, 4,8,10,12,14,16,18,20,22,24)
MR_decl_label7(__Unify___backend_libs__interval__interval_info_0_0, 26,28,30,33,35,40,1)
MR_decl_label4(__Unify___backend_libs__interval__interval_params_0_0, 4,7,9,1)
MR_decl_label3(__Unify___backend_libs__interval__interval_var_info_0_0, 4,9,1)
MR_decl_label2(__Unify___backend_libs__interval__save_point_0_0, 4,1)
MR_decl_label10(__Compare___backend_libs__interval__anchor_0_0, 7,8,9,10,5,14,108,15,16,17)
MR_decl_label10(__Compare___backend_libs__interval__anchor_0_0, 12,21,22,25,23,30,191,19,34,35)
MR_decl_label10(__Compare___backend_libs__interval__anchor_0_0, 36,32,42,43,44,45,48,40,54,55)
MR_decl_label4(__Compare___backend_libs__interval__anchor_0_0, 56,57,58,60)
MR_decl_label4(__Compare___backend_libs__interval__anchor_follow_info_0_0, 3,2,6,28)
MR_decl_label5(__Compare___backend_libs__interval__branch_end_info_0_0, 3,2,6,11,40)
MR_decl_label4(__Compare___backend_libs__interval__insert_spec_0_0, 3,2,5,28)
MR_decl_label2(__Compare___backend_libs__interval__interval_id_0_0, 3,2)
MR_decl_label10(__Compare___backend_libs__interval__interval_info_0_0, 3,2,5,10,15,19,23,27,31,35)
MR_decl_label8(__Compare___backend_libs__interval__interval_info_0_0, 39,43,47,51,55,60,66,189)
MR_decl_label5(__Compare___backend_libs__interval__interval_params_0_0, 3,2,5,10,39)
MR_decl_label4(__Compare___backend_libs__interval__interval_var_info_0_0, 3,2,5,28)
MR_decl_label4(__Compare___backend_libs__interval__save_point_0_0, 3,2,5,21)
MR_def_extern_entry(backend_libs__interval__use_cell_8_0)
MR_decl_static(backend_libs__interval__shared_left_to_right_deconstruct_2_0)
MR_decl_static(backend_libs__interval__one_open_interval_3_0)
MR_decl_static(backend_libs__interval__assign_open_intervals_to_anchor_3_0)
MR_decl_static(backend_libs__interval__get_cur_interval_2_0)
MR_decl_static(backend_libs__interval__set_cur_interval_3_0)
MR_decl_static(backend_libs__interval__new_interval_id_3_0)
MR_decl_static(backend_libs__interval__record_interval_end_4_0)
MR_decl_static(backend_libs__interval__record_interval_start_4_0)
MR_decl_static(backend_libs__interval__record_interval_succ_4_0)
MR_decl_static(backend_libs__interval__record_interval_no_succ_3_0)
MR_def_extern_entry(backend_libs__interval__record_interval_vars_4_0)
MR_decl_static(backend_libs__interval__require_in_regs_3_0)
MR_decl_static(backend_libs__interval__require_flushed_3_0)
MR_decl_static(backend_libs__interval__require_access_3_0)
MR_decl_static(backend_libs__interval__record_model_non_anchor_3_0)
MR_decl_static(backend_libs__interval__enter_branch_tail_4_0)
MR_decl_static(backend_libs__interval__get_open_intervals_2_0)
MR_decl_static(backend_libs__interval__no_open_intervals_2_0)
MR_decl_static(backend_libs__interval__record_branch_end_info_3_0)
MR_decl_static(backend_libs__interval__set_open_intervals_3_0)
MR_decl_static(backend_libs__interval__reached_cond_then_3_0)
MR_def_extern_entry(backend_libs__interval__build_interval_info_in_goal_5_0)
MR_decl_static(backend_libs__interval__build_interval_info_in_disj_11_0)
MR_decl_static(backend_libs__interval__build_interval_info_in_cases_10_0)
MR_def_extern_entry(backend_libs__interval__delete_interval_vars_5_0)
MR_decl_static(backend_libs__interval__lookup_inserts_3_0)
MR_decl_static(backend_libs__interval__create_shadow_vars_10_0)
MR_decl_static(backend_libs__interval__make_inserted_goals_7_0)
MR_decl_static(backend_libs__interval__insert_goals_after_7_0)
MR_decl_static(backend_libs__interval__record_decisions_at_call_site_9_0)
MR_decl_static(backend_libs__interval__construct_anchors_4_0)
MR_decl_static(backend_libs__interval__record_decisions_in_goal_8_0)
MR_decl_static(backend_libs__interval__record_decisions_in_conj_9_0)
MR_decl_static(backend_libs__interval__record_decisions_in_cases_7_0)
MR_def_extern_entry(backend_libs__interval__record_decisions_in_goal_10_0)
MR_def_extern_entry(backend_libs__interval__make_inserted_goal_9_0)
MR_decl_static(backend_libs__interval__build_headvar_subst_4_0)
MR_def_extern_entry(backend_libs__interval__apply_headvar_correction_4_0)
MR_def_extern_entry(backend_libs__interval__dump_interval_info_3_0)
MR_def_extern_entry(backend_libs__interval__write_int_list_3_0)
MR_def_extern_entry(fn__backend_libs__interval__interval_id_to_int_1_0)
MR_decl_static(backend_libs__interval__gather_interval_vars_4_0)
MR_decl_static(backend_libs__interval__dump_interval_info_id_4_0)
MR_decl_static(backend_libs__interval__dump_deletion_3_0)
MR_decl_static(backend_libs__interval__dump_anchor_follow_3_0)
MR_def_extern_entry(__Unify___backend_libs__interval__anchor_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__anchor_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__anchor_follow_info_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__anchor_follow_info_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__branch_construct_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__branch_construct_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__branch_end_info_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__branch_end_info_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__insert_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__insert_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__insert_spec_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__insert_spec_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__interval_id_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__interval_id_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__interval_info_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__interval_info_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__interval_params_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__interval_params_0_0)
MR_decl_static(__Unify___backend_libs__interval__interval_var_info_0_0)
MR_decl_static(__Compare___backend_libs__interval__interval_var_info_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__maybe_needs_flush_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__maybe_needs_flush_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__rename_map_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__rename_map_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__resume_save_status_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__resume_save_status_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__save_point_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__save_point_0_0)
MR_def_extern_entry(__Unify___backend_libs__interval__save_point_type_0_0)
MR_def_extern_entry(__Compare___backend_libs__interval__save_point_type_0_0)
MR_decl_static(backend_libs__interval__IntroducedFrom__pred__build_interval_info_in_goal__292__1_3_0)
MR_decl_static(backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1291__1_2_0)
MR_decl_static(backend_libs__interval__IntroducedFrom__pred__dump_deletion__1309__1_2_0)
MR_decl_static(backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1322__1_2_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,0)
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
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_TAG_COMMON(0,0,3)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(backend_libs__interval, insert_spec)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__interval, anchor),
MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__assign_open_intervals_to_anchor_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__assign_open_intervals_to_anchor_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(backend_libs__interval, interval_info),
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_3;
static const struct mercury_type_3 mercury_common_3[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__interval, interval_id),
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(io__write_int_3_0);
static const struct mercury_type_4 mercury_common_4[13] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(backend_libs__interval__dump_anchor_follow_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(fn__backend_libs__interval__interval_id_to_int_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1291__1_2_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(backend_libs__interval__dump_deletion_3_0),
0
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(backend_libs__interval__IntroducedFrom__pred__dump_deletion__1309__1_2_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1322__1_2_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(fn__backend_libs__interval__interval_id_to_int_1_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(io__write_int_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__write_int_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_4;
static const struct mercury_type_5 mercury_common_5[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,3),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__write_int_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_0 = {
	"anchor_proc_start",
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

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_1 = {
	"anchor_proc_end",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_anchor_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_2 = {
	"anchor_branch_start",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_anchor_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_anchor_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_3 = {
	"anchor_cond_then",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_anchor_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_anchor_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_4 = {
	"anchor_branch_end",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_anchor_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_anchor_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_0_5 = {
	"anchor_call_site",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_anchor_0_5,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_0,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_1

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_1[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_2

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_2[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_3

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_3[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_4,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_5

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_anchor_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_backend_libs__interval__du_stag_ordered_anchor_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_anchor_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_4,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_2,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_5,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_3,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_1,
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_anchor_0[] = {
	5,
	4,
	1,
	3,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__anchor_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__anchor_0_0)),
	"backend_libs.interval",
	"anchor",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_anchor_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_anchor_0 },
	6,
	4,
	mercury_data_backend_libs__interval__functor_number_map_anchor_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_anchor_follow_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_anchor_follow_info_0_0 = {
	"anchor_follow_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_anchor_follow_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_follow_info_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_anchor_follow_info_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_anchor_follow_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__anchor_follow_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__anchor_follow_info_0_0)),
	"backend_libs.interval",
	"anchor_follow_info",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_anchor_follow_info_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_anchor_follow_info_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_anchor_follow_info_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
	"branch_ite",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
	"branch_disj",
	1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
	"branch_switch",
	2
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
	"branch_neg",
	3
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
	"branch_par_conj",
	4
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_value_ordered_branch_construct_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_1,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_2,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_3,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_name_ordered_branch_construct_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_1,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_3,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_4,
	&mercury_data_backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_branch_construct_0[] = {
	1,
	0,
	4,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__branch_construct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__branch_construct_0_0)),
	"backend_libs.interval",
	"branch_construct",
	{ (void *)mercury_data_backend_libs__interval__enum_name_ordered_branch_construct_0 },
	{ (void *)mercury_data_backend_libs__interval__enum_value_ordered_branch_construct_0 },
	5,
	4,
	mercury_data_backend_libs__interval__functor_number_map_branch_construct_0
};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_branch_end_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0
};

const MR_ConstString mercury_data_backend_libs__interval__field_names_branch_end_info_0_0[] = {
	"flushed_after_branch",
	"accessed_after_branch",
	"interval_after_branch"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_branch_end_info_0_0 = {
	"branch_end_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_branch_end_info_0_0,
	mercury_data_backend_libs__interval__field_names_branch_end_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_branch_end_info_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_branch_end_info_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_branch_end_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_branch_end_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_branch_end_info_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_branch_end_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__branch_end_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__branch_end_info_0_0)),
	"backend_libs.interval",
	"branch_end_info",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_branch_end_info_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_branch_end_info_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_branch_end_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__insert_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__insert_map_0_0)),
	"backend_libs.interval",
	"insert_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_insert_spec_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_insert_spec_0_0 = {
	"insert_spec",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_insert_spec_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_insert_spec_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_insert_spec_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_insert_spec_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_insert_spec_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_insert_spec_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_insert_spec_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_insert_spec_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__insert_spec_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__insert_spec_0_0)),
	"backend_libs.interval",
	"insert_spec",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_insert_spec_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_insert_spec_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_insert_spec_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_backend_libs__interval__notag_functor_desc_interval_id_0 = {
	"interval_id",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_interval_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__interval_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__interval_id_0_0)),
	"backend_libs.interval",
	"interval_id",
	{ (void *)&mercury_data_backend_libs__interval__notag_functor_desc_interval_id_0 },
	{ (void *)&mercury_data_backend_libs__interval__notag_functor_desc_interval_id_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_interval_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0,
	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0,
	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_anchor_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_TypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_interval_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_params_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_backend_libs__interval__field_names_interval_info_0_0[] = {
	"ii_interval_params",
	"ii_flushed_later",
	"ii_accessed_later",
	"ii_branch_resume_map",
	"ii_branch_end_map",
	"ii_cond_end_map",
	"ii_cur_interval",
	"ii_interval_counter",
	"ii_open_intervals",
	"ii_anchor_follow_map",
	"ii_model_non_anchors",
	"ii_interval_start",
	"ii_interval_end",
	"ii_interval_succ",
	"ii_interval_vars",
	"ii_interval_delvars"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_interval_info_0_0 = {
	"interval_info",
	16,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_interval_info_0_0,
	mercury_data_backend_libs__interval__field_names_interval_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_interval_info_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_info_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_interval_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_interval_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_interval_info_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_info_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_interval_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__interval_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__interval_info_0_0)),
	"backend_libs.interval",
	"interval_info",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_interval_info_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_interval_info_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_interval_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_interval_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_backend_libs__interval__field_names_interval_params_0_0[] = {
	"ip_module_info",
	"ip_var_types",
	"ip_at_most_zero_calls"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_interval_params_0_0 = {
	"interval_params",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_interval_params_0_0,
	mercury_data_backend_libs__interval__field_names_interval_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_interval_params_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_params_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_interval_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_interval_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_interval_params_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_params_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_interval_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__interval_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__interval_params_0_0)),
	"backend_libs.interval",
	"interval_params",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_interval_params_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_interval_params_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_interval_params_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_interval_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_backend_libs__interval__field_names_interval_var_info_0_0[] = {
	"ivi_varset",
	"ivi_vartypes"
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_interval_var_info_0_0 = {
	"interval_var_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_interval_var_info_0_0,
	mercury_data_backend_libs__interval__field_names_interval_var_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_interval_var_info_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_var_info_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_interval_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_interval_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_interval_var_info_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_interval_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_interval_var_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__interval_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__interval_var_info_0_0)),
	"backend_libs.interval",
	"interval_var_info",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_interval_var_info_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_interval_var_info_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_interval_var_info_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
	"needs_flush",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
	"doesnt_need_flush",
	1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
	&mercury_data_backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_maybe_needs_flush_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_maybe_needs_flush_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__maybe_needs_flush_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__maybe_needs_flush_0_0)),
	"backend_libs.interval",
	"maybe_needs_flush",
	{ (void *)mercury_data_backend_libs__interval__enum_name_ordered_maybe_needs_flush_0 },
	{ (void *)mercury_data_backend_libs__interval__enum_value_ordered_maybe_needs_flush_0 },
	2,
	4,
	mercury_data_backend_libs__interval__functor_number_map_maybe_needs_flush_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_rename_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__rename_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__rename_map_0_0)),
	"backend_libs.interval",
	"rename_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
	"has_resume_save",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
	"has_no_resume_save",
	1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_value_ordered_resume_save_status_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_name_ordered_resume_save_status_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
	&mercury_data_backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_resume_save_status_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__resume_save_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__resume_save_status_0_0)),
	"backend_libs.interval",
	"resume_save_status",
	{ (void *)mercury_data_backend_libs__interval__enum_name_ordered_resume_save_status_0 },
	{ (void *)mercury_data_backend_libs__interval__enum_value_ordered_resume_save_status_0 },
	2,
	4,
	mercury_data_backend_libs__interval__functor_number_map_resume_save_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__interval__field_types_save_point_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__interval__du_functor_desc_save_point_0_0 = {
	"save_point",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__interval__field_types_save_point_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_stag_ordered_save_point_0_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_save_point_0_0

};

const MR_DuPtagLayout mercury_data_backend_libs__interval__du_ptag_ordered_save_point_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__interval__du_stag_ordered_save_point_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__interval__du_name_ordered_save_point_0[] = {
	&mercury_data_backend_libs__interval__du_functor_desc_save_point_0_0
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_save_point_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_save_point_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__save_point_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__save_point_0_0)),
	"backend_libs.interval",
	"save_point",
	{ (void *)mercury_data_backend_libs__interval__du_name_ordered_save_point_0 },
	{ (void *)mercury_data_backend_libs__interval__du_ptag_ordered_save_point_0 },
	1,
	4,
	mercury_data_backend_libs__interval__functor_number_map_save_point_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
	"save_point_call_site",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
	"save_point_resume_point",
	1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_value_ordered_save_point_type_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__interval__enum_name_ordered_save_point_type_0[] = {
	&mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_0,
	&mercury_data_backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

const MR_Integer mercury_data_backend_libs__interval__functor_number_map_save_point_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__interval__save_point_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__interval__save_point_type_0_0)),
	"backend_libs.interval",
	"save_point_type",
	{ (void *)mercury_data_backend_libs__interval__enum_name_ordered_save_point_type_0 },
	{ (void *)mercury_data_backend_libs__interval__enum_value_ordered_save_point_type_0 },
	2,
	4,
	mercury_data_backend_libs__interval__functor_number_map_save_point_type_0
};

const MR_ConstString mercury_data_backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[] = {
	{ "use_cell", 8, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
	"backend_libs.interval",
	"build_interval_info_acc",
	1,
	1,
	1,
	mercury_data_backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
	mercury_data_backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

const MR_TypeClassDeclStruct mercury_data_backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
	&mercury_data_backend_libs__interval__type_class_id_build_interval_info_acc_1,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_4 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"backend_libs.interval",
"interval.m",
1331,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_3 = {
{
MR_FUNCTION,
"backend_libs.interval",
"backend_libs.interval",
"interval_id_to_int",
2,
0
},
"backend_libs.interval",
"interval.m",
1327,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"backend_libs.interval",
"interval.m",
1331,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_anchor_follow_3_0_1 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"lambda_interval_m_1322",
2,
0
},
"backend_libs.interval",
"interval.m",
1322,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"backend_libs.interval",
"interval.m",
1331,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_deletion_3_0_1 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"lambda_interval_m_1309",
2,
0
},
"backend_libs.interval",
"interval.m",
1309,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_3 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"dump_deletion",
3,
0
},
"backend_libs.interval",
"interval.m",
1300,
"76"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_2 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"lambda_interval_m_1291",
2,
0
},
"backend_libs.interval",
"interval.m",
1291,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_id_4_0_1 = {
{
MR_FUNCTION,
"backend_libs.interval",
"backend_libs.interval",
"interval_id_to_int",
2,
0
},
"backend_libs.interval",
"interval.m",
1269,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__write_int_list_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"backend_libs.interval",
"interval.m",
1331,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_2 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"dump_anchor_follow",
3,
0
},
"backend_libs.interval",
"interval.m",
1259,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__dump_interval_info_3_0_1 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"dump_interval_info_id",
4,
0
},
"backend_libs.interval",
"interval.m",
1255,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_3 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"lambda_interval_m_292",
3,
0
},
"backend_libs.interval",
"interval.m",
292,
"87"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"backend_libs.interval",
"interval.m",
347,
"137"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__build_interval_info_in_goal_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"backend_libs.interval",
"interval.m",
346,
"135"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__interval__assign_open_intervals_to_anchor_3_0_1 = {
{
MR_PREDICATE,
"backend_libs.interval",
"backend_libs.interval",
"gather_interval_vars",
4,
0
},
"backend_libs.interval",
"interval.m",
673,
"8"
};


MR_declare_entry(mercury__do_call_class_method_6);

MR_BEGIN_MODULE(backend_libs__interval_module0)
	MR_init_entry1(backend_libs__interval__use_cell_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__use_cell_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'use_cell'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__use_cell_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(backend_libs__interval__use_cell_8_0));
	MR_np_tailcall_ent(do_call_class_method_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module1)
	MR_init_entry1(backend_libs__interval__shared_left_to_right_deconstruct_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__shared_left_to_right_deconstruct_2_0);
	MR_init_label7(backend_libs__interval__shared_left_to_right_deconstruct_2_0,37,5,8,10,12,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shared_left_to_right_deconstruct'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__shared_left_to_right_deconstruct_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		backend_libs__interval__shared_left_to_right_deconstruct_2_0_i5);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		backend_libs__interval__shared_left_to_right_deconstruct_2_0_i8);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		backend_libs__interval__shared_left_to_right_deconstruct_2_0_i10);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		backend_libs__interval__shared_left_to_right_deconstruct_2_0_i12);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(backend_libs__interval__shared_left_to_right_deconstruct_2_0_i37);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(backend_libs__interval__shared_left_to_right_deconstruct_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module2)
	MR_init_entry1(backend_libs__interval__one_open_interval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__one_open_interval_3_0);
	MR_init_label1(backend_libs__interval__one_open_interval_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_open_interval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__one_open_interval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		backend_libs__interval__one_open_interval_3_0_i2);
MR_def_label(backend_libs__interval__one_open_interval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(set__fold_4_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);
MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(backend_libs__interval_module3)
	MR_init_entry1(backend_libs__interval__assign_open_intervals_to_anchor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__assign_open_intervals_to_anchor_3_0);
	MR_init_label7(backend_libs__interval__assign_open_intervals_to_anchor_3_0,3,6,8,10,11,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_open_intervals_to_anchor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__assign_open_intervals_to_anchor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__interval__gather_interval_vars_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 14);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 9);
	MR_sv(3) = MR_tfield(0, MR_r2, 8);
	MR_sv(4) = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i3);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i6);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i8);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__assign_open_intervals_to_anchor_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i10);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i11);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i16);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__assign_open_intervals_to_anchor_3_0_i16);
MR_def_label(backend_libs__interval__assign_open_intervals_to_anchor_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_r1;
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module4)
	MR_init_entry1(backend_libs__interval__get_cur_interval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__get_cur_interval_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_cur_interval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__get_cur_interval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module5)
	MR_init_entry1(backend_libs__interval__set_cur_interval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__set_cur_interval_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_cur_interval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__set_cur_interval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_r2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_r2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_r2, 15);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module6)
	MR_init_entry1(backend_libs__interval__new_interval_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__new_interval_id_3_0);
	MR_init_label3(backend_libs__interval__new_interval_id_3_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_interval_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__new_interval_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 14);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_np_call_localret_ent(counter__allocate_3_0,
		backend_libs__interval__new_interval_id_3_0_i2);
MR_def_label(backend_libs__interval__new_interval_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		backend_libs__interval__new_interval_id_3_0_i3);
MR_def_label(backend_libs__interval__new_interval_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__new_interval_id_3_0_i6);
MR_def_label(backend_libs__interval__new_interval_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_sv(3);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_r1;
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module7)
	MR_init_entry1(backend_libs__interval__record_interval_end_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_interval_end_4_0);
	MR_init_label1(backend_libs__interval__record_interval_end_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_interval_end'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_interval_end_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_sv(1), 12);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_interval_end_4_0_i2);
MR_def_label(backend_libs__interval__record_interval_end_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_r1;
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module8)
	MR_init_entry1(backend_libs__interval__record_interval_start_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_interval_start_4_0);
	MR_init_label1(backend_libs__interval__record_interval_start_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_interval_start'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_interval_start_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_sv(1), 11);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_interval_start_4_0_i2);
MR_def_label(backend_libs__interval__record_interval_start_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_r1;
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module9)
	MR_init_entry1(backend_libs__interval__record_interval_succ_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_interval_succ_4_0);
	MR_init_label3(backend_libs__interval__record_interval_succ_4_0,4,2,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_interval_succ'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_interval_succ_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 13);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__record_interval_succ_4_0_i4);
MR_def_label(backend_libs__interval__record_interval_succ_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__record_interval_succ_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		backend_libs__interval__record_interval_succ_4_0_i11);
MR_def_label(backend_libs__interval__record_interval_succ_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_interval_succ_4_0_i11);
MR_def_label(backend_libs__interval__record_interval_succ_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_r1;
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module10)
	MR_init_entry1(backend_libs__interval__record_interval_no_succ_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_interval_no_succ_3_0);
	MR_init_label3(backend_libs__interval__record_interval_no_succ_3_0,4,2,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_interval_no_succ'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_interval_no_succ_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_r2, 13);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__record_interval_no_succ_3_0_i4);
MR_def_label(backend_libs__interval__record_interval_no_succ_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__record_interval_no_succ_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.record_interval_no_succ\'/3", 59);
	MR_r3 = (MR_Word) MR_string_const("already in succ map", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		backend_libs__interval__record_interval_no_succ_3_0_i9);
MR_def_label(backend_libs__interval__record_interval_no_succ_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_interval_no_succ_3_0_i9);
MR_def_label(backend_libs__interval__record_interval_no_succ_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_r1;
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module11)
	MR_init_entry1(backend_libs__interval__record_interval_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_interval_vars_4_0);
	MR_init_label5(backend_libs__interval__record_interval_vars_4_0,5,7,2,9,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_interval_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__record_interval_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 14);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__record_interval_vars_4_0_i5);
MR_def_label(backend_libs__interval__record_interval_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__record_interval_vars_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		backend_libs__interval__record_interval_vars_4_0_i7);
MR_def_label(backend_libs__interval__record_interval_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		backend_libs__interval__record_interval_vars_4_0_i13);
MR_def_label(backend_libs__interval__record_interval_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		backend_libs__interval__record_interval_vars_4_0_i9);
MR_def_label(backend_libs__interval__record_interval_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_interval_vars_4_0_i13);
MR_def_label(backend_libs__interval__record_interval_vars_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_r1;
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module12)
	MR_init_entry1(backend_libs__interval__require_in_regs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__require_in_regs_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'require_in_regs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__require_in_regs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(backend_libs__interval__record_interval_vars_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module13)
	MR_init_entry1(backend_libs__interval__require_flushed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__require_flushed_3_0);
	MR_init_label1(backend_libs__interval__require_flushed_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'require_flushed'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__require_flushed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		backend_libs__interval__require_flushed_3_0_i2);
MR_def_label(backend_libs__interval__require_flushed_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module14)
	MR_init_entry1(backend_libs__interval__require_access_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__require_access_3_0);
	MR_init_label1(backend_libs__interval__require_access_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'require_access'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__require_access_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		backend_libs__interval__require_access_3_0_i2);
MR_def_label(backend_libs__interval__require_access_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module15)
	MR_init_entry1(backend_libs__interval__record_model_non_anchor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_model_non_anchor_3_0);
	MR_init_label1(backend_libs__interval__record_model_non_anchor_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_model_non_anchor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_model_non_anchor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 10);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		backend_libs__interval__record_model_non_anchor_3_0_i2);
MR_def_label(backend_libs__interval__record_model_non_anchor_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_r1;
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module16)
	MR_init_entry1(backend_libs__interval__enter_branch_tail_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__enter_branch_tail_4_0);
	MR_init_label3(backend_libs__interval__enter_branch_tail_4_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enter_branch_tail'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__enter_branch_tail_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(backend_libs__interval__new_interval_id_3_0,
		backend_libs__interval__enter_branch_tail_4_0_i2);
MR_def_label(backend_libs__interval__enter_branch_tail_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(3), 12);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__enter_branch_tail_4_0_i3);
MR_def_label(backend_libs__interval__enter_branch_tail_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_succ_4_0,
		backend_libs__interval__enter_branch_tail_4_0_i5);
MR_def_label(backend_libs__interval__enter_branch_tail_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 6) = MR_tempr1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_r1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_r1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_r1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_r1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_r1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_r1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_r1, 15);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__interval__one_open_interval_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module17)
	MR_init_entry1(backend_libs__interval__get_open_intervals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__get_open_intervals_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_open_intervals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__get_open_intervals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module18)
	MR_init_entry1(backend_libs__interval__no_open_intervals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__no_open_intervals_2_0);
	MR_init_label1(backend_libs__interval__no_open_intervals_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'no_open_intervals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__no_open_intervals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__interval__no_open_intervals_2_0_i2);
MR_def_label(backend_libs__interval__no_open_intervals_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module19)
	MR_init_entry1(backend_libs__interval__record_branch_end_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_branch_end_info_3_0);
	MR_init_label1(backend_libs__interval__record_branch_end_info_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_branch_end_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_branch_end_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 6);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_sv(1), 4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__record_branch_end_info_3_0_i3);
MR_def_label(backend_libs__interval__record_branch_end_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module20)
	MR_init_entry1(backend_libs__interval__set_open_intervals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__set_open_intervals_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_open_intervals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__set_open_intervals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_r2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_r2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_r2, 15);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module21)
	MR_init_entry1(backend_libs__interval__reached_cond_then_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__reached_cond_then_3_0);
	MR_init_label9(backend_libs__interval__reached_cond_then_3_0,2,3,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reached_cond_then'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__reached_cond_then_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		backend_libs__interval__reached_cond_then_3_0_i2);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 6);
	MR_r5 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__reached_cond_then_3_0_i3);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_start_4_0,
		backend_libs__interval__reached_cond_then_3_0_i6);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__new_interval_id_3_0,
		backend_libs__interval__reached_cond_then_3_0_i7);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_end_4_0,
		backend_libs__interval__reached_cond_then_3_0_i8);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_succ_4_0,
		backend_libs__interval__reached_cond_then_3_0_i9);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__set_cur_interval_3_0,
		backend_libs__interval__reached_cond_then_3_0_i10);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__get_open_intervals_2_0,
		backend_libs__interval__reached_cond_then_3_0_i11);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		backend_libs__interval__reached_cond_then_3_0_i12);
MR_def_label(backend_libs__interval__reached_cond_then_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__interval__set_open_intervals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__arg_info__partition_proc_call_args_7_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(hlds__arg_info__compute_in_and_out_vars_6_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(ll_backend__call_gen__generic_call_info_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(fn__set__union_list_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module22)
	MR_init_entry1(backend_libs__interval__build_interval_info_in_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__build_interval_info_in_goal_5_0);
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,281,4,7,9,10,11,12,14,13,18)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,3,21,25,28,29,23,32,35,36,39)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,38,41,42,43,44,45,31,49,50,51)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,52,53,54,55,56,57,47,61,62,63)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,64,59,67,68,70,73,72,75,66,78)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,77,86,87,88,89,91,85,97,95,103)
	MR_init_label10(backend_libs__interval__build_interval_info_in_goal_5_0,104,105,102,108,101,114,116,112,120,122)
	MR_init_label5(backend_libs__interval__build_interval_info_in_goal_5_0,111,126,127,123,93)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_interval_info_in_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__build_interval_info_in_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i3);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_sv(6), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i4);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_sv(4) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i7);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i9);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i10);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i11);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		backend_libs__interval__build_interval_info_in_goal_5_0_i12);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i14);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i13);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i18);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i21);
	}
	MR_r2 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i23);
	}
	MR_r6 = MR_tfield(3, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i25);
	}
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(backend_libs__interval__no_open_intervals_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(2) = MR_tempr4;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i28);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_sv(1);
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(backend_libs__interval__build_interval_info_in_disj_11_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i29);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i122);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i31);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i32);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__interval__IntroducedFrom__pred__build_interval_info_in_goal__292__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i35);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_sv(4), 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_6_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i36);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i38);
	}
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i39);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i41);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i42);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__generic_call_info_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i43);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i44);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		backend_libs__interval__build_interval_info_in_goal_5_0_i45);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr4, 4);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i49);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(backend_libs__interval__enter_branch_tail_4_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i50);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i51);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__reached_cond_then_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i52);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i53);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i54);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__enter_branch_tail_4_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i55);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i56);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i57);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i122);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 3;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i61);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(backend_libs__interval__enter_branch_tail_4_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i62);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i63);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i64);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i122);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i66);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r4;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_sv(6), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i67);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(6), 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_call_args_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i68);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i70);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i72);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i73);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i75);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i78);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i78);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i281);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i85);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i86);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	}
	MR_np_call_localret_ent(backend_libs__interval__build_interval_info_in_cases_10_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i87);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i88);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i89);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i91);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i122);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i93);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 3);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i95);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(2, MR_tempr1, 1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i97);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r5 = MR_tfield(0, MR_tempr1, 4);
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i103);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i102);
	}
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i104);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i102);
	}
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i105);
	}
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", 63);
	MR_sv(7) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("construct in region", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i102);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", 63);
	MR_sv(7) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("reuse", 5);
	MR_np_call_localret_ent(require__unexpected_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i102);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i108);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(backend_libs__interval__shared_left_to_right_deconstruct_2_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i114);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i112);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(backend_libs__interval__use_cell_8_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i116);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i120);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i120);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i122);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_goal_5_0_i123);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(8) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i126);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		backend_libs__interval__build_interval_info_in_goal_5_0_i127);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(12);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", 63);
	MR_r3 = (MR_Word) MR_string_const("complicated_unify", 17);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__interval__build_interval_info_in_goal_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", 63);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module23)
	MR_init_entry1(backend_libs__interval__build_interval_info_in_disj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__build_interval_info_in_disj_11_0);
	MR_init_label6(backend_libs__interval__build_interval_info_in_disj_11_0,4,3,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_interval_info_in_disj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__build_interval_info_in_disj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_disj_11_0_i3);
	}
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_np_call_localret_ent(fn__set__init_0_0,
		backend_libs__interval__build_interval_info_in_disj_11_0_i4);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(backend_libs__interval__enter_branch_tail_4_0,
		backend_libs__interval__build_interval_info_in_disj_11_0_i5);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_disj_11_0_i6);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,
		backend_libs__interval__build_interval_info_in_disj_11_0_i7);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_disj_11_0,
		backend_libs__interval__build_interval_info_in_disj_11_0_i8);
MR_def_label(backend_libs__interval__build_interval_info_in_disj_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module24)
	MR_init_entry1(backend_libs__interval__build_interval_info_in_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__build_interval_info_in_cases_10_0);
	MR_init_label5(backend_libs__interval__build_interval_info_in_cases_10_0,19,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_interval_info_in_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__build_interval_info_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_interval_info_in_cases_10_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(backend_libs__interval__build_interval_info_in_cases_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r7;
	}
	MR_np_call_localret_ent(backend_libs__interval__enter_branch_tail_4_0,
		backend_libs__interval__build_interval_info_in_cases_10_0_i4);
MR_def_label(backend_libs__interval__build_interval_info_in_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__interval__build_interval_info_in_goal_5_0,
		backend_libs__interval__build_interval_info_in_cases_10_0_i5);
MR_def_label(backend_libs__interval__build_interval_info_in_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,
		backend_libs__interval__build_interval_info_in_cases_10_0_i6);
MR_def_label(backend_libs__interval__build_interval_info_in_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(backend_libs__interval__build_interval_info_in_cases_10_0,
		backend_libs__interval__build_interval_info_in_cases_10_0_i7);
MR_def_label(backend_libs__interval__build_interval_info_in_cases_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__intersect_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__difference_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module25)
	MR_init_entry1(backend_libs__interval__delete_interval_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__delete_interval_vars_5_0);
	MR_init_label7(backend_libs__interval__delete_interval_vars_5_0,4,5,6,7,11,9,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_interval_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__delete_interval_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__interval__delete_interval_vars_5_0_i4);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__intersect_2_0,
		backend_libs__interval__delete_interval_vars_5_0_i5);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__difference_2_0,
		backend_libs__interval__delete_interval_vars_5_0_i6);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		backend_libs__interval__delete_interval_vars_5_0_i7);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_r1;
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_r3 = MR_tfield(0, MR_tempr1, 15);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__delete_interval_vars_5_0_i11);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__delete_interval_vars_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		backend_libs__interval__delete_interval_vars_5_0_i17);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		backend_libs__interval__delete_interval_vars_5_0_i17);
MR_def_label(backend_libs__interval__delete_interval_vars_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module26)
	MR_init_entry1(backend_libs__interval__lookup_inserts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__lookup_inserts_3_0);
	MR_init_label2(backend_libs__interval__lookup_inserts_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_inserts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__lookup_inserts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__lookup_inserts_3_0_i4);
MR_def_label(backend_libs__interval__lookup_inserts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__lookup_inserts_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(backend_libs__interval__lookup_inserts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(parse_tree__set_of_var__member_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module27)
	MR_init_entry1(backend_libs__interval__create_shadow_vars_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__create_shadow_vars_10_0);
	MR_init_label10(backend_libs__interval__create_shadow_vars_10_0,30,3,4,5,7,8,11,13,9,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_shadow_vars'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__create_shadow_vars_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__create_shadow_vars_10_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(12);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		backend_libs__interval__create_shadow_vars_10_0_i4);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		backend_libs__interval__create_shadow_vars_10_0_i5);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		backend_libs__interval__create_shadow_vars_10_0_i7);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		backend_libs__interval__create_shadow_vars_10_0_i8);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		backend_libs__interval__create_shadow_vars_10_0_i11);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__create_shadow_vars_10_0_i9);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		backend_libs__interval__create_shadow_vars_10_0_i13);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(backend_libs__interval__create_shadow_vars_10_0_i30);
	}
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		backend_libs__interval__create_shadow_vars_10_0_i14);
MR_def_label(backend_libs__interval__create_shadow_vars_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(backend_libs__interval__create_shadow_vars_10_0_i30);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__old_merge_3_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module28)
	MR_init_entry1(backend_libs__interval__make_inserted_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__make_inserted_goals_7_0);
	MR_init_label10(backend_libs__interval__make_inserted_goals_7_0,51,9,31,11,10,17,18,19,21,22)
	MR_init_label4(backend_libs__interval__make_inserted_goals_7_0,23,4,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_inserted_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__make_inserted_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goals_7_0_i51);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr7, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goals_7_0_i4);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goals_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr5, 2) = MR_tfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr5, 3) = MR_tfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr5, 4) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr5, 5) = MR_tfield(1, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 5);
	MR_sv(6) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr6, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr6, 2) = MR_tfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr6, 3) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 4) = MR_tfield(1, MR_tempr3, 4);
	MR_sv(7) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i9);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goals_7_0_i11);
	}
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_GOTO_LAB(backend_libs__interval__make_inserted_goals_7_0_i10);
	}
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i31);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__make_inserted_goals_7_0_i17);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__make_inserted_goals_7_0_i18);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__create_shadow_vars_10_0,
		backend_libs__interval__make_inserted_goals_7_0_i19);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__old_merge_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i21);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i22);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i23);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(backend_libs__interval__make_inserted_goals_7_0,
		backend_libs__interval__make_inserted_goals_7_0_i26);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.make_inserted_goal\'/7", 54);
	MR_r3 = (MR_Word) MR_string_const("not a deconstruct", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		backend_libs__interval__make_inserted_goals_7_0_i25);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(backend_libs__interval__make_inserted_goals_7_0,
		backend_libs__interval__make_inserted_goals_7_0_i26);
MR_def_label(backend_libs__interval__make_inserted_goals_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module29)
	MR_init_entry1(backend_libs__interval__insert_goals_after_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__insert_goals_after_7_0);
	MR_init_label3(backend_libs__interval__insert_goals_after_7_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_goals_after'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__insert_goals_after_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__insert_goals_after_7_0_i3);
MR_def_label(backend_libs__interval__insert_goals_after_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__interval__make_inserted_goals_7_0,
		backend_libs__interval__insert_goals_after_7_0_i4);
MR_def_label(backend_libs__interval__insert_goals_after_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		backend_libs__interval__insert_goals_after_7_0_i6);
MR_def_label(backend_libs__interval__insert_goals_after_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module30)
	MR_init_entry1(backend_libs__interval__record_decisions_at_call_site_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_decisions_at_call_site_9_0);
	MR_init_label10(backend_libs__interval__record_decisions_at_call_site_9_0,2,4,7,11,9,15,16,17,19,3)
	MR_init_label1(backend_libs__interval__record_decisions_at_call_site_9_0,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_decisions_at_call_site'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_decisions_at_call_site_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i2);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i4);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_at_call_site_9_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_at_call_site_9_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i7);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i11);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_at_call_site_9_0_i9);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_GOTO_LAB(backend_libs__interval__record_decisions_at_call_site_9_0_i15);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i16);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(backend_libs__interval__make_inserted_goals_7_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i17);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		backend_libs__interval__record_decisions_at_call_site_9_0_i19);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_at_call_site_9_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(backend_libs__interval__record_decisions_at_call_site_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", 65);
	MR_r3 = (MR_Word) MR_string_const("no save map", 11);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module31)
	MR_init_entry1(backend_libs__interval__construct_anchors_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__construct_anchors_4_0);
	MR_init_label1(backend_libs__interval__construct_anchors_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_anchors'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__construct_anchors_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		backend_libs__interval__construct_anchors_4_0_i2);
MR_def_label(backend_libs__interval__construct_anchors_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__rename_var_list_4_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(parse_tree__prog_data__rename_var_4_0);

MR_BEGIN_MODULE(backend_libs__interval_module32)
	MR_init_entry1(backend_libs__interval__record_decisions_in_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_decisions_in_goal_8_0);
	MR_init_label10(backend_libs__interval__record_decisions_in_goal_8_0,3,6,5,10,12,13,14,15,19,9)
	MR_init_label10(backend_libs__interval__record_decisions_in_goal_8_0,21,26,27,28,29,30,32,33,34,36)
	MR_init_label10(backend_libs__interval__record_decisions_in_goal_8_0,37,40,25,43,45,46,42,50,48,55)
	MR_init_label10(backend_libs__interval__record_decisions_in_goal_8_0,54,58,57,53,60,63,52,68,69,72)
	MR_init_label5(backend_libs__interval__record_decisions_in_goal_8_0,73,67,76,75,189)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_decisions_in_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_decisions_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r7 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i3);
	}
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(backend_libs__interval__record_decisions_at_call_site_9_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,2)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i5);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(7);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_conj_9_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i6);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(13);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,3)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i9);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_r7, 1);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__interval__construct_anchors_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i10);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i12);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i13);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i14);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i15);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i19);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(backend_libs__interval__insert_goals_after_7_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r7, 1);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i50);
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr2;
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__interval__record_decisions_at_call_site_9_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i25);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__construct_anchors_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i26);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i27);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i28);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i29);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i30);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i32);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__interval__make_inserted_goals_7_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i33);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i34);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_tfield(0, MR_sv(5), 1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i36);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i37);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i40);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(backend_libs__interval__insert_goals_after_7_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i42);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r7, (MR_Integer) 0);
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i43);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__construct_anchors_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i45);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i46);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(backend_libs__interval__insert_goals_after_7_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r7, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i50);
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr2;
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__interval__record_decisions_at_call_site_9_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__interval__record_decisions_at_call_site_9_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,5)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i52);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i54);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i55);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i53);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,4)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i57);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_r7, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i58);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i53);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_r7, 2);
	MR_sv(7) = MR_r8;
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(7),3,4)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(7), 2);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i189);
	}
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i63);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(13);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,4)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i67);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_cases_7_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i68);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i69);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tempr2;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__construct_anchors_4_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i72);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__interval__lookup_inserts_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i73);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(backend_libs__interval__insert_goals_after_7_0);
	}
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_goal_8_0_i75);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(9) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__record_decisions_in_goal_8_0_i76);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(13);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.record_decisions_in_goal\'/8", 60);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__interval__record_decisions_in_goal_8_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module33)
	MR_init_entry1(backend_libs__interval__record_decisions_in_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_decisions_in_conj_9_0);
	MR_init_label5(backend_libs__interval__record_decisions_in_conj_9_0,34,4,5,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_decisions_in_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_decisions_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_conj_9_0_i34);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(backend_libs__interval__record_decisions_in_conj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_conj_9_0_i4);
MR_def_label(backend_libs__interval__record_decisions_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_conj_9_0,
		backend_libs__interval__record_decisions_in_conj_9_0_i5);
MR_def_label(backend_libs__interval__record_decisions_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_conj_9_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_conj_9_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		backend_libs__interval__record_decisions_in_conj_9_0_i8);
MR_def_label(backend_libs__interval__record_decisions_in_conj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__interval__record_decisions_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module34)
	MR_init_entry1(backend_libs__interval__record_decisions_in_cases_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_decisions_in_cases_7_0);
	MR_init_label3(backend_libs__interval__record_decisions_in_cases_7_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_decisions_in_cases'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__record_decisions_in_cases_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__record_decisions_in_cases_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(backend_libs__interval__record_decisions_in_cases_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_cases_7_0_i4);
MR_def_label(backend_libs__interval__record_decisions_in_cases_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__interval__record_decisions_in_cases_7_0,
		backend_libs__interval__record_decisions_in_cases_7_0_i6);
MR_def_label(backend_libs__interval__record_decisions_in_cases_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module35)
	MR_init_entry1(backend_libs__interval__record_decisions_in_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__record_decisions_in_goal_10_0);
	MR_init_label1(backend_libs__interval__record_decisions_in_goal_10_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_decisions_in_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__record_decisions_in_goal_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_8_0,
		backend_libs__interval__record_decisions_in_goal_10_0_i3);
MR_def_label(backend_libs__interval__record_decisions_in_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module36)
	MR_init_entry1(backend_libs__interval__make_inserted_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__make_inserted_goal_9_0);
	MR_init_label10(backend_libs__interval__make_inserted_goal_9_0,8,27,10,9,16,17,18,20,21,22)
	MR_init_label1(backend_libs__interval__make_inserted_goal_9_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_inserted_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__make_inserted_goal_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr7 = MR_r4;
	MR_tempr2 = MR_tfield(0, MR_tempr7, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goal_9_0_i3);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goal_9_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_tfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr5, 2) = MR_tfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr5, 3) = MR_tfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr5, 4) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr5, 5) = MR_tfield(1, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 5);
	MR_sv(5) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr6, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr6, 2) = MR_tfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr6, 3) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 4) = MR_tfield(1, MR_tempr3, 4);
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr7, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr5, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		backend_libs__interval__make_inserted_goal_9_0_i8);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(backend_libs__interval__make_inserted_goal_9_0_i10);
	}
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_GOTO_LAB(backend_libs__interval__make_inserted_goal_9_0_i9);
	}
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(4), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		backend_libs__interval__make_inserted_goal_9_0_i27);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__make_inserted_goal_9_0_i16);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__make_inserted_goal_9_0_i17);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__create_shadow_vars_10_0,
		backend_libs__interval__make_inserted_goal_9_0_i18);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__old_merge_3_0,
		backend_libs__interval__make_inserted_goal_9_0_i20);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__make_inserted_goal_9_0_i21);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		backend_libs__interval__make_inserted_goal_9_0_i22);
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(9);
	}
MR_def_label(backend_libs__interval__make_inserted_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.make_inserted_goal\'/7", 54);
	MR_r3 = (MR_Word) MR_string_const("not a deconstruct", 17);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module37)
	MR_init_entry1(backend_libs__interval__build_headvar_subst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__build_headvar_subst_4_0);
	MR_init_label6(backend_libs__interval__build_headvar_subst_4_0,25,3,6,8,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_headvar_subst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__build_headvar_subst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__interval__build_headvar_subst_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		backend_libs__interval__build_headvar_subst_4_0_i6);
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__build_headvar_subst_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		backend_libs__interval__build_headvar_subst_4_0_i8);
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		backend_libs__interval__build_headvar_subst_4_0_i9);
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(backend_libs__interval__build_headvar_subst_4_0_i25);
	}
MR_def_label(backend_libs__interval__build_headvar_subst_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(backend_libs__interval__build_headvar_subst_4_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module38)
	MR_init_entry1(backend_libs__interval__apply_headvar_correction_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__apply_headvar_correction_4_0);
	MR_init_label5(backend_libs__interval__apply_headvar_correction_4_0,2,4,5,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_headvar_correction'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__apply_headvar_correction_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		backend_libs__interval__apply_headvar_correction_4_0_i2);
MR_def_label(backend_libs__interval__apply_headvar_correction_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		backend_libs__interval__apply_headvar_correction_4_0_i4);
MR_def_label(backend_libs__interval__apply_headvar_correction_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__build_headvar_subst_4_0,
		backend_libs__interval__apply_headvar_correction_4_0_i5);
MR_def_label(backend_libs__interval__apply_headvar_correction_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		backend_libs__interval__apply_headvar_correction_4_0_i8);
MR_def_label(backend_libs__interval__apply_headvar_correction_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__apply_headvar_correction_4_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(backend_libs__interval__apply_headvar_correction_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(io__write_string_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module39)
	MR_init_entry1(backend_libs__interval__dump_interval_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__dump_interval_info_3_0);
	MR_init_label10(backend_libs__interval__dump_interval_info_3_0,2,3,6,8,13,14,15,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_interval_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__dump_interval_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_sv(4), 11);
	MR_np_call_localret_ent(map__keys_2_0,
		backend_libs__interval__dump_interval_info_3_0_i2);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_sv(4), 12);
	MR_np_call_localret_ent(map__keys_2_0,
		backend_libs__interval__dump_interval_info_3_0_i3);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tfield(0, MR_sv(4), 14);
	MR_np_call_localret_ent(map__keys_2_0,
		backend_libs__interval__dump_interval_info_3_0_i6);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_tfield(0, MR_sv(4), 13);
	MR_np_call_localret_ent(map__keys_2_0,
		backend_libs__interval__dump_interval_info_3_0_i8);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		backend_libs__interval__dump_interval_info_3_0_i13);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		backend_libs__interval__dump_interval_info_3_0_i14);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("INTERVALS:\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_3_0_i15);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__interval__dump_interval_info_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		backend_libs__interval__dump_interval_info_3_0_i17);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(4), 9);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		backend_libs__interval__dump_interval_info_3_0_i18);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nANCHOR FOLLOW:\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_3_0_i19);
MR_def_label(backend_libs__interval__dump_interval_info_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(backend_libs__interval_module40)
	MR_init_entry1(backend_libs__interval__write_int_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__write_int_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_int_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__interval__write_int_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module41)
	MR_init_entry1(fn__backend_libs__interval__interval_id_to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__interval__interval_id_to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_id_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__interval__interval_id_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module42)
	MR_init_entry1(backend_libs__interval__gather_interval_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__gather_interval_vars_4_0);
	MR_init_label1(backend_libs__interval__gather_interval_vars_4_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gather_interval_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__gather_interval_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		backend_libs__interval__gather_interval_vars_4_0_i4);
MR_def_label(backend_libs__interval__gather_interval_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__parse_tree__set_of_var__union_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(backend_libs__interval_module43)
	MR_init_entry1(backend_libs__interval__dump_interval_info_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__dump_interval_info_id_4_0);
	MR_init_label10(backend_libs__interval__dump_interval_info_id_4_0,2,3,4,5,8,11,12,13,6,15)
	MR_init_label10(backend_libs__interval__dump_interval_info_id_4_0,18,20,21,17,23,26,28,29,25,31)
	MR_init_label10(backend_libs__interval__dump_interval_info_id_4_0,36,38,40,41,42,33,44,50,52,54)
	MR_init_label1(backend_libs__interval__dump_interval_info_id_4_0,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_interval_info_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__dump_interval_info_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\ninterval ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i2);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__interval__interval_id_to_int_1_0,
		backend_libs__interval__dump_interval_info_id_4_0_i3);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i4);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i5);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_tfield(0, MR_sv(3), 13);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i8);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__dump_interval_info_id_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__interval__dump_interval_info_id_4_0_i11);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("succ [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i12);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i13);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i15);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no succ\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i15);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_tfield(0, MR_sv(3), 11);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i18);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__dump_interval_info_id_4_0_i17);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("start ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i20);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i21);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i23);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no start\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i23);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_tfield(0, MR_sv(3), 12);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i26);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__dump_interval_info_id_4_0_i25);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("end ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i28);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i29);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i31);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no end\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i31);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_tfield(0, MR_sv(3), 14);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i36);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__dump_interval_info_id_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		backend_libs__interval__dump_interval_info_id_4_0_i38);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i40);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("vars [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i41);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__interval__write_int_list_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i42);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i44);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no vars\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i44);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_tfield(0, MR_sv(3), 15);
	MR_np_call_localret_ent(map__search_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i50);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__interval__dump_interval_info_id_4_0_i56);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("deletions", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_interval_info_id_4_0_i52);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_2,
		backend_libs__interval__dump_interval_info_id_4_0_i54);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(backend_libs__interval__dump_interval_info_id_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module44)
	MR_init_entry1(backend_libs__interval__dump_deletion_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__dump_deletion_3_0);
	MR_init_label4(backend_libs__interval__dump_deletion_3_0,2,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_deletion'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__dump_deletion_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		backend_libs__interval__dump_deletion_3_0_i2);
MR_def_label(backend_libs__interval__dump_deletion_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__interval__dump_deletion_3_0_i5);
MR_def_label(backend_libs__interval__dump_deletion_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" [", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_deletion_3_0_i6);
MR_def_label(backend_libs__interval__dump_deletion_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_np_call_localret_ent(io__write_list_5_0,
		backend_libs__interval__dump_deletion_3_0_i8);
MR_def_label(backend_libs__interval__dump_deletion_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module45)
	MR_init_entry1(backend_libs__interval__dump_anchor_follow_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__dump_anchor_follow_3_0);
	MR_init_label10(backend_libs__interval__dump_anchor_follow_3_0,2,3,4,5,8,9,11,12,13,15)
	MR_init_label1(backend_libs__interval__dump_anchor_follow_3_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_anchor_follow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__dump_anchor_follow_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i2);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i3);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" =>\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i4);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		backend_libs__interval__dump_anchor_follow_3_0_i5);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i8);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("vars [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i9);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,10);
	MR_np_call_localret_ent(io__write_list_5_0,
		backend_libs__interval__dump_anchor_follow_3_0_i11);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\nintervals: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__interval__dump_anchor_follow_3_0_i12);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		backend_libs__interval__dump_anchor_follow_3_0_i13);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		backend_libs__interval__dump_anchor_follow_3_0_i15);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,12);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		backend_libs__interval__dump_anchor_follow_3_0_i17);
MR_def_label(backend_libs__interval__dump_anchor_follow_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module46)
	MR_init_entry1(__Unify___backend_libs__interval__anchor_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__anchor_0_0);
	MR_init_label7(__Unify___backend_libs__interval__anchor_0_0,5,6,7,9,30,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__anchor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i11);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__anchor_0_0,1)
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

MR_BEGIN_MODULE(backend_libs__interval_module47)
	MR_init_entry1(__Compare___backend_libs__interval__anchor_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__anchor_0_0);
	MR_init_label10(__Compare___backend_libs__interval__anchor_0_0,7,8,9,10,5,14,108,15,16,17)
	MR_init_label10(__Compare___backend_libs__interval__anchor_0_0,12,21,22,25,23,30,191,19,34,35)
	MR_init_label10(__Compare___backend_libs__interval__anchor_0_0,36,32,42,43,44,45,48,40,54,55)
	MR_init_label4(__Compare___backend_libs__interval__anchor_0_0,56,57,58,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__anchor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i108);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i191);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i15);
	}
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i191);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__interval__anchor_0_0_i25);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i60);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i191);
	}
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i40);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i191);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__interval__anchor_0_0_i48);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i60);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__anchor_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module48)
	MR_init_entry1(__Unify___backend_libs__interval__anchor_follow_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__anchor_follow_info_0_0);
	MR_init_label3(__Unify___backend_libs__interval__anchor_follow_info_0_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__anchor_follow_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_follow_info_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___backend_libs__interval__anchor_follow_info_0_0_i5);
MR_def_label(__Unify___backend_libs__interval__anchor_follow_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__anchor_follow_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___backend_libs__interval__anchor_follow_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__anchor_follow_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree_bitset__tree_bitset_1_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module49)
	MR_init_entry1(__Compare___backend_libs__interval__anchor_follow_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__anchor_follow_info_0_0);
	MR_init_label4(__Compare___backend_libs__interval__anchor_follow_info_0_0,3,2,6,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__anchor_follow_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_follow_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_follow_info_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__anchor_follow_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__anchor_follow_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___backend_libs__interval__anchor_follow_info_0_0_i6);
MR_def_label(__Compare___backend_libs__interval__anchor_follow_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__anchor_follow_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___backend_libs__interval__anchor_follow_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module50)
	MR_init_entry1(__Unify___backend_libs__interval__branch_construct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__branch_construct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__branch_construct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module51)
	MR_init_entry1(__Compare___backend_libs__interval__branch_construct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__branch_construct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__branch_construct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module52)
	MR_init_entry1(__Unify___backend_libs__interval__branch_end_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__branch_end_info_0_0);
	MR_init_label4(__Unify___backend_libs__interval__branch_end_info_0_0,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__branch_end_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__branch_end_info_0_0_i11);
	}
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___backend_libs__interval__branch_end_info_0_0_i5);
MR_def_label(__Unify___backend_libs__interval__branch_end_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__branch_end_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___backend_libs__interval__branch_end_info_0_0_i7);
MR_def_label(__Unify___backend_libs__interval__branch_end_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__branch_end_info_0_0_i1);
	}
	if ((MR_sv(2) == MR_sv(4))) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__branch_end_info_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___backend_libs__interval__branch_end_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__branch_end_info_0_0,1)
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


MR_BEGIN_MODULE(backend_libs__interval_module53)
	MR_init_entry1(__Compare___backend_libs__interval__branch_end_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__branch_end_info_0_0);
	MR_init_label5(__Compare___backend_libs__interval__branch_end_info_0_0,3,2,6,11,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__branch_end_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__branch_end_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__branch_end_info_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__branch_end_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__branch_end_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___backend_libs__interval__branch_end_info_0_0_i6);
MR_def_label(__Compare___backend_libs__interval__branch_end_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__branch_end_info_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___backend_libs__interval__branch_end_info_0_0_i11);
MR_def_label(__Compare___backend_libs__interval__branch_end_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__branch_end_info_0_0_i40);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__branch_end_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module54)
	MR_init_entry1(__Unify___backend_libs__interval__insert_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__insert_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__insert_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
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

MR_BEGIN_MODULE(backend_libs__interval_module55)
	MR_init_entry1(__Compare___backend_libs__interval__insert_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__insert_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__insert_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module56)
	MR_init_entry1(__Unify___backend_libs__interval__insert_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__insert_spec_0_0);
	MR_init_label3(__Unify___backend_libs__interval__insert_spec_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__insert_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__insert_spec_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___backend_libs__interval__insert_spec_0_0_i4);
MR_def_label(__Unify___backend_libs__interval__insert_spec_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__insert_spec_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree_bitset__tree_bitset_1_0);
MR_def_label(__Unify___backend_libs__interval__insert_spec_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__insert_spec_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module57)
	MR_init_entry1(__Compare___backend_libs__interval__insert_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__insert_spec_0_0);
	MR_init_label4(__Compare___backend_libs__interval__insert_spec_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__insert_spec_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__insert_spec_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__insert_spec_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__insert_spec_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__insert_spec_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___backend_libs__interval__insert_spec_0_0_i5);
MR_def_label(__Compare___backend_libs__interval__insert_spec_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__insert_spec_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree_bitset__tree_bitset_1_0);
MR_def_label(__Compare___backend_libs__interval__insert_spec_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module58)
	MR_init_entry1(__Unify___backend_libs__interval__interval_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__interval_id_0_0);
	MR_init_label1(__Unify___backend_libs__interval__interval_id_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__interval_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_id_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__interval_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module59)
	MR_init_entry1(__Compare___backend_libs__interval__interval_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__interval_id_0_0);
	MR_init_label2(__Compare___backend_libs__interval__interval_id_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__interval_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__interval_id_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__interval_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__interval_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module60)
	MR_init_entry1(__Unify___backend_libs__interval__interval_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__interval_info_0_0);
	MR_init_label10(__Unify___backend_libs__interval__interval_info_0_0,4,8,10,12,14,16,18,20,22,24)
	MR_init_label7(__Unify___backend_libs__interval__interval_info_0_0,26,28,30,33,35,40,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__interval_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i40);
	}
	MR_incr_sp(31);
	MR_sv(31) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(29) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(30) = MR_tfield(0, MR_tempr2, 15);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__interval__interval_params_0_0,
		__Unify___backend_libs__interval__interval_info_0_0_i4);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___backend_libs__interval__interval_info_0_0_i8);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		__Unify___backend_libs__interval__interval_info_0_0_i10);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i12);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i14);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i16);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___backend_libs__interval__interval_id_0_0,
		__Unify___backend_libs__interval__interval_info_0_0_i18);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___backend_libs__interval__interval_info_0_0_i20);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___backend_libs__interval__interval_info_0_0_i22);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i24);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___backend_libs__interval__interval_info_0_0_i26);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i28);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i30);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(28);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i33);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(29);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_info_0_0_i35);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(30);
	MR_succip_word = MR_sv(31);
	MR_decr_sp(31);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__interval_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module61)
	MR_init_entry1(__Compare___backend_libs__interval__interval_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__interval_info_0_0);
	MR_init_label10(__Compare___backend_libs__interval__interval_info_0_0,3,2,5,10,15,19,23,27,31,35)
	MR_init_label8(__Compare___backend_libs__interval__interval_info_0_0,39,43,47,51,55,60,66,189)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__interval_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i3);
	}
	MR_incr_sp(31);
	MR_sv(31) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
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
	MR_np_call_localret_ent(__Compare___backend_libs__interval__interval_params_0_0,
		__Compare___backend_libs__interval__interval_info_0_0_i5);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___backend_libs__interval__interval_info_0_0_i10);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___tree_bitset__tree_bitset_1_0,
		__Compare___backend_libs__interval__interval_info_0_0_i15);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i19);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, branch_end_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i23);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i27);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__interval__interval_info_0_0_i31);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___backend_libs__interval__interval_info_0_0_i35);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___backend_libs__interval__interval_info_0_0_i39);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor_follow_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i43);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___backend_libs__interval__interval_info_0_0_i47);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i51);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i55);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i60);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(29);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_info_0_0_i66);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_info_0_0_i189);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(30);
	MR_succip_word = MR_sv(31);
	MR_decr_sp(31);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__interval__interval_info_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module62)
	MR_init_entry1(__Unify___backend_libs__interval__interval_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__interval_params_0_0);
	MR_init_label4(__Unify___backend_libs__interval__interval_params_0_0,4,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__interval_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_params_0_0_i9);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___backend_libs__interval__interval_params_0_0_i4);
MR_def_label(__Unify___backend_libs__interval__interval_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_params_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___backend_libs__interval__interval_params_0_0_i7);
MR_def_label(__Unify___backend_libs__interval__interval_params_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_params_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___backend_libs__interval__interval_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__interval_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(backend_libs__interval_module63)
	MR_init_entry1(__Compare___backend_libs__interval__interval_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__interval_params_0_0);
	MR_init_label5(__Compare___backend_libs__interval__interval_params_0_0,3,2,5,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__interval_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_params_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__interval_params_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__interval_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__interval_params_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___backend_libs__interval__interval_params_0_0_i5);
MR_def_label(__Compare___backend_libs__interval__interval_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_params_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___backend_libs__interval__interval_params_0_0_i10);
MR_def_label(__Compare___backend_libs__interval__interval_params_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_params_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__interval_params_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module64)
	MR_init_entry1(__Unify___backend_libs__interval__interval_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__interval_var_info_0_0);
	MR_init_label3(__Unify___backend_libs__interval__interval_var_info_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___backend_libs__interval__interval_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_var_info_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___backend_libs__interval__interval_var_info_0_0_i4);
MR_def_label(__Unify___backend_libs__interval__interval_var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__interval_var_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___backend_libs__interval__interval_var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__interval_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module65)
	MR_init_entry1(__Compare___backend_libs__interval__interval_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__interval_var_info_0_0);
	MR_init_label4(__Compare___backend_libs__interval__interval_var_info_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___backend_libs__interval__interval_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_var_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__interval_var_info_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__interval_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__interval_var_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___backend_libs__interval__interval_var_info_0_0_i5);
MR_def_label(__Compare___backend_libs__interval__interval_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__interval_var_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___backend_libs__interval__interval_var_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module66)
	MR_init_entry1(__Unify___backend_libs__interval__maybe_needs_flush_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__maybe_needs_flush_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__maybe_needs_flush_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module67)
	MR_init_entry1(__Compare___backend_libs__interval__maybe_needs_flush_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__maybe_needs_flush_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__maybe_needs_flush_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module68)
	MR_init_entry1(__Unify___backend_libs__interval__rename_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__rename_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__rename_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(backend_libs__interval_module69)
	MR_init_entry1(__Compare___backend_libs__interval__rename_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__rename_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__rename_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
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


MR_BEGIN_MODULE(backend_libs__interval_module70)
	MR_init_entry1(__Unify___backend_libs__interval__resume_save_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__resume_save_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__resume_save_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module71)
	MR_init_entry1(__Compare___backend_libs__interval__resume_save_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__resume_save_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__resume_save_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module72)
	MR_init_entry1(__Unify___backend_libs__interval__save_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__save_point_0_0);
	MR_init_label2(__Unify___backend_libs__interval__save_point_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__save_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__interval__save_point_0_0_i4);
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
		MR_GOTO_LAB(__Unify___backend_libs__interval__save_point_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__interval__save_point_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__interval__save_point_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module73)
	MR_init_entry1(__Compare___backend_libs__interval__save_point_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__save_point_0_0);
	MR_init_label4(__Compare___backend_libs__interval__save_point_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__save_point_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__save_point_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__interval__save_point_0_0_i2);
MR_def_label(__Compare___backend_libs__interval__save_point_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__interval__save_point_0_0,2)
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
		__Compare___backend_libs__interval__save_point_0_0_i5);
MR_def_label(__Compare___backend_libs__interval__save_point_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__interval__save_point_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__interval__save_point_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module74)
	MR_init_entry1(__Unify___backend_libs__interval__save_point_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__interval__save_point_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__interval__save_point_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module75)
	MR_init_entry1(__Compare___backend_libs__interval__save_point_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__interval__save_point_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__interval__save_point_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module76)
	MR_init_entry1(backend_libs__interval__IntroducedFrom__pred__build_interval_info_in_goal__292__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__IntroducedFrom__pred__build_interval_info_in_goal__292__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__build_interval_info_in_goal__292__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__IntroducedFrom__pred__build_interval_info_in_goal__292__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
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

MR_decl_entry(term__var_to_int_2_0);

MR_BEGIN_MODULE(backend_libs__interval_module77)
	MR_init_entry1(backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1291__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1291__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_interval_info_id__1291__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1291__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module78)
	MR_init_entry1(backend_libs__interval__IntroducedFrom__pred__dump_deletion__1309__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__IntroducedFrom__pred__dump_deletion__1309__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_deletion__1309__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__IntroducedFrom__pred__dump_deletion__1309__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module79)
	MR_init_entry1(backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1322__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1322__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__dump_anchor_follow__1322__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1322__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(term__var_to_int_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__union_list_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module80)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0);
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,7,8,10,11,12,13,19,18,16,22)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,15,23,24,25,26,27,28,41,30,32)
	MR_init_label5(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,33,34,35,36,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_interval_info_at_call__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i7);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i8);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__new_interval_id_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i10);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_start_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i11);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_end_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i12);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i13);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i19);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i18);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i16);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i15);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(7);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__record_interval_succ_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i22);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i25);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__interval__record_interval_no_succ_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i23);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i24);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__set_cur_interval_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i26);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__assign_open_intervals_to_anchor_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i27);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i28);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i30);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(backend_libs__interval__one_open_interval_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i33);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(backend_libs__interval__record_model_non_anchor_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i32);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__one_open_interval_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i33);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_flushed_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i34);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_in_regs_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i35);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__require_access_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0_i36);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.build_interval_info_at_call\'/7", 63);
	MR_r3 = (MR_Word) MR_string_const("no need across call", 19);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module81)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0);
	MR_init_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_interval_info_in_conj__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0_i13);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__interval__build_interval_info_in_goal_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(map__sorted_keys_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__sorted_list_to_set_1_0);

MR_BEGIN_MODULE(backend_libs__interval_module82)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0);
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,2,3,7,4,5,13,14,18,21,22)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,23,17,27,28,29,31,32,30,34,35)
	MR_init_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reached_branch_end__[1]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i2);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__interval__record_branch_end_info_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i3);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i5);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_resume_point_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i7);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i4);
	}
	MR_r6 = MR_tfield(1, MR_r2, 0);
	MR_r7 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_EQ(MR_r7,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i4);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r6;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tfield(0, MR_sv(5), 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i13);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, resume_save_status);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i14);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_tfield(0, MR_r2, 13) = MR_tfield(0, MR_tempr1, 13);
	MR_tfield(0, MR_r2, 14) = MR_tfield(0, MR_tempr1, 14);
	MR_tfield(0, MR_r2, 15) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i18);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i17);
	}
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__sorted_keys_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i21);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__sorted_list_to_set_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i22);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__interval__require_flushed_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i23);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i27);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.interval", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.interval.reached_branch_end\'/12", 55);
	MR_r3 = (MR_Word) MR_string_const("no store map", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i27);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__assign_open_intervals_to_anchor_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i28);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i29);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i31);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(backend_libs__interval__no_open_intervals_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i34);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(backend_libs__interval__record_model_non_anchor_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i30);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__no_open_intervals_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i34);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(backend_libs__interval__get_cur_interval_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i35);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_start_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i36);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__interval__new_interval_id_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0_i37);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module83)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0);
	MR_init_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,2,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reached_branch_start__[1]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_sv(5), 11);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0_i2);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_r1;
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_interval_succ_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0_i4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r1, 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__interval__assign_open_intervals_to_anchor_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0_i7);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module84)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0);
	MR_init_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,2,5,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__leave_branch_start__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, interval_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__interval, anchor);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_r5, 12);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0_i2);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_tempr2, 15);
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0_i4);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(backend_libs__interval__require_flushed_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0_i6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_tfield(0, MR_r2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_tfield(0, MR_r2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_tfield(0, MR_r2, 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__interval__set_open_intervals_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__interval_module85)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0);
	MR_init_label7(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,23,5,6,7,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__record_decisions_in_disj__[5]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i5);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__interval__make_inserted_goals_7_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__interval__record_decisions_in_goal_8_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i7);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i10);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0_i11);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_105_110_116_101_114_118_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__interval_maybe_bunch_0(void)
{
	backend_libs__interval_module0();
	backend_libs__interval_module1();
	backend_libs__interval_module2();
	backend_libs__interval_module3();
	backend_libs__interval_module4();
	backend_libs__interval_module5();
	backend_libs__interval_module6();
	backend_libs__interval_module7();
	backend_libs__interval_module8();
	backend_libs__interval_module9();
	backend_libs__interval_module10();
	backend_libs__interval_module11();
	backend_libs__interval_module12();
	backend_libs__interval_module13();
	backend_libs__interval_module14();
	backend_libs__interval_module15();
	backend_libs__interval_module16();
	backend_libs__interval_module17();
	backend_libs__interval_module18();
	backend_libs__interval_module19();
	backend_libs__interval_module20();
	backend_libs__interval_module21();
	backend_libs__interval_module22();
	backend_libs__interval_module23();
	backend_libs__interval_module24();
	backend_libs__interval_module25();
	backend_libs__interval_module26();
	backend_libs__interval_module27();
	backend_libs__interval_module28();
	backend_libs__interval_module29();
	backend_libs__interval_module30();
	backend_libs__interval_module31();
	backend_libs__interval_module32();
	backend_libs__interval_module33();
	backend_libs__interval_module34();
	backend_libs__interval_module35();
	backend_libs__interval_module36();
	backend_libs__interval_module37();
	backend_libs__interval_module38();
	backend_libs__interval_module39();
}

static void mercury__backend_libs__interval_maybe_bunch_1(void)
{
	backend_libs__interval_module40();
	backend_libs__interval_module41();
	backend_libs__interval_module42();
	backend_libs__interval_module43();
	backend_libs__interval_module44();
	backend_libs__interval_module45();
	backend_libs__interval_module46();
	backend_libs__interval_module47();
	backend_libs__interval_module48();
	backend_libs__interval_module49();
	backend_libs__interval_module50();
	backend_libs__interval_module51();
	backend_libs__interval_module52();
	backend_libs__interval_module53();
	backend_libs__interval_module54();
	backend_libs__interval_module55();
	backend_libs__interval_module56();
	backend_libs__interval_module57();
	backend_libs__interval_module58();
	backend_libs__interval_module59();
	backend_libs__interval_module60();
	backend_libs__interval_module61();
	backend_libs__interval_module62();
	backend_libs__interval_module63();
	backend_libs__interval_module64();
	backend_libs__interval_module65();
	backend_libs__interval_module66();
	backend_libs__interval_module67();
	backend_libs__interval_module68();
	backend_libs__interval_module69();
	backend_libs__interval_module70();
	backend_libs__interval_module71();
	backend_libs__interval_module72();
	backend_libs__interval_module73();
	backend_libs__interval_module74();
	backend_libs__interval_module75();
	backend_libs__interval_module76();
	backend_libs__interval_module77();
	backend_libs__interval_module78();
	backend_libs__interval_module79();
}

static void mercury__backend_libs__interval_maybe_bunch_2(void)
{
	backend_libs__interval_module80();
	backend_libs__interval_module81();
	backend_libs__interval_module82();
	backend_libs__interval_module83();
	backend_libs__interval_module84();
	backend_libs__interval_module85();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__interval__init(void);
void mercury__backend_libs__interval__init_type_tables(void);
void mercury__backend_libs__interval__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__interval__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__interval__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backend_libs__interval__init_threadscope_string_table(void);
#endif

void mercury__backend_libs__interval__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__interval_maybe_bunch_0();
	mercury__backend_libs__interval_maybe_bunch_1();
	mercury__backend_libs__interval_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_anchor_0,
		backend_libs__interval__anchor_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0,
		backend_libs__interval__anchor_follow_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0,
		backend_libs__interval__branch_construct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0,
		backend_libs__interval__branch_end_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_insert_map_0,
		backend_libs__interval__insert_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0,
		backend_libs__interval__insert_spec_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_interval_id_0,
		backend_libs__interval__interval_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_interval_info_0,
		backend_libs__interval__interval_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_interval_params_0,
		backend_libs__interval__interval_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_interval_var_info_0,
		backend_libs__interval__interval_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_maybe_needs_flush_0,
		backend_libs__interval__maybe_needs_flush_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_rename_map_0,
		backend_libs__interval__rename_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0,
		backend_libs__interval__resume_save_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_save_point_0,
		backend_libs__interval__save_point_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0,
		backend_libs__interval__save_point_type_0_0);
	mercury__backend_libs__interval__init_debugger();
}

void mercury__backend_libs__interval__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_anchor_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_anchor_follow_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_branch_construct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_branch_end_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_insert_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_insert_spec_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_interval_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_interval_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_interval_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_interval_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_maybe_needs_flush_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_rename_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_resume_save_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_save_point_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__interval__type_ctor_info_save_point_type_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_backend_libs__interval__type_class_decl_build_interval_info_acc_1);
	}
}


void mercury__backend_libs__interval__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__interval__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__interval);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__interval__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backend_libs__interval__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
