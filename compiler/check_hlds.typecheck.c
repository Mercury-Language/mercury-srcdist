/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__typecheck__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "check_hlds.typecheck.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 32 "check_hlds.typecheck.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.typecheck.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "check_hlds.typecheck.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "check_hlds.typecheck.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "check_hlds.typecheck.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "check_hlds.typecheck.c"
#line 53 "check_hlds.typecheck.c"
#include "check_hlds.typecheck.mh"

#line 56 "check_hlds.typecheck.c"
#line 57 "check_hlds.typecheck.c"
#ifndef CHECK_HLDS__TYPECHECK_DECL_GUARD
#define CHECK_HLDS__TYPECHECK_DECL_GUARD

#line 61 "check_hlds.typecheck.c"
#line 62 "check_hlds.typecheck.c"

#endif
#line 65 "check_hlds.typecheck.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__typecheck__type_ctor_info_cons_constraints_action_0,
	mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0,
	mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0,
	mercury_data_check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0,
	mercury_data_check_hlds__typecheck__type_ctor_info_stuff_to_check_0;
MR_decl_label1(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0, 2)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0, 5,6,7,4,9,10,11,13,14,16)
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0, 17,1)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0, 58,3,7,5,12,15,18,19,20,17)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0, 13,26,27,30,11,62)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0, 58,3,7,5,12,15,18,19,20,17)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0, 13,26,27,30,11,62)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0, 40,3,5,4,9,10,11,12,14,15)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0, 16,18,19,7,22,23,24,25)
MR_decl_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0, 10,3,4)
MR_decl_label2(check_hlds__typecheck__apply_var_renaming_to_var_3_0, 4,2)
MR_decl_label10(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0, 2,4,6,8,10,11,12,13,17,21)
MR_decl_label2(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0, 22,1)
MR_decl_label5(check_hlds__typecheck__builtin_field_access_function_type_5_0, 3,5,7,10,1)
MR_decl_label8(check_hlds__typecheck__builtin_pred_type_5_0, 3,5,6,7,9,10,4,1)
MR_decl_label1(check_hlds__typecheck__check_existq_clause_5_0, 2)
MR_decl_label5(check_hlds__typecheck__check_mention_existq_var_5_0, 2,3,6,4,8)
MR_decl_label4(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0, 3,5,7,1)
MR_decl_label10(check_hlds__typecheck__construct_type_inference_messages_5_0, 73,3,4,5,7,9,10,13,15,16)
MR_decl_label10(check_hlds__typecheck__construct_type_inference_messages_5_0, 18,19,20,21,22,25,26,24,38,6)
MR_decl_label10(check_hlds__typecheck__convert_cons_defn_5_1, 3,4,5,6,7,8,9,15,16,20)
MR_decl_label10(check_hlds__typecheck__convert_cons_defn_5_1, 23,24,10,11,29,30,34,37,38,28)
MR_decl_label7(check_hlds__typecheck__convert_cons_defn_5_1, 41,46,47,49,51,48,54)
MR_decl_label3(check_hlds__typecheck__convert_cons_defn_list_5_0, 14,4,5)
MR_decl_label10(check_hlds__typecheck__convert_field_access_cons_type_info_7_0, 3,4,2,13,15,21,23,28,29,30)
MR_decl_label10(check_hlds__typecheck__convert_field_access_cons_type_info_7_0, 32,33,34,35,36,39,41,42,43,44)
MR_decl_label8(check_hlds__typecheck__convert_field_access_cons_type_info_7_0, 45,46,47,50,51,52,37,57)
MR_decl_label7(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0, 20,4,5,8,9,10,11)
MR_decl_label8(check_hlds__typecheck__ensure_vars_have_a_type_3_0, 21,5,6,7,9,10,11,12)
MR_decl_label10(check_hlds__typecheck__generate_stub_clause_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__typecheck__generate_stub_clause_4_0, 14,13,16,17,18,20,21,22,29,30)
MR_decl_label2(check_hlds__typecheck__generate_stub_clause_4_0, 31,32)
MR_decl_label8(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0, 15,3,4,5,6,7,8,9)
MR_decl_label7(check_hlds__typecheck__infer_existential_types_4_0, 3,4,5,6,7,8,9)
MR_decl_label3(check_hlds__typecheck__is_head_class_constraint_2_0, 6,9,5)
MR_decl_label10(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0, 3,4,5,9,27,11,13,15,19,18)
MR_decl_label5(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0, 20,31,22,23,1)
MR_decl_label10(check_hlds__typecheck__make_pred_cons_info_list_7_0, 91,3,4,5,6,7,8,9,10,15)
MR_decl_label10(check_hlds__typecheck__make_pred_cons_info_list_7_0, 17,18,14,11,28,27,31,33,35,36)
MR_decl_label5(check_hlds__typecheck__make_pred_cons_info_list_7_0, 34,37,30,25,95)
MR_decl_label10(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0, 2,3,4,6,8,10,12,14,15,16)
MR_decl_label10(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0, 17,18,19,21,24,25,26,30,31,32)
MR_decl_label5(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0, 33,34,35,36,5)
MR_decl_label4(check_hlds__typecheck__project_and_rename_constraints_6_0, 3,5,6,7)
MR_decl_label5(check_hlds__typecheck__project_constraint_2_0, 2,4,5,8,1)
MR_decl_label10(check_hlds__typecheck__rename_apart_7_0, 21,3,4,5,6,7,8,9,10,12)
MR_decl_label1(check_hlds__typecheck__rename_apart_7_0, 13)
MR_decl_label5(check_hlds__typecheck__rename_constraint_3_0, 3,5,2,7,8)
MR_decl_label4(check_hlds__typecheck__rename_instance_method_constraints_3_0, 4,5,6,2)
MR_decl_label2(check_hlds__typecheck__restrict_to_head_vars_4_0, 3,4)
MR_decl_label8(check_hlds__typecheck__same_structure_2_4_0, 37,6,8,10,12,13,38,1)
MR_decl_label4(check_hlds__typecheck__skip_arg_2_0, 20,5,4,8)
MR_decl_label5(check_hlds__typecheck__split_cons_errors_3_0, 8,9,5,4,2)
MR_decl_label9(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0, 2,5,8,9,10,7,3,16,17)
MR_decl_label10(check_hlds__typecheck__type_assign_get_types_of_vars_4_0, 29,4,7,5,9,10,11,14,15,17)
MR_decl_label5(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0, 3,4,5,6,7)
MR_decl_label10(check_hlds__typecheck__typecheck_call_pred_6_0, 2,4,5,6,11,12,13,14,15,17)
MR_decl_label10(check_hlds__typecheck__typecheck_call_pred_6_0, 16,22,23,24,8,27,28,29,3,31)
MR_decl_label2(check_hlds__typecheck__typecheck_call_pred_6_0, 32,33)
MR_decl_label10(check_hlds__typecheck__typecheck_call_pred_id_5_0, 2,3,4,5,6,8,7,13,14,15)
MR_decl_label10(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0, 56,6,12,13,14,15,17,18,19,20)
MR_decl_label6(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0, 21,23,34,25,8,3)
MR_decl_label5(check_hlds__typecheck__typecheck_clause_list_6_0, 19,5,6,9,10)
MR_decl_label6(check_hlds__typecheck__typecheck_event_call_4_0, 2,5,9,7,4,15)
MR_decl_label10(check_hlds__typecheck__typecheck_functor_type_4_0, 43,3,4,7,10,11,12,14,9,5)
MR_decl_label3(check_hlds__typecheck__typecheck_functor_type_4_0, 20,21,22)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_4_0, 2,3,6,8,5,11,13,15,17,14)
MR_decl_label7(check_hlds__typecheck__typecheck_goal_4_0, 19,22,24,21,20,12,28)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 119,121,122,41,43,46,47,48,16,17)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 18,26,21,22,24,127,3,6,7,8)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 9,10,11,13,14,32,33,34,35,36)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 38,39,50,51,57,64,65,130,73,100)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 102,107,108,109,110,111,94,95,96,75)
MR_decl_label10(check_hlds__typecheck__typecheck_goal_2_5_0, 77,78,79,80,83,85,88,90,91,116)
MR_decl_label1(check_hlds__typecheck__typecheck_goal_2_5_0, 117)
MR_decl_label3(check_hlds__typecheck__typecheck_goal_list_4_0, 14,4,5)
MR_decl_label8(check_hlds__typecheck__typecheck_higher_order_call_5_0, 3,4,5,7,8,9,10,13)
MR_decl_label8(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0, 2,6,11,13,15,18,9,4)
MR_decl_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0, 2,3,8,10,4,5,11,15,19,21)
MR_decl_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0, 13,22,25,23,27,28,29,30,49,39)
MR_decl_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0, 35,41,42,104,44,105,34,53,54,31)
MR_decl_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0, 32,58,61,60,65,66,68,69,72,59)
MR_decl_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0, 76,79,77,84,83,86,87,88,89,90)
MR_decl_label10(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0, 41,3,4,5,6,9,12,13,14,11)
MR_decl_label3(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0, 7,20,21)
MR_decl_label6(check_hlds__typecheck__typecheck_module_4_0, 2,3,4,5,6,7)
MR_decl_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0, 92,3,4,5,8,6,14,17,20,21)
MR_decl_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0, 23,24,25,26,16,13,28,30,32,12)
MR_decl_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0, 34,35,36,38,39,10,40,41,42,43)
MR_decl_label7(check_hlds__typecheck__typecheck_module_one_iteration_8_0, 46,45,48,49,50,51,52)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 2,5,6,7,8,3,9,10,11,12)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 13,14,17,20,146,22,19,24,16,26)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 29,31,25,35,37,15,40,41,42,43)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 44,45,48,49,51,53,50,55,56,57)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 58,60,61,62,63,64,65,68,66,70)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 71,72,73,74,75,76,77,78,80,81)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 83,84,82,85,86,87,88,89,90,91)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 92,93,94,95,96,97,100,101,103,105)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 106,107,108,109,102,110,111,112,113,114)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 115,116,99,117,118,119,120,121,123,124)
MR_decl_label10(check_hlds__typecheck__typecheck_pred_8_0, 122,127,47,129,130,132,135,136,137,138)
MR_decl_label3(check_hlds__typecheck__typecheck_pred_8_0, 139,131,140)
MR_decl_label10(check_hlds__typecheck__typecheck_to_fixpoint_7_0, 59,2,3,7,9,6,4,11,13,14)
MR_decl_label3(check_hlds__typecheck__typecheck_to_fixpoint_7_0, 15,12,16)
MR_decl_label9(check_hlds__typecheck__typecheck_unification_6_0, 7,11,12,8,15,17,3,4,5)
MR_decl_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0, 4,8,14,15,10,2,23,24,27,26)
MR_decl_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0, 31,35,32,37,38,42,43,39,44,45)
MR_decl_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0, 47,30,55,57,58,62,59,64,65,69)
MR_decl_label7(check_hlds__typecheck__typecheck_unify_var_functor_6_0, 70,66,71,72,78,74,81)
MR_decl_label3(check_hlds__typecheck__typecheck_unify_var_var_4_0, 2,6,3)
MR_decl_label10(check_hlds__typecheck__typecheck_unify_var_var_2_5_0, 80,3,4,7,10,13,14,15,12,9)
MR_decl_label10(check_hlds__typecheck__typecheck_unify_var_var_2_5_0, 20,5,26,28,24,31,32,33,36,40)
MR_decl_label3(check_hlds__typecheck__typecheck_unify_var_var_2_5_0, 42,37,44)
MR_decl_label10(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0, 45,3,4,9,12,13,14,11,7,21)
MR_decl_label3(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0, 22,6,49)
MR_decl_label10(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0, 38,4,3,7,12,11,15,17,18,8)
MR_decl_label3(check_hlds__typecheck__typecheck_var_has_type_4_0, 2,6,3)
MR_decl_label10(check_hlds__typecheck__typecheck_var_has_type_2_5_0, 39,3,4,7,10,11,12,9,5,18)
MR_decl_label1(check_hlds__typecheck__typecheck_var_has_type_2_5_0, 19)
MR_decl_label7(check_hlds__typecheck__typecheck_var_has_type_list_5_0, 46,3,10,14,15,11,8)
MR_decl_label3(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0, 6,7,2)
MR_decl_label3(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0, 3,5,2)
MR_decl_label3(__Unify___check_hlds__typecheck__cons_type_0_0, 4,8,1)
MR_decl_label3(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0, 16,5,1)
MR_decl_label4(__Compare___check_hlds__typecheck__cons_type_0_0, 3,2,5,21)
MR_decl_label5(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0, 3,2,7,5,10)
MR_decl_static(check_hlds__typecheck__construct_type_inference_messages_5_0)
MR_decl_static(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0)
MR_decl_static(check_hlds__typecheck__generate_stub_clause_4_0)
MR_decl_static(check_hlds__typecheck__rename_instance_method_constraints_3_0)
MR_decl_static(check_hlds__typecheck__infer_existential_types_4_0)
MR_decl_static(check_hlds__typecheck__restrict_to_head_vars_4_0)
MR_decl_static(check_hlds__typecheck__same_structure_2_4_0)
MR_decl_static(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0)
MR_decl_static(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0)
MR_decl_static(fn__check_hlds__typecheck__this_file_0_0)
MR_decl_static(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0)
MR_decl_static(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0)
MR_decl_static(check_hlds__typecheck__rename_apart_7_0)
MR_decl_static(check_hlds__typecheck__skip_arg_2_0)
MR_decl_static(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0)
MR_decl_static(check_hlds__typecheck__ensure_vars_have_a_type_3_0)
MR_decl_static(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0)
MR_decl_static(check_hlds__typecheck__typecheck_higher_order_call_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_var_has_type_2_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_var_has_type_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_var_has_type_list_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_event_call_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_call_pred_id_5_0)
MR_decl_static(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0)
MR_decl_static(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0)
MR_decl_static(check_hlds__typecheck__typecheck_call_pred_6_0)
MR_decl_static(check_hlds__typecheck__typecheck_unify_var_var_2_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_unify_var_var_4_0)
MR_decl_static(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0)
MR_decl_static(check_hlds__typecheck__typecheck_functor_type_4_0)
MR_decl_static(check_hlds__typecheck__builtin_field_access_function_type_5_0)
MR_decl_static(check_hlds__typecheck__make_pred_cons_info_list_7_0)
MR_decl_static(check_hlds__typecheck__builtin_pred_type_5_0)
MR_decl_static(check_hlds__typecheck__split_cons_errors_3_0)
MR_decl_static(check_hlds__typecheck__convert_cons_defn_5_1)
MR_decl_static(check_hlds__typecheck__convert_cons_defn_list_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0)
MR_decl_static(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0)
MR_decl_static(check_hlds__typecheck__typecheck_unify_var_functor_6_0)
MR_decl_static(check_hlds__typecheck__type_assign_get_types_of_vars_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0)
MR_decl_static(check_hlds__typecheck__typecheck_goal_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_goal_2_5_0)
MR_decl_static(check_hlds__typecheck__typecheck_goal_list_4_0)
MR_decl_static(check_hlds__typecheck__typecheck_unification_6_0)
MR_decl_static(check_hlds__typecheck__typecheck_clause_list_6_0)
MR_decl_static(check_hlds__typecheck__apply_var_renaming_to_var_list_3_0)
MR_decl_static(check_hlds__typecheck__typecheck_pred_8_0)
MR_decl_static(check_hlds__typecheck__typecheck_module_one_iteration_8_0)
MR_decl_static(check_hlds__typecheck__typecheck_to_fixpoint_7_0)
MR_def_extern_entry(check_hlds__typecheck__typecheck_module_4_0)
MR_decl_static(check_hlds__typecheck__check_existq_clause_5_0)
MR_decl_static(check_hlds__typecheck__check_mention_existq_var_5_0)
MR_decl_static(check_hlds__typecheck__is_head_class_constraint_2_0)
MR_decl_static(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0)
MR_decl_static(check_hlds__typecheck__apply_var_renaming_to_var_3_0)
MR_decl_static(check_hlds__typecheck__project_and_rename_constraints_6_0)
MR_decl_static(check_hlds__typecheck__convert_field_access_cons_type_info_7_0)
MR_decl_static(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0)
MR_decl_static(check_hlds__typecheck__project_constraint_2_0)
MR_decl_static(check_hlds__typecheck__rename_constraint_3_0)
MR_decl_static(__Unify___check_hlds__typecheck__cons_constraints_action_0_0)
MR_decl_static(__Compare___check_hlds__typecheck__cons_constraints_action_0_0)
MR_decl_static(__Unify___check_hlds__typecheck__cons_type_0_0)
MR_decl_static(__Compare___check_hlds__typecheck__cons_type_0_0)
MR_decl_static(__Unify___check_hlds__typecheck__cons_type_assign_set_0_0)
MR_decl_static(__Compare___check_hlds__typecheck__cons_type_assign_set_0_0)
MR_decl_static(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0)
MR_decl_static(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0)
MR_decl_static(__Unify___check_hlds__typecheck__stuff_to_check_0_0)
MR_decl_static(__Compare___check_hlds__typecheck__stuff_to_check_0_0)
MR_decl_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__447__1_2_0)
MR_decl_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0)
MR_decl_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1346__1_2_0)
MR_decl_static(check_hlds__typecheck__IntroducedFrom__pred__get_field_access_constructor__2726__1_2_0)
MR_decl_static(fn__check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3138__2_1_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[8] =
{
{
4,
MR_string_const("Inferred", 8)
},
{
4,
MR_string_const("Type inference iteration limit exceeded.", 40)
},
{
4,
MR_string_const("This probably indicates that your program has a type error.", 59)
},
{
4,
MR_string_const("You should declare the types explicitly.", 40)
},
{
4,
MR_string_const("(The current limit is", 21)
},
{
4,
MR_string_const("iterations.", 11)
},
{
4,
MR_string_const("You can use the \140--type-inference-iteration-limit\' option", 57)
},
{
4,
MR_string_const("to increase the limit).", 23)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_1 mercury_common_1[18] =
{
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,2)
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
MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
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
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_TAG_COMMON(3,0,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,6),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,0,5),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(1,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__restrict_to_head_vars_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__convert_cons_defn_5_1_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_atomic_goal_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
static const struct mercury_type_2 mercury_common_2[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__restrict_to_head_vars_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__convert_cons_defn_5_1_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,7)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, atomic_goal_type),
MR_CTOR0_ADDR(hlds__hlds_goal, atomic_goal_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,12),
MR_COMMON(1,12)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,17),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
1
},
{
0
},
{
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__builtin_field_access_function_type_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_field_access_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__builtin_field_access_function_type_5_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, field_access_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn),
MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, field_access_type),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn),
MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info)
}
},
};

MR_decl_entry(fn__check_hlds__typecheck_info__project_cons_type_info_source_1_0);
MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_5 mercury_common_5[4] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3138__2_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__check_hlds__typecheck_info__project_cons_type_info_source_1_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_string_const("{}", 2)
},
{
MR_string_const("tuple", 5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__check_existq_clause_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(1,7),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_COMMON(1,3),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__check_existq_clause_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,11),
MR_CTOR0_ADDR(parse_tree__prog_data, pragma_foreign_code_impl),
MR_COMMON(1,16),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(11,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_CTOR1_ADDR(term, var),
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_11 mercury_common_11[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(10,0),
MR_COMMON(10,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign),
MR_CTOR0_ADDR(check_hlds__typecheck, cons_type)
}
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__apply_var_renaming_to_var_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck__apply_var_renaming_to_var_list_3_0_1,
MR_COMMON(12,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(11,0),
MR_COMMON(10,0),
MR_COMMON(10,0)
}
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
	"flip_constraints_for_new",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
	"flip_constraints_for_field_set",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
	"do_not_flip_constraints",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[] = {
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[] = {
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck__functor_number_map_cons_constraints_action_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_cons_constraints_action_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck__cons_constraints_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck__cons_constraints_action_0_0)),
	"check_hlds.typecheck",
	"cons_constraints_action",
	{ (void *)mercury_data_check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
	{ (void *)mercury_data_check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0 },
	3,
	4,
	mercury_data_check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck__field_types_cons_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck__du_functor_desc_cons_type_0_0 = {
	"cons_type",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck__field_types_cons_type_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck__du_stag_ordered_cons_type_0_0[] = {
	&mercury_data_check_hlds__typecheck__du_functor_desc_cons_type_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck__du_ptag_ordered_cons_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck__du_stag_ordered_cons_type_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck__du_name_ordered_cons_type_0[] = {
	&mercury_data_check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck__functor_number_map_cons_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck__cons_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck__cons_type_0_0)),
	"check_hlds.typecheck",
	"cons_type",
	{ (void *)mercury_data_check_hlds__typecheck__du_name_ordered_cons_type_0 },
	{ (void *)mercury_data_check_hlds__typecheck__du_ptag_ordered_cons_type_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck__functor_number_map_cons_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0,
	(MR_TypeInfo) &mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck__cons_type_assign_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck__cons_type_assign_set_0_0)),
	"check_hlds.typecheck",
	"cons_type_assign_set",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 = {
	"ok",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck__field_types_maybe_cons_type_info_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck__field_types_maybe_cons_type_info_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[] = {
	&mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[] = {
	&mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[] = {
	&mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
	&mercury_data_check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0)),
	"check_hlds.typecheck",
	"maybe_cons_type_info",
	{ (void *)mercury_data_check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
	{ (void *)mercury_data_check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
	2,
	4,
	mercury_data_check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
	"clause_only",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
	"whole_pred",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[] = {
	&mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[] = {
	&mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
	&mercury_data_check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

const MR_Integer mercury_data_check_hlds__typecheck__functor_number_map_stuff_to_check_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck__type_ctor_info_stuff_to_check_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck__stuff_to_check_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck__stuff_to_check_0_0)),
	"check_hlds.typecheck",
	"stuff_to_check",
	{ (void *)mercury_data_check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
	{ (void *)mercury_data_check_hlds__typecheck__enum_value_ordered_stuff_to_check_0 },
	2,
	4,
	mercury_data_check_hlds__typecheck__functor_number_map_stuff_to_check_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"lambda_typecheck_m_2726",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
2726,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_2 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"rename_constraint",
3,
0
},
"check_hlds.typecheck",
"typecheck.m",
2889,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__project_and_rename_constraints_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"project_constraint",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
2888,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__check_existq_clause_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"check_mention_existq_var",
5,
0
},
"check_hlds.typecheck",
"typecheck.m",
679,
"d1;c7;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"lambda_typecheck_m_447",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
447,
"d1;c17;q;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_pred_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"check_existq_clause",
5,
0
},
"check_hlds.typecheck",
"typecheck.m",
621,
"d1;c17;q;c7;d2;c33;d2;c4;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__apply_var_renaming_to_var_list_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"apply_var_renaming_to_var",
3,
0
},
"check_hlds.typecheck",
"typecheck.m",
2363,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"lambda_typecheck_m_1346",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
1346,
"d1;c6;d11;c2;d2;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"lambda_typecheck_m_1343",
3,
0
},
"check_hlds.typecheck",
"typecheck.m",
1343,
"d1;c6;d11;c2;d2;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_goal_2_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
1301,
"d1;c6;d10;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_info",
"check_hlds.typecheck_info",
"project_cons_type_info_source",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
2029,
"d1;c7;e;c3;d2;c1;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_unify_var_functor_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"type_assign_check_functor_type_builtin",
5,
0
},
"check_hlds.typecheck",
"typecheck.m",
1987,
"d1;c7;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"make_field_access_function_cons_type_info",
8,
0
},
"check_hlds.typecheck",
"typecheck.m",
2672,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__convert_cons_defn_5_1_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck",
"check_hlds.typecheck",
"lambda2_typecheck_m_3138",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
3138,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__builtin_field_access_function_type_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"make_field_access_function_cons_type_info",
8,
0
},
"check_hlds.typecheck",
"typecheck.m",
2672,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck__restrict_to_head_vars_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck",
"check_hlds.typecheck",
"is_head_class_constraint",
2,
0
},
"check_hlds.typecheck",
"typecheck.m",
830,
"d1;c5;"
};


MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_func_type_to_string_10_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_pred_type_to_string_9_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module0)
	MR_init_entry1(check_hlds__typecheck__construct_type_inference_messages_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__construct_type_inference_messages_5_0);
	MR_init_label10(check_hlds__typecheck__construct_type_inference_messages_5_0,73,3,4,5,7,9,10,13,15,16)
	MR_init_label10(check_hlds__typecheck__construct_type_inference_messages_5_0,18,19,20,21,22,25,26,24,38,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_type_inference_messages'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__construct_type_inference_messages_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i4);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i5);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i7);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i9);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i10);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i13);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i6);
	}
	MR_sv(1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i15);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i16);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i18);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i19);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i20);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i21);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i22);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i24);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i25);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(7);
	MR_r10 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_func_type_to_string_10_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i26);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i73);
	}
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_pred_type_to_string_9_0,
		check_hlds__typecheck__construct_type_inference_messages_5_0_i38);
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i73);
	}
MR_def_label(check_hlds__typecheck__construct_type_inference_messages_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__construct_type_inference_messages_5_0_i73);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__clauses_are_non_contiguous_5_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_non_contiguous_clauses_6_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module1)
	MR_init_entry1(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0);
	MR_init_label3(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_any_non_contiguous_clauses'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_are_non_contiguous_5_0,
		fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0_i3);
MR_def_label(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_non_contiguous_clauses_6_0,
		fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0_i5);
MR_def_label(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(hlds__hlds_goal__make_string_const_construction_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module2)
	MR_init_entry1(check_hlds__typecheck__generate_stub_clause_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__generate_stub_clause_4_0);
	MR_init_label10(check_hlds__typecheck__generate_stub_clause_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__typecheck__generate_stub_clause_4_0,14,13,16,17,18,20,21,22,29,30)
	MR_init_label2(check_hlds__typecheck__generate_stub_clause_4_0,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_stub_clause'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__generate_stub_clause_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i2);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i3);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i4);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i5);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i6);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i7);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i8);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("PredName", 8);
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i9);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_3_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i10);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i11);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i14);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__generate_stub_clause_4_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_sv(7) = (MR_Word) MR_string_const("sorry", 5);
	MR_GOTO_LAB(check_hlds__typecheck__generate_stub_clause_4_0_i16);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(7) = (MR_Word) MR_string_const("no_clauses", 10);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i17);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i18);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i20);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i21);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i22);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i29);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i30);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i31);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		check_hlds__typecheck__generate_stub_clause_4_0_i32);
MR_def_label(check_hlds__typecheck__generate_stub_clause_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module3)
	MR_init_entry1(check_hlds__typecheck__rename_instance_method_constraints_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__rename_instance_method_constraints_3_0);
	MR_init_label4(check_hlds__typecheck__rename_instance_method_constraints_3_0,4,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_instance_method_constraints'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__rename_instance_method_constraints_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__rename_instance_method_constraints_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck__rename_instance_method_constraints_3_0_i4);
MR_def_label(check_hlds__typecheck__rename_instance_method_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		check_hlds__typecheck__rename_instance_method_constraints_3_0_i5);
MR_def_label(check_hlds__typecheck__rename_instance_method_constraints_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,
		check_hlds__typecheck__rename_instance_method_constraints_3_0_i6);
MR_def_label(check_hlds__typecheck__rename_instance_method_constraints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck__rename_instance_method_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__typecheck_module4)
	MR_init_entry1(check_hlds__typecheck__infer_existential_types_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__infer_existential_types_4_0);
	MR_init_label7(check_hlds__typecheck__infer_existential_types_4_0,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'infer_existential_types'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__infer_existential_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__infer_existential_types_4_0_i3);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__infer_existential_types_4_0_i4);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__infer_existential_types_4_0_i5);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__infer_existential_types_4_0_i6);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__typecheck__infer_existential_types_4_0_i7);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__typecheck__infer_existential_types_4_0_i8);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typecheck__infer_existential_types_4_0_i9);
MR_def_label(check_hlds__typecheck__infer_existential_types_4_0,9)
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module5)
	MR_init_entry1(check_hlds__typecheck__restrict_to_head_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__restrict_to_head_vars_4_0);
	MR_init_label2(check_hlds__typecheck__restrict_to_head_vars_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_to_head_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__restrict_to_head_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__is_head_class_constraint_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__typecheck__restrict_to_head_vars_4_0_i3);
MR_def_label(check_hlds__typecheck__restrict_to_head_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__typecheck__restrict_to_head_vars_4_0_i4);
MR_def_label(check_hlds__typecheck__restrict_to_head_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(list__same_length_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module6)
	MR_init_entry1(check_hlds__typecheck__same_structure_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__same_structure_2_4_0);
	MR_init_label8(check_hlds__typecheck__same_structure_2_4_0,37,6,8,10,12,13,38,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_structure_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__same_structure_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i37);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i38);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__typecheck__same_structure_2_4_0_i6);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i1);
	}
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__typecheck__same_structure_2_4_0_i8);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__typecheck__same_structure_2_4_0,
		check_hlds__typecheck__same_structure_2_4_0_i10);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__same_structure_2_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__same_structure_2_4_0_i12);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__same_structure_2_4_0_i13);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__same_structure_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module7)
	MR_init_entry1(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0);
	MR_init_label10(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,2,4,6,8,10,11,12,13,17,21)
	MR_init_label2(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'argtypes_identical_up_to_renaming'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r7;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i2);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i4);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck__same_structure_2_4_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i6);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i1);
	}
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__same_structure_2_4_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i8);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i10);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i11);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i12);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i13);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i17);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i21);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i22);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(parse_tree__prog_type__type_list_subsumes_3_0);
MR_def_label(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_field_access_function_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__clause_list_is_empty_1_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_args__proc_arg_vector_to_func_args_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
MR_decl_entry(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_update_goal_type_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module8)
	MR_init_entry1(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__maybe_add_field_access_function_clause_3_0);
	MR_init_label10(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,2,3,4,6,8,10,12,14,15,16)
	MR_init_label10(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,17,18,19,21,24,25,26,30,31,32)
	MR_init_label5(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,33,34,35,36,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_field_access_function_clause'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i2);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i3);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i4);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_field_access_function_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i6);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i8);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i10);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvars_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i12);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_to_func_args_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i14);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i15);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i16);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i17);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i18);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i19);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i21);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i24);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_set_1_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i25);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i26);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i30);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i31);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i32);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_update_goal_type_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i33);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i34);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i35);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 19;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__typecheck__maybe_add_field_access_function_clause_3_0_i36);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module9)
	MR_init_entry1(fn__check_hlds__typecheck__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__typecheck__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_var_types_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module10)
	MR_init_entry1(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_check_for_ambiguity_4_0);
	MR_init_label10(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,56,6,12,13,14,15,17,18,19,20)
	MR_init_label6(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,21,23,34,25,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_check_for_ambiguity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 6);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i56);
	}
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r5, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i8);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i34);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i18);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i19);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i23);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i8);
	}
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,
		check_hlds__typecheck__typecheck_check_for_ambiguity_4_0_i25);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("internal error in typechecker: no type-assignment", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module11)
	MR_init_entry1(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0);
	MR_init_label3(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_interface_list_to_var_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typevarset_2_0);
MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_typevarset_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
MR_decl_entry(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_head_type_params_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module12)
	MR_init_entry1(check_hlds__typecheck__rename_apart_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__rename_apart_7_0);
	MR_init_label10(check_hlds__typecheck__rename_apart_7_0,21,3,4,5,6,7,8,9,10,12)
	MR_init_label1(check_hlds__typecheck__rename_apart_7_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_apart'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__rename_apart_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__rename_apart_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__rename_apart_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck__rename_apart_7_0_i4);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		check_hlds__typecheck__rename_apart_7_0_i5);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck__rename_apart_7_0_i6);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typevarset_3_0,
		check_hlds__typecheck__rename_apart_7_0_i7);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0,
		check_hlds__typecheck__rename_apart_7_0_i8);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,
		check_hlds__typecheck__rename_apart_7_0_i9);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__rename_apart_7_0_i10);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typecheck__rename_apart_7_0_i12);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_head_type_params_3_0,
		check_hlds__typecheck__rename_apart_7_0_i13);
MR_def_label(check_hlds__typecheck__rename_apart_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__rename_apart_7_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module13)
	MR_init_entry1(check_hlds__typecheck__skip_arg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__skip_arg_2_0);
	MR_init_label4(check_hlds__typecheck__skip_arg_2_0,20,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_arg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__skip_arg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__skip_arg_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__typecheck__skip_arg_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__skip_arg_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__typecheck__skip_arg_2_0,
		check_hlds__typecheck__skip_arg_2_0_i8);
MR_def_label(check_hlds__typecheck__skip_arg_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("skip_arg", 8);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__skip_arg_2_0_i4);
MR_def_label(check_hlds__typecheck__skip_arg_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(check_hlds__typecheck__skip_arg_2_0,
		check_hlds__typecheck__skip_arg_2_0_i8);
MR_def_label(check_hlds__typecheck__skip_arg_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_var_types_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module14)
	MR_init_entry1(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0);
	MR_init_label10(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,45,3,4,9,12,13,14,11,7,21)
	MR_init_label3(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,22,6,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_var_has_arg_type_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i7);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i45);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i45);
	}
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("arg_type_assign_var_has_type", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i49);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0_i45);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module15)
	MR_init_entry1(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	MR_init_label10(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,38,4,3,7,12,11,15,17,18,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_var_has_arg_type_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i3);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_arg_type_2_4_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__skip_arg_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("skip_arg", 8);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__typecheck__skip_arg_2_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i18);
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i38);
	}
MR_def_label(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0_i38);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(varset__new_vars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__hlds_data__empty_hlds_constraints_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module16)
	MR_init_entry1(check_hlds__typecheck__ensure_vars_have_a_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__ensure_vars_have_a_type_3_0);
	MR_init_label8(check_hlds__typecheck__ensure_vars_have_a_type_3_0,21,5,6,7,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_vars_have_a_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__ensure_vars_have_a_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__ensure_vars_have_a_type_3_0_i21);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i5);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i6);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i7);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i9);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i10);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i11);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 6);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__ensure_vars_have_a_type_3_0_i12);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module17)
	MR_init_entry1(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__ensure_vars_have_a_single_type_3_0);
	MR_init_label7(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,20,4,5,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_vars_have_a_single_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i20);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i4);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i5);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i8);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i9);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i10);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 6);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__ensure_vars_have_a_single_type_3_0_i11);
MR_def_label(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__construct_higher_order_type_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module18)
	MR_init_entry1(check_hlds__typecheck__typecheck_higher_order_call_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_higher_order_call_5_0);
	MR_init_label8(check_hlds__typecheck__typecheck_higher_order_call_5_0,3,4,5,7,8,9,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_higher_order_call'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_higher_order_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_type_5_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(6), 6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__typecheck_higher_order_call_5_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_higher_order_call_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module19)
	MR_init_entry1(check_hlds__typecheck__typecheck_var_has_type_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_var_has_type_2_5_0);
	MR_init_label10(check_hlds__typecheck__typecheck_var_has_type_2_5_0,39,3,4,7,10,11,12,9,5,18)
	MR_init_label1(check_hlds__typecheck__typecheck_var_has_type_2_5_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_var_has_type_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_var_has_type_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_2_5_0_i5);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_2_5_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i19);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_2_5_0_i39);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i18);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_var_has_type_2_5_0_i19);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_2_5_0_i39);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_var_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module20)
	MR_init_entry1(check_hlds__typecheck__typecheck_var_has_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_var_has_type_4_0);
	MR_init_label3(check_hlds__typecheck__typecheck_var_has_type_4_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_var_has_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_var_has_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_2_5_0,
		check_hlds__typecheck__typecheck_var_has_type_4_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_4_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_4_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_var_4_0,
		check_hlds__typecheck__typecheck_var_has_type_4_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module21)
	MR_init_entry1(check_hlds__typecheck__typecheck_var_has_type_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_var_has_type_list_5_0);
	MR_init_label7(check_hlds__typecheck__typecheck_var_has_type_list_5_0,46,3,10,14,15,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_var_has_type_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_var_has_type_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_2_5_0,
		check_hlds__typecheck__typecheck_var_has_type_list_5_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_var_4_0,
		check_hlds__typecheck__typecheck_var_has_type_list_5_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_var_has_type_list_5_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i46);
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_var_has_type_list_5_0_i46);
	}
MR_def_label(check_hlds__typecheck__typecheck_var_has_type_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("typecheck_var_has_type_list: length mismatch", 44);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_event_set_2_0);
MR_decl_entry(parse_tree__prog_event__event_arg_types_3_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_unknown_event_call_error_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module22)
	MR_init_entry1(check_hlds__typecheck__typecheck_event_call_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_event_call_4_0);
	MR_init_label6(check_hlds__typecheck__typecheck_event_call_4_0,2,5,9,7,4,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_event_call'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_event_call_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_event_set_2_0,
		check_hlds__typecheck__typecheck_event_call_4_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_event__event_arg_types_3_0,
		check_hlds__typecheck__typecheck_event_call_4_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_event_call_4_0_i4);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__typecheck__typecheck_event_call_4_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_event_call_4_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_type_list_5_0);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,
		check_hlds__typecheck__typecheck_event_call_4_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_unknown_event_call_error_2_0,
		check_hlds__typecheck__typecheck_event_call_4_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_event_call_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(varset__is_empty_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__hlds_data__make_body_hlds_constraints_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module23)
	MR_init_entry1(check_hlds__typecheck__typecheck_call_pred_id_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_call_pred_id_5_0);
	MR_init_label10(check_hlds__typecheck__typecheck_call_pred_id_5_0,2,3,4,5,6,8,7,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_call_pred_id'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_call_pred_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(varset__is_empty_1_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_id_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_id_5_0_i7);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_id_5_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_type_list_5_0);
	}
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(8), 6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__typecheck_call_pred_id_5_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_id_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module24)
	MR_init_entry1(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__get_overloaded_pred_arg_types_7_0);
	MR_init_label8(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,15,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_overloaded_pred_arg_types'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i4);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i5);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i6);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i7);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i8);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i9);
MR_def_label(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module25)
	MR_init_entry1(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_call_overloaded_pred_6_0);
	MR_init_label5(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_call_overloaded_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,
		check_hlds__typecheck__typecheck_call_overloaded_pred_6_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__typecheck_call_overloaded_pred_6_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__typecheck_call_overloaded_pred_6_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		check_hlds__typecheck__typecheck_call_overloaded_pred_6_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_sv(5), 6);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__get_overloaded_pred_arg_types_7_0,
		check_hlds__typecheck__typecheck_call_overloaded_pred_6_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(check_hlds__typeclasses__perform_context_reduction_2_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module26)
	MR_init_entry1(check_hlds__typecheck__typecheck_call_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_call_pred_6_0);
	MR_init_label10(check_hlds__typecheck__typecheck_call_pred_6_0,2,4,5,6,11,12,13,14,15,17)
	MR_init_label10(check_hlds__typecheck__typecheck_call_pred_6_0,16,22,23,24,8,27,28,29,3,31)
	MR_init_label2(check_hlds__typecheck__typecheck_call_pred_6_0,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_call_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_call_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_arity_6_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_sv(8), 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(varset__is_empty_1_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i16);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_call_pred_6_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_list_5_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i29);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i23);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(8), 6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_apart_7_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_arg_type_list_5_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i29);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_call_overloaded_pred_6_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i27);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__typeclasses__perform_context_reduction_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i33);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i31);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i32);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_call_pred_6_0_i33);
MR_def_label(check_hlds__typecheck__typecheck_call_pred_6_0,33)
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

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module27)
	MR_init_entry1(check_hlds__typecheck__typecheck_unify_var_var_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_unify_var_var_2_5_0);
	MR_init_label10(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,80,3,4,7,10,13,14,15,12,9)
	MR_init_label10(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,20,5,26,28,24,31,32,33,36,40)
	MR_init_label3(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,42,37,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_unify_var_var_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_unify_var_var_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i5);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i9);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i12);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i80);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i26);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i24);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i31);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i32);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typevarset_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i33);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i36);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i40);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i37);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i42);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_2_5_0_i80);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module28)
	MR_init_entry1(check_hlds__typecheck__typecheck_unify_var_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_unify_var_var_4_0);
	MR_init_label3(check_hlds__typecheck__typecheck_unify_var_var_4_0,2,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_unify_var_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_unify_var_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_unify_var_var_2_5_0,
		check_hlds__typecheck__typecheck_unify_var_var_4_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_4_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_var_4_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,
		check_hlds__typecheck__typecheck_unify_var_var_4_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module29)
	MR_init_entry1(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__cons_id_must_be_builtin_type_3_0);
	MR_init_label4(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,3,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_must_be_builtin_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i5) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0_i1));
MR_def_label(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_r3 = (MR_Word) MR_string_const("float", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_r3 = (MR_Word) MR_string_const("int", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,2);
	MR_r3 = (MR_Word) MR_string_const("string", 6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module30)
	MR_init_entry1(check_hlds__typecheck__typecheck_functor_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_functor_type_4_0);
	MR_init_label10(check_hlds__typecheck__typecheck_functor_type_4_0,43,3,4,7,10,11,12,14,9,5)
	MR_init_label3(check_hlds__typecheck__typecheck_functor_type_4_0,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_functor_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_functor_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_functor_type_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_functor_type_4_0_i5);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_functor_type_4_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_functor_type_4_0_i43);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__typecheck_functor_type_4_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_functor_type_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_functor_type_4_0_i43);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__is_field_access_function_name_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_ctor_field_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module31)
	MR_init_entry1(check_hlds__typecheck__builtin_field_access_function_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__builtin_field_access_function_type_5_0);
	MR_init_label5(check_hlds__typecheck__builtin_field_access_function_type_5_0,3,5,7,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_field_access_function_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__builtin_field_access_function_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_field_access_function_type_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if ((MR_r4 != MR_tempr1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_field_access_function_type_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		check_hlds__typecheck__builtin_field_access_function_type_5_0_i3);
MR_def_label(check_hlds__typecheck__builtin_field_access_function_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_field_access_function_type_5_0_i1);
	}
	if ((MR_sv(3) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_field_access_function_type_5_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_ctor_field_table_2_0,
		check_hlds__typecheck__builtin_field_access_function_type_5_0_i5);
MR_def_label(check_hlds__typecheck__builtin_field_access_function_type_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typecheck__builtin_field_access_function_type_5_0_i7);
MR_def_label(check_hlds__typecheck__builtin_field_access_function_type_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_field_access_function_type_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		check_hlds__typecheck__builtin_field_access_function_type_5_0_i10);
MR_def_label(check_hlds__typecheck__builtin_field_access_function_type_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__builtin_field_access_function_type_5_0,1)
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

MR_decl_entry(list__split_list_4_0);
MR_decl_entry(parse_tree__prog_type__construct_higher_order_pred_type_4_0);
MR_decl_entry(parse_tree__prog_type__construct_higher_order_func_type_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module32)
	MR_init_entry1(check_hlds__typecheck__make_pred_cons_info_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__make_pred_cons_info_list_7_0);
	MR_init_label10(check_hlds__typecheck__make_pred_cons_info_list_7_0,91,3,4,5,6,7,8,9,10,15)
	MR_init_label10(check_hlds__typecheck__make_pred_cons_info_list_7_0,17,18,14,11,28,27,31,33,35,36)
	MR_init_label5(check_hlds__typecheck__make_pred_cons_info_list_7_0,34,37,30,25,95)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pred_cons_info_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__make_pred_cons_info_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i4);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i5);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i6);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i7);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i8);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i9);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i10);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i11);
	}
	if (((MR_Integer) MR_sv(10) < (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i11);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(list__split_list_4_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i15);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_pred_type_4_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i17);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i18);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i91);
	}
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("make_pred_cons_info: split_list failed", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i95);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i25);
	}
	MR_r4 = ((MR_Integer) MR_sv(10) - (MR_Integer) 1);
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i28);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_sv(10) = MR_r1;
	MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i27);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i25);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_sv(10) = MR_r1;
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(list__split_list_4_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i31);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i30);
	}
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i33);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i35);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_r5;
	MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i34);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_func_type_5_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i36);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r4 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_tempr1;
	}
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i37);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i91);
	}
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("make_pred_cons_info: split_list failed", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__make_pred_cons_info_list_7_0_i95);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r6 = MR_sv(5);
MR_def_label(check_hlds__typecheck__make_pred_cons_info_list_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__typecheck__make_pred_cons_info_list_7_0_i91);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__pred_table__predicate_table_search_sym_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module33)
	MR_init_entry1(check_hlds__typecheck__builtin_pred_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__builtin_pred_type_5_0);
	MR_init_label8(check_hlds__typecheck__builtin_pred_type_5_0,3,5,6,7,9,10,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_pred_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__builtin_pred_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_pred_type_5_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i3);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i5);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i6);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_4_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i7);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__builtin_pred_type_5_0_i4);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i9);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__make_pred_cons_info_list_7_0,
		check_hlds__typecheck__builtin_pred_type_5_0_i10);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck__builtin_pred_type_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module34)
	MR_init_entry1(check_hlds__typecheck__split_cons_errors_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__split_cons_errors_3_0);
	MR_init_label5(check_hlds__typecheck__split_cons_errors_3_0,8,9,5,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_cons_errors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__split_cons_errors_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__split_cons_errors_3_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(check_hlds__typecheck__split_cons_errors_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(check_hlds__typecheck__split_cons_errors_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__split_cons_errors_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(check_hlds__typecheck__split_cons_errors_3_0_i4);
	}
MR_def_label(check_hlds__typecheck__split_cons_errors_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(check_hlds__typecheck__split_cons_errors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(check_hlds__typecheck__split_cons_errors_3_0_i9);
	}
	MR_proceed();
MR_def_label(check_hlds__typecheck__split_cons_errors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_types_2_0);
MR_decl_entry(hlds__hlds_data__lookup_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_predid_2_0);
MR_decl_entry(__Unify___hlds__hlds_pred__goal_type_0_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module35)
	MR_init_entry1(check_hlds__typecheck__convert_cons_defn_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__convert_cons_defn_5_1);
	MR_init_label10(check_hlds__typecheck__convert_cons_defn_5_1,3,4,5,6,7,8,9,15,16,20)
	MR_init_label10(check_hlds__typecheck__convert_cons_defn_5_1,23,24,10,11,29,30,34,37,38,28)
	MR_init_label7(check_hlds__typecheck__convert_cons_defn_5_1,41,46,47,49,51,48,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_cons_defn'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__convert_cons_defn_5_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(0, MR_r4, 6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i3);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_types_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i4);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i5);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i6);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_predid_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i7);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(13) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i8);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i9);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(12),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i11);
	}
	MR_r2 = MR_tfield(0, MR_sv(12), 7);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i11);
	}
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i15);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__goal_type_0_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i16);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i10);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i20);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i10);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i23);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i24);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i29);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i30);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i28);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i34);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i28);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i37);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i38);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i41);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i41);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i46);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i47);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i48);
	}
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_5_1_i48);
	}
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__make_body_hlds_constraints_5_0,
		check_hlds__typecheck__convert_cons_defn_5_1_i54);
MR_def_label(check_hlds__typecheck__convert_cons_defn_5_1,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module36)
	MR_init_entry1(check_hlds__typecheck__convert_cons_defn_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__convert_cons_defn_list_5_0);
	MR_init_label3(check_hlds__typecheck__convert_cons_defn_list_5_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_cons_defn_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__convert_cons_defn_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_cons_defn_list_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__typecheck__convert_cons_defn_list_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__typecheck__convert_cons_defn_5_1,
		check_hlds__typecheck__convert_cons_defn_list_5_0_i4);
MR_def_label(check_hlds__typecheck__convert_cons_defn_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__typecheck__convert_cons_defn_list_5_0,
		check_hlds__typecheck__convert_cons_defn_list_5_0_i5);
MR_def_label(check_hlds__typecheck__convert_cons_defn_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(parse_tree__prog_type__remove_new_prefix_2_0);
MR_decl_entry(string__char_to_string_2_1);

MR_BEGIN_MODULE(check_hlds__typecheck_module37)
	MR_init_entry1(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0);
	MR_init_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,2,3,8,10,4,5,11,15,19,21)
	MR_init_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,13,22,25,23,27,28,29,30,49,39)
	MR_init_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,35,41,42,104,44,105,34,53,54,31)
	MR_init_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,32,58,61,60,65,66,68,69,72,59)
	MR_init_label10(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,76,79,77,84,83,86,87,88,89,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_info_get_ctor_list_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i5);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__convert_cons_defn_list_5_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if ((MR_sv(3) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i13);
	}
	MR_sv(8) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i19);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i13);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__convert_cons_defn_list_5_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(check_hlds__typecheck__builtin_field_access_function_type_5_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i25);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i23);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i27);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i29);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__typecheck__split_cons_errors_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i30);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i49);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i41) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i35) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i105) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i42) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32));
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32);
	}
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__char_to_string_2_1,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i39);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i31);
	}
	MR_sv(8) = (MR_Word) MR_string_const("character", 9);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("character", 9);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("float", 5);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("line", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i44);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("int", 3);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("file", 4)) == 0) || (strcmp((char *) (MR_Word *) MR_r3, MR_string_const("grade", 5)) == 0)) || (strcmp((char *) (MR_Word *) MR_r3, MR_string_const("module", 6)) == 0)) || (strcmp((char *) (MR_Word *) MR_r3, MR_string_const("pred", 4)) == 0)))) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i32);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_string_const("string", 6);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i53);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i54);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i58);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i59);
	}
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i59);
	}
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i60);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i59);
	}
	MR_sv(9) = MR_tfield(2, MR_sv(2), 0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i65);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i66);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i68);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i69);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i72);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_tempr2;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i76);
	}
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__builtin_pred_type_5_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i79);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i77);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i84);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i84);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i83);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i86);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i87);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i88);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i89);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0_i90);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module38)
	MR_init_entry1(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_info_get_ctor_list_6_0);
	MR_init_label8(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,2,6,11,13,15,18,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_info_get_ctor_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 1);
	if ((MR_sv(3) != MR_tempr1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i9);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(5) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i9);
	}
	if ((MR_sv(3) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i9);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_ctor_field_table_2_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_ctor_field_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck, maybe_cons_type_info);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		check_hlds__typecheck__typecheck_info_get_ctor_list_6_0_i18);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__typecheck__split_cons_errors_3_0);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

MR_BEGIN_MODULE(check_hlds__typecheck_module39)
	MR_init_entry1(check_hlds__typecheck__typecheck_unify_var_functor_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_unify_var_functor_6_0);
	MR_init_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0,4,8,14,15,10,2,23,24,27,26)
	MR_init_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0,31,35,32,37,38,42,43,39,44,45)
	MR_init_label10(check_hlds__typecheck__typecheck_unify_var_functor_6_0,47,30,55,57,58,62,59,64,65,69)
	MR_init_label7(check_hlds__typecheck__typecheck_unify_var_functor_6_0,70,66,71,72,78,74,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_unify_var_functor'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_unify_var_functor_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__typecheck__cons_id_must_be_builtin_type_3_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_sv(7), 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r1, 6) = MR_tempr2;
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr1, 7);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i81);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	}
	MR_np_call_localret_ent(varset__init_1_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i27);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i23);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_info_get_ctor_list_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i26);
	}
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i27);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i30);
	}
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_sv(7), 6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i31);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i32);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i32);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i35);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("typecheck_unify_var_functor: undefined cons?", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i37);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_functor_type_4_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i38);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i39);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i42);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i43);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i45);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i47);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr2, 7);
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i81);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i78);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_sv(7), 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i55);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i57);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 6);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i58);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i59);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i59);
	}
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i62);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("typecheck_unify_var_functor: undefined cons?", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i64);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_functor_type_4_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i65);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i66);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i69);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i70);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i71);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(6) = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i72);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i74);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_sv(7);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr2, 7);
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unify_var_functor_6_0_i81);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,
		check_hlds__typecheck__typecheck_unify_var_functor_6_0_i78);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	}
MR_def_label(check_hlds__typecheck__typecheck_unify_var_functor_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module40)
	MR_init_entry1(check_hlds__typecheck__type_assign_get_types_of_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__type_assign_get_types_of_vars_4_0);
	MR_init_label10(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,29,4,7,5,9,10,11,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_assign_get_types_of_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__type_assign_get_types_of_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i4);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i7);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i17);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i9);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i10);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typevarset_3_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i11);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i14);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i15);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,
		check_hlds__typecheck__type_assign_get_types_of_vars_4_0_i17);
MR_def_label(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,17)
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


MR_BEGIN_MODULE(check_hlds__typecheck_module41)
	MR_init_entry1(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0);
	MR_init_label10(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,41,3,4,5,6,9,12,13,14,11)
	MR_init_label3(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,7,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_lambda_var_has_type_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__type_assign_get_types_of_vars_4_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_type_5_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i7);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i41);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_overload_error_2_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module42)
	MR_init_entry1(check_hlds__typecheck__typecheck_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_goal_4_0);
	MR_init_label10(check_hlds__typecheck__typecheck_goal_4_0,2,3,6,8,5,11,13,15,17,14)
	MR_init_label7(check_hlds__typecheck__typecheck_goal_4_0,19,22,24,21,20,12,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__typecheck__typecheck_goal_4_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__typecheck__typecheck_goal_4_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__typecheck__typecheck_goal_4_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_4_0_i5);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		check_hlds__typecheck__typecheck_goal_4_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_sv(4), 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__typecheck_goal_4_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__typecheck_goal_4_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 7);
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_4_0_i12);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_0,
		check_hlds__typecheck__typecheck_goal_4_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_4_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0,
		check_hlds__typecheck__typecheck_goal_4_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0,
		check_hlds__typecheck__typecheck_goal_4_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_overload_error_2_0,
		check_hlds__typecheck__typecheck_goal_4_0_i19);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_4_0_i21);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0,
		check_hlds__typecheck__typecheck_goal_4_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0,
		check_hlds__typecheck__typecheck_goal_4_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_4_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_2_5_0,
		check_hlds__typecheck__typecheck_goal_4_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_2_5_0,
		check_hlds__typecheck__typecheck_goal_4_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0;
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module43)
	MR_init_entry1(check_hlds__typecheck__typecheck_goal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_goal_2_5_0);
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,119,121,122,41,43,46,47,48,16,17)
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,18,26,21,22,24,127,3,6,7,8)
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,9,10,11,13,14,32,33,34,35,36)
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,38,39,50,51,57,64,65,130,73,100)
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,102,107,108,109,110,111,94,95,96,75)
	MR_init_label10(check_hlds__typecheck__typecheck_goal_2_5_0,77,78,79,80,83,85,88,90,91,116)
	MR_init_label1(check_hlds__typecheck__typecheck_goal_2_5_0,117)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_goal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_goal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i119) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i41) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i127));
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i121);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_unification_6_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i122);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	MR_sv(6) = MR_tfield(1, MR_r1, 5);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i43);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i46);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i47);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_call_pred_6_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i48);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i18);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i26) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i9));
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_higher_order_call_5_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i22);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("typecheck_goal_2: unexpected class method call", 46);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_sv(2), 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_event_call_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i116) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i50) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i32) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i73));
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tfield(3, MR_sv(1), 4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_call_pred_id_5_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__typeclasses__perform_context_reduction_2_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_list_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_list_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i33);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i35);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i36);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_tfield(3, MR_r2, 4) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i39);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i51);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i57) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i64) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i130) MR_AND
		MR_LABEL_AP(check_hlds__typecheck__typecheck_goal_2_5_0_i130));
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i65);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i65);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_2_5_0_i75);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_2_5_0_i94);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i100);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_2_5_0_i102);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i107);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i108);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i109);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i110);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i111);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i95);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i96);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 3);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_2_5_0_i77);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 6);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i79);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i78);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i79);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_list_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i80);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__ensure_vars_have_a_single_type_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i83);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__atomic_interface_list_to_var_list_1_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i85);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i88);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1346__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i90);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("typecheck_goal_2: GoalType != unknown_atomic_goal_type", 54);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i91);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_goal_2_5_0_i117);
MR_def_label(check_hlds__typecheck__typecheck_goal_2_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("typecheck_goal_2: unexpected switch", 35);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module44)
	MR_init_entry1(check_hlds__typecheck__typecheck_goal_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_goal_list_4_0);
	MR_init_label3(check_hlds__typecheck__typecheck_goal_list_4_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_goal_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_goal_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_goal_list_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__typecheck__typecheck_goal_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_goal_list_4_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_goal_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__typecheck__typecheck_goal_list_4_0,
		check_hlds__typecheck__typecheck_goal_list_4_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_goal_list_4_0,5)
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

MR_decl_entry(fn__check_hlds__typecheck_errors__report_error_lambda_var_6_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module45)
	MR_init_entry1(check_hlds__typecheck__typecheck_unification_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_unification_6_0);
	MR_init_label9(check_hlds__typecheck__typecheck_unification_6_0,7,11,12,8,15,17,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_unification'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_unification_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unification_6_0_i3);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unification_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_sv(6) = MR_tfield(2, MR_r2, 4);
	MR_sv(7) = MR_tfield(2, MR_r2, 5);
	MR_sv(8) = MR_tfield(2, MR_r2, 6);
	MR_sv(9) = MR_tfield(2, MR_r2, 7);
	MR_sv(10) = MR_tfield(2, MR_r2, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_0,
		check_hlds__typecheck__typecheck_unification_6_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unification_6_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_unification_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(11);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_lambda_var_6_0,
		check_hlds__typecheck__typecheck_unification_6_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0,
		check_hlds__typecheck__typecheck_unification_6_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_unification_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_unification_6_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_unify_var_var_4_0,
		check_hlds__typecheck__typecheck_unification_6_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_sv(1), 2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_unify_var_functor_6_0,
		check_hlds__typecheck__typecheck_unification_6_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__typeclasses__perform_context_reduction_2_0,
		check_hlds__typecheck__typecheck_unification_6_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_unification_6_0,5)
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


MR_BEGIN_MODULE(check_hlds__typecheck_module46)
	MR_init_entry1(check_hlds__typecheck__typecheck_clause_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_clause_list_6_0);
	MR_init_label5(check_hlds__typecheck__typecheck_clause_list_6_0,19,5,6,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_clause_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_clause_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_clause_list_6_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__typecheck__typecheck_clause_list_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_var_has_type_list_5_0,
		check_hlds__typecheck__typecheck_clause_list_6_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_clause_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_goal_4_0,
		check_hlds__typecheck__typecheck_clause_list_6_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_clause_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_r2, 7);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,
		check_hlds__typecheck__typecheck_clause_list_6_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_clause_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__typecheck__typecheck_clause_list_6_0,
		check_hlds__typecheck__typecheck_clause_list_6_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_clause_list_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module47)
	MR_init_entry1(check_hlds__typecheck__apply_var_renaming_to_var_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__apply_var_renaming_to_var_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_var_renaming_to_var_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__apply_var_renaming_to_var_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__apply_var_renaming_to_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
MR_decl_entry(hlds__headvar_names__maybe_improve_headvar_names_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);
MR_decl_entry(parse_tree__prog_type__constraint_list_get_tvars_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(hlds__hlds_data__make_head_hlds_constraints_4_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_init_12_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0);
MR_decl_entry(map__optimize_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_constraint_proofs_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_constraint_map_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_head_type_params_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(hlds__hlds_pred__pred_info_set_arg_types_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_class_context_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_origin_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_tvar_kinds_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_no_clauses_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module48)
	MR_init_entry1(check_hlds__typecheck__typecheck_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_pred_8_0);
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,2,5,6,7,8,3,9,10,11,12)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,13,14,17,20,146,22,19,24,16,26)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,29,31,25,35,37,15,40,41,42,43)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,44,45,48,49,51,53,50,55,56,57)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,58,60,61,62,63,64,65,68,66,70)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,71,72,73,74,75,76,77,78,80,81)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,83,84,82,85,86,87,88,89,90,91)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,92,93,94,95,96,97,100,101,103,105)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,106,107,108,109,102,110,111,112,113,114)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,115,116,99,117,118,119,120,121,123,124)
	MR_init_label10(check_hlds__typecheck__typecheck_pred_8_0,122,127,47,129,130,132,135,136,137,138)
	MR_init_label3(check_hlds__typecheck__typecheck_pred_8_0,139,131,140)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__maybe_add_field_access_function_clause_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__headvar_names__maybe_improve_headvar_names_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(17) = MR_sv(4);
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i10);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i13);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		check_hlds__typecheck__typecheck_pred_8_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 14;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i22);
	}
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__report_any_non_contiguous_clauses_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 146;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		check_hlds__typecheck__typecheck_pred_8_0_i26);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i25);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i29);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i25);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i31);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__generate_stub_clause_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i35);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i146);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(check_hlds__typecheck__generate_stub_clause_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i37);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i40);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i41);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i42);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i43);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i44);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		check_hlds__typecheck__typecheck_pred_8_0_i45);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i47);
	}
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i48);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i49);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i51);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i50);
	}
	MR_r1 = (MR_Word) MR_string_const("% Inferring type of ", 20);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i53);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Integer) 1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r1 = MR_sv(17);
	MR_sv(19) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i63);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Type-checking ", 16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i55);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i56);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i57);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i58);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typecheck__typecheck_pred_8_0_i60);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i61);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i62);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Integer) 0;
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(17);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i64);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_data__make_head_hlds_constraints_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i65);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_field_access_function_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i68);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i66);
	}
	MR_sv(15) = (MR_Integer) 1;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i70);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_sv(15) = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i71);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_init_12_0,
		check_hlds__typecheck__typecheck_pred_8_0_i72);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i73);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_clause_list_6_0,
		check_hlds__typecheck__typecheck_pred_8_0_i74);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__typeclasses__perform_context_reduction_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i75);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_check_for_ambiguity_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i76);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,
		check_hlds__typecheck__typecheck_pred_8_0_i77);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_sv(19) = MR_r2;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i78);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__optimize_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i80);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i81);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i83);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i82);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i84);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i85);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i86);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i87);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i88);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i89);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i90);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_constraint_proofs_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i91);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_constraint_map_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i92);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i93);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i94);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i95);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__restrict_to_head_vars_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i96);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i97);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i99);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_head_type_params_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i100);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i101);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i103);
	}
	MR_r3 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_sv(13);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_sv(20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i102);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__check_existq_clause_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(20);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i105);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__typecheck__apply_var_renaming_to_var_list_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i106);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i107);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i108);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_instance_method_constraints_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i109);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck__apply_var_renaming_to_var_list_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i110);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i111);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i112);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__rename_instance_method_constraints_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i113);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i114);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_class_context_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i115);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_origin_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i116);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i127);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(check_hlds__typecheck__infer_existential_types_4_0,
		check_hlds__typecheck__typecheck_pred_8_0_i117);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_head_type_params_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i118);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_arg_types_5_0,
		check_hlds__typecheck__typecheck_pred_8_0_i119);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i120);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_class_context_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i121);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_tvar_kinds_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i123);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck__argtypes_identical_up_to_renaming_7_0,
		check_hlds__typecheck__typecheck_pred_8_0_i124);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i122);
	}
	MR_sv(1) = (MR_Integer) 0;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i127);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i127);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(17);
	MR_decr_sp_and_return(23);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__447__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(1);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__typecheck_pred_8_0_i129);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("typecheck_pred: StartingSpecs not empty", 39);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i130);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i132);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_pred_8_0_i131);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i135);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i136);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i137);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__typecheck_pred_8_0_i138);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_head_type_params_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i139);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r2 = MR_sv(17);
	MR_decr_sp_and_return(23);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_no_clauses_3_0,
		check_hlds__typecheck__typecheck_pred_8_0_i140);
MR_def_label(check_hlds__typecheck__typecheck_pred_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(17);
	MR_decr_sp_and_return(23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_builtin_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_mark_as_external_2_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_remove_predid_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(bool__or_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module49)
	MR_init_entry1(check_hlds__typecheck__typecheck_module_one_iteration_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_module_one_iteration_8_0);
	MR_init_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0,92,3,4,5,8,6,14,17,20,21)
	MR_init_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0,23,24,25,26,16,13,28,30,32,12)
	MR_init_label10(check_hlds__typecheck__typecheck_module_one_iteration_8_0,34,35,36,38,39,10,40,41,42,43)
	MR_init_label7(check_hlds__typecheck__typecheck_module_one_iteration_8_0,46,45,48,49,50,51,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_module_one_iteration'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_module_one_iteration_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i8);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i92);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i13);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i17);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i16);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r2, 1);
	MR_sv(9) = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i20);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i21);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i23);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i24);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i25);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i26);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i13);
	}
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_builtin_1_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i28);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i10);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i30);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i32);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i10);
	}
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i34);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i35);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i36);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i38);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = (MR_Integer) 0;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i41);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_mark_as_external_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i39);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = (MR_Integer) 0;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i41);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_pred_8_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i40);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_r2;
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i42);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i43);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i45);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i46);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i50);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i48);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i49);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i50);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i51);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(bool__or_3_0,
		check_hlds__typecheck__typecheck_module_one_iteration_8_0_i52);
MR_def_label(check_hlds__typecheck__typecheck_module_one_iteration_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_module_one_iteration_8_0_i92);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module50)
	MR_init_entry1(check_hlds__typecheck__typecheck_to_fixpoint_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_to_fixpoint_7_0);
	MR_init_label10(check_hlds__typecheck__typecheck_to_fixpoint_7_0,59,2,3,7,9,6,4,11,13,14)
	MR_init_label3(check_hlds__typecheck__typecheck_to_fixpoint_7_0,15,12,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_to_fixpoint'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__typecheck_to_fixpoint_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_module_one_iteration_8_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i7);
	}
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i9);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i4);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 50;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i11);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i13);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i12);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__typecheck__construct_type_inference_messages_5_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i14);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__typecheck__typecheck_to_fixpoint_7_0_i15);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i16);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__typecheck__typecheck_to_fixpoint_7_0_i59);
MR_def_label(check_hlds__typecheck__typecheck_to_fixpoint_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module51)
	MR_init_entry1(check_hlds__typecheck__typecheck_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__typecheck_module_4_0);
	MR_init_label6(check_hlds__typecheck__typecheck_module_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'typecheck_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck__typecheck_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__typecheck__typecheck_module_4_0_i2);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck__typecheck_module_4_0_i3);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 151;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__typecheck__typecheck_module_4_0_i4);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__typecheck_to_fixpoint_7_0,
		check_hlds__typecheck__typecheck_module_4_0_i5);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__construct_type_inference_messages_5_0,
		check_hlds__typecheck__typecheck_module_4_0_i6);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck__typecheck_module_4_0_i7);
MR_def_label(check_hlds__typecheck__typecheck_module_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module52)
	MR_init_entry1(check_hlds__typecheck__check_existq_clause_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__check_existq_clause_5_0);
	MR_init_label1(check_hlds__typecheck__check_existq_clause_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_existq_clause'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__check_existq_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r3, 1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__check_existq_clause_5_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__check_mention_existq_var_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(3, MR_tempr1, 7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, typecheck_info);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__typecheck__check_existq_clause_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__goal_util__foreign_code_uses_variable_2_0);
MR_decl_entry(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module53)
	MR_init_entry1(check_hlds__typecheck__check_mention_existq_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__check_mention_existq_var_5_0);
	MR_init_label5(check_hlds__typecheck__check_mention_existq_var_5_0,2,3,6,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_mention_existq_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__check_mention_existq_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		check_hlds__typecheck__check_mention_existq_var_5_0_i2);
MR_def_label(check_hlds__typecheck__check_mention_existq_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("TypeInfo_for_", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__typecheck__check_mention_existq_var_5_0_i3);
MR_def_label(check_hlds__typecheck__check_mention_existq_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__foreign_code_uses_variable_2_0,
		check_hlds__typecheck__check_mention_existq_var_5_0_i6);
MR_def_label(check_hlds__typecheck__check_mention_existq_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__check_mention_existq_var_5_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__typecheck__check_mention_existq_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,
		check_hlds__typecheck__check_mention_existq_var_5_0_i8);
MR_def_label(check_hlds__typecheck__check_mention_existq_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_list_contains_var_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__typecheck_module54)
	MR_init_entry1(check_hlds__typecheck__is_head_class_constraint_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__is_head_class_constraint_2_0);
	MR_init_label3(check_hlds__typecheck__is_head_class_constraint_2_0,6,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_head_class_constraint'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__is_head_class_constraint_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typecheck__is_head_class_constraint_2_0_i5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		check_hlds__typecheck__is_head_class_constraint_2_0_i6);
MR_def_label(check_hlds__typecheck__is_head_class_constraint_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__is_head_class_constraint_2_0_i9);
MR_def_label(check_hlds__typecheck__is_head_class_constraint_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__is_head_class_constraint_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module55)
	MR_init_entry1(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0);
	MR_init_label9(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,2,5,8,9,10,7,3,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_assign_check_functor_type_builtin'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i2);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i5);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i8);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i9);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i10);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i17);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i16);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0_i17);
MR_def_label(check_hlds__typecheck__type_assign_check_functor_type_builtin_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module56)
	MR_init_entry1(check_hlds__typecheck__apply_var_renaming_to_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__apply_var_renaming_to_var_3_0);
	MR_init_label2(check_hlds__typecheck__apply_var_renaming_to_var_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_var_renaming_to_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__apply_var_renaming_to_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__apply_var_renaming_to_var_3_0_i4);
MR_def_label(check_hlds__typecheck__apply_var_renaming_to_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__apply_var_renaming_to_var_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__typecheck__apply_var_renaming_to_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(hlds__hlds_data__update_redundant_constraints_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module57)
	MR_init_entry1(check_hlds__typecheck__project_and_rename_constraints_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__project_and_rename_constraints_6_0);
	MR_init_label4(check_hlds__typecheck__project_and_rename_constraints_6_0,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_and_rename_constraints'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__project_and_rename_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__project_constraint_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__typecheck__project_and_rename_constraints_6_0_i3);
MR_def_label(check_hlds__typecheck__project_and_rename_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__rename_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		check_hlds__typecheck__project_and_rename_constraints_6_0_i5);
MR_def_label(check_hlds__typecheck__project_and_rename_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_data__update_redundant_constraints_5_0,
		check_hlds__typecheck__project_and_rename_constraints_6_0_i6);
MR_def_label(check_hlds__typecheck__project_and_rename_constraints_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__typecheck__project_and_rename_constraints_6_0_i7);
MR_def_label(check_hlds__typecheck__project_and_rename_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(list__replace_nth_det_4_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module58)
	MR_init_entry1(check_hlds__typecheck__convert_field_access_cons_type_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__convert_field_access_cons_type_info_7_0);
	MR_init_label10(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,3,4,2,13,15,21,23,28,29,30)
	MR_init_label10(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,32,33,34,35,36,39,41,42,43,44)
	MR_init_label8(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,45,46,47,50,51,52,37,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_field_access_cons_type_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__convert_field_access_cons_type_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 5);
	MR_r7 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_GOTO_LAB(check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i2);
	}
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck__this_file_0_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i4);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("convert_field_access_cons_type_info: not type", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i2);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(list__index1_det_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i13);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 5) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(13) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i21);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(8);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = MR_sv(10);
	MR_tfield(0, MR_r2, 5) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i28);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__replace_nth_det_4_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i29);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i30);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i32);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i33);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i34);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i35);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i36);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i39);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i37);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i41);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i42);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i43);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i44);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i45);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i46);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i47);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i50);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i51);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__typecheck__project_and_rename_constraints_6_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i52);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__typecheck__convert_field_access_cons_type_info_7_0_i57);
MR_def_label(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_sv(6);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_func_m_n_a_6_0);
MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module59)
	MR_init_entry1(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__make_field_access_function_cons_type_info_8_0);
	MR_init_label10(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,3,4,5,9,27,11,13,15,19,18)
	MR_init_label5(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,20,31,22,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_field_access_function_cons_type_info'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i3);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i4);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i5);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i27);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_m_n_a_6_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i9);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i1);
	}
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i11);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i13);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck__IntroducedFrom__pred__get_field_access_constructor__2726__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i15);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i1);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r5 = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 2;
	MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i18);
	}
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	}
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typecheck__convert_cons_defn_5_1,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i20);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i22);
	}
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i23);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck__convert_field_access_cons_type_info_7_0,
		check_hlds__typecheck__make_field_access_function_cons_type_info_8_0_i31);
MR_def_label(check_hlds__typecheck__make_field_access_function_cons_type_info_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module60)
	MR_init_entry1(check_hlds__typecheck__project_constraint_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__project_constraint_2_0);
	MR_init_label5(check_hlds__typecheck__project_constraint_2_0,2,4,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_constraint'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__project_constraint_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck__project_constraint_2_0_i2);
MR_def_label(check_hlds__typecheck__project_constraint_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck__project_constraint_2_0_i4);
MR_def_label(check_hlds__typecheck__project_constraint_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck__project_constraint_2_0_i5);
MR_def_label(check_hlds__typecheck__project_constraint_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__typecheck__project_constraint_2_0_i8);
MR_def_label(check_hlds__typecheck__project_constraint_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck__project_constraint_2_0_i1);
	}
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__project_constraint_2_0,1)
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

MR_decl_entry(map__contains_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module61)
	MR_init_entry1(check_hlds__typecheck__rename_constraint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__rename_constraint_3_0);
	MR_init_label5(check_hlds__typecheck__rename_constraint_3_0,3,5,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_constraint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__rename_constraint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typecheck__rename_constraint_3_0_i2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		check_hlds__typecheck__rename_constraint_3_0_i3);
MR_def_label(check_hlds__typecheck__rename_constraint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		check_hlds__typecheck__rename_constraint_3_0_i5);
MR_def_label(check_hlds__typecheck__rename_constraint_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typecheck__rename_constraint_3_0_i7);
MR_def_label(check_hlds__typecheck__rename_constraint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typecheck__rename_constraint_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck__rename_constraint_3_0_i8);
MR_def_label(check_hlds__typecheck__rename_constraint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module62)
	MR_init_entry1(__Unify___check_hlds__typecheck__cons_constraints_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__typecheck__cons_constraints_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck__cons_constraints_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module63)
	MR_init_entry1(__Compare___check_hlds__typecheck__cons_constraints_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__typecheck__cons_constraints_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck__cons_constraints_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module64)
	MR_init_entry1(__Unify___check_hlds__typecheck__cons_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__typecheck__cons_type_0_0);
	MR_init_label3(__Unify___check_hlds__typecheck__cons_type_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck__cons_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__cons_type_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__typecheck__cons_type_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck__cons_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__cons_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck__cons_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck__cons_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module65)
	MR_init_entry1(__Compare___check_hlds__typecheck__cons_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__typecheck__cons_type_0_0);
	MR_init_label4(__Compare___check_hlds__typecheck__cons_type_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck__cons_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__cons_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck__cons_type_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck__cons_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck__cons_type_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__typecheck__cons_type_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck__cons_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__cons_type_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck__cons_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module66)
	MR_init_entry1(__Unify___check_hlds__typecheck__cons_type_assign_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__typecheck__cons_type_assign_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck__cons_type_assign_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,11,2);
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


MR_BEGIN_MODULE(check_hlds__typecheck_module67)
	MR_init_entry1(__Compare___check_hlds__typecheck__cons_type_assign_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__typecheck__cons_type_assign_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck__cons_type_assign_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,11,2);
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

MR_decl_entry(__Unify___check_hlds__typecheck_errors__cons_error_0_0);
MR_decl_entry(__Unify___check_hlds__typecheck_info__cons_type_info_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module68)
	MR_init_entry1(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__typecheck__maybe_cons_type_info_0_0);
	MR_init_label3(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__typecheck_errors__cons_error_0_0);
	}
MR_def_label(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__typecheck_info__cons_type_info_0_0);
MR_def_label(__Unify___check_hlds__typecheck__maybe_cons_type_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___check_hlds__typecheck_errors__cons_error_0_0);
MR_decl_entry(__Compare___check_hlds__typecheck_info__cons_type_info_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module69)
	MR_init_entry1(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__typecheck__maybe_cons_type_info_0_0);
	MR_init_label5(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__typecheck_errors__cons_error_0_0);
MR_def_label(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck__maybe_cons_type_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__typecheck_info__cons_type_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module70)
	MR_init_entry1(__Unify___check_hlds__typecheck__stuff_to_check_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__typecheck__stuff_to_check_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck__stuff_to_check_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module71)
	MR_init_entry1(__Compare___check_hlds__typecheck__stuff_to_check_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__typecheck__stuff_to_check_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck__stuff_to_check_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module72)
	MR_init_entry1(check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__447__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__447__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__typecheck_pred__447__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__447__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
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

MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module73)
	MR_init_entry1(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0);
	MR_init_label1(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__typecheck_goal_2__1343__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,
		check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0_i2);
MR_def_label(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1343__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__typecheck__typecheck_var_has_type_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module74)
	MR_init_entry1(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1346__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1346__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__typecheck_goal_2__1346__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1346__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module75)
	MR_init_entry1(check_hlds__typecheck__IntroducedFrom__pred__get_field_access_constructor__2726__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__typecheck__IntroducedFrom__pred__get_field_access_constructor__2726__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_field_access_constructor__2726__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck__IntroducedFrom__pred__get_field_access_constructor__2726__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module76)
	MR_init_entry1(fn__check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3138__2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3138__2_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__convert_cons_defn__3138__2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3138__2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module77)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,58,3,7,5,12,15,18,19,20,17)
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,13,26,27,30,11,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__type_assign_list_var_has_type_list__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i58);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("type_assign_var_has_type_list: length mis-match", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i11);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(9) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i13);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i58);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("type_assign_var_has_type_list: length mis-match", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0_i58);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module78)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0);
	MR_init_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__typecheck_unify_var_functor_get_ctors__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0);
MR_decl_entry(hlds__hlds_data__merge_hlds_constraints_3_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_module79)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,40,3,5,4,9,10,11,12,14,15)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,16,18,19,7,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__typecheck_unify_var_functor_get_ctors_2__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(varset__is_empty_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i4);
	}
	MR_sv(4) = MR_sv(6);
	MR_sv(5) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_sv(8);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typevarset_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_head_type_params_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(5);
	MR_sv(5) = MR_sv(6);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_r2 = (MR_Word) MR_string_const("get_cons_stuff: type_assign_rename_apart failed", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__merge_hlds_constraints_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_0_i40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module80)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,58,3,7,5,12,15,18,19,20,17)
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,13,26,27,30,11,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__typecheck_functor_arg_types__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i58);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("type_assign_var_has_type_list: length mis-match", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i13);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i18);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_set_var_types_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i58);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck.m", 11);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("type_assign_var_has_type_list: length mis-match", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_0_i58);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_module81)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,5,6,7,4,9,10,11,13,14,16)
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_apply_type__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i5);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("apply", 5);
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i4);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("apply", 5)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("impure_apply", 12)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i7);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Integer) 2;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("semipure_apply", 14)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Integer) 1;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i1);
	}
	MR_sv(3) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(varset__init_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(varset__new_var_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_func_type_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__empty_hlds_constraints_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0_i17);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 4) = MR_r1;
	MR_tfield(0, MR_tempr3, 5) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_0,1)
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

static void mercury__check_hlds__typecheck_maybe_bunch_0(void)
{
	check_hlds__typecheck_module0();
	check_hlds__typecheck_module1();
	check_hlds__typecheck_module2();
	check_hlds__typecheck_module3();
	check_hlds__typecheck_module4();
	check_hlds__typecheck_module5();
	check_hlds__typecheck_module6();
	check_hlds__typecheck_module7();
	check_hlds__typecheck_module8();
	check_hlds__typecheck_module9();
	check_hlds__typecheck_module10();
	check_hlds__typecheck_module11();
	check_hlds__typecheck_module12();
	check_hlds__typecheck_module13();
	check_hlds__typecheck_module14();
	check_hlds__typecheck_module15();
	check_hlds__typecheck_module16();
	check_hlds__typecheck_module17();
	check_hlds__typecheck_module18();
	check_hlds__typecheck_module19();
	check_hlds__typecheck_module20();
	check_hlds__typecheck_module21();
	check_hlds__typecheck_module22();
	check_hlds__typecheck_module23();
	check_hlds__typecheck_module24();
	check_hlds__typecheck_module25();
	check_hlds__typecheck_module26();
	check_hlds__typecheck_module27();
	check_hlds__typecheck_module28();
	check_hlds__typecheck_module29();
	check_hlds__typecheck_module30();
	check_hlds__typecheck_module31();
	check_hlds__typecheck_module32();
	check_hlds__typecheck_module33();
	check_hlds__typecheck_module34();
	check_hlds__typecheck_module35();
	check_hlds__typecheck_module36();
	check_hlds__typecheck_module37();
	check_hlds__typecheck_module38();
	check_hlds__typecheck_module39();
}

static void mercury__check_hlds__typecheck_maybe_bunch_1(void)
{
	check_hlds__typecheck_module40();
	check_hlds__typecheck_module41();
	check_hlds__typecheck_module42();
	check_hlds__typecheck_module43();
	check_hlds__typecheck_module44();
	check_hlds__typecheck_module45();
	check_hlds__typecheck_module46();
	check_hlds__typecheck_module47();
	check_hlds__typecheck_module48();
	check_hlds__typecheck_module49();
	check_hlds__typecheck_module50();
	check_hlds__typecheck_module51();
	check_hlds__typecheck_module52();
	check_hlds__typecheck_module53();
	check_hlds__typecheck_module54();
	check_hlds__typecheck_module55();
	check_hlds__typecheck_module56();
	check_hlds__typecheck_module57();
	check_hlds__typecheck_module58();
	check_hlds__typecheck_module59();
	check_hlds__typecheck_module60();
	check_hlds__typecheck_module61();
	check_hlds__typecheck_module62();
	check_hlds__typecheck_module63();
	check_hlds__typecheck_module64();
	check_hlds__typecheck_module65();
	check_hlds__typecheck_module66();
	check_hlds__typecheck_module67();
	check_hlds__typecheck_module68();
	check_hlds__typecheck_module69();
	check_hlds__typecheck_module70();
	check_hlds__typecheck_module71();
	check_hlds__typecheck_module72();
	check_hlds__typecheck_module73();
	check_hlds__typecheck_module74();
	check_hlds__typecheck_module75();
	check_hlds__typecheck_module76();
	check_hlds__typecheck_module77();
	check_hlds__typecheck_module78();
	check_hlds__typecheck_module79();
}

static void mercury__check_hlds__typecheck_maybe_bunch_2(void)
{
	check_hlds__typecheck_module80();
	check_hlds__typecheck_module81();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__typecheck__init(void);
void mercury__check_hlds__typecheck__init_type_tables(void);
void mercury__check_hlds__typecheck__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__typecheck__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__typecheck__init_complexity_procs(void);
#endif

void mercury__check_hlds__typecheck__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__typecheck_maybe_bunch_0();
	mercury__check_hlds__typecheck_maybe_bunch_1();
	mercury__check_hlds__typecheck_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck__type_ctor_info_cons_constraints_action_0,
		check_hlds__typecheck__cons_constraints_action_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0,
		check_hlds__typecheck__cons_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0,
		check_hlds__typecheck__cons_type_assign_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0,
		check_hlds__typecheck__maybe_cons_type_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck__type_ctor_info_stuff_to_check_0,
		check_hlds__typecheck__stuff_to_check_0_0);
	mercury__check_hlds__typecheck__init_debugger();
}

void mercury__check_hlds__typecheck__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck__type_ctor_info_cons_constraints_action_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck__type_ctor_info_stuff_to_check_0);
	}
}


void mercury__check_hlds__typecheck__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__typecheck__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__typecheck);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__typecheck__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
