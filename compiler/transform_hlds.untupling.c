/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__untupling__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.untupling.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.untupling.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.untupling.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.untupling.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.untupling.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.untupling.c"
#line 49 "transform_hlds.untupling.c"
#include "transform_hlds.untupling.mh"

#line 52 "transform_hlds.untupling.c"
#line 53 "transform_hlds.untupling.c"
#ifndef TRANSFORM_HLDS__UNTUPLING_DECL_GUARD
#define TRANSFORM_HLDS__UNTUPLING_DECL_GUARD

#line 57 "transform_hlds.untupling.c"
#line 58 "transform_hlds.untupling.c"

#endif
#line 61 "transform_hlds.untupling.c"

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
	MR_Word * f3[7];
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
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
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
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__untupling__type_ctor_info_expansion_result_0,
	mercury_data_transform_hlds__untupling__type_ctor_info_transform_map_0,
	mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0,
	mercury_data_transform_hlds__untupling__type_ctor_info_untuple_map_0;
MR_decl_label10(transform_hlds__untupling__at_least_one_expandable_type_2_0, 129,7,9,11,6,15,17,19,21,23)
MR_decl_label8(transform_hlds__untupling__at_least_one_expandable_type_2_0, 25,32,34,37,14,40,3,1)
MR_decl_label7(transform_hlds__untupling__build_untuple_map_4_0, 59,3,12,9,10,18,8)
MR_decl_label10(transform_hlds__untupling__create_aux_pred_12_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__untupling__create_aux_pred_12_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label4(transform_hlds__untupling__create_aux_pred_12_0, 22,23,26,27)
MR_decl_label8(transform_hlds__untupling__create_untuple_vars_8_0, 23,4,5,6,7,8,10,11)
MR_decl_label10(transform_hlds__untupling__expand_args_in_pred_7_0, 2,3,5,6,8,9,11,13,15,16)
MR_decl_label8(transform_hlds__untupling__expand_args_in_pred_7_0, 19,20,22,24,25,28,30,4)
MR_decl_label10(transform_hlds__untupling__expand_args_in_proc_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__untupling__expand_args_in_proc_8_0, 12,13,14,15,16,17,18,20,21,25)
MR_decl_label7(transform_hlds__untupling__expand_args_in_proc_2_12_0, 2,3,4,7,8,10,11)
MR_decl_label4(transform_hlds__untupling__expand_args_in_proc_3_12_0, 3,9,10,8)
MR_decl_label10(transform_hlds__untupling__expand_argument_5_0, 5,6,4,8,9,3,12,14,16,11)
MR_decl_label10(transform_hlds__untupling__expand_argument_5_0, 20,22,24,26,28,30,37,39,42,2)
MR_decl_label10(transform_hlds__untupling__expand_call_args_2_11_0, 3,10,11,14,13,16,17,18,19,22)
MR_decl_label10(transform_hlds__untupling__expand_call_args_2_11_0, 23,25,26,27,28,21,31,32,34,36)
MR_decl_label5(transform_hlds__untupling__expand_call_args_2_11_0, 37,38,39,30,8)
MR_decl_label5(transform_hlds__untupling__expand_one_arg_in_proc_12_0, 2,4,7,9,10)
MR_decl_label10(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0, 3,4,6,7,8,9,10,14,15,17)
MR_decl_label10(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0, 18,19,20,21,22,23,13,28,29,31)
MR_decl_label7(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0, 32,33,34,35,36,37,27)
MR_decl_label3(transform_hlds__untupling__fix_calls_in_cases_8_0, 18,4,6)
MR_decl_label5(transform_hlds__untupling__fix_calls_in_conj_8_0, 35,4,5,9,6)
MR_decl_label10(transform_hlds__untupling__fix_calls_in_goal_8_0, 7,6,10,4,14,13,18,19,20,17)
MR_decl_label10(transform_hlds__untupling__fix_calls_in_goal_8_0, 24,23,29,31,32,33,34,40,41,42)
MR_decl_label10(transform_hlds__untupling__fix_calls_in_goal_8_0, 35,27,26,50,47,52,46,57,56,161)
MR_decl_label3(transform_hlds__untupling__fix_calls_in_goal_list_8_0, 17,4,5)
MR_decl_label2(transform_hlds__untupling__fix_calls_in_pred_4_0, 2,3)
MR_decl_label10(transform_hlds__untupling__fix_calls_in_proc_5_0, 2,3,4,5,6,11,13,14,15,16)
MR_decl_label2(transform_hlds__untupling__fix_calls_in_proc_5_0, 17,8)
MR_decl_label5(transform_hlds__untupling__untuple_arguments_4_0, 2,3,4,7,8)
MR_decl_label4(__Unify___transform_hlds__untupling__expansion_result_0_0, 14,5,7,1)
MR_decl_label3(__Unify___transform_hlds__untupling__transformed_proc_0_0, 4,8,1)
MR_decl_label6(__Compare___transform_hlds__untupling__expansion_result_0_0, 24,7,5,9,11,16)
MR_decl_label4(__Compare___transform_hlds__untupling__transformed_proc_0_0, 3,2,5,21)
MR_def_extern_entry(transform_hlds__untupling__untuple_arguments_4_0)
MR_decl_static(transform_hlds__untupling__at_least_one_expandable_type_2_0)
MR_decl_static(transform_hlds__untupling__expand_args_in_pred_7_0)
MR_decl_static(transform_hlds__untupling__create_untuple_vars_8_0)
MR_decl_static(transform_hlds__untupling__expand_argument_5_0)
MR_decl_static(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0)
MR_decl_static(transform_hlds__untupling__expand_args_in_proc_3_12_0)
MR_decl_static(transform_hlds__untupling__expand_one_arg_in_proc_12_0)
MR_decl_static(transform_hlds__untupling__build_untuple_map_4_0)
MR_decl_static(transform_hlds__untupling__expand_args_in_proc_2_12_0)
MR_decl_static(transform_hlds__untupling__create_aux_pred_12_0)
MR_decl_static(transform_hlds__untupling__expand_args_in_proc_8_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_pred_4_0)
MR_decl_static(transform_hlds__untupling__expand_call_args_10_0)
MR_decl_static(transform_hlds__untupling__expand_call_args_2_11_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_goal_8_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_conj_8_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_goal_list_8_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_cases_8_0)
MR_decl_static(transform_hlds__untupling__fix_calls_in_proc_5_0)
MR_decl_static(__Unify___transform_hlds__untupling__expansion_result_0_0)
MR_decl_static(__Compare___transform_hlds__untupling__expansion_result_0_0)
MR_decl_static(__Unify___transform_hlds__untupling__transform_map_0_0)
MR_decl_static(__Compare___transform_hlds__untupling__transform_map_0_0)
MR_decl_static(__Unify___transform_hlds__untupling__transformed_proc_0_0)
MR_decl_static(__Compare___transform_hlds__untupling__transformed_proc_0_0)
MR_decl_static(__Unify___transform_hlds__untupling__untuple_map_0_0)
MR_decl_static(__Compare___transform_hlds__untupling__untuple_map_0_0)
MR_decl_static(fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__untupling__expand_args_in_pred_7_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_2;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,4,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__at_least_one_expandable_type_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__expand_argument_5_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__at_least_one_expandable_type_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__expand_argument_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__expand_args_in_pred_7_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__expand_args_in_pred_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__fix_calls_in_pred_4_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__untupling__fix_calls_in_pred_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__untupling__field_types_expansion_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_0 = {
	"expansion",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__untupling__field_types_expansion_result_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_1 = {
	"no_expansion",
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

const MR_DuFunctorDescPtr mercury_data_transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[] = {
	&mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[] = {
	&mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__untupling__du_ptag_ordered_expansion_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__untupling__du_stag_ordered_expansion_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__untupling__du_stag_ordered_expansion_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__untupling__du_name_ordered_expansion_result_0[] = {
	&mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
	&mercury_data_transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

const MR_Integer mercury_data_transform_hlds__untupling__functor_number_map_expansion_result_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__untupling__expansion_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__untupling__expansion_result_0_0)),
	"transform_hlds.untupling",
	"expansion_result",
	{ (void *)mercury_data_transform_hlds__untupling__du_name_ordered_expansion_result_0 },
	{ (void *)mercury_data_transform_hlds__untupling__du_ptag_ordered_expansion_result_0 },
	2,
	4,
	mercury_data_transform_hlds__untupling__functor_number_map_expansion_result_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__untupling__type_ctor_info_transform_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__untupling__transform_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__untupling__transform_map_0_0)),
	"transform_hlds.untupling",
	"transform_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__untupling__field_types_transformed_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 = {
	"transformed_proc",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__untupling__field_types_transformed_proc_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[] = {
	&mercury_data_transform_hlds__untupling__du_functor_desc_transformed_proc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__untupling__du_name_ordered_transformed_proc_0[] = {
	&mercury_data_transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

const MR_Integer mercury_data_transform_hlds__untupling__functor_number_map_transformed_proc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__untupling__transformed_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__untupling__transformed_proc_0_0)),
	"transform_hlds.untupling",
	"transformed_proc",
	{ (void *)mercury_data_transform_hlds__untupling__du_name_ordered_transformed_proc_0 },
	{ (void *)mercury_data_transform_hlds__untupling__du_ptag_ordered_transformed_proc_0 },
	1,
	4,
	mercury_data_transform_hlds__untupling__functor_number_map_transformed_proc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__untupling__untuple_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__untupling__untuple_map_0_0)),
	"transform_hlds.untupling",
	"untuple_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__fix_calls_in_pred_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.untupling",
"transform_hlds.untupling",
"fix_calls_in_proc",
5,
0
},
"transform_hlds.untupling",
"untupling.m",
466,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__expand_argument_5_0_1 = {
{
MR_FUNCTION,
"transform_hlds.untupling",
"transform_hlds.untupling",
"lambda_untupling_m_764",
2,
0
},
"transform_hlds.untupling",
"untupling.m",
764,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__expand_args_in_pred_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.untupling",
"transform_hlds.untupling",
"expand_args_in_proc",
8,
0
},
"transform_hlds.untupling",
"untupling.m",
192,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__at_least_one_expandable_type_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.untupling",
"transform_hlds.untupling",
"lambda_untupling_m_764",
2,
0
},
"transform_hlds.untupling",
"untupling.m",
764,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.untupling",
"transform_hlds.untupling",
"fix_calls_in_pred",
4,
0
},
"transform_hlds.untupling",
"untupling.m",
458,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__untupling__untuple_arguments_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.untupling",
"transform_hlds.untupling",
"expand_args_in_pred",
7,
0
},
"transform_hlds.untupling",
"untupling.m",
165,
"6"
};


MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__counter__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module0)
	MR_init_entry1(transform_hlds__untupling__untuple_arguments_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__untuple_arguments_4_0);
	MR_init_label5(transform_hlds__untupling__untuple_arguments_4_0,2,3,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'untuple_arguments'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__untupling__untuple_arguments_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__untupling__untuple_arguments_4_0_i2);
MR_def_label(transform_hlds__untupling__untuple_arguments_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__untupling__untuple_arguments_4_0_i3);
MR_def_label(transform_hlds__untupling__untuple_arguments_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		transform_hlds__untupling__untuple_arguments_4_0_i4);
MR_def_label(transform_hlds__untupling__untuple_arguments_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__untupling__untuple_arguments_4_0_i7);
MR_def_label(transform_hlds__untupling__untuple_arguments_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__untupling__untuple_arguments_4_0_i8);
MR_def_label(transform_hlds__untupling__untuple_arguments_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__untupling__fix_calls_in_pred_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(list__member_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module1)
	MR_init_entry1(transform_hlds__untupling__at_least_one_expandable_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__at_least_one_expandable_type_2_0);
	MR_init_label10(transform_hlds__untupling__at_least_one_expandable_type_2_0,129,7,9,11,6,15,17,19,21,23)
	MR_init_label8(transform_hlds__untupling__at_least_one_expandable_type_2_0,25,32,34,37,14,40,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'at_least_one_expandable_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__at_least_one_expandable_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i7);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i6);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i9);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i11);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i40);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i15);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i17);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i19);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i21);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i23);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i25);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i32);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i14);
	}
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i34);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__untupling__at_least_one_expandable_type_2_0_i37);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i40);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i3);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__untupling__at_least_one_expandable_type_2_0_i129);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__untupling__at_least_one_expandable_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(__Unify___hlds__hlds_pred__goal_type_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(__Unify___parse_tree__prog_data__prog_constraints_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_4_0);
MR_decl_entry(varset__is_empty_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__untupling_module2)
	MR_init_entry1(transform_hlds__untupling__expand_args_in_pred_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_args_in_pred_7_0);
	MR_init_label10(transform_hlds__untupling__expand_args_in_pred_7_0,2,3,5,6,8,9,11,13,15,16)
	MR_init_label8(transform_hlds__untupling__expand_args_in_pred_7_0,19,20,22,24,25,28,30,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_args_in_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_args_in_pred_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i2);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i3);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i5);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i6);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i8);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__goal_type_0_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i9);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i11);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i13);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i15);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i16);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i19);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_constraints_0_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i20);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i22);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_4_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i24);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__is_empty_1_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i25);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__untupling__at_least_one_expandable_type_2_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i28);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_pred_7_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__untupling__expand_args_in_pred_7_0_i30);
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__untupling__expand_args_in_proc_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
MR_def_label(transform_hlds__untupling__expand_args_in_pred_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module3)
	MR_init_entry1(transform_hlds__untupling__create_untuple_vars_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__create_untuple_vars_8_0);
	MR_init_label8(transform_hlds__untupling__create_untuple_vars_8_0,23,4,5,6,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_untuple_vars'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__create_untuple_vars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__create_untuple_vars_8_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i4);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i5);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i6);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Untupled_", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i7);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i8);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i10);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__untupling__create_untuple_vars_8_0,
		transform_hlds__untupling__create_untuple_vars_8_0_i11);
MR_def_label(transform_hlds__untupling__create_untuple_vars_8_0,11)
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

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module4)
	MR_init_entry1(transform_hlds__untupling__expand_argument_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_argument_5_0);
	MR_init_label10(transform_hlds__untupling__expand_argument_5_0,5,6,4,8,9,3,12,14,16,11)
	MR_init_label10(transform_hlds__untupling__expand_argument_5_0,20,22,24,26,28,30,37,39,42,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_argument'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_argument_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__untupling__expand_argument_5_0_i5);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_argument_5_0_i6);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i3);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__untupling__expand_argument_5_0_i8);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_argument_5_0_i9);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__untupling__expand_argument_5_0_i12);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i11);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__untupling__expand_argument_5_0_i14);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__expand_argument_5_0_i16);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__untupling__expand_argument_5_0_i20);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__expand_argument_5_0_i22);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		transform_hlds__untupling__expand_argument_5_0_i24);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		transform_hlds__untupling__expand_argument_5_0_i26);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__untupling__expand_argument_5_0_i28);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		transform_hlds__untupling__expand_argument_5_0_i30);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_sv(4) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__untupling__expand_argument_5_0_i37);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_argument_5_0_i2);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__expand_argument_5_0_i39);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		transform_hlds__untupling__expand_argument_5_0_i42);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__untupling__expand_argument_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(varset__lookup_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__hlds_goal__construct_functor_4_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_functor_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module5)
	MR_init_entry1(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_one_arg_in_proc_2_12_0);
	MR_init_label10(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,3,4,6,7,8,9,10,14,15,17)
	MR_init_label10(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,18,19,20,21,22,23,13,28,29,31)
	MR_init_label7(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,32,33,34,35,36,37,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_one_arg_in_proc_2'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i3);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__untupling__expand_argument_5_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i4);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i7);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__untupling__create_untuple_vars_8_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i8);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i9);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i10);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i14);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i15);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i13);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i17);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i18);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i19);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i20);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i21);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i22);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i23);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i28);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i29);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i27);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i31);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i32);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i33);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i34);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i35);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i36);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__untupling__expand_one_arg_in_proc_2_12_0_i37);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", 64);
	MR_r3 = (MR_Word) MR_string_const("unsupported mode", 16);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module6)
	MR_init_entry1(transform_hlds__untupling__expand_args_in_proc_3_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_args_in_proc_3_12_0);
	MR_init_label4(transform_hlds__untupling__expand_args_in_proc_3_12_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_args_in_proc_3'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_args_in_proc_3_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_proc_3_12_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_proc_3_12_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__untupling__expand_args_in_proc_3_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_args_in_proc_3_12_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__untupling__expand_one_arg_in_proc_12_0,
		transform_hlds__untupling__expand_args_in_proc_3_12_0_i9);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_3_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(transform_hlds__untupling__expand_args_in_proc_3_12_0,
		transform_hlds__untupling__expand_args_in_proc_3_12_0_i10);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_3_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__untupling__expand_args_in_proc_3_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", 61);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module7)
	MR_init_entry1(transform_hlds__untupling__expand_one_arg_in_proc_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_one_arg_in_proc_12_0);
	MR_init_label5(transform_hlds__untupling__expand_one_arg_in_proc_12_0,2,4,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_one_arg_in_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_one_arg_in_proc_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r7;
	MR_np_call_localret_ent(transform_hlds__untupling__expand_one_arg_in_proc_2_12_0,
		transform_hlds__untupling__expand_one_arg_in_proc_12_0_i2);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_one_arg_in_proc_12_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__expand_args_in_proc_3_12_0,
		transform_hlds__untupling__expand_one_arg_in_proc_12_0_i7);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__untupling__expand_one_arg_in_proc_12_0_i9);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		transform_hlds__untupling__expand_one_arg_in_proc_12_0_i10);
MR_def_label(transform_hlds__untupling__expand_one_arg_in_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module8)
	MR_init_entry1(transform_hlds__untupling__build_untuple_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__build_untuple_map_4_0);
	MR_init_label7(transform_hlds__untupling__build_untuple_map_4_0,59,3,12,9,10,18,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_untuple_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__build_untuple_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		transform_hlds__untupling__build_untuple_map_4_0_i12);
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i59);
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__untupling__build_untuple_map_4_0_i18);
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__untupling__build_untuple_map_4_0_i59);
	}
MR_def_label(transform_hlds__untupling__build_untuple_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.build_untuple_map\'/4", 56);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module9)
	MR_init_entry1(transform_hlds__untupling__expand_args_in_proc_2_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_args_in_proc_2_12_0);
	MR_init_label7(transform_hlds__untupling__expand_args_in_proc_2_12_0,2,3,4,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_args_in_proc_2'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_args_in_proc_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__untupling__expand_args_in_proc_3_12_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i2);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i3);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i4);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i7);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i8);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i10);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__untupling__build_untuple_map_4_0,
		transform_hlds__untupling__expand_args_in_proc_2_12_0_i11);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_2_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(mdbcomp__prim_data__add_sym_name_suffix_3_0);
MR_decl_entry(hlds__hlds_pred__define_new_pred_19_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module10)
	MR_init_entry1(transform_hlds__untupling__create_aux_pred_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__create_aux_pred_12_0);
	MR_init_label10(transform_hlds__untupling__create_aux_pred_12_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__untupling__create_aux_pred_12_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label4(transform_hlds__untupling__create_aux_pred_12_0,22,23,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_aux_pred'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__create_aux_pred_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(19) = MR_tempr1;
	MR_sv(1) = MR_r5;
	MR_sv(18) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i2);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i3);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(15) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__untupling__create_aux_pred_12_0_i4);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i5);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i6);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i7);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i8);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i9);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_sv(19) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i10);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i11);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i12);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i13);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__untupling__create_aux_pred_12_0_i14);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__untupling__create_aux_pred_12_0_i15);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__untupling__create_aux_pred_12_0_i16);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__untupling__create_aux_pred_12_0_i17);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i18);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_string_const("untupling", 9);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__untupling__create_aux_pred_12_0_i19);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i20);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__untupling__create_aux_pred_12_0_i21);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__untupling__create_aux_pred_12_0_i22);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__add_sym_name_suffix_3_0,
		transform_hlds__untupling__create_aux_pred_12_0_i23);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(19);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = (MR_Integer) 1;
	MR_r14 = MR_sv(13);
	MR_r15 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__define_new_pred_19_0,
		transform_hlds__untupling__create_aux_pred_12_0_i26);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(17) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(19) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__untupling__create_aux_pred_12_0_i27);
MR_def_label(transform_hlds__untupling__create_aux_pred_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(19);
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_headvars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module11)
	MR_init_entry1(transform_hlds__untupling__expand_args_in_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_args_in_proc_8_0);
	MR_init_label10(transform_hlds__untupling__expand_args_in_proc_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__untupling__expand_args_in_proc_8_0,12,13,14,15,16,17,18,20,21,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_args_in_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_args_in_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i2);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i3);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i4);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i5);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i6);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i7);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i8);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__expand_args_in_proc_2_12_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i9);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_headvars_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i10);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i11);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i12);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i13);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i14);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i15);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i16);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i17);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__create_aux_pred_12_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i18);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_sv(10) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(12) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i20);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i21);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(11);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__untupling__expand_args_in_proc_8_0_i25);
MR_def_label(transform_hlds__untupling__expand_args_in_proc_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module12)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_pred_4_0);
	MR_init_label2(transform_hlds__untupling__fix_calls_in_pred_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__untupling__fix_calls_in_pred_4_0_i2);
MR_def_label(transform_hlds__untupling__fix_calls_in_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__untupling__fix_calls_in_pred_4_0_i3);
MR_def_label(transform_hlds__untupling__fix_calls_in_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__untupling__fix_calls_in_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module13)
	MR_init_entry1(transform_hlds__untupling__expand_call_args_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_call_args_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_call_args'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_call_args_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(transform_hlds__untupling__expand_call_args_2_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_vars_4_0);
MR_decl_entry(map__det_insert_from_corresponding_lists_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module14)
	MR_init_entry1(transform_hlds__untupling__expand_call_args_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__expand_call_args_2_11_0);
	MR_init_label10(transform_hlds__untupling__expand_call_args_2_11_0,3,10,11,14,13,16,17,18,19,22)
	MR_init_label10(transform_hlds__untupling__expand_call_args_2_11_0,23,25,26,27,28,21,31,32,34,36)
	MR_init_label5(transform_hlds__untupling__expand_call_args_2_11_0,37,38,39,30,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_call_args_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__expand_call_args_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i8);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(13) = MR_tfield(1, MR_r1, 1);
	MR_sv(14) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r5 = MR_sv(14);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i10);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__untupling__expand_argument_5_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i11);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i13);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__untupling__expand_call_args_10_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i14);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i16);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i17);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i18);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i19);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_sv(10) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i22);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i23);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i21);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i25);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i26);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i27);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__untupling__expand_call_args_2_11_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i28);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i31);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i32);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__expand_call_args_2_11_0_i30);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i34);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i36);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i37);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__untupling__expand_call_args_2_11_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i38);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__expand_call_args_2_11_0_i39);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(15);
	}
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.expand_call_args_2\'/11", 58);
	MR_r3 = (MR_Word) MR_string_const("unsupported mode", 16);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__untupling__expand_call_args_2_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.expand_call_args_2\'/11", 58);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module15)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_goal_8_0);
	MR_init_label10(transform_hlds__untupling__fix_calls_in_goal_8_0,7,6,10,4,14,13,18,19,20,17)
	MR_init_label10(transform_hlds__untupling__fix_calls_in_goal_8_0,24,23,29,31,32,33,34,40,41,42)
	MR_init_label10(transform_hlds__untupling__fix_calls_in_goal_8_0,35,27,26,50,47,52,46,57,56,161)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i161);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i4);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r6;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_r7 = MR_tempr2;
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i6);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_list_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i7);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r7;
	MR_r1 = MR_tfield(3, MR_r6, 2);
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_conj_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i10);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i13);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_list_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i14);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,6)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i17);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i18);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i19);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i20);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i23);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r6, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i24);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i26);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc);
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i29);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i31);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i32);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i33);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__expand_call_args_10_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i34);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tempr3 = MR_sv(6);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(2, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 5) = MR_tfield(2, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i40);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i41);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i42);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", 56);
	MR_r3 = (MR_Word) MR_string_const("not a call template", 19);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,5)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i46);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r6;
	MR_r7 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i47);
	}
	MR_r6 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i50);
	}
	MR_tempr2 = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_tempr2;
	MR_tempr4 = MR_r7;
	MR_decr_sp(10);
	MR_proceed();
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr2 = MR_tempr1;
	MR_tempr3 = MR_r7;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i52);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,4)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_8_0_i56);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_cases_8_0,
		transform_hlds__untupling__fix_calls_in_goal_8_0_i57);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.untupling", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", 56);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_8_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module16)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_conj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_conj_8_0);
	MR_init_label5(transform_hlds__untupling__fix_calls_in_conj_8_0,35,4,5,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_conj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_conj_8_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__untupling__fix_calls_in_conj_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_conj_8_0_i4);
MR_def_label(transform_hlds__untupling__fix_calls_in_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_conj_8_0,
		transform_hlds__untupling__fix_calls_in_conj_8_0_i5);
MR_def_label(transform_hlds__untupling__fix_calls_in_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_conj_8_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_conj_8_0_i6);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__untupling__fix_calls_in_conj_8_0_i9);
MR_def_label(transform_hlds__untupling__fix_calls_in_conj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__untupling__fix_calls_in_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module17)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_goal_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_goal_list_8_0);
	MR_init_label3(transform_hlds__untupling__fix_calls_in_goal_list_8_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_goal_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_goal_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_goal_list_8_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_list_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_goal_list_8_0_i4);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_goal_list_8_0,
		transform_hlds__untupling__fix_calls_in_goal_list_8_0_i5);
MR_def_label(transform_hlds__untupling__fix_calls_in_goal_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module18)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_cases_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_cases_8_0);
	MR_init_label3(transform_hlds__untupling__fix_calls_in_cases_8_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_cases'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_cases_8_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__untupling__fix_calls_in_cases_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_cases_8_0_i4);
MR_def_label(transform_hlds__untupling__fix_calls_in_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(transform_hlds__untupling__fix_calls_in_cases_8_0,
		transform_hlds__untupling__fix_calls_in_cases_8_0_i6);
MR_def_label(transform_hlds__untupling__fix_calls_in_cases_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module19)
	MR_init_entry1(transform_hlds__untupling__fix_calls_in_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__untupling__fix_calls_in_proc_5_0);
	MR_init_label10(transform_hlds__untupling__fix_calls_in_proc_5_0,2,3,4,5,6,11,13,14,15,16)
	MR_init_label2(transform_hlds__untupling__fix_calls_in_proc_5_0,17,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fix_calls_in_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__untupling__fix_calls_in_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i2);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i3);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i4);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i5);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__untupling__fix_calls_in_goal_8_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i6);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i11);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__untupling__fix_calls_in_proc_5_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i13);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i14);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i15);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i16);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__untupling__fix_calls_in_proc_5_0_i17);
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
	}
MR_def_label(transform_hlds__untupling__fix_calls_in_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module20)
	MR_init_entry1(__Unify___transform_hlds__untupling__expansion_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__untupling__expansion_result_0_0);
	MR_init_label4(__Unify___transform_hlds__untupling__expansion_result_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__untupling__expansion_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__expansion_result_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__expansion_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__untupling__expansion_result_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__untupling__expansion_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__expansion_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___transform_hlds__untupling__expansion_result_0_0_i7);
MR_def_label(__Unify___transform_hlds__untupling__expansion_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__expansion_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__untupling__expansion_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module21)
	MR_init_entry1(__Compare___transform_hlds__untupling__expansion_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__untupling__expansion_result_0_0);
	MR_init_label6(__Compare___transform_hlds__untupling__expansion_result_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__untupling__expansion_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__expansion_result_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__expansion_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__expansion_result_0_0_i7);
	}
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__expansion_result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,9)
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
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___transform_hlds__untupling__expansion_result_0_0_i11);
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__expansion_result_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__untupling__expansion_result_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module22)
	MR_init_entry1(__Unify___transform_hlds__untupling__transform_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__untupling__transform_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__untupling__transform_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc);
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

MR_BEGIN_MODULE(transform_hlds__untupling_module23)
	MR_init_entry1(__Compare___transform_hlds__untupling__transform_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__untupling__transform_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__untupling__transform_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__untupling, transformed_proc);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module24)
	MR_init_entry1(__Unify___transform_hlds__untupling__transformed_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__untupling__transformed_proc_0_0);
	MR_init_label3(__Unify___transform_hlds__untupling__transformed_proc_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__untupling__transformed_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__transformed_proc_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__untupling__transformed_proc_0_0_i4);
MR_def_label(__Unify___transform_hlds__untupling__transformed_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__untupling__transformed_proc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___transform_hlds__untupling__transformed_proc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__untupling__transformed_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__untupling_module25)
	MR_init_entry1(__Compare___transform_hlds__untupling__transformed_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__untupling__transformed_proc_0_0);
	MR_init_label4(__Compare___transform_hlds__untupling__transformed_proc_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__untupling__transformed_proc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__transformed_proc_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__untupling__transformed_proc_0_0_i2);
MR_def_label(__Compare___transform_hlds__untupling__transformed_proc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__untupling__transformed_proc_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__untupling__transformed_proc_0_0_i5);
MR_def_label(__Compare___transform_hlds__untupling__transformed_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__untupling__transformed_proc_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___transform_hlds__untupling__transformed_proc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module26)
	MR_init_entry1(__Unify___transform_hlds__untupling__untuple_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__untupling__untuple_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__untupling__untuple_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module27)
	MR_init_entry1(__Compare___transform_hlds__untupling__untuple_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__untupling__untuple_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__untupling__untuple_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__untupling_module28)
	MR_init_entry1(fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__expand_type__764__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__untupling__IntroducedFrom__func__expand_type__764__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__untupling_maybe_bunch_0(void)
{
	transform_hlds__untupling_module0();
	transform_hlds__untupling_module1();
	transform_hlds__untupling_module2();
	transform_hlds__untupling_module3();
	transform_hlds__untupling_module4();
	transform_hlds__untupling_module5();
	transform_hlds__untupling_module6();
	transform_hlds__untupling_module7();
	transform_hlds__untupling_module8();
	transform_hlds__untupling_module9();
	transform_hlds__untupling_module10();
	transform_hlds__untupling_module11();
	transform_hlds__untupling_module12();
	transform_hlds__untupling_module13();
	transform_hlds__untupling_module14();
	transform_hlds__untupling_module15();
	transform_hlds__untupling_module16();
	transform_hlds__untupling_module17();
	transform_hlds__untupling_module18();
	transform_hlds__untupling_module19();
	transform_hlds__untupling_module20();
	transform_hlds__untupling_module21();
	transform_hlds__untupling_module22();
	transform_hlds__untupling_module23();
	transform_hlds__untupling_module24();
	transform_hlds__untupling_module25();
	transform_hlds__untupling_module26();
	transform_hlds__untupling_module27();
	transform_hlds__untupling_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__untupling__init(void);
void mercury__transform_hlds__untupling__init_type_tables(void);
void mercury__transform_hlds__untupling__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__untupling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__untupling__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__untupling__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__untupling__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__untupling_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__untupling__type_ctor_info_expansion_result_0,
		transform_hlds__untupling__expansion_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__untupling__type_ctor_info_transform_map_0,
		transform_hlds__untupling__transform_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0,
		transform_hlds__untupling__transformed_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__untupling__type_ctor_info_untuple_map_0,
		transform_hlds__untupling__untuple_map_0_0);
	mercury__transform_hlds__untupling__init_debugger();
}

void mercury__transform_hlds__untupling__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__untupling__type_ctor_info_expansion_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__untupling__type_ctor_info_transform_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__untupling__type_ctor_info_transformed_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__untupling__type_ctor_info_untuple_map_0);
	}
}


void mercury__transform_hlds__untupling__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__untupling__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__untupling);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__untupling__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__untupling__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
