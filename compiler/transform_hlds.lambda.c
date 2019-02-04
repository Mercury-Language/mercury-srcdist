/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 250 "../library/array.int"
#include "array.mh"

#line 28 "transform_hlds.lambda.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "transform_hlds.lambda.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "transform_hlds.lambda.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "transform_hlds.lambda.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.lambda.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.lambda.c"
#line 49 "transform_hlds.lambda.c"
#include "transform_hlds.lambda.mh"

#line 52 "transform_hlds.lambda.c"
#line 53 "transform_hlds.lambda.c"
#ifndef TRANSFORM_HLDS__LAMBDA_DECL_GUARD
#define TRANSFORM_HLDS__LAMBDA_DECL_GUARD

#line 57 "transform_hlds.lambda.c"
#line 58 "transform_hlds.lambda.c"

#endif
#line 61 "transform_hlds.lambda.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0,
	mercury_data_transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0;
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 2,3,5,6,8,10,11,12,14,13)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 16,17,18,21,19,24,28,29,35,36)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 33,39,40,41,42,43,45,49,47,52)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 44,53,54,55,61,64,59,67,68,69)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 25,26,71,72,73,74,75,76,77,78)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 79,80,81,82,83,84,85,86,87,88)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 89,90,91,93,94,95,96,97,98,99)
MR_decl_label9(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0, 100,135,104,106,108,109,110,111,114)
MR_decl_label4(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0, 2,8,15,7)
MR_decl_label4(transform_hlds__lambda__constraint_contains_vars_2_0, 3,4,5,6)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_cases_4_0, 18,4,6)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 4,3,7,6,10,9,14,13,18,19)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 20,17,27,24,29,23,36,37,35,42)
MR_decl_label4(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 41,33,48,152)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0, 17,4,5)
MR_decl_label2(transform_hlds__lambda__expand_lambdas_in_module_2_0, 2,4)
MR_decl_label2(transform_hlds__lambda__expand_lambdas_in_pred_3_0, 2,3)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0, 2,3,4,5,6,7,8,9,11,13)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0, 14,15,16,12,18,19,20,21,22,23)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0, 4,5,3)
MR_decl_label5(transform_hlds__lambda__filter_vartypes_4_0, 19,3,4,5,7)
MR_decl_label3(transform_hlds__lambda__find_used_vars_in_cases_3_0, 10,3,4)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 243,3,5,8,9,218,11,15,10,21)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 24,25,23,27,7,31,33,34,29,36)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 38,42,200,43,47,48,40,51,52,53)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 50,57,58,59,62,61,65,66,67,64)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 69,70,72,260,55,78,79,80,81,82)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 83,84,85,127,87,89,77,92,91,75)
MR_decl_label2(transform_hlds__lambda__find_used_vars_in_goal_3_0, 95,96)
MR_decl_label3(transform_hlds__lambda__find_used_vars_in_goals_3_0, 10,3,4)
MR_decl_label4(transform_hlds__lambda__mark_vars_as_used_3_0, 11,3,4,5)
MR_decl_label10(transform_hlds__lambda__restrict_var_maps_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(transform_hlds__lambda__uni_modes_to_modes_2_0, 6,7,2)
MR_decl_label9(__Unify___transform_hlds__lambda__lambda_info_0_0, 4,6,8,10,12,14,16,18,1)
MR_decl_label3(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0, 12,5,1)
MR_decl_label10(__Compare___transform_hlds__lambda__lambda_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___transform_hlds__lambda__lambda_info_0_0, 37,115)
MR_decl_label4(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0, 18,7,5,9)
MR_def_extern_entry(transform_hlds__lambda__expand_lambdas_in_module_2_0)
MR_def_extern_entry(transform_hlds__lambda__expand_lambdas_in_pred_3_0)
MR_def_extern_entry(transform_hlds__lambda__init_lambda_info_9_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_varset_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_vartypes_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_tvarset_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_inst_varset_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_pred_info_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_module_info_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_set_varset_3_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_set_vartypes_3_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_set_module_info_3_0)
MR_def_extern_entry(transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_0)
MR_decl_static(transform_hlds__lambda__uni_modes_to_modes_2_0)
MR_decl_static(transform_hlds__lambda__filter_vartypes_4_0)
MR_decl_static(transform_hlds__lambda__mark_vars_as_used_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_goal_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_goals_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_cases_3_0)
MR_decl_static(transform_hlds__lambda__restrict_var_maps_8_0)
MR_def_extern_entry(transform_hlds__lambda__expand_lambda_15_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_goal_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_cases_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_proc_4_0)
MR_decl_static(transform_hlds__lambda__constraint_contains_vars_2_0)
MR_decl_static(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0)
MR_def_extern_entry(__Unify___transform_hlds__lambda__lambda_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__lambda__lambda_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0)
MR_def_extern_entry(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__set_of_var, set_of_var),
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,8)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_module_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_module_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
static const struct mercury_type_3 mercury_common_3[5] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__lambda__expand_lambdas_in_pred_3_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_pred_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,9)
},
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,9)
},
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,9),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_transform_hlds__lambda__field_names_lambda_info_0_0[] = {
	"li_varset",
	"li_vartypes",
	"li_tvarset",
	"li_inst_varset",
	"li_rtti_varmaps",
	"li_has_parallel_conj",
	"li_pred_info",
	"li_module_info",
	"li_recompute_nonlocals",
	"li_have_expanded_lambda"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
	"lambda_info",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0,
	mercury_data_transform_hlds__lambda__field_names_lambda_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lambda__du_ptag_ordered_lambda_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lambda__du_stag_ordered_lambda_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_name_ordered_lambda_info_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

const MR_Integer mercury_data_transform_hlds__lambda__functor_number_map_lambda_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lambda__lambda_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lambda__lambda_info_0_0)),
	"transform_hlds.lambda",
	"lambda_info",
	{ (void *)mercury_data_transform_hlds__lambda__du_name_ordered_lambda_info_0 },
	{ (void *)mercury_data_transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
	1,
	4,
	mercury_data_transform_hlds__lambda__functor_number_map_lambda_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 = {
	"reg_wrapper_proc",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lambda__field_types_reg_wrapper_proc_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 = {
	"not_reg_wrapper_proc",
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

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[] = {
	&mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1,
	&mercury_data_transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

const MR_Integer mercury_data_transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0)),
	"transform_hlds.lambda",
	"reg_wrapper_proc",
	{ (void *)mercury_data_transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
	{ (void *)mercury_data_transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
	2,
	4,
	mercury_data_transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_3 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"check_lambda_arg_type_and_mode",
5,
0
},
"transform_hlds.lambda",
"lambda.m",
608,
"146"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_2 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"constraint_contains_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
430,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"type_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
428,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"type_vars",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
679,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
880,
"123"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.lambda",
"lambda.m",
879,
"121"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_pred_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"expand_lambdas_in_proc",
4,
0
},
"transform_hlds.lambda",
"lambda.m",
217,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_module_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.lambda",
"transform_hlds.lambda",
"expand_lambdas_in_pred",
3,
0
},
"transform_hlds.lambda",
"lambda.m",
210,
"5"
};


MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module0)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_module_2_0);
	MR_init_label2(transform_hlds__lambda__expand_lambdas_in_module_2_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__expand_lambdas_in_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__lambda__expand_lambdas_in_module_2_0_i2);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		transform_hlds__lambda__expand_lambdas_in_module_2_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__lambda_module1)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_pred_3_0);
	MR_init_label2(transform_hlds__lambda__expand_lambdas_in_pred_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__expand_lambdas_in_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__lambda__expand_lambdas_in_pred_3_0_i2);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__lambda__expand_lambdas_in_pred_3_0_i3);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__expand_lambdas_in_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module2)
	MR_init_entry1(transform_hlds__lambda__init_lambda_info_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__init_lambda_info_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_lambda_info'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__init_lambda_info_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module3)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module4)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_vartypes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_vartypes_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_vartypes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_vartypes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module5)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_tvarset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_tvarset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_tvarset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_tvarset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module6)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_rtti_varmaps'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module7)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_inst_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_inst_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_inst_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_inst_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module8)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_pred_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_pred_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_pred_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_pred_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module9)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_module_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_module_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_module_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module10)
	MR_init_entry1(transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_get_recompute_nonlocals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module11)
	MR_init_entry1(transform_hlds__lambda__lambda_info_set_varset_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_set_varset_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_set_varset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_set_varset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module12)
	MR_init_entry1(transform_hlds__lambda__lambda_info_set_vartypes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_set_vartypes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_set_vartypes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_set_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module13)
	MR_init_entry1(transform_hlds__lambda__lambda_info_set_module_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_set_module_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_set_module_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_set_module_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module14)
	MR_init_entry1(transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_info_set_recompute_nonlocals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
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
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module15)
	MR_init_entry1(transform_hlds__lambda__uni_modes_to_modes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__uni_modes_to_modes_2_0);
	MR_init_label3(transform_hlds__lambda__uni_modes_to_modes_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'uni_modes_to_modes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__uni_modes_to_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__uni_modes_to_modes_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 0), 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(transform_hlds__lambda__uni_modes_to_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__var_to_int_1_0);
MR_decl_entry(array__unsafe_lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module16)
	MR_init_entry1(transform_hlds__lambda__filter_vartypes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__filter_vartypes_4_0);
	MR_init_label5(transform_hlds__lambda__filter_vartypes_4_0,19,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_vartypes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__filter_vartypes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lambda__filter_vartypes_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__filter_vartypes_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__lambda__filter_vartypes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__filter_vartypes_4_0_i4);
MR_def_label(transform_hlds__lambda__filter_vartypes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__unsafe_lookup_3_0,
		transform_hlds__lambda__filter_vartypes_4_0_i5);
MR_def_label(transform_hlds__lambda__filter_vartypes_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__filter_vartypes_4_0_i7);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__lambda__filter_vartypes_4_0_i19);
MR_def_label(transform_hlds__lambda__filter_vartypes_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__lambda__filter_vartypes_4_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module17)
	MR_init_entry1(transform_hlds__lambda__mark_vars_as_used_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__mark_vars_as_used_3_0);
	MR_init_label4(transform_hlds__lambda__mark_vars_as_used_3_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_vars_as_used'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__mark_vars_as_used_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lambda__mark_vars_as_used_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__mark_vars_as_used_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__lambda__mark_vars_as_used_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__mark_vars_as_used_3_0_i4);
MR_def_label(transform_hlds__lambda__mark_vars_as_used_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__mark_vars_as_used_3_0_i5);
MR_def_label(transform_hlds__lambda__mark_vars_as_used_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__lambda__mark_vars_as_used_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module18)
	MR_init_entry1(transform_hlds__lambda__find_used_vars_in_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__find_used_vars_in_goal_3_0);
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,243,3,5,8,9,218,11,15,10,21)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,24,25,23,27,7,31,33,34,29,36)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,38,42,200,43,47,48,40,51,52,53)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,50,57,58,59,62,61,65,66,67,64)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,69,70,72,260,55,78,79,80,81,82)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,83,84,85,127,87,89,77,92,91,75)
	MR_init_label2(transform_hlds__lambda__find_used_vars_in_goal_3_0,95,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_vars_in_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__find_used_vars_in_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(7);
	continue;
	}
	break;
	} /* end while */
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i8);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i9);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i11);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i10);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i218);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 4);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i218);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1), 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i15);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i218);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i21);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 6);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i24);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i25);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i27);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__set_4_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i31);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i33);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i34);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i36);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_goals_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i38);
	}
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_goals_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i43);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_mask_field(MR_r3, 0);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i47);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i200);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i48);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i51);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i52);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i53);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i57);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i58);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i59);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i61);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i62);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i64);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i65);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i66);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i67);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i69);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i70);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lambda", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("unexpected scope", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i260);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i75);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i77);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i78);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i79);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i80);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i81);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i82);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i83);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i84);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i85);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i87);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i89);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i127);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_goals_3_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r3, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i243);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i95);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i96);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_cases_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module19)
	MR_init_entry1(transform_hlds__lambda__find_used_vars_in_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__find_used_vars_in_goals_3_0);
	MR_init_label3(transform_hlds__lambda__find_used_vars_in_goals_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_vars_in_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__find_used_vars_in_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lambda__find_used_vars_in_goals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goals_3_0_i4);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goals_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module20)
	MR_init_entry1(transform_hlds__lambda__find_used_vars_in_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__find_used_vars_in_cases_3_0);
	MR_init_label3(transform_hlds__lambda__find_used_vars_in_cases_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_vars_in_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__find_used_vars_in_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__lambda__find_used_vars_in_cases_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_cases_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__lambda__find_used_vars_in_cases_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_cases_3_0_i4);
MR_def_label(transform_hlds__lambda__find_used_vars_in_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_cases_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__max_var_1_0);
MR_decl_entry(array__init_3_0);
MR_decl_entry(parse_tree__prog_data__vartypes_to_assoc_list_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(parse_tree__prog_data__vartypes_from_sorted_assoc_list_2_0);
MR_decl_entry(hlds__hlds_rtti__restrict_rtti_varmaps_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module21)
	MR_init_entry1(transform_hlds__lambda__restrict_var_maps_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__restrict_var_maps_8_0);
	MR_init_label10(transform_hlds__lambda__restrict_var_maps_8_0,2,3,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restrict_var_maps'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__restrict_var_maps_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__varset__max_var_1_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i2);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i3);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(array__init_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i4);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i5);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i6);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_to_assoc_list_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i7);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__lambda__filter_vartypes_4_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i8);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i9);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_from_sorted_assoc_list_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i10);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__restrict_rtti_varmaps_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i11);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module22)
	MR_init_entry1(transform_hlds__lambda__expand_lambda_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambda_15_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambda'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__lambda__expand_lambda_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_r12;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module23)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_goal_4_0);
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0,4,3,7,6,10,9,14,13,18,19)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0,20,17,27,24,29,23,36,37,35,42)
	MR_init_label4(transform_hlds__lambda__expand_lambdas_in_goal_4_0,41,33,48,152)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r3, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i6);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_tempr3, 2);
	MR_r4 = MR_tfield(1, MR_tempr2, 3);
	MR_r5 = MR_tfield(1, MR_tempr2, 4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i7);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i9);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i10);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i13);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i14);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i17);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i18);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i19);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i20);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,20)
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
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i23);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i24);
	}
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i27);
	}
	MR_tempr2 = MR_r4;
	MR_decr_sp(8);
	MR_proceed();
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i29);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,29)
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
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i33);
	}
	MR_r4 = MR_tfield(3, MR_r3, 1);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i35);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i36);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i37);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i42);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lambda", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i152);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_cases_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i48);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module24)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_goal_list_4_0);
	MR_init_label3(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_goal_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_list_4_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_list_4_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,5)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module25)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_cases_4_0);
	MR_init_label3(transform_hlds__lambda__expand_lambdas_in_cases_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_cases_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__lambda__expand_lambdas_in_cases_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_cases_4_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_cases_4_0,
		transform_hlds__lambda__expand_lambdas_in_cases_4_0_i6);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_cases_4_0,6)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module26)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0);
	MR_init_label3(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,4,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_unify_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = ((MR_Integer) MR_tfield(2, MR_r2, 0) & (MR_Integer) 3);
	MR_sv(6) = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = MR_tfield(2, MR_r2, 3);
	MR_sv(8) = MR_tfield(2, MR_r2, 4);
	MR_sv(9) = MR_tfield(2, MR_r2, 5);
	MR_r1 = MR_tfield(2, MR_r2, 6);
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(3);
	MR_r10 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,
		transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tfield(1, MR_tempr1, 4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module27)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_proc_2_6_0);
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,2,3,4,5,6,7,8,9,11,13)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,14,15,16,12,18,19,20,21,22,23)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,24,25,26,27,28,29,30,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_proc_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i2);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i3);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i6);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i7);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i8);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i9);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_sv(10);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_sv(8);
	MR_tfield(0, MR_r2, 7) = MR_sv(9);
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 9) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i11);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 8);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i13);
	}
	MR_sv(7) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 9);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(9) = MR_tfield(0, MR_r2, 4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(10) = MR_tfield(0, MR_r3, 7);
	MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i12);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 9);
	MR_sv(11) = MR_tfield(0, MR_r2, 7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i14);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i15);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i16);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(6);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i18);
	}
	MR_sv(3) = MR_sv(1);
	MR_sv(4) = MR_sv(2);
	MR_sv(5) = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i29);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__varset__max_var_1_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i19);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i20);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(array__init_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i21);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i22);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i23);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_to_assoc_list_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i24);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__lambda__filter_vartypes_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i25);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i26);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__vartypes_from_sorted_assoc_list_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i27);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_rtti__restrict_rtti_varmaps_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i28);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(3) = MR_sv(1);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i29);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i30);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i31);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i32);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_2_6_0_i33);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module28)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_proc_4_0);
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0,2,3,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i2);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i3);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_proc_2_6_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i6);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i7);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i8);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i9);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i10);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i11);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(set__subset_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module29)
	MR_init_entry1(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_init_label4(transform_hlds__lambda__constraint_contains_vars_2_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constraint_contains_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__constraint_contains_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i3);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i4);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i5);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i6);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__subset_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__mode_util__mode_get_initial_inst_2_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module30)
	MR_init_entry1(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0);
	MR_init_label4(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0,2,8,15,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_lambda_arg_type_and_mode'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__mode_util__mode_get_initial_inst_2_0,
		transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0_i2);
MR_def_label(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0_i15);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0_i8);
MR_def_label(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0_i7);
	}
MR_def_label(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lambda", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", 66);
	MR_r3 = (MR_Word) MR_string_const("non-higher order argument with higher order inst", 48);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_vartypes_0;
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module31)
	MR_init_entry1(__Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label9(__Unify___transform_hlds__lambda__lambda_info_0_0,4,6,8,10,12,14,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i18);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
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
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, vartypes);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i12);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i14);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i16);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_sv(9) == MR_sv(18));
	MR_decr_sp_and_return(19);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module32)
	MR_init_entry1(__Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label10(__Compare___transform_hlds__lambda__lambda_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___transform_hlds__lambda__lambda_info_0_0,37,115)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, vartypes);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i21);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i25);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i29);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i33);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i37);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i115);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module33)
	MR_init_entry1(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_init_label3(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__lambda__reg_wrapper_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module34)
	MR_init_entry1(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_init_label4(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__lambda__reg_wrapper_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__lambda__reg_wrapper_proc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_types_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);
MR_decl_entry(hlds__goal_util__extra_nonlocal_typeinfos_5_0);
MR_decl_entry(parse_tree__set_of_var__delete_list_3_0);
MR_decl_entry(parse_tree__set_of_var__difference_3_0);
MR_decl_entry(parse_tree__set_of_var__union_3_0);
MR_decl_entry(parse_tree__set_of_var__is_empty_1_0);
MR_decl_entry(parse_tree__set_of_var__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(list__remove_suffix_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(list__member_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(list__length_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__take_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__mode_util__modes_to_uni_modes_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_address_taken_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);
MR_decl_entry(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(hlds__hlds_module__module_info_next_lambda_count_4_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(map__overlay_3_0);
MR_decl_entry(map__apply_to_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl_corresponding_5_0);
MR_decl_entry(hlds__hlds_pred__purity_to_markers_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_13_0);
MR_decl_entry(hlds__hlds_pred__ensure_all_headvars_are_named_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_assert_id_0;
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_reg_r_headvars_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module35)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,2,3,5,6,8,10,11,12,14,13)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,16,17,18,21,19,24,28,29,35,36)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,33,39,40,41,42,43,45,49,47,52)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,44,53,54,55,61,64,59,67,68,69)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,25,26,71,72,73,74,75,76,77,78)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,79,80,81,82,83,84,85,86,87,88)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,89,90,91,93,94,95,96,97,98,99)
	MR_init_label9(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,100,135,104,106,108,109,110,111,114)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__expand_lambda__[2, 9]_0'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(40);
	MR_sv(40) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(19) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 8);
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i3);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(list__filter_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(18) = MR_tfield(0, MR_sv(7), 1);
	MR_r1 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(25) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__extra_nonlocal_typeinfos_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(19),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i14);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(20);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_r4 = MR_tempr1;
	MR_sv(19) = MR_r1;
	MR_sv(20) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(21) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(22) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(25);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i13);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lambda", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lambda.expand_lambda\'/15", 50);
	MR_r3 = (MR_Word) MR_string_const("unexpected unification", 22);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(25) = MR_r1;
	MR_np_call_localret_ent(parse_tree__set_of_var__delete_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(19);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__difference_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i17);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(19);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__union_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i18);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i21);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i19);
	}
	MR_r2 = MR_sv(19);
	MR_sv(19) = MR_sv(16);
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_r2 = MR_r1;
	MR_sv(19) = (MR_Integer) 1;
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i26);
	}
	MR_sv(25) = MR_r1;
	MR_sv(26) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(28) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(29) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(28);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i28);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(29);
	MR_sv(29) = MR_r1;
	MR_sv(27) = MR_r2;
	MR_sv(33) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(33);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__remove_suffix_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	MR_sv(34) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(35) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(36));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i33);
	MR_sv(30) = MR_r2;
	MR_r1 = MR_sv(33);
	MR_np_call_localret_ent(list__member_2_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i35);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__member_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i36);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(36));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(34);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(35);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(30);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(34);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(35);
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i39);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i41);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i42);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 245;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i43);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(24),6)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i45);
	}
	if ((MR_sv(23) != MR_sv(31))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	MR_r1 = MR_sv(27);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i47);
	}
	if ((MR_sv(23) != MR_sv(31))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i49);
	}
	MR_r1 = MR_sv(27);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(23),2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	if (MR_INT_NE(MR_sv(31),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	MR_r1 = MR_sv(27);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(29);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i52);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	if ((MR_sv(23) != MR_sv(31))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	MR_r1 = MR_sv(27);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i53);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(list__length_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i54);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(31);
	MR_sv(31) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__take_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i55);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
	}
	MR_sv(37) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(38) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(39));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i59);
	MR_sv(31) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(list__member_2_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i61);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i64);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(39));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(37);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(38);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(31);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(37);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(38);
	MR_sv(4) = MR_sv(30);
	MR_r1 = MR_sv(15);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i67);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_address_taken_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i68);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(28);
	MR_r3 = MR_sv(29);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i69);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(26);
	MR_tfield(0, MR_r2, 1) = MR_sv(28);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i114);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i71);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i72);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i73);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i74);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i75);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i76);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_np_call_localret_ent(term__context_line_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i77);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_next_lambda_count_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i78);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(28);
	MR_sv(28) = MR_r1;
	MR_sv(29) = MR_r2;
	MR_r1 = MR_sv(26);
	MR_r2 = (MR_Word) MR_string_const("IntroducedFrom", 14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(28);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i79);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i80);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__lambda__uni_modes_to_modes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i81);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i82);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i83);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(31);
	MR_sv(31) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i84);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(31);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i85);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(31);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(30);
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i86);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(31);
	MR_r3 = MR_sv(22);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__overlay_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i87);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(31);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i88);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i89);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(31);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i90);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i91);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__check_lambda_arg_type_and_mode_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(29);
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(32);
	MR_r2 = MR_sv(31);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(30);
	MR_r6 = MR_sv(22);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_corresponding_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i93);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__purity_to_markers_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i94);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i95);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__lambda__restrict_var_maps_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i96);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(25);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(22);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr3;
	MR_r11 = (MR_Integer) 0;
	MR_r12 = MR_sv(31);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_13_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i97);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__ensure_all_headvars_are_named_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i98);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i99);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(16),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i100);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i100);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i104);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_np_call_localret_ent(set__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i106);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_reg_r_headvars_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i135);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(27);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(15);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(28);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(21);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(30);
	MR_r9 = MR_sv(10);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(17);
	MR_r12 = MR_tempr2;
	MR_r13 = MR_sv(31);
	MR_r14 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i108);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(29);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i109);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i110);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i111);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0_i114);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_r1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(20);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr3;
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 6) = MR_sv(14);
	MR_tfield(0, MR_tempr2, 7) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 8) = MR_sv(19);
	MR_tfield(0, MR_tempr2, 9) = (MR_Integer) 1;
	MR_decr_sp_and_return(40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__lambda_maybe_bunch_0(void)
{
	transform_hlds__lambda_module0();
	transform_hlds__lambda_module1();
	transform_hlds__lambda_module2();
	transform_hlds__lambda_module3();
	transform_hlds__lambda_module4();
	transform_hlds__lambda_module5();
	transform_hlds__lambda_module6();
	transform_hlds__lambda_module7();
	transform_hlds__lambda_module8();
	transform_hlds__lambda_module9();
	transform_hlds__lambda_module10();
	transform_hlds__lambda_module11();
	transform_hlds__lambda_module12();
	transform_hlds__lambda_module13();
	transform_hlds__lambda_module14();
	transform_hlds__lambda_module15();
	transform_hlds__lambda_module16();
	transform_hlds__lambda_module17();
	transform_hlds__lambda_module18();
	transform_hlds__lambda_module19();
	transform_hlds__lambda_module20();
	transform_hlds__lambda_module21();
	transform_hlds__lambda_module22();
	transform_hlds__lambda_module23();
	transform_hlds__lambda_module24();
	transform_hlds__lambda_module25();
	transform_hlds__lambda_module26();
	transform_hlds__lambda_module27();
	transform_hlds__lambda_module28();
	transform_hlds__lambda_module29();
	transform_hlds__lambda_module30();
	transform_hlds__lambda_module31();
	transform_hlds__lambda_module32();
	transform_hlds__lambda_module33();
	transform_hlds__lambda_module34();
	transform_hlds__lambda_module35();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__lambda__init(void);
void mercury__transform_hlds__lambda__init_type_tables(void);
void mercury__transform_hlds__lambda__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__lambda__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__lambda__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__lambda__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__lambda__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__lambda_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0,
		transform_hlds__lambda__lambda_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0,
		transform_hlds__lambda__reg_wrapper_proc_0_0);
	mercury__transform_hlds__lambda__init_debugger();
}

void mercury__transform_hlds__lambda__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0);
	}
}


void mercury__transform_hlds__lambda__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__lambda__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__lambda);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__lambda__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__lambda__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
