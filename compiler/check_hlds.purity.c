/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.purity.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.purity.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.purity.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.purity.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "check_hlds.purity.c"
#line 44 "check_hlds.purity.c"
#include "check_hlds.purity.mh"

#line 47 "check_hlds.purity.c"
#line 48 "check_hlds.purity.c"
#ifndef CHECK_HLDS__PURITY_DECL_GUARD
#define CHECK_HLDS__PURITY_DECL_GUARD

#line 52 "check_hlds.purity.c"
#line 53 "check_hlds.purity.c"

#endif
#line 56 "check_hlds.purity.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__purity__type_ctor_info_purity_info_0,
	mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0;
MR_decl_label4(check_hlds__purity__check_closure_purity_5_0, 4,6,7,2)
MR_decl_label8(check_hlds__purity__check_higher_order_purity_7_0, 2,6,8,9,10,11,13,14)
MR_decl_label8(check_hlds__purity__check_higher_order_purity_7_0, 16,17,18,4,20,21,26,27)
MR_decl_label2(check_hlds__purity__check_higher_order_purity_7_0, 28,22)
MR_decl_label8(check_hlds__purity__check_preds_purity_5_0, 41,4,10,8,12,5,14,15)
MR_decl_label5(check_hlds__purity__check_preds_purity_5_0, 16,18,21,19,3)
MR_decl_label5(check_hlds__purity__compute_cases_purity_8_0, 4,5,6,7,3)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 4,117,249,17,18,19,23,24)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 25,20,248,9,10,8,13,11)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 246,29,30,34,35,41,42,31)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 32,28,44,45,46,47,247,55)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 56,58,60,61,62,63,65,67)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 68,69,70,71,72,73,76,74)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 77,79,82,84,86,88,89,90)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 97,95,93,91,92,98,99,100)
MR_decl_label8(check_hlds__purity__compute_expr_purity_7_0, 101,102,103,107,109,106,105,113)
MR_decl_label1(check_hlds__purity__compute_expr_purity_7_0, 114)
MR_decl_label5(check_hlds__purity__compute_goal_purity_6_0, 2,3,6,5,7)
MR_decl_label5(check_hlds__purity__compute_goals_purity_8_0, 4,5,6,7,3)
MR_decl_label8(check_hlds__purity__compute_parallel_goals_purity_8_0, 4,6,7,8,9,10,11,12)
MR_decl_label2(check_hlds__purity__compute_parallel_goals_purity_8_0, 13,3)
MR_decl_label8(check_hlds__purity__compute_purity_7_0, 4,9,11,13,14,8,17,18)
MR_decl_label8(check_hlds__purity__compute_purity_7_0, 16,20,7,5,23,24,25,26)
MR_decl_label1(check_hlds__purity__compute_purity_7_0, 3)
MR_decl_label8(check_hlds__purity__perform_goal_purity_checks_6_0, 2,3,4,6,9,7,13,11)
MR_decl_label6(check_hlds__purity__perform_goal_purity_checks_6_0, 17,20,19,22,16,24)
MR_decl_label8(check_hlds__purity__puritycheck_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(check_hlds__purity__puritycheck_6_0, 11,12)
MR_decl_label8(check_hlds__purity__puritycheck_pred_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__purity__puritycheck_pred_6_0, 10,11,12,13,23,25,28,27)
MR_decl_label8(check_hlds__purity__puritycheck_pred_6_0, 26,17,18,31,34,36,32,40)
MR_decl_label8(check_hlds__purity__puritycheck_pred_6_0, 41,45,43,48,47,51,50,53)
MR_decl_label7(check_hlds__purity__puritycheck_pred_6_0, 42,39,57,59,60,62,65)
MR_decl_label8(check_hlds__purity__repuritycheck_proc_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__purity__repuritycheck_proc_4_0, 10,11,12,13,14,17,21,20)
MR_decl_label8(check_hlds__purity__repuritycheck_proc_4_0, 23,15,27,29,31,35,34,38)
MR_decl_label3(check_hlds__purity__repuritycheck_proc_4_0, 39,37,26)
MR_decl_label8(fn__check_hlds__purity__error_inconsistent_promise_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__purity__error_inferred_impure_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__check_hlds__purity__error_inferred_impure_4_0, 10,13,11,15)
MR_decl_label8(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0, 2,3,4,5,6,7,8,10)
MR_decl_label2(fn__check_hlds__purity__impure_unification_expr_error_2_0, 2,3)
MR_decl_label8(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0, 2,3,4,5,7,8,6,10)
MR_decl_label7(__Unify___check_hlds__purity__purity_info_0_0, 4,6,8,10,12,14,1)
MR_decl_label8(__Compare___check_hlds__purity__purity_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___check_hlds__purity__purity_info_0_0, 61)
MR_def_extern_entry(fn__check_hlds__purity__impure_unification_expr_error_2_0)
MR_decl_static(check_hlds__purity__purity_info_add_message_3_0)
MR_decl_static(check_hlds__purity__check_closure_purity_5_0)
MR_decl_static(check_hlds__purity__check_higher_order_purity_7_0)
MR_decl_static(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0)
MR_decl_static(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0)
MR_decl_static(check_hlds__purity__perform_goal_purity_checks_6_0)
MR_decl_static(fn__check_hlds__purity__this_file_0_0)
MR_decl_static(check_hlds__purity__compute_expr_purity_7_0)
MR_decl_static(check_hlds__purity__compute_goal_purity_6_0)
MR_decl_static(check_hlds__purity__compute_goals_purity_8_0)
MR_decl_static(check_hlds__purity__compute_cases_purity_8_0)
MR_decl_static(check_hlds__purity__compute_parallel_goals_purity_8_0)
MR_decl_static(check_hlds__purity__compute_purity_7_0)
MR_decl_static(fn__check_hlds__purity__error_inconsistent_promise_4_0)
MR_decl_static(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0)
MR_decl_static(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0)
MR_decl_static(fn__check_hlds__purity__error_inferred_impure_4_0)
MR_decl_static(check_hlds__purity__puritycheck_pred_6_0)
MR_decl_static(check_hlds__purity__check_preds_purity_5_0)
MR_def_extern_entry(check_hlds__purity__puritycheck_6_0)
MR_def_extern_entry(check_hlds__purity__repuritycheck_proc_4_0)
MR_decl_static(__Unify___check_hlds__purity__purity_check_result_0_0)
MR_decl_static(__Compare___check_hlds__purity__purity_check_result_0_0)
MR_decl_static(__Unify___check_hlds__purity__purity_info_0_0)
MR_decl_static(__Compare___check_hlds__purity__purity_info_0_0)

static const struct mercury_type_0 mercury_common_0[39] =
{
{
3,
MR_string_const("Purity error: unification with expression", 41)
},
{
3,
MR_string_const("was declared", 12)
},
{
3,
MR_string_const("but expression was not a function call.", 39)
},
{
3,
MR_string_const("Purity error in closure: closure body is", 40)
},
{
2,
MR_string_const(",", 1)
},
{
3,
MR_string_const("but closure was not declared", 28)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("In call to ", 11)
},
{
2,
MR_string_const(":", 1)
},
{
3,
MR_string_const("purity error: call must be preceded by", 38)
},
{
3,
MR_string_const("indicator.", 10)
},
{
3,
MR_string_const("purity error: call must be in", 29)
},
{
3,
MR_string_const("an explicit unification which is preceded by", 44)
},
{
3,
MR_string_const("In call to", 10)
},
{
3,
MR_string_const("warning: unnecessary", 20)
},
{
3,
MR_string_const("No purity indicator is necessary.", 33)
},
{
3,
MR_string_const("A purity indicator of", 21)
},
{
3,
MR_string_const("is sufficient.", 14)
},
{
3,
MR_string_const("Purity error: parallel conjunct is", 34)
},
{
3,
MR_string_const("but parallel conjuncts must be pure or semipure.", 48)
},
{
3,
MR_string_const("In", 2)
},
{
3,
MR_string_const("error: declared", 15)
},
{
3,
MR_string_const("but promised pure.", 18)
},
{
3,
MR_string_const("A pure", 6)
},
{
3,
MR_string_const("that invokes impure or semipure code", 36)
},
{
3,
MR_string_const("should be promised pure and should have", 39)
},
{
3,
MR_string_const("no impurity declaration.", 24)
},
{
3,
MR_string_const("warning: declared", 17)
},
{
3,
MR_string_const("but actually", 12)
},
{
3,
MR_string_const("pragma.", 7)
},
{
3,
MR_string_const("This", 4)
},
{
3,
MR_string_const("does not invoke any", 19)
},
{
3,
MR_string_const("code,", 5)
},
{
3,
MR_string_const("so there is no need for a", 25)
},
{
3,
MR_string_const("purity error:", 13)
},
{
3,
MR_string_const("is", 2)
},
{
3,
MR_string_const("It must be pure.", 16)
},
{
3,
MR_string_const("It must be declared", 19)
},
{
3,
MR_string_const("or promised", 11)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[17] =
{
{
{
MR_TAG_COMMON(3,0,2),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,0,6),
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
MR_TAG_COMMON(3,0,8),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,15),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(0,2,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,25),
MR_TAG_COMMON(1,1,12)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,0,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,2,1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_TAG_COMMON(1,1,7)
},
{
MR_TAG_COMMON(1,1,15)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__purity__field_types_purity_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_implicit_purity_promise_0
};

const MR_ConstString mercury_data_check_hlds__purity__field_names_purity_info_0_0[] = {
	"module_info",
	"run_post_typecheck",
	"pred_info",
	"vartypes",
	"varset",
	"messages",
	"implicit_purity"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__purity__du_functor_desc_purity_info_0_0 = {
	"purity_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__purity__field_types_purity_info_0_0,
	mercury_data_check_hlds__purity__field_names_purity_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__purity__du_stag_ordered_purity_info_0_0[] = {
	&mercury_data_check_hlds__purity__du_functor_desc_purity_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__purity__du_ptag_ordered_purity_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__purity__du_stag_ordered_purity_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__purity__du_name_ordered_purity_info_0[] = {
	&mercury_data_check_hlds__purity__du_functor_desc_purity_info_0_0
};

const MR_Integer mercury_data_check_hlds__purity__functor_number_map_purity_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_purity_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__purity__purity_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__purity__purity_info_0_0)),
	"check_hlds.purity",
	"purity_info",
	{ (void *)mercury_data_check_hlds__purity__du_name_ordered_purity_info_0 },
	{ (void *)mercury_data_check_hlds__purity__du_ptag_ordered_purity_info_0 },
	1,
	4,
	mercury_data_check_hlds__purity__functor_number_map_purity_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_0 = {
	"no_worries",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_1 = {
	"insufficient_decl",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_2 = {
	"inconsistent_promise",
	2
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_3 = {
	"unnecessary_promise_pure",
	3
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_4 = {
	"unnecessary_decl",
	4
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_value_ordered_purity_check_result_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_3,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_4
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_name_ordered_purity_check_result_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_2,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_1,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_0,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_4,
	&mercury_data_check_hlds__purity__enum_functor_desc_purity_check_result_0_3
};

const MR_Integer mercury_data_check_hlds__purity__functor_number_map_purity_check_result_0[] = {
	2,
	1,
	0,
	4,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__purity__purity_check_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__purity__purity_check_result_0_0)),
	"check_hlds.purity",
	"purity_check_result",
	{ (void *)mercury_data_check_hlds__purity__enum_name_ordered_purity_check_result_0 },
	{ (void *)mercury_data_check_hlds__purity__enum_value_ordered_purity_check_result_0 },
	5,
	4,
	mercury_data_check_hlds__purity__functor_number_map_purity_check_result_0
};

MR_decl_entry(parse_tree__prog_out__purity_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module0)
	MR_init_entry1(fn__check_hlds__purity__impure_unification_expr_error_2_0);
	MR_init_label2(fn__check_hlds__purity__impure_unification_expr_error_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__purity__impure_unification_expr_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__impure_unification_expr_error_2_0_i2);
MR_def_label(fn__check_hlds__purity__impure_unification_expr_error_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__purity__impure_unification_expr_error_2_0_i3);
MR_def_label(fn__check_hlds__purity__impure_unification_expr_error_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module1)
	MR_init_entry1(check_hlds__purity__purity_info_add_message_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__purity_info_add_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__less_pure_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module2)
	MR_init_entry1(check_hlds__purity__check_closure_purity_5_0);
	MR_init_label4(check_hlds__purity__check_closure_purity_5_0,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_closure_purity_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__check_closure_purity_5_0_i4);
MR_def_label(check_hlds__purity__check_closure_purity_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_closure_purity_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__purity__check_closure_purity_5_0_i6);
MR_def_label(check_hlds__purity__check_closure_purity_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		check_hlds__purity__check_closure_purity_5_0_i7);
MR_def_label(check_hlds__purity__check_closure_purity_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr5, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr5, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr5, 6);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__purity__check_closure_purity_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);
MR_decl_entry(hlds__pred_table__get_pred_id_7_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module3)
	MR_init_entry1(check_hlds__purity__check_higher_order_purity_7_0);
	MR_init_label8(check_hlds__purity__check_higher_order_purity_7_0,2,6,8,9,10,11,13,14)
	MR_init_label8(check_hlds__purity__check_higher_order_purity_7_0,16,17,18,4,20,21,26,27)
	MR_init_label2(check_hlds__purity__check_higher_order_purity_7_0,28,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_higher_order_purity_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i2);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i4);
	}
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__purity__check_higher_order_purity_7_0_i6);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i4);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_ctfield(0, MR_sv(8), 2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i8);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i9);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__purity__check_higher_order_purity_7_0_i10);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i11);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i13);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(hlds__pred_table__get_pred_id_7_0,
		check_hlds__purity__check_higher_order_purity_7_0_i14);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i16);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i17);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__purity__check_closure_purity_5_0,
		check_hlds__purity__check_higher_order_purity_7_0_i18);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i20);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(8);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i21);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 6);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i22);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i26);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__purity__impure_unification_expr_error_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i27);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__purity__purity_info_add_message_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i28);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module4)
	MR_init_entry1(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0);
	MR_init_label8(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,2,3,4,5,6,7,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i2);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i3);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i4);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i5);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i6);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i7);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i8);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module5)
	MR_init_entry1(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0);
	MR_init_label8(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i2);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i3);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i4);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i5);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i6);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i7);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i8);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,8);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,17);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module6)
	MR_init_entry1(check_hlds__purity__perform_goal_purity_checks_6_0);
	MR_init_label8(check_hlds__purity__perform_goal_purity_checks_6_0,2,3,4,6,9,7,13,11)
	MR_init_label6(check_hlds__purity__perform_goal_purity_checks_6_0,17,20,19,22,16,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__perform_goal_purity_checks_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i2);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i3);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i4);
	}
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i6);
	}
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i9);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i13);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i11);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i24);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i17);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i20);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i19);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i22);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i24);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module7)
	MR_init_entry1(fn__check_hlds__purity__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("purity.m", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__post_typecheck__resolve_unify_functor_15_0);
MR_decl_entry(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_data__get_legacy_purity_behaviour_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_purity_1_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(hlds__hlds_goal__negate_goal_3_0);
MR_decl_entry(fn__parse_tree__prog_data__worst_purity_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module8)
	MR_init_entry1(check_hlds__purity__compute_expr_purity_7_0);
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,4,117,249,17,18,19,23,24)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,25,20,248,9,10,8,13,11)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,246,29,30,34,35,41,42,31)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,32,28,44,45,46,47,247,55)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,56,58,60,61,62,63,65,67)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,68,69,70,71,72,73,76,74)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,77,79,82,84,86,88,89,90)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,97,95,93,91,92,98,99,100)
	MR_init_label8(check_hlds__purity__compute_expr_purity_7_0,101,102,103,107,109,106,105,113)
	MR_init_label1(check_hlds__purity__compute_expr_purity_7_0,114)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_expr_purity_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i246) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i47) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i247));
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i248);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i249);
	}
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(2, MR_tempr2, 5);
	MR_sv(11) = MR_ctfield(2, MR_tempr2, 6);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 7);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(12);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_expr_purity_7_0_i17);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 8);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 6) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 7) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__purity__check_closure_purity_5_0,
		check_hlds__purity__compute_expr_purity_7_0_i18);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i19);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i23);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__purity__impure_unification_expr_error_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i24);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__purity__purity_info_add_message_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i25);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_r3;
	MR_r7 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 0);
	MR_tempr4 = MR_r6;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r4 = MR_ctfield(1, MR_tempr4, 2);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i8);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	MR_r5 = MR_ctfield(0, MR_tempr2, 3);
	MR_r6 = MR_ctfield(0, MR_tempr2, 4);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_ctfield(0, MR_tempr1, 0);
	MR_r9 = MR_ctfield(0, MR_tempr1, 2);
	MR_r10 = MR_ctfield(0, MR_tempr1, 3);
	MR_r11 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__resolve_unify_functor_15_0,
		check_hlds__purity__compute_expr_purity_7_0_i10);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i11);
	}
	}
	MR_np_call_localret_ent(check_hlds__purity__check_higher_order_purity_7_0,
		check_hlds__purity__compute_expr_purity_7_0_i13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i77);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(8) = MR_ctfield(1, MR_sv(1), 0);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i28);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	MR_sv(5) = MR_ctfield(1, MR_r1, 3);
	MR_sv(6) = MR_ctfield(1, MR_r1, 4);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 5);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,
		check_hlds__purity__compute_expr_purity_7_0_i30);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i32);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_ctfield(1, MR_r1, 0);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i34);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i35);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i31);
	}
	if ((strcmp((char *)MR_sv(10), (char *)(MR_Word) MR_string_const("unsafe_type_cast", 16)) != 0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i31);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i31);
	}
	MR_r1 = MR_ctfield(1, MR_sv(4), 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i31);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i41);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i42);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(2, MR_tempr3, 3) = (MR_Integer) 0;
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i28);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_tempr2;
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i44);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i45);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__purity__perform_goal_purity_checks_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i46);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i117);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i55) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i63) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i68) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i70) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i72) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i79) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i98) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i113));
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_legacy_purity_behaviour_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i56);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i58);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i105);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i60);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i61);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i62);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 3);
	MR_tfield(3, MR_tempr1, 4) = MR_ctfield(3, MR_tempr2, 4);
	MR_tfield(3, MR_tempr1, 5) = MR_ctfield(3, MR_tempr2, 5);
	MR_tfield(3, MR_tempr1, 6) = MR_ctfield(3, MR_tempr2, 6);
	MR_tfield(3, MR_tempr1, 7) = MR_ctfield(3, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i65);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i67);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__purity__compute_parallel_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i67);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,67)
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
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i69);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__purity__compute_cases_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i71);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__negate_goal_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i73);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i74);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i76);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i77);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i82) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i84) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__purity__compute_expr_purity_7_0_i90));
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i92);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i92);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i88);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 6);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i89);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i89);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i91);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i93);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i95);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i97);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i92);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i92);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i92);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,92)
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
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i99);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i100);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i101);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i102);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i103);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i107);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i106);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i109);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i106);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i105);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__purity__this_file_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i114);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("compute_expr_purity: unexpected shorthand", 41);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module9)
	MR_init_entry1(check_hlds__purity__compute_goal_purity_6_0);
	MR_init_label5(check_hlds__purity__compute_goal_purity_6_0,2,3,6,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_goal_purity_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_goal_purity_6_0_i2);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i3);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_goal_purity_6_0_i5);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i6);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i7);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__worst_contains_trace_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module10)
	MR_init_entry1(check_hlds__purity__compute_goals_purity_8_0);
	MR_init_label5(check_hlds__purity__compute_goals_purity_8_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_goals_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_goals_purity_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_goals_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_goals_purity_8_0_i5);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_goals_purity_8_0_i6);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_goals_purity_8_0_i7);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module11)
	MR_init_entry1(check_hlds__purity__compute_cases_purity_8_0);
	MR_init_label5(check_hlds__purity__compute_cases_purity_8_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_cases_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_cases_purity_8_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_cases_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_cases_purity_8_0_i5);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_cases_purity_8_0_i6);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__purity__compute_cases_purity_8_0,
		check_hlds__purity__compute_cases_purity_8_0_i7);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module12)
	MR_init_entry1(check_hlds__purity__compute_parallel_goals_purity_8_0);
	MR_init_label8(check_hlds__purity__compute_parallel_goals_purity_8_0,4,6,7,8,9,10,11,12)
	MR_init_label2(check_hlds__purity__compute_parallel_goals_purity_8_0,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_parallel_goals_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_parallel_goals_purity_8_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_parallel_goals_purity_8_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i11);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_parallel_goals_purity_8_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i11);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i8);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i9);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i10);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
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
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i11);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i12);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(check_hlds__purity__compute_parallel_goals_purity_8_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i13);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module13)
	MR_init_entry1(check_hlds__purity__compute_purity_7_0);
	MR_init_label8(check_hlds__purity__compute_purity_7_0,4,9,11,13,14,8,17,18)
	MR_init_label8(check_hlds__purity__compute_purity_7_0,16,20,7,5,23,24,25,26)
	MR_init_label1(check_hlds__purity__compute_purity_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_purity_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_purity_7_0_i4);
MR_def_label(check_hlds__purity__compute_purity_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__purity__compute_purity_7_0_i9);
MR_def_label(check_hlds__purity__compute_purity_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i11);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i7);
MR_def_label(check_hlds__purity__compute_purity_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__purity__compute_purity_7_0_i13);
MR_def_label(check_hlds__purity__compute_purity_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__purity__compute_purity_7_0_i14);
MR_def_label(check_hlds__purity__compute_purity_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i8);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i7);
MR_def_label(check_hlds__purity__compute_purity_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__compute_purity_7_0_i17);
MR_def_label(check_hlds__purity__compute_purity_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__compute_purity_7_0_i18);
MR_def_label(check_hlds__purity__compute_purity_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i16);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i7);
MR_def_label(check_hlds__purity__compute_purity_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__compute_purity_7_0_i20);
MR_def_label(check_hlds__purity__compute_purity_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_7_0_i5);
	}
	MR_r1 = MR_sv(10);
MR_def_label(check_hlds__purity__compute_purity_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_7_0_i23);
MR_def_label(check_hlds__purity__compute_purity_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_7_0_i23);
MR_def_label(check_hlds__purity__compute_purity_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__purity__compute_purity_7_0_i24);
MR_def_label(check_hlds__purity__compute_purity_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_7_0_i25);
MR_def_label(check_hlds__purity__compute_purity_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(11);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_purity_7_0,
		check_hlds__purity__compute_purity_7_0_i26);
MR_def_label(check_hlds__purity__compute_purity_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__purity__compute_purity_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module14)
	MR_init_entry1(fn__check_hlds__purity__error_inconsistent_promise_4_0);
	MR_init_label8(fn__check_hlds__purity__error_inconsistent_promise_4_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_inconsistent_promise_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i2);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i3);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i4);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i5);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i6);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i7);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i8);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,21);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i9);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module15)
	MR_init_entry1(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0);
	MR_init_label8(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i2);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i3);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i4);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i5);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i6);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i7);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,27);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,28);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i8);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i9);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module16)
	MR_init_entry1(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0);
	MR_init_label8(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,2,3,4,5,7,8,6,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i2);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i3);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i4);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i5);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("promise_pure", 12);
	MR_sv(4) = (MR_Word) MR_string_const("impure or semipure", 18);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i10);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("promise_semipure", 16);
	MR_sv(4) = (MR_Word) MR_string_const("impure", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i10);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("purity.m", 8);
	MR_r2 = (MR_Word) MR_string_const("warn_unnecessary_promise_pure: promise_impure?", 46);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i6);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i10);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,29);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,33);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,32);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,31);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,30);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module17)
	MR_init_entry1(fn__check_hlds__purity__error_inferred_impure_4_0);
	MR_init_label8(fn__check_hlds__purity__error_inferred_impure_4_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__check_hlds__purity__error_inferred_impure_4_0,10,13,11,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_inferred_impure_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i2);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i3);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i4);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i5);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i6);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i7);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i8);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i9);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i10);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,35);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,34);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i13);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__purity__error_inferred_impure_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,37);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,38);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i15);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_promised_purity_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_pragma_goal_type_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module18)
	MR_init_entry1(check_hlds__purity__puritycheck_pred_6_0);
	MR_init_label8(check_hlds__purity__puritycheck_pred_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__purity__puritycheck_pred_6_0,10,11,12,13,23,25,28,27)
	MR_init_label8(check_hlds__purity__puritycheck_pred_6_0,26,17,18,31,34,36,32,40)
	MR_init_label8(check_hlds__purity__puritycheck_pred_6_0,41,45,43,48,47,51,50,53)
	MR_init_label7(check_hlds__purity__puritycheck_pred_6_0,42,39,57,59,60,62,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__puritycheck_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i2);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_promised_purity_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i3);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i4);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i5);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i6);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i7);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_purity_7_0,
		check_hlds__purity__puritycheck_pred_6_0_i8);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i9);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i10);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i11);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i12);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i13);
	}
	if ((MR_sv(3) == MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i13);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__purity__error_inconsistent_promise_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i62);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i18);
	}
	if ((MR_sv(8) != MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i18);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i23);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i17);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i25);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i28);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i27);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i26);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i17);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i62);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i31);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i57);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i34);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i32);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i36);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i57);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i57);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i40);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i41);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i45);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i42);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i43);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i42);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i48);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i47);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i42);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i51);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i50);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i42);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i53);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i39);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i57);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r5 = (MR_Integer) 4;
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i59);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i65);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i60);
	}
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__purity__error_inferred_impure_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i62);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,
		check_hlds__purity__puritycheck_pred_6_0_i62);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i65);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0);

MR_BEGIN_MODULE(check_hlds__purity_module19)
	MR_init_entry1(check_hlds__purity__check_preds_purity_5_0);
	MR_init_label8(check_hlds__purity__check_preds_purity_5_0,41,4,10,8,12,5,14,15)
	MR_init_label5(check_hlds__purity__check_preds_purity_5_0,16,18,21,19,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_preds_purity_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__purity__check_preds_purity_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__check_preds_purity_5_0_i4);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__purity__check_preds_purity_5_0_i10);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__purity__check_preds_purity_5_0_i12);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("% Purity-checking ", 18);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__purity__check_preds_purity_5_0_i14);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__purity__puritycheck_pred_6_0,
		check_hlds__purity__check_preds_purity_5_0_i15);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__purity__check_preds_purity_5_0_i16);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i19);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,
		check_hlds__purity__check_preds_purity_5_0_i21);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i41);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i41);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0);
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module20)
	MR_init_entry1(check_hlds__purity__puritycheck_6_0);
	MR_init_label8(check_hlds__purity__puritycheck_6_0,2,3,4,5,6,7,8,9)
	MR_init_label2(check_hlds__purity__puritycheck_6_0,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__purity__puritycheck_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__purity__puritycheck_6_0_i2);
MR_def_label(check_hlds__purity__puritycheck_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__purity__puritycheck_6_0_i3);
MR_def_label(check_hlds__purity__puritycheck_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 34;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__purity__puritycheck_6_0_i4);
MR_def_label(check_hlds__purity__puritycheck_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("% Purity-checking clauses...\n", 29);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		check_hlds__purity__puritycheck_6_0_i5);
MR_def_label(check_hlds__purity__puritycheck_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__purity__puritycheck_6_0_i6);
MR_def_label(check_hlds__purity__puritycheck_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(fn__bool__not_1_0,
		check_hlds__purity__puritycheck_6_0_i7);
MR_def_label(check_hlds__purity__puritycheck_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,
		check_hlds__purity__puritycheck_6_0_i8);
MR_def_label(check_hlds__purity__puritycheck_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__purity__check_preds_purity_5_0,
		check_hlds__purity__puritycheck_6_0_i11);
MR_def_label(check_hlds__purity__puritycheck_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__purity__check_preds_purity_5_0,
		check_hlds__purity__puritycheck_6_0_i11);
MR_def_label(check_hlds__purity__puritycheck_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__purity__puritycheck_6_0_i12);
MR_def_label(check_hlds__purity__puritycheck_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_pred__remove_marker_3_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module21)
	MR_init_entry1(check_hlds__purity__repuritycheck_proc_4_0);
	MR_init_label8(check_hlds__purity__repuritycheck_proc_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__purity__repuritycheck_proc_4_0,10,11,12,13,14,17,21,20)
	MR_init_label8(check_hlds__purity__repuritycheck_proc_4_0,23,15,27,29,31,35,34,38)
	MR_init_label3(check_hlds__purity__repuritycheck_proc_4_0,39,37,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__purity__repuritycheck_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i2);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i3);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i4);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i5);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i6);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__repuritycheck_proc_4_0_i7);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i8);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i9);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i10);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__purity__repuritycheck_proc_4_0_i11);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i12);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i13);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i14);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i17);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i15);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i20);
	}
	MR_r1 = (MR_Integer) 13;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i21);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i39);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i23);
	}
	MR_r1 = (MR_Integer) 13;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i39);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i27);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i26);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(2), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__purity__repuritycheck_proc_4_0_i29);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__purity__repuritycheck_proc_4_0_i31);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i26);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i34);
	}
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i35);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i39);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i37);
	}
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i38);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i39);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module22)
	MR_init_entry1(__Unify___check_hlds__purity__purity_check_result_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__purity__purity_check_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module23)
	MR_init_entry1(__Compare___check_hlds__purity__purity_check_result_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__purity__purity_check_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module24)
	MR_init_entry1(__Unify___check_hlds__purity__purity_info_0_0);
	MR_init_label7(__Unify___check_hlds__purity__purity_info_0_0,4,6,8,10,12,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__purity__purity_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i14);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__purity__purity_info_0_0_i4);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___check_hlds__purity__purity_info_0_0_i6);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__purity__purity_info_0_0_i8);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__purity__purity_info_0_0_i10);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__purity__purity_info_0_0_i12);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(13);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module25)
	MR_init_entry1(__Compare___check_hlds__purity__purity_info_0_0);
	MR_init_label8(__Compare___check_hlds__purity__purity_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___check_hlds__purity__purity_info_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__purity__purity_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i2);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
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
		__Compare___check_hlds__purity__purity_info_0_0_i5);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__purity__purity_info_0_0_i9);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___check_hlds__purity__purity_info_0_0_i13);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__purity__purity_info_0_0_i17);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__purity__purity_info_0_0_i21);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__purity__purity_info_0_0_i25);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__purity_maybe_bunch_0(void)
{
	check_hlds__purity_module0();
	check_hlds__purity_module1();
	check_hlds__purity_module2();
	check_hlds__purity_module3();
	check_hlds__purity_module4();
	check_hlds__purity_module5();
	check_hlds__purity_module6();
	check_hlds__purity_module7();
	check_hlds__purity_module8();
	check_hlds__purity_module9();
	check_hlds__purity_module10();
	check_hlds__purity_module11();
	check_hlds__purity_module12();
	check_hlds__purity_module13();
	check_hlds__purity_module14();
	check_hlds__purity_module15();
	check_hlds__purity_module16();
	check_hlds__purity_module17();
	check_hlds__purity_module18();
	check_hlds__purity_module19();
	check_hlds__purity_module20();
	check_hlds__purity_module21();
	check_hlds__purity_module22();
	check_hlds__purity_module23();
	check_hlds__purity_module24();
	check_hlds__purity_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__purity__init(void);
void mercury__check_hlds__purity__init_type_tables(void);
void mercury__check_hlds__purity__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__purity__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__purity__init_complexity_procs(void);
#endif

void mercury__check_hlds__purity__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__purity_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__purity__type_ctor_info_purity_info_0,
		check_hlds__purity__purity_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0,
		check_hlds__purity__purity_check_result_0_0);
	mercury__check_hlds__purity__init_debugger();
}

void mercury__check_hlds__purity__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__purity__type_ctor_info_purity_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0);
	}
}


void mercury__check_hlds__purity__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__purity__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__purity__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
