/*
** Automatically generated from `accumulator.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__accumulator__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.accumulator.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.accumulator.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "transform_hlds.accumulator.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "transform_hlds.accumulator.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.accumulator.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.accumulator.c"
#line 49 "transform_hlds.accumulator.c"
#include "transform_hlds.accumulator.mh"

#line 52 "transform_hlds.accumulator.c"
#line 53 "transform_hlds.accumulator.c"
#ifndef TRANSFORM_HLDS__ACCUMULATOR_DECL_GUARD
#define TRANSFORM_HLDS__ACCUMULATOR_DECL_GUARD

#line 57 "transform_hlds.accumulator.c"
#line 58 "transform_hlds.accumulator.c"

#endif
#line 61 "transform_hlds.accumulator.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_assoc_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_base_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_store_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_sets_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_subst_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_substs_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warnings_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__accumulator__type_ctor_info_store_info_0,
	mercury_data_transform_hlds__accumulator__type_ctor_info_top_level_0;
MR_decl_label1(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0, 2)
MR_decl_label6(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0, 1,3,4,5,7,9)
MR_decl_label2(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0, 2,3)
MR_decl_label2(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0, 2,3)
MR_decl_label1(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0, 1)
MR_decl_label1(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0, 1)
MR_decl_label10(transform_hlds__accumulator__acc_pred_info_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(transform_hlds__accumulator__acc_pred_info_7_0, 12,13,14,15,18)
MR_decl_label10(transform_hlds__accumulator__acc_proc_info_7_0, 2,3,4,5,6,7,8,9,10,13)
MR_decl_label8(transform_hlds__accumulator__acc_proc_info_7_0, 14,17,18,19,20,21,23,24)
MR_decl_label5(transform_hlds__accumulator__acc_unification_2_0, 2,3,12,13,14)
MR_decl_label8(transform_hlds__accumulator__acc_var_subst_init_6_0, 3,6,7,8,10,11,12,13)
MR_decl_label10(transform_hlds__accumulator__accu_assoc_7_0, 2,4,5,6,7,10,11,18,21,24)
MR_decl_label4(transform_hlds__accumulator__accu_assoc_7_0, 25,26,17,1)
MR_decl_label7(transform_hlds__accumulator__accu_before_7_0, 2,7,10,13,14,15,6)
MR_decl_label9(transform_hlds__accumulator__accu_construct_7_0, 2,9,12,15,16,17,18,8,1)
MR_decl_label10(transform_hlds__accumulator__accu_construct_assoc_7_0, 2,5,6,7,9,11,12,14,15,21)
MR_decl_label8(transform_hlds__accumulator__accu_construct_assoc_7_0, 24,27,28,29,30,31,20,1)
MR_decl_label6(transform_hlds__accumulator__accu_create_goal_17_0, 2,3,7,8,11,12)
MR_decl_label10(transform_hlds__accumulator__accu_divide_base_case_8_0, 3,6,7,8,9,10,11,13,14,15)
MR_decl_label10(transform_hlds__accumulator__accu_divide_base_case_8_0, 16,17,19,20,21,22,23,24,25,26)
MR_decl_label1(transform_hlds__accumulator__accu_has_heuristic_3_0, 1)
MR_decl_label2(transform_hlds__accumulator__accu_heuristic_5_0, 13,1)
MR_decl_label8(transform_hlds__accumulator__accu_is_associative_4_0, 2,3,4,5,8,9,7,1)
MR_decl_label5(transform_hlds__accumulator__accu_is_update_4_0, 2,3,5,8,1)
MR_decl_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0, 4,3,5,6,9,10,12,13,14,16)
MR_decl_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0, 17,18,19,20,21,25,26,27,28,31)
MR_decl_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0, 33,35,30,37,40,41,44,50,51,24)
MR_decl_label4(transform_hlds__accumulator__accu_process_assoc_set_12_0, 53,55,56,1)
MR_decl_label10(transform_hlds__accumulator__accu_process_update_set_13_0, 59,4,5,9,7,11,12,13,15,16)
MR_decl_label7(transform_hlds__accumulator__accu_process_update_set_13_0, 17,18,20,23,25,29,1)
MR_decl_label7(transform_hlds__accumulator__accu_related_5_0, 3,8,9,10,12,7,5)
MR_decl_label10(transform_hlds__accumulator__accu_stage1_2_9_0, 72,3,6,8,4,13,15,11,20,22)
MR_decl_label8(transform_hlds__accumulator__accu_stage1_2_9_0, 18,27,29,25,34,36,32,39)
MR_decl_label10(transform_hlds__accumulator__accu_stage2_15_0, 2,3,4,5,7,9,11,12,13,14)
MR_decl_label10(transform_hlds__accumulator__accu_stage2_15_0, 15,16,17,18,19,20,21,22,24,25)
MR_decl_label4(transform_hlds__accumulator__accu_stage2_15_0, 27,28,29,1)
MR_decl_label10(transform_hlds__accumulator__accu_stage3_20_0, 2,3,4,6,7,8,9,10,11,12)
MR_decl_label7(transform_hlds__accumulator__accu_stage3_20_0, 13,14,15,16,17,18,19)
MR_decl_label2(transform_hlds__accumulator__accu_standardize_2_0, 4,46)
MR_decl_label3(transform_hlds__accumulator__accu_store_8_0, 4,5,6)
MR_decl_label2(transform_hlds__accumulator__accu_substs_init_6_0, 3,4)
MR_decl_label6(transform_hlds__accumulator__accu_top_level_8_0, 3,19,35,44,53,75)
MR_decl_label10(transform_hlds__accumulator__accu_transform_proc_8_0, 2,3,4,7,9,98,11,12,13,10)
MR_decl_label10(transform_hlds__accumulator__accu_transform_proc_8_0, 17,18,24,30,31,33,32,90,93,95)
MR_decl_label2(transform_hlds__accumulator__accu_transform_proc_8_0, 6,96)
MR_decl_label10(transform_hlds__accumulator__accu_update_7_0, 2,4,5,7,10,17,20,23,24,25)
MR_decl_label2(transform_hlds__accumulator__accu_update_7_0, 16,1)
MR_decl_label6(transform_hlds__accumulator__associativity_assertion_5_0, 37,4,8,13,3,1)
MR_decl_label5(transform_hlds__accumulator__calculate_goal_info_2_0, 5,6,7,8,2)
MR_decl_label5(transform_hlds__accumulator__chain_subst_2_4_0, 26,5,6,9,8)
MR_decl_label6(transform_hlds__accumulator__commutativity_assertion_4_0, 37,4,8,13,3,1)
MR_decl_label10(transform_hlds__accumulator__create_acc_goal_10_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label10(transform_hlds__accumulator__create_acc_goal_10_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(transform_hlds__accumulator__create_acc_goal_10_0, 23,24,28,30,31,32,33,35,36,38)
MR_decl_label5(transform_hlds__accumulator__create_new_var_7_0, 2,3,4,6,7)
MR_decl_label10(transform_hlds__accumulator__create_orig_goal_9_0, 2,3,4,6,7,8,9,11,13,14)
MR_decl_label4(transform_hlds__accumulator__create_orig_goal_9_0, 16,17,19,21)
MR_decl_label7(transform_hlds__accumulator__generate_warnings_4_0, 37,4,5,6,20,21,25)
MR_decl_label10(transform_hlds__accumulator__identify_goal_type_9_0, 10,11,16,14,19,13,21,20,24,3)
MR_decl_label10(transform_hlds__accumulator__identify_goal_type_9_0, 32,33,36,34,39,27,43,44,45,48)
MR_decl_label5(transform_hlds__accumulator__identify_goal_type_9_0, 50,46,52,54,1)
MR_decl_label10(transform_hlds__accumulator__identify_out_and_out_prime_10_0, 3,5,9,10,11,12,13,15,18,20)
MR_decl_label5(transform_hlds__accumulator__identify_out_and_out_prime_10_0, 22,23,25,26,2)
MR_decl_label2(transform_hlds__accumulator__is_recursive_case_2_0, 3,2)
MR_decl_label2(transform_hlds__accumulator__lookup_call_3_0, 2,6)
MR_decl_label1(transform_hlds__accumulator__member_lessthan_goalid_4_0, 1)
MR_decl_label10(transform_hlds__accumulator__should_attempt_accu_transform_10_0, 2,3,4,5,6,8,11,13,14,15)
MR_decl_label1(transform_hlds__accumulator__should_attempt_accu_transform_10_0, 1)
MR_decl_label10(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0, 67,4,5,7,9,10,11,13,19,17)
MR_decl_label9(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0, 22,15,26,28,42,30,32,3,1)
MR_decl_label4(fn__transform_hlds__accumulator__create_new_base_goals_4_0, 2,4,5,8)
MR_decl_label6(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0, 2,3,5,6,7,10)
MR_decl_label6(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0, 2,3,4,7,8,10)
MR_decl_label2(fn__transform_hlds__accumulator__set_upto_2_0, 16,4)
MR_decl_label4(__Unify___transform_hlds__accumulator__accu_assoc_0_0, 5,7,9,1)
MR_decl_label4(__Unify___transform_hlds__accumulator__accu_base_0_0, 4,6,10,1)
MR_decl_label2(__Unify___transform_hlds__accumulator__accu_goal_id_0_0, 4,1)
MR_decl_label7(__Unify___transform_hlds__accumulator__accu_sets_0_0, 4,6,8,10,12,16,1)
MR_decl_label5(__Unify___transform_hlds__accumulator__accu_substs_0_0, 5,7,9,13,1)
MR_decl_label4(__Unify___transform_hlds__accumulator__accu_warning_0_0, 4,6,10,1)
MR_decl_label3(__Unify___transform_hlds__accumulator__store_info_0_0, 4,8,1)
MR_decl_label5(__Compare___transform_hlds__accumulator__accu_assoc_0_0, 3,2,6,10,39)
MR_decl_label5(__Compare___transform_hlds__accumulator__accu_base_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___transform_hlds__accumulator__accu_goal_id_0_0, 3,2,5,21)
MR_decl_label8(__Compare___transform_hlds__accumulator__accu_sets_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label6(__Compare___transform_hlds__accumulator__accu_substs_0_0, 3,2,6,11,16,53)
MR_decl_label6(__Compare___transform_hlds__accumulator__accu_warning_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___transform_hlds__accumulator__store_info_0_0, 3,2,5,9,29)
MR_decl_static(transform_hlds__accumulator__generate_warnings_4_0)
MR_decl_static(transform_hlds__accumulator__identify_out_and_out_prime_10_0)
MR_decl_static(fn__transform_hlds__accumulator__set_upto_2_0)
MR_decl_static(transform_hlds__accumulator__member_lessthan_goalid_4_0)
MR_decl_static(transform_hlds__accumulator__accu_before_7_0)
MR_decl_static(transform_hlds__accumulator__associativity_assertion_5_0)
MR_decl_static(transform_hlds__accumulator__commutativity_assertion_4_0)
MR_decl_static(transform_hlds__accumulator__accu_is_associative_4_0)
MR_decl_static(transform_hlds__accumulator__accu_assoc_7_0)
MR_decl_static(transform_hlds__accumulator__accu_construct_7_0)
MR_decl_static(transform_hlds__accumulator__accu_construct_assoc_7_0)
MR_decl_static(transform_hlds__accumulator__accu_is_update_4_0)
MR_decl_static(transform_hlds__accumulator__accu_update_7_0)
MR_decl_static(transform_hlds__accumulator__accu_stage1_2_9_0)
MR_decl_static(transform_hlds__accumulator__create_new_var_7_0)
MR_decl_static(transform_hlds__accumulator__acc_var_subst_init_6_0)
MR_decl_static(transform_hlds__accumulator__accu_substs_init_6_0)
MR_decl_static(transform_hlds__accumulator__accu_has_heuristic_3_0)
MR_decl_static(transform_hlds__accumulator__accu_heuristic_5_0)
MR_decl_static(transform_hlds__accumulator__lookup_call_3_0)
MR_decl_static(transform_hlds__accumulator__accu_process_assoc_set_12_0)
MR_decl_static(transform_hlds__accumulator__accu_process_update_set_13_0)
MR_decl_static(transform_hlds__accumulator__accu_divide_base_case_8_0)
MR_decl_static(transform_hlds__accumulator__accu_stage2_15_0)
MR_decl_static(transform_hlds__accumulator__acc_proc_info_7_0)
MR_decl_static(transform_hlds__accumulator__acc_pred_info_7_0)
MR_decl_static(fn__transform_hlds__accumulator__accu_rename_4_0)
MR_decl_static(transform_hlds__accumulator__chain_subst_2_4_0)
MR_decl_static(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0)
MR_decl_static(fn__transform_hlds__accumulator__accu_goal_list_2_0)
MR_decl_static(transform_hlds__accumulator__calculate_goal_info_2_0)
MR_decl_static(transform_hlds__accumulator__create_orig_goal_9_0)
MR_decl_static(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0)
MR_decl_static(fn__transform_hlds__accumulator__create_new_base_goals_4_0)
MR_decl_static(transform_hlds__accumulator__create_acc_goal_10_0)
MR_decl_static(transform_hlds__accumulator__accu_create_goal_17_0)
MR_decl_static(transform_hlds__accumulator__accu_top_level_8_0)
MR_decl_static(transform_hlds__accumulator__accu_stage3_20_0)
MR_decl_static(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0)
MR_decl_static(transform_hlds__accumulator__accu_standardize_2_0)
MR_decl_static(transform_hlds__accumulator__is_recursive_case_2_0)
MR_decl_static(transform_hlds__accumulator__identify_goal_type_9_0)
MR_decl_static(transform_hlds__accumulator__identify_recursive_calls_4_0)
MR_decl_static(transform_hlds__accumulator__should_attempt_accu_transform_10_0)
MR_def_extern_entry(transform_hlds__accumulator__accu_transform_proc_8_0)
MR_decl_static(transform_hlds__accumulator__accu_store_8_0)
MR_decl_static(transform_hlds__accumulator__accu_related_5_0)
MR_decl_static(transform_hlds__accumulator__acc_unification_2_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_assoc_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_assoc_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_base_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_base_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_case_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_case_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_goal_id_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_goal_id_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_goal_store_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_goal_store_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_sets_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_sets_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_subst_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_subst_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_substs_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_substs_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_warning_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_warning_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__accu_warnings_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__accu_warnings_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__store_info_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__store_info_0_0)
MR_decl_static(__Unify___transform_hlds__accumulator__top_level_0_0)
MR_decl_static(__Compare___transform_hlds__accumulator__top_level_0_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__639__1_2_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__644__1_2_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__645__1_2_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__649__1_2_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1069__1_4_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1375__1_5_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1412__1_1_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1503__1_3_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1519__1_3_0)
MR_decl_static(fn__transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1557__1_1_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0)
MR_decl_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0)

static const struct mercury_type_0 mercury_common_0[26] =
{
{
4,
MR_string_const("warning: the call to", 20)
},
{
4,
MR_string_const("has had the location of the variables", 37)
},
{
4,
MR_string_const("and", 3)
},
{
4,
MR_string_const("swapped to allow accumulator introduction.", 42)
},
{
4,
MR_string_const("In", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("Please ensure that this", 23)
},
{
4,
MR_string_const("argument rearrangement does not introduce", 41)
},
{
4,
MR_string_const("performance problems.", 21)
},
{
4,
MR_string_const("Please ensure that these", 24)
},
{
4,
MR_string_const("argument rearrangements do not introduce", 40)
},
{
4,
MR_string_const("These warnings can be suppressed by", 35)
},
{
4,
MR_string_const("\140--inhibit-accumulator-warnings\'.", 33)
},
{
4,
MR_string_const("If a predicate has been declared", 32)
},
{
4,
MR_string_const("associative via a \140promise\' declaration,", 40)
},
{
4,
MR_string_const("the compiler will rearrange the order of", 40)
},
{
4,
MR_string_const("the arguments in calls to that predicate,", 41)
},
{
4,
MR_string_const("if by so doing it makes the containing predicate", 48)
},
{
4,
MR_string_const("tail recursive. In such situations, the compiler", 48)
},
{
4,
MR_string_const("will issue this warning. If this reordering", 43)
},
{
4,
MR_string_const("changes the performance characteristics", 39)
},
{
4,
MR_string_const("of the call to the predicate, use", 33)
},
{
4,
MR_string_const("\140--no-accumulator-introduction\'", 31)
},
{
4,
MR_string_const("to turn the optimization off, or ", 33)
},
{
4,
MR_string_const("\140--inhibit-accumulator-warnings\'", 32)
},
{
4,
MR_string_const("to turn off the warnings.", 25)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_1 mercury_common_1[37] =
{
{
{
MR_TAG_COMMON(3,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_TAG_COMMON(1,1,1)
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
MR_COMMON(1,4)
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
MR_COMMON(1,4)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
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
MR_TAG_COMMON(3,8,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,7),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,0,6),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,0,9),
MR_TAG_COMMON(1,1,16)
}
},
{
{
MR_TAG_COMMON(3,0,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,11),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_TAG_COMMON(0,11,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_TAG_COMMON(1,1,21)
}
},
{
{
MR_TAG_COMMON(3,0,23),
MR_TAG_COMMON(1,1,22)
}
},
{
{
MR_TAG_COMMON(3,0,22),
MR_TAG_COMMON(1,1,23)
}
},
{
{
MR_TAG_COMMON(3,0,21),
MR_TAG_COMMON(1,1,24)
}
},
{
{
MR_TAG_COMMON(3,0,20),
MR_TAG_COMMON(1,1,25)
}
},
{
{
MR_TAG_COMMON(3,0,19),
MR_TAG_COMMON(1,1,26)
}
},
{
{
MR_TAG_COMMON(3,0,18),
MR_TAG_COMMON(1,1,27)
}
},
{
{
MR_TAG_COMMON(3,0,17),
MR_TAG_COMMON(1,1,28)
}
},
{
{
MR_TAG_COMMON(3,0,16),
MR_TAG_COMMON(1,1,29)
}
},
{
{
MR_TAG_COMMON(3,0,15),
MR_TAG_COMMON(1,1,30)
}
},
{
{
MR_TAG_COMMON(3,0,14),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,32)
}
},
{
{
MR_TAG_COMMON(2,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_pred_info_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,5),
MR_COMMON(2,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(1,6)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(1,6)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(2,0)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__acc_pred_info_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,6),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const struct mercury_type_4 mercury_common_4[6] =
{
{
MR_COMMON(3,1),
MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__644__1_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__645__1_2_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__649__1_2_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(fn__transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1557__1_1_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(transform_hlds__accumulator__acc_unification_2_0),
0
},
{
MR_COMMON(13,0),
MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1412__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_construct_assoc_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_stage2_15_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_recursive_calls_4_0_1;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_construct_assoc_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_stage2_15_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__identify_recursive_calls_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_is_update_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_update_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_rename_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_1;
static const struct mercury_type_6 mercury_common_6[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_is_update_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,7),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_update_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,7),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_COMMON(1,6),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_rename_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,4),
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_COMMON(1,6),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_goal_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_1;
static const struct mercury_type_7 mercury_common_7[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,4),
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_COMMON(1,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_goal_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_COMMON(9,0),
MR_ENTRY_AP(transform_hlds__accumulator__accu_store_8_0),
1,
1
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(transform_hlds__accumulator__accu_store_8_0),
1,
0
},
};

static const struct mercury_type_11 mercury_common_11[2] =
{
{
MR_TAG_COMMON(1,1,19)
},
{
MR_TAG_COMMON(1,1,33)
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
1,
0
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_2;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_assoc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0 = {
	"accu_assoc",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_assoc_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_assoc_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_assoc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_assoc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_assoc_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_assoc_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_assoc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_assoc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_assoc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_assoc_0_0)),
	"transform_hlds.accumulator",
	"accu_assoc",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_assoc_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_assoc_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_assoc_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_base_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
};

const MR_ConstString mercury_data_transform_hlds__accumulator__field_names_accu_base_0_0[] = {
	"init_update",
	"init_assoc",
	"other"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_base_0_0 = {
	"accu_base",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_base_0_0,
	mercury_data_transform_hlds__accumulator__field_names_accu_base_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_base_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_base_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_base_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_base_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_base_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_base_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_base_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_base_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_base_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_base_0_0)),
	"transform_hlds.accumulator",
	"accu_base",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_base_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_base_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_base_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_0 = {
	"accu_base",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_1 = {
	"accu_rec",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__accumulator__enum_value_ordered_accu_case_0[] = {
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_0,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__accumulator__enum_name_ordered_accu_case_0[] = {
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_0,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_accu_case_0_1
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_case_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_case_0_0)),
	"transform_hlds.accumulator",
	"accu_case",
	{ (void *)mercury_data_transform_hlds__accumulator__enum_name_ordered_accu_case_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__enum_value_ordered_accu_case_0 },
	2,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_case_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_goal_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0 = {
	"accu_goal_id",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_goal_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_goal_id_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_goal_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_goal_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_goal_id_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_goal_id_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_goal_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_goal_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_goal_id_0_0)),
	"transform_hlds.accumulator",
	"accu_goal_id",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_goal_id_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_goal_id_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_goal_id_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_store_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_goal_store_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_goal_store_0_0)),
	"transform_hlds.accumulator",
	"accu_goal_store",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_sets_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__accumulator__type_ctor_info_accu_goal_id_0
};

const MR_ConstString mercury_data_transform_hlds__accumulator__field_names_accu_sets_0_0[] = {
	"as_before",
	"as_assoc",
	"as_construct_assoc",
	"as_construct",
	"as_update",
	"as_reject"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_sets_0_0 = {
	"accu_sets",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_sets_0_0,
	mercury_data_transform_hlds__accumulator__field_names_accu_sets_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_sets_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_sets_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_sets_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_sets_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_sets_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_sets_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_sets_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_sets_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_sets_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_sets_0_0)),
	"transform_hlds.accumulator",
	"accu_sets",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_sets_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_sets_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_sets_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_subst_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_subst_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_subst_0_0)),
	"transform_hlds.accumulator",
	"accu_subst",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_substs_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_transform_hlds__accumulator__field_names_accu_substs_0_0[] = {
	"acc_var_subst",
	"rec_call_subst",
	"assoc_call_subst",
	"update_subst"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_substs_0_0 = {
	"accu_substs",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_substs_0_0,
	mercury_data_transform_hlds__accumulator__field_names_accu_substs_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_substs_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_substs_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_substs_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_substs_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_substs_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_substs_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_substs_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_substs_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_substs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_substs_0_0)),
	"transform_hlds.accumulator",
	"accu_substs",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_substs_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_substs_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_substs_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_accu_warning_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_accu_warning_0_0 = {
	"accu_warn",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_accu_warning_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_warning_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_warning_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_warning_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_accu_warning_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_accu_warning_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_accu_warning_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_accu_warning_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_warning_0_0)),
	"transform_hlds.accumulator",
	"accu_warning",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_accu_warning_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_accu_warning_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_accu_warning_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__accumulator__type_ctor_info_accu_warning_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warnings_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__accu_warnings_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__accu_warnings_0_0)),
	"transform_hlds.accumulator",
	"accu_warnings",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__accumulator__type_ctor_info_accu_warning_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__accumulator__field_types_store_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__accumulator__type_ctor_info_accu_goal_id_0transform_hlds__goal_store__type_ctor_info_stored_goal_0
};

const MR_ConstString mercury_data_transform_hlds__accumulator__field_names_store_info_0_0[] = {
	"store_loc",
	"store_instmap",
	"store_goals"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__accumulator__du_functor_desc_store_info_0_0 = {
	"store_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__accumulator__field_types_store_info_0_0,
	mercury_data_transform_hlds__accumulator__field_names_store_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_stag_ordered_store_info_0_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_store_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__accumulator__du_ptag_ordered_store_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__accumulator__du_stag_ordered_store_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__accumulator__du_name_ordered_store_info_0[] = {
	&mercury_data_transform_hlds__accumulator__du_functor_desc_store_info_0_0
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_store_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_store_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__store_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__store_info_0_0)),
	"transform_hlds.accumulator",
	"store_info",
	{ (void *)mercury_data_transform_hlds__accumulator__du_name_ordered_store_info_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__du_ptag_ordered_store_info_0 },
	1,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_store_info_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_0 = {
	"switch_base_rec",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_1 = {
	"switch_rec_base",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_2 = {
	"disj_base_rec",
	2
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_3 = {
	"disj_rec_base",
	3
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_4 = {
	"ite_base_rec",
	4
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_5 = {
	"ite_rec_base",
	5
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__accumulator__enum_value_ordered_top_level_0[] = {
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_0,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_1,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_2,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_3,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_4,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_5
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__accumulator__enum_name_ordered_top_level_0[] = {
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_2,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_3,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_4,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_5,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_0,
	&mercury_data_transform_hlds__accumulator__enum_functor_desc_top_level_0_1
};

const MR_Integer mercury_data_transform_hlds__accumulator__functor_number_map_top_level_0[] = {
	4,
	5,
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__accumulator__type_ctor_info_top_level_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__accumulator__top_level_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__accumulator__top_level_0_0)),
	"transform_hlds.accumulator",
	"top_level",
	{ (void *)mercury_data_transform_hlds__accumulator__enum_name_ordered_top_level_0 },
	{ (void *)mercury_data_transform_hlds__accumulator__enum_value_ordered_top_level_0 },
	6,
	4,
	mercury_data_transform_hlds__accumulator__functor_number_map_top_level_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1412",
1,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1412,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_related_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1394",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1394,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"accu_store",
8,
0
},
"transform_hlds.accumulator",
"accumulator.m",
566,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__should_attempt_accu_transform_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"accu_store",
8,
0
},
"transform_hlds.accumulator",
"accumulator.m",
564,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_recursive_calls_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_594",
4,
0
},
"transform_hlds.accumulator",
"accumulator.m",
594,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"acc_unification",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1669,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_acc_goal_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1880",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1880,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_3 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_base_goals_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1864",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1864,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_3 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1864",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1864,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1880",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1880,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__create_orig_goal_9_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1880",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1880,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_goal_list_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1880",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1880,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__accumulator__accu_rename_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1852",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1852,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_pred_info_7_0_1 = {
{
MR_FUNCTION,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1557",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1557,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1519",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1519,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__acc_proc_info_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1503",
3,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1503,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_stage2_15_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1126",
4,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1126,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_3 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1375",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1375,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1864",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1864,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_divide_base_case_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"accu_related",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1367,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_update_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1048",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1046,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_is_update_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1048",
5,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1046,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__accu_construct_assoc_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_1069",
4,
0
},
"transform_hlds.accumulator",
"accumulator.m",
1067,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_4 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_649",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
649,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_3 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_645",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
645,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_2 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_644",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
644,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__accumulator__identify_out_and_out_prime_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.accumulator",
"transform_hlds.accumulator",
"lambda_accumulator_m_639",
2,
0
},
"transform_hlds.accumulator",
"accumulator.m",
639,
"29"
};


MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(varset__lookup_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module0)
	MR_init_entry1(transform_hlds__accumulator__generate_warnings_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__generate_warnings_4_0);
	MR_init_label7(transform_hlds__accumulator__generate_warnings_4_0,37,4,5,6,20,21,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_warnings'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__generate_warnings_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__generate_warnings_4_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		transform_hlds__accumulator__generate_warnings_4_0_i4);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__accumulator__generate_warnings_4_0_i5);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__accumulator__generate_warnings_4_0_i6);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__generate_warnings_4_0_i20);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__generate_warnings_4_0_i21);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__accumulator__generate_warnings_4_0,
		transform_hlds__accumulator__generate_warnings_4_0_i25);
MR_def_label(transform_hlds__accumulator__generate_warnings_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__take_3_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_changed_vars_5_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__from_assoc_list_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module1)
	MR_init_entry1(transform_hlds__accumulator__identify_out_and_out_prime_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__identify_out_and_out_prime_10_0);
	MR_init_label10(transform_hlds__accumulator__identify_out_and_out_prime_10_0,3,5,9,10,11,12,13,15,18,20)
	MR_init_label5(transform_hlds__accumulator__identify_out_and_out_prime_10_0,22,23,25,26,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identify_out_and_out_prime'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__identify_out_and_out_prime_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(0, MR_r4, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__take_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i3);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_out_and_out_prime_10_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i5);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_out_and_out_prime_10_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_out_and_out_prime_10_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_out_and_out_prime_10_0_i2);
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i9);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i10);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i11);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i12);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i13);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i15);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__639__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i18);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i20);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i22);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i23);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i25);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		transform_hlds__accumulator__identify_out_and_out_prime_10_0_i26);
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__accumulator__identify_out_and_out_prime_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.identify_out_and_out_prime\'/10", 68);
	MR_r3 = (MR_Word) MR_string_const("test failed", 11);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module2)
	MR_init_entry1(fn__transform_hlds__accumulator__set_upto_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__set_upto_2_0);
	MR_init_label2(fn__transform_hlds__accumulator__set_upto_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_upto'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__set_upto_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__transform_hlds__accumulator__set_upto_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_tailcall_ent(set__init_1_0);
MR_def_label(fn__transform_hlds__accumulator__set_upto_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localcall_lab(fn__transform_hlds__accumulator__set_upto_2_0,
		fn__transform_hlds__accumulator__set_upto_2_0_i4);
MR_def_label(fn__transform_hlds__accumulator__set_upto_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(transform_hlds__goal_store__goal_store_member_3_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__accumulator_module3)
	MR_init_entry1(transform_hlds__accumulator__member_lessthan_goalid_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__member_lessthan_goalid_4_0);
	MR_init_label1(transform_hlds__accumulator__member_lessthan_goalid_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_lessthan_goalid'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__member_lessthan_goalid_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.accumulator.member_lessthan_goalid/4-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__member_lessthan_goalid_4_0_i1);
MR_def_label(transform_hlds__accumulator__member_lessthan_goalid_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if ((MR_r3 != MR_r4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__goal_store__goal_store_lookup_3_0);
MR_decl_entry(hlds__goal_util__can_reorder_goals_old_7_0);
MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module4)
	MR_init_entry1(transform_hlds__accumulator__accu_before_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_before_7_0);
	MR_init_label7(transform_hlds__accumulator__accu_before_7_0,2,7,10,13,14,15,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_before'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_before_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_r7, 0);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_before_7_0_i2);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__accu_before_7_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__accu_before_7_0_i7);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	MR_r9 = MR_tfield(0, MR_r1, 0);
	if ((MR_r8 != MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(0, MR_r1, 1);
	MR_r9 = MR_tfield(0, MR_tempr2, 1);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__accumulator__accu_before_7_0_i10);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(10);
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_before_7_0_i13);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_before_7_0_i14);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__accumulator__accu_before_7_0_i15);
MR_def_label(transform_hlds__accumulator__accu_before_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_before_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__assertion__is_associativity_assertion_5_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module5)
	MR_init_entry1(transform_hlds__accumulator__associativity_assertion_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__associativity_assertion_5_0);
	MR_init_label6(transform_hlds__accumulator__associativity_assertion_5_0,37,4,8,13,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'associativity_assertion'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__associativity_assertion_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__associativity_assertion_5_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__assertion__is_associativity_assertion_5_0,
		transform_hlds__accumulator__associativity_assertion_5_0_i4);
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__associativity_assertion_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr5 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	}
	MR_np_localcall_lab(transform_hlds__accumulator__associativity_assertion_5_0,
		transform_hlds__accumulator__associativity_assertion_5_0_i8);
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__accumulator__associativity_assertion_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__accumulator__associativity_assertion_5_0_i13);
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__accumulator__associativity_assertion_5_0_i37);
MR_def_label(transform_hlds__accumulator__associativity_assertion_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__assertion__is_commutativity_assertion_4_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module6)
	MR_init_entry1(transform_hlds__accumulator__commutativity_assertion_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__commutativity_assertion_4_0);
	MR_init_label6(transform_hlds__accumulator__commutativity_assertion_4_0,37,4,8,13,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commutativity_assertion'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__commutativity_assertion_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__commutativity_assertion_4_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__assertion__is_commutativity_assertion_4_0,
		transform_hlds__accumulator__commutativity_assertion_4_0_i4);
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__commutativity_assertion_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(transform_hlds__accumulator__commutativity_assertion_4_0,
		transform_hlds__accumulator__commutativity_assertion_4_0_i8);
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__accumulator__commutativity_assertion_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__accumulator__commutativity_assertion_4_0_i13);
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__accumulator__commutativity_assertion_4_0_i37);
MR_def_label(transform_hlds__accumulator__commutativity_assertion_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_assertions_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_assert_id_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module7)
	MR_init_entry1(transform_hlds__accumulator__accu_is_associative_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_is_associative_4_0);
	MR_init_label8(transform_hlds__accumulator__accu_is_associative_4_0,2,3,4,5,8,9,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_is_associative'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_is_associative_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i2);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i3);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i4);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__associativity_assertion_5_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i5);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_is_associative_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i8);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__commutativity_assertion_4_0,
		transform_hlds__accumulator__accu_is_associative_4_0_i9);
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_is_associative_4_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_is_associative_4_0,1)
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


MR_BEGIN_MODULE(transform_hlds__accumulator_module8)
	MR_init_entry1(transform_hlds__accumulator__accu_assoc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_assoc_7_0);
	MR_init_label10(transform_hlds__accumulator__accu_assoc_7_0,2,4,5,6,7,10,11,18,21,24)
	MR_init_label4(transform_hlds__accumulator__accu_assoc_7_0,25,26,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_assoc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_assoc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_r7, 0);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_assoc_7_0_i2);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_assoc_7_0_i1);
	}
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_assoc_7_0_i4);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__accumulator__accu_assoc_7_0_i5);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_assoc_7_0_i6);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__associativity_assertion_5_0,
		transform_hlds__accumulator__accu_assoc_7_0_i7);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_assoc_7_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_assoc_7_0_i10);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__commutativity_assertion_4_0,
		transform_hlds__accumulator__accu_assoc_7_0_i11);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__accu_assoc_7_0_i17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__accu_assoc_7_0_i18);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	MR_r9 = MR_tfield(0, MR_r1, 0);
	if ((MR_r8 != MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(0, MR_r1, 1);
	MR_r9 = MR_tfield(0, MR_tempr2, 1);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__accumulator__accu_assoc_7_0_i21);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_assoc_7_0_i24);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_assoc_7_0_i25);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__accumulator__accu_assoc_7_0_i26);
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_assoc_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module9)
	MR_init_entry1(transform_hlds__accumulator__accu_construct_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_construct_7_0);
	MR_init_label9(transform_hlds__accumulator__accu_construct_7_0,2,9,12,15,16,17,18,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_construct'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_construct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_construct_7_0_i2);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_7_0_i1);
	}
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(15));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__accu_construct_7_0_i8);
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__accu_construct_7_0_i9);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	MR_r9 = MR_tfield(0, MR_r1, 0);
	if ((MR_r8 != MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(0, MR_r1, 1);
	MR_r9 = MR_tfield(0, MR_tempr2, 1);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__accumulator__accu_construct_7_0_i12);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(11);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_construct_7_0_i15);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_construct_7_0_i16);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_construct_7_0_i17);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__accumulator__accu_construct_7_0_i18);
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(15));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_construct_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__goal_store__goal_store_all_ancestors_6_0);
MR_decl_entry(fn__set__intersect_2_0);
MR_decl_entry(set__singleton_set_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module10)
	MR_init_entry1(transform_hlds__accumulator__accu_construct_assoc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_construct_assoc_7_0);
	MR_init_label10(transform_hlds__accumulator__accu_construct_assoc_7_0,2,5,6,7,9,11,12,14,15,21)
	MR_init_label8(transform_hlds__accumulator__accu_construct_assoc_7_0,24,27,28,29,30,31,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_construct_assoc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_construct_assoc_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i2);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_assoc_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_assoc_7_0_i1);
	}
	MR_sv(11) = MR_tfield(0, MR_r1, 0);
	MR_sv(12) = MR_tfield(0, MR_r1, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_all_ancestors_6_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i5);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i6);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i7);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_assoc_7_0_i1);
	}
	MR_r1 = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i9);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_assoc_7_0_i1);
	}
	MR_sv(14) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i11);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i12);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1069__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(13);
	MR_sv(13) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i14);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i15);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_construct_assoc_7_0_i1);
	}
	MR_sv(16) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(17) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(18));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__accu_construct_assoc_7_0_i20);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__accumulator__member_lessthan_goalid_4_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i21);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i24);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i27);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i28);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i29);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i30);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__accumulator__accu_construct_assoc_7_0_i31);
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(18));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_construct_assoc_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module11)
	MR_init_entry1(transform_hlds__accumulator__accu_is_update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_is_update_4_0);
	MR_init_label5(transform_hlds__accumulator__accu_is_update_4_0,2,3,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_is_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_is_update_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_is_update_4_0_i2);
MR_def_label(transform_hlds__accumulator__accu_is_update_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__accumulator__accu_is_update_4_0_i3);
MR_def_label(transform_hlds__accumulator__accu_is_update_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_is_update_4_0_i5);
MR_def_label(transform_hlds__accumulator__accu_is_update_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__accumulator__accu_is_update_4_0_i8);
MR_def_label(transform_hlds__accumulator__accu_is_update_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_is_update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_is_update_4_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_is_update_4_0,1)
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


MR_BEGIN_MODULE(transform_hlds__accumulator_module12)
	MR_init_entry1(transform_hlds__accumulator__accu_update_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_update_7_0);
	MR_init_label10(transform_hlds__accumulator__accu_update_7_0,2,4,5,7,10,17,20,23,24,25)
	MR_init_label2(transform_hlds__accumulator__accu_update_7_0,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_update'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_update_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_r7, 0);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_update_7_0_i2);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_update_7_0_i1);
	}
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_update_7_0_i4);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_assertions_2_0,
		transform_hlds__accumulator__accu_update_7_0_i5);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_sv(11) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_update_7_0_i7);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		transform_hlds__accumulator__accu_update_7_0_i10);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_update_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_update_7_0_i1);
	}
	MR_sv(14) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(15) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(16));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__accu_update_7_0_i16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__accu_update_7_0_i17);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r8 = MR_tfield(0, MR_tempr2, 0);
	MR_r9 = MR_tfield(0, MR_r1, 0);
	if ((MR_r8 != MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(0, MR_r1, 1);
	MR_r9 = MR_tfield(0, MR_tempr2, 1);
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__accumulator__accu_update_7_0_i20);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_update_7_0_i23);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_update_7_0_i24);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__accumulator__accu_update_7_0_i25);
MR_def_label(transform_hlds__accumulator__accu_update_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(16));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_update_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(14);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(15);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_update_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module13)
	MR_init_entry1(transform_hlds__accumulator__accu_stage1_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_stage1_2_9_0);
	MR_init_label10(transform_hlds__accumulator__accu_stage1_2_9_0,72,3,6,8,4,13,15,11,20,22)
	MR_init_label8(transform_hlds__accumulator__accu_stage1_2_9_0,18,27,29,25,34,36,32,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_stage1_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_stage1_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_tempr3, 1) + (MR_Integer) 1);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (((MR_Integer) MR_tempr2 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(16);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_sv(9) = MR_tempr1;
	MR_sv(15) = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_before_7_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i6);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i8);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i72);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_assoc_7_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i13);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i15);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i72);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_construct_7_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i20);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i22);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i72);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_construct_assoc_7_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i27);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i29);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i72);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_update_7_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i34);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i36);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_stage1_2_9_0_i72);
	}
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_stage1_2_9_0_i39);
MR_def_label(transform_hlds__accumulator__accu_stage1_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(varset__new_named_var_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module14)
	MR_init_entry1(transform_hlds__accumulator__create_new_var_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__create_new_var_7_0);
	MR_init_label5(transform_hlds__accumulator__create_new_var_7_0,2,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_new_var'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__create_new_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__accumulator__create_new_var_7_0_i2);
MR_def_label(transform_hlds__accumulator__create_new_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__accumulator__create_new_var_7_0_i3);
MR_def_label(transform_hlds__accumulator__create_new_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__accumulator__create_new_var_7_0_i4);
MR_def_label(transform_hlds__accumulator__create_new_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__accumulator__create_new_var_7_0_i6);
MR_def_label(transform_hlds__accumulator__create_new_var_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__create_new_var_7_0_i7);
MR_def_label(transform_hlds__accumulator__create_new_var_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module15)
	MR_init_entry1(transform_hlds__accumulator__acc_var_subst_init_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__acc_var_subst_init_6_0);
	MR_init_label8(transform_hlds__accumulator__acc_var_subst_init_6_0,3,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acc_var_subst_init'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__acc_var_subst_init_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__acc_var_subst_init_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i13);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i6);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("A_", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i7);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i8);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i10);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i11);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__accumulator__acc_var_subst_init_6_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i12);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__acc_var_subst_init_6_0_i13);
MR_def_label(transform_hlds__accumulator__acc_var_subst_init_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module16)
	MR_init_entry1(transform_hlds__accumulator__accu_substs_init_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_substs_init_6_0);
	MR_init_label2(transform_hlds__accumulator__accu_substs_init_6_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_substs_init'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_substs_init_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__accumulator__accu_substs_init_6_0_i3);
MR_def_label(transform_hlds__accumulator__accu_substs_init_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__acc_var_subst_init_6_0,
		transform_hlds__accumulator__accu_substs_init_6_0_i4);
MR_def_label(transform_hlds__accumulator__accu_substs_init_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module17)
	MR_init_entry1(transform_hlds__accumulator__accu_has_heuristic_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_has_heuristic_3_0);
	MR_init_label1(transform_hlds__accumulator__accu_has_heuristic_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_has_heuristic'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_has_heuristic_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_has_heuristic_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("list", 4)) != 0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_has_heuristic_3_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("append", 6)) != 0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_has_heuristic_3_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) 3);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_has_heuristic_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module18)
	MR_init_entry1(transform_hlds__accumulator__accu_heuristic_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_heuristic_5_0);
	MR_init_label2(transform_hlds__accumulator__accu_heuristic_5_0,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_heuristic'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_heuristic_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("append", 6)) != 0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("list", 4)) != 0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_heuristic_5_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_heuristic_5_0_i13);
MR_def_label(transform_hlds__accumulator__accu_heuristic_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__accumulator__accu_heuristic_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module19)
	MR_init_entry1(transform_hlds__accumulator__lookup_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__lookup_call_3_0);
	MR_init_label2(transform_hlds__accumulator__lookup_call_3_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__lookup_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__lookup_call_3_0_i2);
MR_def_label(transform_hlds__accumulator__lookup_call_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__lookup_call_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.lookup_call\'/3", 52);
	MR_r3 = (MR_Word) MR_string_const("not a call", 10);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__accumulator__lookup_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__goal_store__goal_store_init_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
MR_decl_entry(transform_hlds__goal_store__goal_store_det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module20)
	MR_init_entry1(transform_hlds__accumulator__accu_process_assoc_set_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_process_assoc_set_12_0);
	MR_init_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0,4,3,5,6,9,10,12,13,14,16)
	MR_init_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0,17,18,19,20,21,25,26,27,28,31)
	MR_init_label10(transform_hlds__accumulator__accu_process_assoc_set_12_0,33,35,30,37,40,41,44,50,51,24)
	MR_init_label4(transform_hlds__accumulator__accu_process_assoc_set_12_0,53,55,56,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_process_assoc_set'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_process_assoc_set_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_init_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i4);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__lookup_call_3_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i5);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_is_associative_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i6);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_sv(17) = MR_tfield(0, MR_r2, 0);
	MR_sv(18) = MR_tfield(0, MR_r2, 1);
	MR_sv(19) = MR_tfield(0, MR_r2, 2);
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(25) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i9);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i10);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_sv(20) = MR_r2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i12);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i13);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i14);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_sv(21) = MR_r2;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(21);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i16);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_string_const("NewAcc_", 7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__create_new_var_7_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i17);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_sv(23) = MR_r3;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(20);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i18);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(18);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i19);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(18);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i20);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(21);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i21);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	if (MR_INT_NE(MR_sv(19),0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i25);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i26);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i27);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i28);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_has_heuristic_3_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i31);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i30);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_heuristic_5_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i33);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_r1 = MR_sv(24);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i35);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_r2 = MR_sv(17);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(25);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i40);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i37);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(20);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(17);
	MR_r1 = MR_sv(25);
	}
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i41);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(25);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i44);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tempr6 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(map__from_assoc_list_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i50);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i51);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(23);
	MR_r5 = MR_sv(9);
	}
	MR_np_localcall_lab(transform_hlds__accumulator__accu_process_assoc_set_12_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i53);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_sv(1) = MR_sv(22);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(23);
	MR_r5 = MR_sv(9);
	MR_np_localcall_lab(transform_hlds__accumulator__accu_process_assoc_set_12_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i53);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_assoc_set_12_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_det_insert_4_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i55);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_warning);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_process_assoc_set_12_0_i56);
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_process_assoc_set_12_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module21)
	MR_init_entry1(transform_hlds__accumulator__accu_process_update_set_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_process_update_set_13_0);
	MR_init_label10(transform_hlds__accumulator__accu_process_update_set_13_0,59,4,5,9,7,11,12,13,15,16)
	MR_init_label7(transform_hlds__accumulator__accu_process_update_set_13_0,17,18,20,23,25,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_process_update_set'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_process_update_set_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_update_set_13_0_i59);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__lookup_call_3_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i4);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_is_update_4_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i5);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_update_set_13_0_i1);
	}
	MR_sv(12) = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(0, MR_r2, 0);
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i9);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_update_set_13_0_i7);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(11);
	MR_sv(5) = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("Acc_", 4);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_process_update_set_13_0_i11);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_sv(5) = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("Acc_", 4);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__accumulator__create_new_var_7_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i12);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("Acc_", 4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__create_new_var_7_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i13);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i15);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i16);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i17);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i18);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(13);
	}
	MR_np_localcall_lab(transform_hlds__accumulator__accu_process_update_set_13_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i20);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_process_update_set_13_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i23);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i25);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_process_update_set_13_0_i29);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(16);
MR_def_label(transform_hlds__accumulator__accu_process_update_set_13_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(fn__set__power_union_1_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module22)
	MR_init_entry1(transform_hlds__accumulator__accu_divide_base_case_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_divide_base_case_8_0);
	MR_init_label10(transform_hlds__accumulator__accu_divide_base_case_8_0,3,6,7,8,9,10,11,13,14,15)
	MR_init_label10(transform_hlds__accumulator__accu_divide_base_case_8_0,16,17,19,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_divide_base_case'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_divide_base_case_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i3);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__accu_related_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i6);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i7);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i8);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__power_union_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i9);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i10);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__power_union_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i11);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i13);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i14);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i15);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i16);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i17);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1375__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i19);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i20);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i21);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i22);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i23);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__power_union_1_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i24);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i25);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_divide_base_case_8_0_i26);
MR_def_label(transform_hlds__accumulator__accu_divide_base_case_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module23)
	MR_init_entry1(transform_hlds__accumulator__accu_stage2_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_stage2_15_0);
	MR_init_label10(transform_hlds__accumulator__accu_stage2_15_0,2,3,4,5,7,9,11,12,13,14)
	MR_init_label10(transform_hlds__accumulator__accu_stage2_15_0,15,16,17,18,19,20,21,22,24,25)
	MR_init_label4(transform_hlds__accumulator__accu_stage2_15_0,27,28,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_stage2'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_stage2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 4);
	MR_tempr2 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i2);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i3);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i4);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i5);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i7);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__accumulator__accu_stage2_15_0_i9);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__accumulator__accu_stage2_15_0_i11);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i12);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__accumulator__accu_stage2_15_0_i13);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__accumulator__accu_stage2_15_0_i14);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i15);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i16);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i17);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i18);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_substs_init_6_0,
		transform_hlds__accumulator__accu_stage2_15_0_i19);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i20);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i21);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_process_assoc_set_12_0,
		transform_hlds__accumulator__accu_stage2_15_0_i22);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage2_15_0_i1);
	}
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i24);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_process_update_set_13_0,
		transform_hlds__accumulator__accu_stage2_15_0_i25);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_stage2_15_0_i1);
	}
	MR_sv(2) = MR_r7;
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_stage2_15_0_i27);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_stage2_15_0_i28);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_divide_base_case_8_0,
		transform_hlds__accumulator__accu_stage2_15_0_i29);
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_stage2_15_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_is_address_taken_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(parse_tree__prog_mode__inst_lists_to_mode_list_3_0);
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_13_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module24)
	MR_init_entry1(transform_hlds__accumulator__acc_proc_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__acc_proc_info_7_0);
	MR_init_label10(transform_hlds__accumulator__acc_proc_info_7_0,2,3,4,5,6,7,8,9,10,13)
	MR_init_label8(transform_hlds__accumulator__acc_proc_info_7_0,14,17,18,19,20,21,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acc_proc_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__acc_proc_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i2);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i3);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i4);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i5);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i6);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i7);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i8);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i9);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i10);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1503__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_sv(4), 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i13);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i14);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_lists_to_mode_list_3_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i17);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i18);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i19);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i20);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i21);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1519__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i23);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Integer) 2;
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_13_0,
		transform_hlds__accumulator__acc_proc_info_7_0_i24);
MR_def_label(transform_hlds__accumulator__acc_proc_info_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module25)
	MR_init_entry1(transform_hlds__accumulator__acc_pred_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__acc_pred_info_7_0);
	MR_init_label10(transform_hlds__accumulator__acc_pred_info_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(transform_hlds__accumulator__acc_pred_info_7_0,12,13,14,15,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acc_pred_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__acc_pred_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i2);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i3);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i4);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i5);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i6);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i7);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i8);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i9);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i10);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i11);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i12);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i13);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i14);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("AccFrom", 7);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i15);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__accumulator__acc_pred_info_7_0_i18);
MR_def_label(transform_hlds__accumulator__acc_pred_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(14);
	MR_r12 = MR_sv(16);
	MR_r13 = MR_sv(15);
	MR_r14 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_create_16_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module26)
	MR_init_entry1(fn__transform_hlds__accumulator__accu_rename_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__accu_rename_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_rename'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__accu_rename_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module27)
	MR_init_entry1(transform_hlds__accumulator__chain_subst_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__chain_subst_2_4_0);
	MR_init_label5(transform_hlds__accumulator__chain_subst_2_4_0,26,5,6,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chain_subst_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__chain_subst_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__chain_subst_2_4_0_i26);
	}
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(map__init_1_0);
MR_def_label(transform_hlds__accumulator__chain_subst_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__accumulator__chain_subst_2_4_0,
		transform_hlds__accumulator__chain_subst_2_4_0_i5);
MR_def_label(transform_hlds__accumulator__chain_subst_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__accumulator__chain_subst_2_4_0_i6);
MR_def_label(transform_hlds__accumulator__chain_subst_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__accumulator__chain_subst_2_4_0_i9);
MR_def_label(transform_hlds__accumulator__chain_subst_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__chain_subst_2_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(transform_hlds__accumulator__chain_subst_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(fn__transform_hlds__goal_store__goal_store_init_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module28)
	MR_init_entry1(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0);
	MR_init_label6(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,2,3,5,6,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_new_orig_recursive_goals'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i2);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i3);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__keys_2_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i5);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__chain_subst_2_4_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i6);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__goal_store__goal_store_init_0_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i7);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0_i10);
MR_def_label(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
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


MR_BEGIN_MODULE(transform_hlds__accumulator_module29)
	MR_init_entry1(fn__transform_hlds__accumulator__accu_goal_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__accu_goal_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_goal_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__accu_goal_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module30)
	MR_init_entry1(transform_hlds__accumulator__calculate_goal_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__calculate_goal_info_2_0);
	MR_init_label5(transform_hlds__accumulator__calculate_goal_info_2_0,5,6,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_goal_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__calculate_goal_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__calculate_goal_info_2_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__calculate_goal_info_2_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__accumulator__calculate_goal_info_2_0_i5);
MR_def_label(transform_hlds__accumulator__calculate_goal_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__accumulator__calculate_goal_info_2_0_i6);
MR_def_label(transform_hlds__accumulator__calculate_goal_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__accumulator__calculate_goal_info_2_0_i7);
MR_def_label(transform_hlds__accumulator__calculate_goal_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		transform_hlds__accumulator__calculate_goal_info_2_0_i8);
MR_def_label(transform_hlds__accumulator__calculate_goal_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__accumulator__calculate_goal_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.calculate_goal_info\'/2", 60);
	MR_r3 = (MR_Word) MR_string_const("not a conj", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module31)
	MR_init_entry1(transform_hlds__accumulator__create_orig_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__create_orig_goal_9_0);
	MR_init_label10(transform_hlds__accumulator__create_orig_goal_9_0,2,3,4,6,7,8,9,11,13,14)
	MR_init_label4(transform_hlds__accumulator__create_orig_goal_9_0,16,17,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_orig_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__create_orig_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_r5, 0);
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 4);
	MR_r1 = MR_sv(4);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__create_new_orig_recursive_goals_5_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i2);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i3);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i4);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i6);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i7);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i8);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i9);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i11);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__accumulator__create_orig_goal_9_0_i13);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__accu_goal_list_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i14);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i16);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i17);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__accumulator__calculate_goal_info_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i19);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__accumulator__calculate_goal_info_2_0,
		transform_hlds__accumulator__create_orig_goal_9_0_i21);
MR_def_label(transform_hlds__accumulator__create_orig_goal_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module32)
	MR_init_entry1(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__create_new_recursive_goals_8_0);
	MR_init_label6(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,2,3,4,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_new_recursive_goals'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i2);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i3);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__transform_hlds__goal_store__goal_store_init_0_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i4);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i7);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i8);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__accumulator__create_new_recursive_goals_8_0_i10);
MR_def_label(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__transform_hlds__accumulator__accu_rename_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module33)
	MR_init_entry1(fn__transform_hlds__accumulator__create_new_base_goals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__create_new_base_goals_4_0);
	MR_init_label4(fn__transform_hlds__accumulator__create_new_base_goals_4_0,2,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_new_base_goals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__create_new_base_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__transform_hlds__accumulator__create_new_base_goals_4_0_i2);
MR_def_label(fn__transform_hlds__accumulator__create_new_base_goals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,7);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(solutions__solutions_2_1,
		fn__transform_hlds__accumulator__create_new_base_goals_4_0_i4);
MR_def_label(fn__transform_hlds__accumulator__create_new_base_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(fn__transform_hlds__goal_store__goal_store_init_0_0,
		fn__transform_hlds__accumulator__create_new_base_goals_4_0_i5);
MR_def_label(fn__transform_hlds__accumulator__create_new_base_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__accumulator__create_new_base_goals_4_0_i8);
MR_def_label(fn__transform_hlds__accumulator__create_new_base_goals_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module34)
	MR_init_entry1(transform_hlds__accumulator__create_acc_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__create_acc_goal_10_0);
	MR_init_label10(transform_hlds__accumulator__create_acc_goal_10_0,2,3,5,6,7,8,9,10,11,12)
	MR_init_label10(transform_hlds__accumulator__create_acc_goal_10_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(transform_hlds__accumulator__create_acc_goal_10_0,23,24,28,30,31,32,33,35,36,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_acc_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__create_acc_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_r2, 2);
	MR_sv(7) = MR_tfield(0, MR_r2, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr3 = MR_r6;
	MR_sv(10) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr3, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i2);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i3);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i5);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i6);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__create_new_recursive_goals_8_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i7);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i8);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__accu_goal_list_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i9);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i10);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__accu_goal_list_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i11);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i12);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i13);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__accu_goal_list_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i14);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i15);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i16);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__create_new_base_goals_4_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i17);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i18);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i19);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i20);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i21);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i22);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i23);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__accu_goal_list_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i24);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i28);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i30);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i31);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i32);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i33);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__accumulator__calculate_goal_info_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i35);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i36);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__accumulator__calculate_goal_info_2_0,
		transform_hlds__accumulator__create_acc_goal_10_0_i38);
MR_def_label(transform_hlds__accumulator__create_acc_goal_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module35)
	MR_init_entry1(transform_hlds__accumulator__accu_create_goal_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_create_goal_17_0);
	MR_init_label6(transform_hlds__accumulator__accu_create_goal_17_0,2,3,7,8,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_create_goal'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_create_goal_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r12;
	MR_sv(11) = MR_tempr2;
	MR_sv(12) = MR_r13;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i2);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_create_goal_17_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 2);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i8);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.lookup_call\'/3", 52);
	MR_r3 = (MR_Word) MR_string_const("not a call", 10);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i7);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i8);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__create_orig_goal_9_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i11);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__create_acc_goal_10_0,
		transform_hlds__accumulator__accu_create_goal_17_0_i12);
MR_def_label(transform_hlds__accumulator__accu_create_goal_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module36)
	MR_init_entry1(transform_hlds__accumulator__accu_top_level_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_top_level_8_0);
	MR_init_label6(transform_hlds__accumulator__accu_top_level_8_0,3,19,35,44,53,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_top_level'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_top_level_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r3;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr4;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr4;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr4;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r6;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr2, 3) = MR_r3;
	MR_tfield(3, MR_tempr2, 4) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr3, 3) = MR_r5;
	MR_tfield(3, MR_tempr3, 4) = MR_r6;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr2, 3) = MR_r4;
	MR_tfield(3, MR_tempr2, 4) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr3, 3) = MR_r6;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr6, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr7, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_tempr7, 2) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr7, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr7;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r5;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr6, 1) = MR_tfield(3, MR_tempr7, 1);
	MR_tfield(3, MR_tempr6, 2) = MR_tfield(3, MR_tempr7, 2);
	MR_tfield(3, MR_tempr6, 3) = MR_tempr8;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr6;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_top_level_8_0_i75);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr6, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr7, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(3, MR_tempr7, 2) = MR_tfield(3, MR_tempr1, 2);
	MR_tfield(3, MR_tempr7, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr7;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 2) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr6, 1) = MR_tfield(3, MR_tempr7, 1);
	MR_tfield(3, MR_tempr6, 2) = MR_tfield(3, MR_tempr7, 2);
	MR_tfield(3, MR_tempr6, 3) = MR_tempr9;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr6;
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_proceed();
	}
MR_def_label(transform_hlds__accumulator__accu_top_level_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.accu_top_level\'/8", 55);
	MR_r3 = (MR_Word) MR_string_const("not the correct top level", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module37)
	MR_init_entry1(transform_hlds__accumulator__accu_stage3_20_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_stage3_20_0);
	MR_init_label10(transform_hlds__accumulator__accu_stage3_20_0,2,3,4,6,7,8,9,10,11,12)
	MR_init_label7(transform_hlds__accumulator__accu_stage3_20_0,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_stage3'/20 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_stage3_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_sv(15) = MR_r15;
	MR_sv(16) = MR_r16;
	MR_tempr4 = MR_r17;
	MR_sv(17) = MR_tempr4;
	MR_sv(18) = MR_r18;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__acc_proc_info_7_0,
		transform_hlds__accumulator__accu_stage3_20_0_i2);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__acc_pred_info_7_0,
		transform_hlds__accumulator__accu_stage3_20_0_i3);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__accumulator__accu_stage3_20_0_i4);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(16), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(16), 0) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__accumulator__accu_stage3_20_0_i6);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		transform_hlds__accumulator__accu_stage3_20_0_i7);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i8);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_create_goal_17_0,
		transform_hlds__accumulator__accu_stage3_20_0_i9);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__accumulator__accu_stage3_20_0_i10);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_top_level_8_0,
		transform_hlds__accumulator__accu_stage3_20_0_i11);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i12);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i13);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i14);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i15);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__accumulator__accu_stage3_20_0_i16);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i17);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__accumulator__accu_stage3_20_0_i18);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__accumulator__accu_stage3_20_0_i19);
MR_def_label(transform_hlds__accumulator__accu_stage3_20_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module38)
	MR_init_entry1(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__should_attempt_accu_transform_2_16_0);
	MR_init_label10(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,67,4,5,7,9,10,11,13,19,17)
	MR_init_label9(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,22,15,26,28,42,30,32,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_attempt_accu_transform_2'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r10;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(18) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(19) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i4);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__accumulator__identify_out_and_out_prime_10_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i5);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(22) = MR_tempr1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_tempr2, 1) + (MR_Integer) 1);
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_sv(20) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	}
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i7);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(22);
	MR_r5 = MR_sv(21);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_stage1_2_9_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i9);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_tfield(0, MR_r1, 0);
	MR_sv(20) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(21);
	MR_sv(21) = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_tfield(0, MR_sv(22), 0);
	MR_sv(22) = MR_tfield(0, MR_r1, 3);
	MR_sv(23) = MR_tfield(0, MR_r1, 4);
	MR_sv(24) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__accumulator__set_upto_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i10);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i11);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(22);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(23);
	MR_tempr2 = MR_sv(24);
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i13);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i19);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i17);
	}
	MR_r2 = MR_sv(22);
	MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i15);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i22);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i3);
	}
	MR_r2 = MR_sv(22);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i42);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i26);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i28);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i3);
	}
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r7 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r5 = MR_sv(13);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_stage2_15_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i30);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(10);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_r8;
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(17);
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_sv(13);
	MR_r13 = MR_sv(14);
	MR_r14 = MR_sv(5);
	MR_r15 = MR_sv(1);
	MR_r16 = MR_sv(2);
	MR_r17 = MR_sv(19);
	MR_r18 = MR_sv(18);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_stage3_20_0,
		transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i32);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(25);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0_i67);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module39)
	MR_init_entry1(transform_hlds__accumulator__accu_standardize_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_standardize_2_0);
	MR_init_label2(transform_hlds__accumulator__accu_standardize_2_0,4,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_standardize'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_standardize_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_np_localtailcall(transform_hlds__accumulator__accu_standardize_2_0);
	}
MR_def_label(transform_hlds__accumulator__accu_standardize_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_standardize_2_0_i46);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_np_localtailcall(transform_hlds__accumulator__accu_standardize_2_0);
	}
MR_def_label(transform_hlds__accumulator__accu_standardize_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_4);

MR_BEGIN_MODULE(transform_hlds__accumulator_module40)
	MR_init_entry1(transform_hlds__accumulator__is_recursive_case_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__is_recursive_case_2_0);
	MR_init_label2(transform_hlds__accumulator__is_recursive_case_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_recursive_case'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__is_recursive_case_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__is_recursive_case_2_0_i2);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_4,
		transform_hlds__accumulator__is_recursive_case_2_0_i3);
MR_def_label(transform_hlds__accumulator__is_recursive_case_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__is_recursive_case_2_0,2)
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

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module41)
	MR_init_entry1(transform_hlds__accumulator__identify_goal_type_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__identify_goal_type_9_0);
	MR_init_label10(transform_hlds__accumulator__identify_goal_type_9_0,10,11,16,14,19,13,21,20,24,3)
	MR_init_label10(transform_hlds__accumulator__identify_goal_type_9_0,32,33,36,34,39,27,43,44,45,48)
	MR_init_label5(transform_hlds__accumulator__identify_goal_type_9_0,50,46,52,54,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identify_goal_type'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__identify_goal_type_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_sv(4) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i10);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i11);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__identify_goal_type_9_0_i14);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_4,
		transform_hlds__accumulator__identify_goal_type_9_0_i16);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_sv(1) != MR_r8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if ((MR_sv(2) != MR_r8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i19);
	}
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i13);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_r4;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__accumulator__identify_goal_type_9_0_i20);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_4,
		transform_hlds__accumulator__identify_goal_type_9_0_i21);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_sv(1) != MR_r8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	if ((MR_sv(2) != MR_r8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i24);
	}
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r4;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_sv(4), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i27);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i27);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i32);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i33);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__accumulator__is_recursive_case_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i36);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i34);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_r4;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__accumulator__is_recursive_case_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i39);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r4;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,6)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i43);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i44);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i45);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__accumulator__is_recursive_case_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i48);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i46);
	}
	MR_sv(1) = MR_sv(6);
	MR_sv(2) = MR_sv(3);
	MR_sv(3) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i50);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__accumulator__is_recursive_case_2_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i52);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__identify_goal_type_9_0_i1);
	}
	MR_sv(1) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_sv(6);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__identify_goal_type_9_0_i54);
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__accumulator__identify_goal_type_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module42)
	MR_init_entry1(transform_hlds__accumulator__identify_recursive_calls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__identify_recursive_calls_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identify_recursive_calls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__identify_recursive_calls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(solutions__solutions_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module43)
	MR_init_entry1(transform_hlds__accumulator__should_attempt_accu_transform_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__should_attempt_accu_transform_10_0);
	MR_init_label10(transform_hlds__accumulator__should_attempt_accu_transform_10_0,2,3,4,5,6,8,11,13,14,15)
	MR_init_label1(transform_hlds__accumulator__should_attempt_accu_transform_10_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_attempt_accu_transform'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__should_attempt_accu_transform_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(13) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i2);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i3);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i4);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__accumulator__accu_standardize_2_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i5);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__identify_goal_type_9_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i6);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__should_attempt_accu_transform_10_0_i1);
	}
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_init_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i8);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r4 = MR_sv(12);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r6 = MR_sv(11);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i11);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r4 = MR_sv(12);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,10,1);
	MR_r6 = MR_sv(9);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i13);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__identify_recursive_calls_4_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i14);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__accumulator__should_attempt_accu_transform_10_0_i15);
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_sv(11);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__accumulator__should_attempt_accu_transform_2_16_0);
	}
MR_def_label(transform_hlds__accumulator__should_attempt_accu_transform_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
MR_decl_entry(univ__det_univ_to_type_2_0);
MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(transform_hlds__accumulator_module44)
	MR_init_entry1(transform_hlds__accumulator__accu_transform_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_transform_proc_8_0);
	MR_init_label10(transform_hlds__accumulator__accu_transform_proc_8_0,2,3,4,7,9,98,11,12,13,10)
	MR_init_label10(transform_hlds__accumulator__accu_transform_proc_8_0,17,18,24,30,31,33,32,90,93,95)
	MR_init_label2(transform_hlds__accumulator__accu_transform_proc_8_0,6,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_transform_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__accumulator__accu_transform_proc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i2);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 346;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i3);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 149;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i4);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__should_attempt_accu_transform_10_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i7);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i6);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 42;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i9);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i11);
	}
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i10);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Accumulators introduced into ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i12);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i13);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i98);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i96);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i17);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i18);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i24);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i30);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(transform_hlds__accumulator__generate_warnings_4_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i31);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i33);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_GOTO_LAB(transform_hlds__accumulator__accu_transform_proc_8_0_i32);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,17);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,34);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i90);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,35);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		transform_hlds__accumulator__accu_transform_proc_8_0_i93);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		transform_hlds__accumulator__accu_transform_proc_8_0_i95);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
MR_def_label(transform_hlds__accumulator__accu_transform_proc_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module45)
	MR_init_entry1(transform_hlds__accumulator__accu_store_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_store_8_0);
	MR_init_label3(transform_hlds__accumulator__accu_store_8_0,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_store'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_store_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_det_insert_4_0,
		transform_hlds__accumulator__accu_store_8_0_i4);
MR_def_label(transform_hlds__accumulator__accu_store_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__accumulator__accu_store_8_0_i5);
MR_def_label(transform_hlds__accumulator__accu_store_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__accu_store_8_0_i6);
MR_def_label(transform_hlds__accumulator__accu_store_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module46)
	MR_init_entry1(transform_hlds__accumulator__accu_related_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__accu_related_5_0);
	MR_init_label7(transform_hlds__accumulator__accu_related_5_0,3,8,9,10,12,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accu_related'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__accu_related_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__accumulator__accu_related_5_0_i3);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_related_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__accumulator__accu_related_5_0_i7);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_all_ancestors_6_0,
		transform_hlds__accumulator__accu_related_5_0_i8);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		transform_hlds__accumulator__accu_related_5_0_i9);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__accumulator__accu_related_5_0_i10);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__accumulator__accu_related_5_0_i12);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__set__list_to_set_1_0);
	}
MR_def_label(transform_hlds__accumulator__accu_related_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.accu_related\'/5", 53);
	MR_r3 = (MR_Word) MR_string_const("more than one Id", 16);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__accumulator__accu_related_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.accumulator", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.accumulator.accu_related\'/5", 53);
	MR_r3 = (MR_Word) MR_string_const("no Id", 5);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module47)
	MR_init_entry1(transform_hlds__accumulator__acc_unification_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__acc_unification_2_0);
	MR_init_label5(transform_hlds__accumulator__acc_unification_2_0,2,3,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acc_unification'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__acc_unification_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		transform_hlds__accumulator__acc_unification_2_0_i2);
MR_def_label(transform_hlds__accumulator__acc_unification_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		transform_hlds__accumulator__acc_unification_2_0_i3);
MR_def_label(transform_hlds__accumulator__acc_unification_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tempr6 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tempr7 = MR_sv(1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,1,36);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__accumulator__acc_unification_2_0_i12);
MR_def_label(transform_hlds__accumulator__acc_unification_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		transform_hlds__accumulator__acc_unification_2_0_i13);
MR_def_label(transform_hlds__accumulator__acc_unification_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		transform_hlds__accumulator__acc_unification_2_0_i14);
MR_def_label(transform_hlds__accumulator__acc_unification_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module48)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_assoc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_assoc_0_0);
	MR_init_label4(__Unify___transform_hlds__accumulator__accu_assoc_0_0,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_assoc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_assoc_0_0_i9);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_assoc_0_0_i5);
MR_def_label(__Unify___transform_hlds__accumulator__accu_assoc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_assoc_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__accumulator__accu_assoc_0_0_i7);
MR_def_label(__Unify___transform_hlds__accumulator__accu_assoc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_assoc_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___transform_hlds__accumulator__accu_assoc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_assoc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module49)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_assoc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_assoc_0_0);
	MR_init_label5(__Compare___transform_hlds__accumulator__accu_assoc_0_0,3,2,6,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_assoc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_assoc_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_assoc_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_assoc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_assoc_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_assoc_0_0_i6);
MR_def_label(__Compare___transform_hlds__accumulator__accu_assoc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_assoc_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__accumulator__accu_assoc_0_0_i10);
MR_def_label(__Compare___transform_hlds__accumulator__accu_assoc_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_assoc_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_assoc_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module50)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_base_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_base_0_0);
	MR_init_label4(__Unify___transform_hlds__accumulator__accu_base_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_base_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_base_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_base_0_0_i4);
MR_def_label(__Unify___transform_hlds__accumulator__accu_base_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_base_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_base_0_0_i6);
MR_def_label(__Unify___transform_hlds__accumulator__accu_base_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_base_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__accumulator__accu_base_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_base_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module51)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_base_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_base_0_0);
	MR_init_label5(__Compare___transform_hlds__accumulator__accu_base_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_base_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_base_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_base_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_base_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_base_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_base_0_0_i5);
MR_def_label(__Compare___transform_hlds__accumulator__accu_base_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_base_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_base_0_0_i9);
MR_def_label(__Compare___transform_hlds__accumulator__accu_base_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_base_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_base_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module52)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module53)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module54)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_goal_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_goal_id_0_0);
	MR_init_label2(__Unify___transform_hlds__accumulator__accu_goal_id_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_goal_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_goal_id_0_0_i4);
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
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_goal_id_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__accumulator__accu_goal_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_goal_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module55)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_goal_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_goal_id_0_0);
	MR_init_label4(__Compare___transform_hlds__accumulator__accu_goal_id_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_goal_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_goal_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_goal_id_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_goal_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_goal_id_0_0,2)
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
		__Compare___transform_hlds__accumulator__accu_goal_id_0_0_i5);
MR_def_label(__Compare___transform_hlds__accumulator__accu_goal_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_goal_id_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_goal_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module56)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_goal_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_goal_store_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_goal_store_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal);
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

MR_BEGIN_MODULE(transform_hlds__accumulator_module57)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_goal_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_goal_store_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_goal_store_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module58)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_sets_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_sets_0_0);
	MR_init_label7(__Unify___transform_hlds__accumulator__accu_sets_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_sets_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i16);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
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
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_sets_0_0_i4);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_sets_0_0_i6);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_sets_0_0_i8);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_sets_0_0_i10);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___transform_hlds__accumulator__accu_sets_0_0_i12);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_sets_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_sets_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module59)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_sets_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_sets_0_0);
	MR_init_label8(__Compare___transform_hlds__accumulator__accu_sets_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_sets_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_sets_0_0_i5);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_sets_0_0_i9);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_sets_0_0_i13);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_sets_0_0_i17);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___transform_hlds__accumulator__accu_sets_0_0_i21);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_sets_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_sets_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module60)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_subst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_subst_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_subst_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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


MR_BEGIN_MODULE(transform_hlds__accumulator_module61)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_subst_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_subst_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_subst_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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


MR_BEGIN_MODULE(transform_hlds__accumulator_module62)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_substs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_substs_0_0);
	MR_init_label5(__Unify___transform_hlds__accumulator__accu_substs_0_0,5,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_substs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_substs_0_0_i13);
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
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__accumulator__accu_substs_0_0_i5);
MR_def_label(__Unify___transform_hlds__accumulator__accu_substs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_substs_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__accumulator__accu_substs_0_0_i7);
MR_def_label(__Unify___transform_hlds__accumulator__accu_substs_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_substs_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__accumulator__accu_substs_0_0_i9);
MR_def_label(__Unify___transform_hlds__accumulator__accu_substs_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_substs_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__accumulator__accu_substs_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_substs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module63)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_substs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_substs_0_0);
	MR_init_label6(__Compare___transform_hlds__accumulator__accu_substs_0_0,3,2,6,11,16,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_substs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_substs_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_substs_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,2)
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
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__accumulator__accu_substs_0_0_i6);
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_substs_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__accumulator__accu_substs_0_0_i11);
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_substs_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__accumulator__accu_substs_0_0_i16);
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_substs_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_substs_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module64)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_warning_0_0);
	MR_init_label4(__Unify___transform_hlds__accumulator__accu_warning_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_warning_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___transform_hlds__accumulator__accu_warning_0_0_i4);
MR_def_label(__Unify___transform_hlds__accumulator__accu_warning_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_warning_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_warning_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___transform_hlds__accumulator__accu_warning_0_0_i6);
MR_def_label(__Unify___transform_hlds__accumulator__accu_warning_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__accu_warning_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___transform_hlds__accumulator__accu_warning_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__accu_warning_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module65)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_warning_0_0);
	MR_init_label6(__Compare___transform_hlds__accumulator__accu_warning_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_warning_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_warning_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,2)
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
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___transform_hlds__accumulator__accu_warning_0_0_i5);
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_warning_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__accumulator__accu_warning_0_0_i9);
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_warning_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___transform_hlds__accumulator__accu_warning_0_0_i13);
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__accu_warning_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___transform_hlds__accumulator__accu_warning_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module66)
	MR_init_entry1(__Unify___transform_hlds__accumulator__accu_warnings_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__accu_warnings_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__accu_warnings_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_warning);
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

MR_BEGIN_MODULE(transform_hlds__accumulator_module67)
	MR_init_entry1(__Compare___transform_hlds__accumulator__accu_warnings_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__accu_warnings_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__accu_warnings_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_warning);
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

MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module68)
	MR_init_entry1(__Unify___transform_hlds__accumulator__store_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__store_info_0_0);
	MR_init_label3(__Unify___transform_hlds__accumulator__store_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__store_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__store_info_0_0_i8);
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
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__store_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___transform_hlds__accumulator__store_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__accumulator__store_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__accumulator__store_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__accumulator__store_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__accumulator__store_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module69)
	MR_init_entry1(__Compare___transform_hlds__accumulator__store_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__store_info_0_0);
	MR_init_label5(__Compare___transform_hlds__accumulator__store_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__store_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__store_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__accumulator__store_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__accumulator__store_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__accumulator__store_info_0_0,2)
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
		__Compare___transform_hlds__accumulator__store_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__accumulator__store_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__store_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___transform_hlds__accumulator__store_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__accumulator__store_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__accumulator__store_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__goal_store, stored_goal);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__accumulator__store_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module70)
	MR_init_entry1(__Unify___transform_hlds__accumulator__top_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__accumulator__top_level_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__accumulator__top_level_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module71)
	MR_init_entry1(__Compare___transform_hlds__accumulator__top_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__accumulator__top_level_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__accumulator__top_level_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module72)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0);
	MR_init_label1(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_recursive_calls__594__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.accumulator.IntroducedFrom__pred__identify_recursive_calls__594__1/4-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0_i1);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__identify_recursive_calls__594__1_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_fv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if ((MR_fv(2) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module73)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__639__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__639__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_out_and_out_prime__639__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__639__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pair__fst_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module74)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__644__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__644__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_out_and_out_prime__644__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__644__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(pair__fst_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pair__snd_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module75)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__645__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__645__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_out_and_out_prime__645__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__645__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(pair__snd_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module76)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__649__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__649__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_out_and_out_prime__649__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__identify_out_and_out_prime__649__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__assertion__is_update_assertion_5_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module77)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_is_update__1048__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_is_update__1048__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(hlds__assertion__is_update_assertion_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__assertion__is_construction_equivalence_assertion_4_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module78)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1069__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1069__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__is_associative_construction__1069__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__is_associative_construction__1069__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(hlds__assertion__is_construction_equivalence_assertion_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module79)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0);
	MR_init_label2(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_stage2__1126__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0_i2);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0_i3);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_stage2__1126__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module80)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1375__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1375__1_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_divide_base_case__1375__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_divide_base_case__1375__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(transform_hlds__goal_store__goal_store_all_ancestors_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module81)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0);
	MR_init_label6(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,1,3,4,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_related__1394__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.accumulator.IntroducedFrom__pred__accu_related__1394__1/5-0", 5,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i1);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(4) = MR_tfield(0, MR_r2, 1);
	MR_fv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i3);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i4);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_changed_vars_5_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i5);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i7);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0_i9);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1394__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module82)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1412__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1412__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_related__1412__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_related__1412__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module83)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1503__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1503__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__acc_proc_info__1503__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1503__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module84)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1519__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1519__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__acc_proc_info__1519__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__acc_proc_info__1519__1_3_0)
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

MR_decl_entry(fn__term__var_to_int_1_0);

MR_BEGIN_MODULE(transform_hlds__accumulator_module85)
	MR_init_entry1(fn__transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1557__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1557__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__acc_pred_info__1557__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__accumulator__IntroducedFrom__func__acc_pred_info__1557__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__term__var_to_int_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module86)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0);
	MR_init_label2(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_rename__1852__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0_i2);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0_i3);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_rename__1852__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__goal_store__goal_store_det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module87)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0);
	MR_init_label1(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__base_case_ids__1864__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.accumulator.IntroducedFrom__pred__base_case_ids__1864__1/2-0", 0,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_member_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0_i1);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__base_case_ids__1864__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__accumulator_module88)
	MR_init_entry1(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0);
	MR_init_label1(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__accu_goal_list__1880__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__accumulator, accu_goal_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__goal_store__goal_store_lookup_3_0,
		transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0_i2);
MR_def_label(transform_hlds__accumulator__IntroducedFrom__pred__accu_goal_list__1880__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__accumulator_maybe_bunch_0(void)
{
	transform_hlds__accumulator_module0();
	transform_hlds__accumulator_module1();
	transform_hlds__accumulator_module2();
	transform_hlds__accumulator_module3();
	transform_hlds__accumulator_module4();
	transform_hlds__accumulator_module5();
	transform_hlds__accumulator_module6();
	transform_hlds__accumulator_module7();
	transform_hlds__accumulator_module8();
	transform_hlds__accumulator_module9();
	transform_hlds__accumulator_module10();
	transform_hlds__accumulator_module11();
	transform_hlds__accumulator_module12();
	transform_hlds__accumulator_module13();
	transform_hlds__accumulator_module14();
	transform_hlds__accumulator_module15();
	transform_hlds__accumulator_module16();
	transform_hlds__accumulator_module17();
	transform_hlds__accumulator_module18();
	transform_hlds__accumulator_module19();
	transform_hlds__accumulator_module20();
	transform_hlds__accumulator_module21();
	transform_hlds__accumulator_module22();
	transform_hlds__accumulator_module23();
	transform_hlds__accumulator_module24();
	transform_hlds__accumulator_module25();
	transform_hlds__accumulator_module26();
	transform_hlds__accumulator_module27();
	transform_hlds__accumulator_module28();
	transform_hlds__accumulator_module29();
	transform_hlds__accumulator_module30();
	transform_hlds__accumulator_module31();
	transform_hlds__accumulator_module32();
	transform_hlds__accumulator_module33();
	transform_hlds__accumulator_module34();
	transform_hlds__accumulator_module35();
	transform_hlds__accumulator_module36();
	transform_hlds__accumulator_module37();
	transform_hlds__accumulator_module38();
	transform_hlds__accumulator_module39();
}

static void mercury__transform_hlds__accumulator_maybe_bunch_1(void)
{
	transform_hlds__accumulator_module40();
	transform_hlds__accumulator_module41();
	transform_hlds__accumulator_module42();
	transform_hlds__accumulator_module43();
	transform_hlds__accumulator_module44();
	transform_hlds__accumulator_module45();
	transform_hlds__accumulator_module46();
	transform_hlds__accumulator_module47();
	transform_hlds__accumulator_module48();
	transform_hlds__accumulator_module49();
	transform_hlds__accumulator_module50();
	transform_hlds__accumulator_module51();
	transform_hlds__accumulator_module52();
	transform_hlds__accumulator_module53();
	transform_hlds__accumulator_module54();
	transform_hlds__accumulator_module55();
	transform_hlds__accumulator_module56();
	transform_hlds__accumulator_module57();
	transform_hlds__accumulator_module58();
	transform_hlds__accumulator_module59();
	transform_hlds__accumulator_module60();
	transform_hlds__accumulator_module61();
	transform_hlds__accumulator_module62();
	transform_hlds__accumulator_module63();
	transform_hlds__accumulator_module64();
	transform_hlds__accumulator_module65();
	transform_hlds__accumulator_module66();
	transform_hlds__accumulator_module67();
	transform_hlds__accumulator_module68();
	transform_hlds__accumulator_module69();
	transform_hlds__accumulator_module70();
	transform_hlds__accumulator_module71();
	transform_hlds__accumulator_module72();
	transform_hlds__accumulator_module73();
	transform_hlds__accumulator_module74();
	transform_hlds__accumulator_module75();
	transform_hlds__accumulator_module76();
	transform_hlds__accumulator_module77();
	transform_hlds__accumulator_module78();
	transform_hlds__accumulator_module79();
}

static void mercury__transform_hlds__accumulator_maybe_bunch_2(void)
{
	transform_hlds__accumulator_module80();
	transform_hlds__accumulator_module81();
	transform_hlds__accumulator_module82();
	transform_hlds__accumulator_module83();
	transform_hlds__accumulator_module84();
	transform_hlds__accumulator_module85();
	transform_hlds__accumulator_module86();
	transform_hlds__accumulator_module87();
	transform_hlds__accumulator_module88();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__accumulator__init(void);
void mercury__transform_hlds__accumulator__init_type_tables(void);
void mercury__transform_hlds__accumulator__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__accumulator__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__accumulator__init_complexity_procs(void);
#endif

void mercury__transform_hlds__accumulator__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__accumulator_maybe_bunch_0();
	mercury__transform_hlds__accumulator_maybe_bunch_1();
	mercury__transform_hlds__accumulator_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_assoc_0,
		transform_hlds__accumulator__accu_assoc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_base_0,
		transform_hlds__accumulator__accu_base_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0,
		transform_hlds__accumulator__accu_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0,
		transform_hlds__accumulator__accu_goal_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_store_0,
		transform_hlds__accumulator__accu_goal_store_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_sets_0,
		transform_hlds__accumulator__accu_sets_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_subst_0,
		transform_hlds__accumulator__accu_subst_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_substs_0,
		transform_hlds__accumulator__accu_substs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0,
		transform_hlds__accumulator__accu_warning_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warnings_0,
		transform_hlds__accumulator__accu_warnings_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_store_info_0,
		transform_hlds__accumulator__store_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__accumulator__type_ctor_info_top_level_0,
		transform_hlds__accumulator__top_level_0_0);
	mercury__transform_hlds__accumulator__init_debugger();
}

void mercury__transform_hlds__accumulator__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_assoc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_base_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_goal_store_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_sets_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_subst_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_substs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warning_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_accu_warnings_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_store_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__accumulator__type_ctor_info_top_level_0);
	}
}


void mercury__transform_hlds__accumulator__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__accumulator__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__accumulator);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__accumulator__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
