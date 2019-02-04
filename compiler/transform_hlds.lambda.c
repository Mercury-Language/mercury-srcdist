/*
** Automatically generated from `lambda.m'
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
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 191 "../library/array.int"
#include "array.mh"

#line 28 "transform_hlds.lambda.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "transform_hlds.lambda.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.lambda.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "transform_hlds.lambda.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.lambda.c"
#line 30 "../library/time.int2"
#include "time.mh"

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

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__lambda__type_ctor_info_lambda_info_0;
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 2,4,8,9,11,13,14,15,17,18)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 16,20,21,22,25,23,27,28,32,33)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 39,40,37,43,44,45,46,47,49,53)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 51,56,48,57,58,59,65,68,63,71)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 72,73,29,30,75,76,77,78,79,80)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 81,82,83,84,85,86,87,88,89,90)
MR_decl_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 91,92,93,94,95,96,97,98,99,100)
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0, 132,102,104,106,107,108,109,112)
MR_decl_label4(transform_hlds__lambda__constraint_contains_vars_2_0, 5,6,7,8)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_cases_4_0, 18,4,6)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 4,3,7,6,11,10,15,16,17,14)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 21,20,25,28,24,35,36,34,41,40)
MR_decl_label4(transform_hlds__lambda__expand_lambdas_in_goal_4_0, 32,47,105,115)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0, 17,4,5)
MR_decl_label2(transform_hlds__lambda__expand_lambdas_in_module_2_0, 2,4)
MR_decl_label2(transform_hlds__lambda__expand_lambdas_in_pred_3_0, 2,3)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0, 12,13,14,15,16,18,20,21,22,23)
MR_decl_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0, 19,25,26,27,28,29,30,31,32,33)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_proc_4_0, 34,35,36)
MR_decl_label3(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0, 4,5,3)
MR_decl_label5(transform_hlds__lambda__filter_vartypes_4_0, 19,3,4,5,7)
MR_decl_label3(transform_hlds__lambda__find_used_vars_in_cases_3_0, 10,3,4)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 234,5,182,6,10,11,3,13,16,17)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 212,19,23,18,29,32,33,31,35,15)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 40,42,43,37,45,47,50,51,52,49)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 54,58,59,60,63,62,65,66,68,251)
MR_decl_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0, 56,74,75,76,77,78,79,80,81,122)
MR_decl_label8(transform_hlds__lambda__find_used_vars_in_goal_3_0, 83,85,73,88,87,71,91,92)
MR_decl_label3(transform_hlds__lambda__find_used_vars_in_goals_3_0, 10,3,4)
MR_decl_label4(transform_hlds__lambda__mark_vars_as_used_3_0, 11,3,4,5)
MR_decl_label10(transform_hlds__lambda__restrict_var_maps_8_0, 2,3,4,5,6,8,9,11,12,13)
MR_decl_label3(transform_hlds__lambda__uni_modes_to_modes_2_0, 6,7,2)
MR_decl_label9(__Unify___transform_hlds__lambda__lambda_info_0_0, 4,7,9,11,13,15,17,19,1)
MR_decl_label10(__Compare___transform_hlds__lambda__lambda_info_0_0, 3,2,5,10,14,18,22,26,30,34)
MR_decl_label4(__Compare___transform_hlds__lambda__lambda_info_0_0, 38,42,46,138)
MR_def_extern_entry(transform_hlds__lambda__expand_lambdas_in_module_2_0)
MR_def_extern_entry(transform_hlds__lambda__expand_lambdas_in_pred_3_0)
MR_decl_static(transform_hlds__lambda__uni_modes_to_modes_2_0)
MR_decl_static(transform_hlds__lambda__filter_vartypes_4_0)
MR_decl_static(transform_hlds__lambda__mark_vars_as_used_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_goal_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_goals_3_0)
MR_decl_static(transform_hlds__lambda__find_used_vars_in_cases_3_0)
MR_decl_static(transform_hlds__lambda__restrict_var_maps_8_0)
MR_decl_static(fn__transform_hlds__lambda__this_file_0_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_goal_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_cases_4_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0)
MR_decl_static(transform_hlds__lambda__expand_lambdas_in_proc_4_0)
MR_decl_static(transform_hlds__lambda__constraint_contains_vars_2_0)
MR_decl_static(__Unify___transform_hlds__lambda__lambda_info_0_0)
MR_decl_static(__Compare___transform_hlds__lambda__lambda_info_0_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_module_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_module_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(transform_hlds__lambda__expand_lambdas_in_pred_3_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(parse_tree__prog_type__type_vars_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_pred_3_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__expand_lambdas_in_pred_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_3 mercury_common_3[6] =
{
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,2)
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
MR_COMMON(3,4)
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
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__find_used_vars_in_goal_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,1)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__lambda__constraint_contains_vars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(3,5)
},
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(3,5)
},
{
(MR_Word *) &mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,5),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,3,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_marker_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
	"lambda_info",
	12,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__lambda__field_types_lambda_info_0_0,
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
	13,
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


static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_2 = {
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
367,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_1 = {
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
365,
"19"
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
598,
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
775,
"119"
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
774,
"117"
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
150,
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
143,
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
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
	break; } /* end while */
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
	break; } /* end while */
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

MR_BEGIN_MODULE(transform_hlds__lambda_module3)
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

MR_BEGIN_MODULE(transform_hlds__lambda_module4)
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
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
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

MR_BEGIN_MODULE(transform_hlds__lambda_module5)
	MR_init_entry1(transform_hlds__lambda__find_used_vars_in_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__find_used_vars_in_goal_3_0);
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,234,5,182,6,10,11,3,13,16,17)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,212,19,23,18,29,32,33,31,35,15)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,40,42,43,37,45,47,50,51,52,49)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,54,58,59,60,63,62,65,66,68,251)
	MR_init_label10(transform_hlds__lambda__find_used_vars_in_goal_3_0,56,74,75,76,77,78,79,80,81,122)
	MR_init_label8(transform_hlds__lambda__find_used_vars_in_goal_3_0,83,85,73,88,87,71,91,92)
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
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i3);
	}
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i6);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_mask_field(MR_r3, 0);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i10);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i182);
	}
	MR_r1 = MR_tfield(2, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i11);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i13);
	}
	MR_r1 = MR_tfield(1, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i16);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i17);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i19);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i18);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i212);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 4);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i212);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tfield(2, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i23);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i212);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i29);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__mark_vars_as_used_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 8);
	MR_r1 = MR_tfield(2, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i32);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i33);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i35);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__set_4_0);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i40);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i42);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i43);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,43)
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
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i45);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_goals_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i47);
	}
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__lambda__find_used_vars_in_goals_3_0);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i49);
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
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i50);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i51);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i52);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i54);
	}
	MR_r1 = MR_tfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i56);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i58);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i59);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i60);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i88);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i62);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i63);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i88);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i65);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i66);
	}
	MR_sv(1) = MR_tfield(3, MR_r5, 2);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i88);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i68);
	}
	MR_r1 = MR_tfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.lambda", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("unexpected scope", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i251);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i73);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 5);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i74);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i75);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i76);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i77);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i78);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i79);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i81);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i83);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i85);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i122);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,85)
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
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i87);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i88);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
	}
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r3, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__lambda__find_used_vars_in_goal_3_0_i234);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i91);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		transform_hlds__lambda__find_used_vars_in_goal_3_0_i92);
MR_def_label(transform_hlds__lambda__find_used_vars_in_goal_3_0,92)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module6)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module7)
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
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(map__from_sorted_assoc_list_2_0);
MR_decl_entry(hlds__hlds_rtti__restrict_rtti_varmaps_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module8)
	MR_init_entry1(transform_hlds__lambda__restrict_var_maps_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__restrict_var_maps_8_0);
	MR_init_label10(transform_hlds__lambda__restrict_var_maps_8_0,2,3,4,5,6,8,9,11,12,13)
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__mark_vars_as_used_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i5);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__find_used_vars_in_goal_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i6);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i8);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__lambda__filter_vartypes_4_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i9);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i11);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_sorted_assoc_list_2_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i12);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__restrict_rtti_varmaps_3_0,
		transform_hlds__lambda__restrict_var_maps_8_0_i13);
MR_def_label(transform_hlds__lambda__restrict_var_maps_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module9)
	MR_init_entry1(fn__transform_hlds__lambda__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__lambda__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__lambda__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda.m", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module10)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_goal_4_0);
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0,4,3,7,6,11,10,15,16,17,14)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_goal_4_0,21,20,25,28,24,35,36,34,41,40)
	MR_init_label4(transform_hlds__lambda__expand_lambdas_in_goal_4_0,32,47,105,115)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_r4 = MR_tfield(0, MR_tempr2, 3);
	MR_r5 = MR_tfield(0, MR_tempr2, 4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i4);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i6);
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
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i7);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i10);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i11);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i14);
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
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i15);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i16);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i17);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,17)
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
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i20);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i21);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i24);
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
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i25);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i105);
	}
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i28);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,28)
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
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i32);
	}
	MR_r4 = MR_tfield(3, MR_r3, 1);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i34);
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
	MR_sv(6) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i35);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_list_4_0,
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i36);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i40);
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
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i41);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,41)
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
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda.m", 8);
	MR_r2 = (MR_Word) MR_string_const("expand_lambdas_in_goal_2: bi_implication", 40);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_goal_4_0_i115);
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
		transform_hlds__lambda__expand_lambdas_in_goal_4_0_i47);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_goal_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__lambda_module11)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module12)
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


MR_BEGIN_MODULE(transform_hlds__lambda_module13)
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
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_sv(6) = MR_tfield(2, MR_r2, 2);
	MR_sv(7) = MR_tfield(2, MR_r2, 4);
	MR_sv(8) = MR_tfield(2, MR_r2, 5);
	MR_sv(9) = MR_tfield(2, MR_r2, 6);
	MR_sv(10) = MR_tfield(2, MR_r2, 7);
	MR_r1 = MR_tfield(2, MR_r2, 8);
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
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(3);
	MR_r10 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,
		transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_unify_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
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
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module14)
	MR_init_entry1(transform_hlds__lambda__expand_lambdas_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__expand_lambdas_in_proc_4_0);
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0,12,13,14,15,16,18,20,21,22,23)
	MR_init_label10(transform_hlds__lambda__expand_lambdas_in_proc_4_0,19,25,26,27,28,29,30,31,32,33)
	MR_init_label3(transform_hlds__lambda__expand_lambdas_in_proc_4_0,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_lambdas_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__expand_lambdas_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
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
	MR_sv(3) = MR_r1;
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
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i5);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i6);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i7);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i8);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i9);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i10);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i11);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i12);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i13);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i14);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i15);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i16);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = MR_sv(15);
	MR_tfield(0, MR_r2, 1) = MR_sv(16);
	MR_tfield(0, MR_r2, 2) = MR_sv(12);
	MR_tfield(0, MR_r2, 3) = MR_sv(19);
	MR_tfield(0, MR_r2, 4) = MR_sv(18);
	MR_tfield(0, MR_r2, 5) = MR_sv(13);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_sv(11);
	MR_tfield(0, MR_r2, 8) = MR_sv(10);
	MR_tfield(0, MR_r2, 9) = MR_sv(5);
	MR_tfield(0, MR_r2, 10) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 11) = (MR_Integer) 0;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(transform_hlds__lambda__expand_lambdas_in_goal_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i18);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 10);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 4);
	MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_4_0_i19);
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 11);
	MR_sv(16) = MR_tfield(0, MR_r2, 9);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i21);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i22);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(16);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i23);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(transform_hlds__lambda__expand_lambdas_in_proc_4_0_i25);
	}
	MR_sv(4) = MR_sv(12);
	MR_sv(11) = MR_sv(13);
	MR_sv(12) = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i27);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(transform_hlds__lambda__restrict_var_maps_8_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i26);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(4) = MR_tempr2;
	MR_sv(11) = MR_tempr1;
	MR_sv(12) = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i27);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i28);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i29);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i30);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i31);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i32);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i33);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i34);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i35);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__lambda__expand_lambdas_in_proc_4_0_i36);
MR_def_label(transform_hlds__lambda__expand_lambdas_in_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__subset_2_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module15)
	MR_init_entry1(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_init_label4(transform_hlds__lambda__constraint_contains_vars_2_0,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constraint_contains_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__lambda__constraint_contains_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i5);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i6);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i7);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__lambda__constraint_contains_vars_2_0_i8);
MR_def_label(transform_hlds__lambda__constraint_contains_vars_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__subset_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module16)
	MR_init_entry1(__Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label9(__Unify___transform_hlds__lambda__lambda_info_0_0,4,7,9,11,13,15,17,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__lambda__lambda_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i19);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
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
	MR_sv(12) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i9);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i11);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i13);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i15);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(18))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(8), (char *) (MR_Word *) MR_sv(19)) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__lambda__lambda_info_0_0_i17);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(21))) {
		MR_GOTO_LAB(__Unify___transform_hlds__lambda__lambda_info_0_0_i1);
	}
	MR_r1 = (MR_sv(11) == MR_sv(22));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__lambda__lambda_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module17)
	MR_init_entry1(__Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__lambda__lambda_info_0_0);
	MR_init_label10(__Compare___transform_hlds__lambda__lambda_info_0_0,3,2,5,10,14,18,22,26,30,34)
	MR_init_label4(__Compare___transform_hlds__lambda__lambda_info_0_0,38,42,46,138)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__lambda__lambda_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i3);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
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
	MR_sv(22) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i10);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i18);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i22);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i26);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i30);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i34);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i38);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i42);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__lambda__lambda_info_0_0_i46);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__lambda__lambda_info_0_0_i138);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__lambda__lambda_info_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
MR_decl_entry(map__apply_to_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__goal_util__extra_nonlocal_typeinfos_5_0);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(list__remove_suffix_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
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
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(hlds__hlds_module__module_info_next_lambda_count_4_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_pred__purity_to_markers_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_13_0);
MR_decl_entry(hlds__hlds_pred__ensure_all_headvars_are_named_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_assert_id_0;
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_create_16_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__lambda_module18)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0);
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,2,4,8,9,11,13,14,15,17,18)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,16,20,21,22,25,23,27,28,32,33)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,39,40,37,43,44,45,46,47,49,53)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,51,56,48,57,58,59,65,68,63,71)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,72,73,29,30,75,76,77,78,79,80)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,81,82,83,84,85,86,87,88,89,90)
	MR_init_label10(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,91,92,93,94,95,96,97,98,99,100)
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,132,102,104,106,107,108,109,112)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__expand_lambda__[2]_0'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(42);
	MR_sv(42) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 10);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(33) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(21) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(34) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(35) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(35);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,3,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(35);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i9);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__lambda__constraint_contains_vars_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(list__filter_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i11);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(20) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(21) = MR_tfield(0, MR_sv(7), 1);
	MR_r1 = MR_sv(21);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(34);
	MR_r3 = MR_sv(22);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i14);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__extra_nonlocal_typeinfos_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i15);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i17);
	}
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_sv(22) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(23) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(34);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i16);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__lambda__this_file_0_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i18);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("expand_lambda: unexpected unification", 37);
	MR_np_call_localret_ent(require__unexpected_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i16);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(34) = MR_r1;
	MR_np_call_localret_ent(set__delete_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i20);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(34);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i21);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(34);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i25);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i23);
	}
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_sv(19);
	MR_r1 = MR_sv(34);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i27);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(34);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r1;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i28);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i30);
	}
	MR_sv(24) = MR_r1;
	MR_sv(25) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(26) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(27) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_sv(26);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i32);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(27);
	MR_sv(27) = MR_r1;
	MR_sv(28) = MR_r2;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__remove_suffix_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i33);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	MR_sv(36) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(37) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(38));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i37);
	MR_sv(29) = MR_r2;
	MR_r1 = MR_sv(34);
	MR_np_call_localret_ent(list__member_2_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i39);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(34);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i40);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(38));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(36);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(37);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(29);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(36);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(37);
	MR_r1 = MR_sv(28);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i43);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i44);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i45);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i46);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(32);
	MR_sv(32) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 234;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i47);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(32),6)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i49);
	}
	if ((MR_sv(31) != MR_sv(30))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	MR_r1 = MR_sv(28);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i51);
	}
	if ((MR_sv(31) != MR_sv(30))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i53);
	}
	MR_r1 = MR_sv(28);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(31),2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	if (MR_INT_NE(MR_sv(30),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	MR_r1 = MR_sv(28);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i48);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i56);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	if ((MR_sv(31) != MR_sv(30))) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	MR_r1 = MR_sv(28);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i57);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(list__length_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i58);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(30);
	MR_sv(30) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__take_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i59);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
	}
	MR_sv(39) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(40) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(41));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i63);
	MR_sv(30) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(list__member_2_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i65);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i68);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(41));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(39);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(40);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i29);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(30);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(39);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(40);
	MR_sv(3) = MR_sv(29);
	MR_r1 = MR_sv(18);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i71);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_address_taken_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i72);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(27);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i73);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(25);
	MR_tfield(0, MR_r2, 1) = MR_sv(26);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i112);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i75);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i76);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i77);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i78);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i79);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(term__context_line_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i80);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_next_lambda_count_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i81);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_sv(28) = MR_r2;
	MR_r1 = MR_sv(25);
	MR_r2 = (MR_Word) MR_string_const("IntroducedFrom", 14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_sv(26);
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i82);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i83);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(23);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__lambda__uni_modes_to_modes_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i84);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i85);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i86);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(30);
	MR_sv(30) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i87);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(30);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i88);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(30);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(29);
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i89);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(33);
	MR_r2 = MR_sv(34);
	MR_r3 = MR_sv(30);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i90);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(30);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i91);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_uni_modes_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i92);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(30);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i93);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = MR_sv(35);
	MR_r3 = MR_sv(24);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i94);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__purity_to_markers_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i95);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(34);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i96);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(transform_hlds__lambda__restrict_var_maps_8_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i97);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(24);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr3;
	MR_r11 = (MR_Integer) 0;
	MR_r12 = MR_sv(30);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_13_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i98);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__ensure_all_headvars_are_named_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i99);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i100);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(19),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i102);
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, assert_id);
	MR_np_call_localret_ent(set__init_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i104);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i132);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(27);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(26);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(23);
	MR_r6 = (MR_Word) MR_tbmkword(0, 8);
	MR_r7 = MR_sv(29);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(11);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(20);
	MR_r12 = MR_tempr2;
	MR_r13 = MR_sv(30);
	MR_r14 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_create_16_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i106);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i107);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i108);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i109);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0_i112);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_97_109_98_100_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_93_95_48_14_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(22);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr3;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r2, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 12);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(14);
	MR_tfield(0, MR_tempr2, 6) = MR_sv(15);
	MR_tfield(0, MR_tempr2, 7) = MR_sv(16);
	MR_tfield(0, MR_tempr2, 8) = MR_sv(17);
	MR_tfield(0, MR_tempr2, 9) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 10) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 11) = (MR_Integer) 1;
	MR_decr_sp_and_return(42);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
