/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.purity.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.purity.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.purity.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.purity.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "check_hlds.purity.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "check_hlds.purity.c"
#line 49 "check_hlds.purity.c"
#include "check_hlds.purity.mh"

#line 52 "check_hlds.purity.c"
#line 53 "check_hlds.purity.c"
#ifndef CHECK_HLDS__PURITY_DECL_GUARD
#define CHECK_HLDS__PURITY_DECL_GUARD

#line 57 "check_hlds.purity.c"
#line 58 "check_hlds.purity.c"

#endif
#line 61 "check_hlds.purity.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0,
	mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0,
	mercury_data_check_hlds__purity__type_ctor_info_purity_info_0,
	mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0;
MR_decl_label2(check_hlds__purity__applies_to_all_modes_2_0, 4,2)
MR_decl_label4(check_hlds__purity__check_closure_purity_5_0, 4,6,7,2)
MR_decl_label10(check_hlds__purity__check_higher_order_purity_7_0, 3,4,5,9,11,12,13,14,15,17)
MR_decl_label10(check_hlds__purity__check_higher_order_purity_7_0, 18,20,21,22,16,6,7,25,27,29)
MR_decl_label2(check_hlds__purity__check_higher_order_purity_7_0, 28,31)
MR_decl_label9(check_hlds__purity__check_outer_var_type_6_0, 3,8,9,7,11,12,6,4,15)
MR_decl_label10(check_hlds__purity__check_preds_purity_5_0, 55,3,4,10,8,12,5,14,15,16)
MR_decl_label6(check_hlds__purity__check_preds_purity_5_0, 18,20,21,22,23,24)
MR_decl_label5(check_hlds__purity__compute_cases_purity_8_0, 20,4,6,7,8)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 4,7,5,3,11,13,14,18,19,26)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 27,15,16,33,34,10,39,41,44,38)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 48,46,49,37,52,55,57,59,60,61)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 62,35,64,63,67,70,65,73,72,224)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 77,75,80,81,82,83,84,88,90,87)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 86,79,98,103,105,101,110,109,113,112)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 96,120,121,122,123,124,129,132,134,133)
MR_decl_label10(check_hlds__purity__compute_expr_purity_7_0, 126,138,139,140,141,145,144,143,118,154)
MR_decl_label3(check_hlds__purity__compute_expr_purity_7_0, 153,448,158)
MR_decl_label5(check_hlds__purity__compute_goal_purity_6_0, 2,3,6,5,8)
MR_decl_label5(check_hlds__purity__compute_goals_purity_8_0, 19,4,5,6,7)
MR_decl_label9(check_hlds__purity__compute_parallel_goals_purity_8_0, 45,4,7,8,10,6,24,25,26)
MR_decl_label10(check_hlds__purity__compute_purity_for_clause_6_0, 2,4,9,10,8,13,14,12,16,7)
MR_decl_label9(check_hlds__purity__compute_purity_for_clause_6_0, 5,19,20,23,24,25,26,27,22)
MR_decl_label4(check_hlds__purity__compute_purity_for_clauses_7_0, 18,4,5,6)
MR_decl_label10(check_hlds__purity__perform_goal_purity_checks_6_0, 2,3,4,7,5,11,13,9,17,20)
MR_decl_label6(check_hlds__purity__perform_goal_purity_checks_6_0, 19,23,22,25,16,27)
MR_decl_label1(check_hlds__purity__puritycheck_module_4_0, 2)
MR_decl_label10(check_hlds__purity__puritycheck_pred_6_0, 2,3,4,5,6,7,9,10,11,12)
MR_decl_label10(check_hlds__purity__puritycheck_pred_6_0, 13,14,15,24,26,18,19,31,34,32)
MR_decl_label10(check_hlds__purity__puritycheck_pred_6_0, 39,40,47,50,52,41,38,59,61,64)
MR_decl_label4(check_hlds__purity__puritycheck_pred_6_0, 67,68,71,73)
MR_decl_label10(check_hlds__purity__repuritycheck_proc_4_0, 2,3,4,5,6,8,9,10,11,48)
MR_decl_label10(check_hlds__purity__repuritycheck_proc_4_0, 13,15,16,17,18,21,24,26,25,19)
MR_decl_label9(check_hlds__purity__repuritycheck_proc_4_0, 31,34,36,39,41,40,43,44,30)
MR_decl_label10(check_hlds__purity__wrap_inner_outer_goals_5_0, 2,3,4,13,14,15,22,23,29,30)
MR_decl_label1(check_hlds__purity__wrap_inner_outer_goals_5_0, 31)
MR_decl_label8(fn__check_hlds__purity__error_inconsistent_promise_4_0, 2,3,4,5,6,12,13,20)
MR_decl_label10(fn__check_hlds__purity__error_inferred_impure_4_0, 2,3,4,5,11,12,13,14,15,28)
MR_decl_label2(fn__check_hlds__purity__error_inferred_impure_4_0, 26,44)
MR_decl_label8(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0, 2,3,4,5,6,14,15,17)
MR_decl_label2(fn__check_hlds__purity__impure_unification_expr_error_2_0, 2,5)
MR_decl_label8(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0, 2,3,9,10,11,12,16,22)
MR_decl_label8(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0, 2,3,4,5,6,19,20,22)
MR_decl_label8(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0, 2,3,9,10,12,13,11,15)
MR_decl_label7(__Unify___check_hlds__purity__purity_info_0_0, 4,6,9,11,13,15,1)
MR_decl_label10(__Compare___check_hlds__purity__purity_info_0_0, 3,2,5,9,13,18,22,26,30,94)
MR_decl_static(fn__check_hlds__purity__workaround_gcc_bug_1_0)
MR_decl_static(check_hlds__purity__applies_to_all_modes_2_0)
MR_def_extern_entry(fn__check_hlds__purity__impure_unification_expr_error_2_0)
MR_decl_static(check_hlds__purity__check_outer_var_type_6_0)
MR_decl_static(check_hlds__purity__purity_info_add_message_3_0)
MR_decl_static(check_hlds__purity__check_closure_purity_5_0)
MR_decl_static(check_hlds__purity__check_higher_order_purity_7_0)
MR_decl_static(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0)
MR_decl_static(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0)
MR_decl_static(check_hlds__purity__perform_goal_purity_checks_6_0)
MR_decl_static(check_hlds__purity__compute_expr_purity_7_0)
MR_decl_static(check_hlds__purity__compute_goal_purity_6_0)
MR_decl_static(check_hlds__purity__compute_goals_purity_8_0)
MR_decl_static(check_hlds__purity__compute_cases_purity_8_0)
MR_decl_static(check_hlds__purity__compute_parallel_goals_purity_8_0)
MR_decl_static(check_hlds__purity__compute_purity_for_clause_6_0)
MR_decl_static(check_hlds__purity__compute_purity_for_clauses_7_0)
MR_decl_static(fn__check_hlds__purity__error_inconsistent_promise_4_0)
MR_decl_static(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0)
MR_decl_static(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0)
MR_decl_static(fn__check_hlds__purity__error_inferred_impure_4_0)
MR_decl_static(check_hlds__purity__puritycheck_pred_6_0)
MR_decl_static(check_hlds__purity__check_preds_purity_5_0)
MR_def_extern_entry(check_hlds__purity__puritycheck_module_4_0)
MR_def_extern_entry(check_hlds__purity__repuritycheck_proc_4_0)
MR_decl_static(check_hlds__purity__wrap_inner_outer_goals_5_0)
MR_decl_static(__Unify___check_hlds__purity__converted_unify_0_0)
MR_decl_static(__Compare___check_hlds__purity__converted_unify_0_0)
MR_decl_static(__Unify___check_hlds__purity__purity_check_result_0_0)
MR_decl_static(__Compare___check_hlds__purity__purity_check_result_0_0)
MR_decl_static(__Unify___check_hlds__purity__purity_info_0_0)
MR_decl_static(__Compare___check_hlds__purity__purity_info_0_0)
MR_decl_static(__Unify___check_hlds__purity__run_post_typecheck_0_0)
MR_decl_static(__Compare___check_hlds__purity__run_post_typecheck_0_0)

static const struct mercury_type_0 mercury_common_0[41] =
{
{
4,
MR_string_const("Purity error: unification with expression", 41)
},
{
4,
MR_string_const("was declared", 12)
},
{
4,
MR_string_const("but expression was not a function call.", 39)
},
{
4,
MR_string_const("The type of outer variable", 26)
},
{
4,
MR_string_const("must be either io.state or stm_builtin.stm.", 43)
},
{
4,
MR_string_const("Purity error in closure: closure body is", 40)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("but closure was not declared", 28)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("In call to ", 11)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("purity error: call must be in", 29)
},
{
4,
MR_string_const("an explicit unification which is preceded by", 44)
},
{
4,
MR_string_const("indicator.", 10)
},
{
4,
MR_string_const("purity error: call must be preceded by", 38)
},
{
4,
MR_string_const("In call to", 10)
},
{
4,
MR_string_const("warning: unnecessary", 20)
},
{
4,
MR_string_const("No purity indicator is necessary.", 33)
},
{
4,
MR_string_const("A purity indicator of", 21)
},
{
4,
MR_string_const("is sufficient.", 14)
},
{
4,
MR_string_const("Purity error: parallel conjunct is", 34)
},
{
4,
MR_string_const("but parallel conjuncts must be pure or semipure.", 48)
},
{
4,
MR_string_const("In", 2)
},
{
4,
MR_string_const("error: declared", 15)
},
{
4,
MR_string_const("but promised pure.", 18)
},
{
4,
MR_string_const("A pure", 6)
},
{
4,
MR_string_const("that invokes impure or semipure code", 36)
},
{
4,
MR_string_const("should be promised pure and should have", 39)
},
{
4,
MR_string_const("no impurity declaration.", 24)
},
{
4,
MR_string_const("warning: declared", 17)
},
{
4,
MR_string_const("but actually", 12)
},
{
4,
MR_string_const("pragma.", 7)
},
{
4,
MR_string_const("This", 4)
},
{
4,
MR_string_const("does not invoke any", 19)
},
{
4,
MR_string_const("code,", 5)
},
{
4,
MR_string_const("so there is no need for a", 25)
},
{
4,
MR_string_const("purity error:", 13)
},
{
4,
MR_string_const("is", 2)
},
{
4,
MR_string_const("It must be pure.", 16)
},
{
4,
MR_string_const("It must be declared", 19)
},
{
4,
MR_string_const("or promised", 11)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[19] =
{
{
{
MR_TAG_COMMON(3,0,2),
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
MR_TAG_COMMON(3,0,4),
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
MR_TAG_COMMON(3,0,8),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,0,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,17),
MR_TAG_COMMON(1,1,3)
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
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,0,21),
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
MR_TAG_COMMON(3,0,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,27),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(3,0,26),
MR_TAG_COMMON(1,1,15)
}
},
{
{
MR_TAG_COMMON(3,0,38),
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
MR_TAG_COMMON(1,1,8)
},
{
MR_TAG_COMMON(1,1,17)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, atomic_interface_vars)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, atomic_interface_vars)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_purity_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_goal, atomic_interface_vars),
MR_COMMON(4,0),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__purity, purity_info),
MR_CTOR0_ADDR(check_hlds__purity, purity_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__error_util, error_spec),
MR_CTOR0_ADDR(check_hlds__purity, purity_info),
MR_CTOR0_ADDR(check_hlds__purity, purity_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(check_hlds__purity__purity_info_add_message_3_0),
0
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
1,
3,
MR_tbmkword(0, 0)
},
{
1,
1,
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
	"have_not_converted_unify",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
	"have_converted_unify",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_value_ordered_converted_unify_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_0,
	&mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_name_ordered_converted_unify_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_1,
	&mercury_data_check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

const MR_Integer mercury_data_check_hlds__purity__functor_number_map_converted_unify_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__purity__converted_unify_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__purity__converted_unify_0_0)),
	"check_hlds.purity",
	"converted_unify",
	{ (void *)mercury_data_check_hlds__purity__enum_name_ordered_converted_unify_0 },
	{ (void *)mercury_data_check_hlds__purity__enum_value_ordered_converted_unify_0 },
	2,
	4,
	mercury_data_check_hlds__purity__functor_number_map_converted_unify_0
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_need_to_requantify_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_need_to_requantify_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__purity__field_types_purity_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0
};

const MR_ConstString mercury_data_check_hlds__purity__field_names_purity_info_0_0[] = {
	"pi_module_info",
	"pi_run_post_typecheck",
	"pi_pred_info",
	"pi_vartypes",
	"pi_varset",
	"pi_messages",
	"pi_requant",
	"pi_converted_unify"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__purity__du_functor_desc_purity_info_0_0 = {
	"purity_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__purity__field_types_purity_info_0_0,
	mercury_data_check_hlds__purity__field_names_purity_info_0_0,
	NULL,
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
	15,
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

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
	"run_post_typecheck",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
	"do_not_run_post_typecheck",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_value_ordered_run_post_typecheck_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
	&mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__purity__enum_name_ordered_run_post_typecheck_0[] = {
	&mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
	&mercury_data_check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

const MR_Integer mercury_data_check_hlds__purity__functor_number_map_run_post_typecheck_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__purity__run_post_typecheck_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__purity__run_post_typecheck_0_0)),
	"check_hlds.purity",
	"run_post_typecheck",
	{ (void *)mercury_data_check_hlds__purity__enum_name_ordered_run_post_typecheck_0 },
	{ (void *)mercury_data_check_hlds__purity__enum_value_ordered_run_post_typecheck_0 },
	2,
	4,
	mercury_data_check_hlds__purity__functor_number_map_run_post_typecheck_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.purity",
"check_hlds.purity",
"purity_info_add_message",
3,
0
},
"check_hlds.purity",
"purity.m",
740,
"258"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__purity__compute_expr_purity_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.purity",
"check_hlds.purity",
"wrap_inner_outer_goals",
5,
0
},
"check_hlds.purity",
"purity.m",
748,
"267"
};



MR_BEGIN_MODULE(check_hlds__purity_module0)
	MR_init_entry1(fn__check_hlds__purity__workaround_gcc_bug_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__workaround_gcc_bug_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'workaround_gcc_bug'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__workaround_gcc_bug_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module1)
	MR_init_entry1(check_hlds__purity__applies_to_all_modes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__applies_to_all_modes_2_0);
	MR_init_label2(check_hlds__purity__applies_to_all_modes_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'applies_to_all_modes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__applies_to_all_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__applies_to_all_modes_2_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__purity__applies_to_all_modes_2_0_i4);
MR_def_label(check_hlds__purity__applies_to_all_modes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(check_hlds__purity__applies_to_all_modes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__purity_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module2)
	MR_init_entry1(fn__check_hlds__purity__impure_unification_expr_error_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__impure_unification_expr_error_2_0);
	MR_init_label2(fn__check_hlds__purity__impure_unification_expr_error_2_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'impure_unification_expr_error'/3 mode 0 */
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
		fn__check_hlds__purity__impure_unification_expr_error_2_0_i5);
MR_def_label(fn__check_hlds__purity__impure_unification_expr_error_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module3)
	MR_init_entry1(check_hlds__purity__check_outer_var_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__check_outer_var_type_6_0);
	MR_init_label9(check_hlds__purity__check_outer_var_type_6_0,3,8,9,7,11,12,6,4,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_outer_var_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_outer_var_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__purity__check_outer_var_type_6_0_i3);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__purity__check_outer_var_type_6_0_i8);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__purity__check_outer_var_type_6_0_i9);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_outer_var_type_6_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__purity__check_outer_var_type_6_0_i6);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,
		check_hlds__purity__check_outer_var_type_6_0_i11);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__purity__check_outer_var_type_6_0_i12);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_outer_var_type_6_0_i4);
	}
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__purity__check_outer_var_type_6_0_i15);
MR_def_label(check_hlds__purity__check_outer_var_type_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
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
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module4)
	MR_init_entry1(check_hlds__purity__purity_info_add_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__purity_info_add_message_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'purity_info_add_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__purity_info_add_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_r2, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__less_pure_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module5)
	MR_init_entry1(check_hlds__purity__check_closure_purity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__check_closure_purity_5_0);
	MR_init_label4(check_hlds__purity__check_closure_purity_5_0,4,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_closure_purity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_closure_purity_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
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
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__check_closure_purity_5_0_i6);
MR_def_label(check_hlds__purity__check_closure_purity_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		check_hlds__purity__check_closure_purity_5_0_i7);
MR_def_label(check_hlds__purity__check_closure_purity_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,5);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_r2;
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr4, 7);
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

MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);
MR_decl_entry(hlds__pred_table__get_pred_id_by_types_10_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module6)
	MR_init_entry1(check_hlds__purity__check_higher_order_purity_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__check_higher_order_purity_7_0);
	MR_init_label10(check_hlds__purity__check_higher_order_purity_7_0,3,4,5,9,11,12,13,14,15,17)
	MR_init_label10(check_hlds__purity__check_higher_order_purity_7_0,18,20,21,22,16,6,7,25,27,29)
	MR_init_label2(check_hlds__purity__check_higher_order_purity_7_0,28,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_higher_order_purity'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_higher_order_purity_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(12) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tempr2;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i3);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_sv(11), 2);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i4);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i5);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i7);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__purity__check_higher_order_purity_7_0_i9);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i6);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i11);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i12);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i13);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i14);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__purity__check_higher_order_purity_7_0_i15);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_sv(11), 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i17);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__get_pred_id_by_types_10_0,
		check_hlds__purity__check_higher_order_purity_7_0_i18);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i16);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__check_higher_order_purity_7_0_i20);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i21);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__purity__check_closure_purity_5_0,
		check_hlds__purity__check_higher_order_purity_7_0_i22);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i25);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_sv(12) = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i25);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(12) = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__check_higher_order_purity_7_0_i25);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 22;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i29);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_higher_order_purity_7_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__check_hlds__purity__impure_unification_expr_error_2_0,
		check_hlds__purity__check_higher_order_purity_7_0_i31);
MR_def_label(check_hlds__purity__check_higher_order_purity_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r2, 5) = MR_tempr1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module7)
	MR_init_entry1(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__error_missing_body_impurity_decl_3_0);
	MR_init_label8(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,2,3,4,5,6,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_missing_body_impurity_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i2);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i3);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i6);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i14);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i15);
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,12);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,11);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,14);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module8)
	MR_init_entry1(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0);
	MR_init_label8(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,2,3,4,5,6,19,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_unnecessary_body_impurity_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i2);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i3);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i4);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i5);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
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
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i19);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i20);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__purity__warn_unnecessary_body_impurity_decl_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,18);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module9)
	MR_init_entry1(check_hlds__purity__perform_goal_purity_checks_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__perform_goal_purity_checks_6_0);
	MR_init_label10(check_hlds__purity__perform_goal_purity_checks_6_0,2,3,4,7,5,11,13,9,17,20)
	MR_init_label6(check_hlds__purity__perform_goal_purity_checks_6_0,19,23,22,25,16,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'perform_goal_purity_checks'/6 mode 0 */
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
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
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
	if ((MR_r1 != MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i4);
	}
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i7);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i11);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__purity__error_missing_body_impurity_decl_3_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i13);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r2, 5) = MR_tempr1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i17);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 9;
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
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i23);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__perform_goal_purity_checks_6_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 22;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__perform_goal_purity_checks_6_0_i25);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,25)
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
		check_hlds__purity__perform_goal_purity_checks_6_0_i27);
MR_def_label(check_hlds__purity__perform_goal_purity_checks_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r2, 5) = MR_tempr1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__negate_goal_3_0);
MR_decl_entry(check_hlds__post_typecheck__finally_resolve_pred_overloading_8_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(check_hlds__post_typecheck__resolve_unify_functor_16_0);
MR_decl_entry(fn__parse_tree__prog_data__get_purity_1_0);
MR_decl_entry(fn__parse_tree__prog_data__worst_purity_2_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__purity_module10)
	MR_init_entry1(check_hlds__purity__compute_expr_purity_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_expr_purity_7_0);
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,4,7,5,3,11,13,14,18,19,26)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,27,15,16,33,34,10,39,41,44,38)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,48,46,49,37,52,55,57,59,60,61)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,62,35,64,63,67,70,65,73,72,224)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,77,75,80,81,82,83,84,88,90,87)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,86,79,98,103,105,101,110,109,113,112)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,96,120,121,122,123,124,129,132,134,133)
	MR_init_label10(check_hlds__purity__compute_expr_purity_7_0,126,138,139,140,141,145,144,143,118,154)
	MR_init_label3(check_hlds__purity__compute_expr_purity_7_0,153,448,158)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_expr_purity'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_expr_purity_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_np_call_localret_ent(hlds__hlds_goal__negate_goal_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i4);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i5);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i7);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i49);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i10);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(2, MR_r1, 1);
	MR_sv(5) = MR_tfield(2, MR_r1, 2);
	MR_sv(6) = MR_tfield(2, MR_r1, 3);
	MR_sv(7) = MR_tfield(2, MR_r1, 4);
	MR_sv(8) = MR_tfield(2, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i11);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(8) = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i33);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__finally_resolve_pred_overloading_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i14);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i16);
	}
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_sv(10) = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i18);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i19);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i15);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(10), MR_string_const("unsafe_type_cast", 16)) != 0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i15);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i15);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i15);
	}
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i26);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__purity__compute_expr_purity_7_0_i27);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_tempr1;
	MR_tfield(3, MR_r2, 4) = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i33);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_sv(2) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i33);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__purity__perform_goal_purity_checks_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i34);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i35);
	}
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i37);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r7 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i39);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r2;
	MR_r7 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tfield(0, MR_tempr1, 0), 0);
	MR_tempr3 = MR_r6;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 2);
	MR_r5 = MR_r7;
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i38);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 2);
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr2, 2);
	MR_r5 = MR_tfield(1, MR_tempr2, 3);
	MR_r6 = MR_tfield(1, MR_tempr2, 4);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tfield(0, MR_tempr1, 0);
	MR_r9 = MR_tfield(0, MR_tempr1, 2);
	MR_r10 = MR_tfield(0, MR_tempr1, 3);
	MR_r11 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__resolve_unify_functor_16_0,
		check_hlds__purity__compute_expr_purity_7_0_i41);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r6 = MR_tempr1;
	MR_tempr3 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i44);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr2, 7) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_sv(2) = MR_r6;
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i38);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	MR_r5 = MR_r6;
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i46);
	}
	}
	MR_np_call_localret_ent(check_hlds__purity__check_higher_order_purity_7_0,
		check_hlds__purity__compute_expr_purity_7_0_i48);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i49);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i224);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(6) = ((MR_Integer) MR_tfield(2, MR_tempr2, 0) & (MR_Integer) 3);
	MR_sv(7) = (((MR_Integer) MR_tfield(2, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(2, MR_tempr2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(9) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(2, MR_tempr2, 5);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(13);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_expr_purity_7_0_i52);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tempr4 = MR_sv(6);
	MR_tfield(2, MR_tempr2, 0) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_sv(7) << (MR_Integer) 2) | ((MR_Integer) MR_sv(8) << (MR_Integer) 3)));
	MR_tfield(2, MR_tempr2, 2) = MR_sv(9);
	MR_tfield(2, MR_tempr2, 3) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 6) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__purity__check_closure_purity_5_0,
		check_hlds__purity__compute_expr_purity_7_0_i55);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	MR_tfield(1, MR_r2, 3) = MR_sv(4);
	MR_tfield(1, MR_r2, 4) = MR_sv(5);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i57);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i59);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i60);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__purity__impure_unification_expr_error_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i61);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__purity__purity_info_add_message_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i62);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i63);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_purity_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i64);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(12);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i65);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i67);
	}
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_parallel_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i70);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i70);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i72);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i73);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i75);
	}
	MR_r5 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i77);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i224);
	}
	MR_r2 = MR_tfield(0, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i79);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i80);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i81);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i82);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i83);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i84);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i88);
	}
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i87);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i90);
	}
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i87);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i86);
	}
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i96);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (!((((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 3)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 2))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i98);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i105);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i101);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = (MR_Integer) 0;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i103);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 7);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i105);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i109);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i110);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i112);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i113);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,113)
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
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.purity", 17);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.purity.compute_expr_purity\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("loop_control", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i448);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i118);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i120);
	}
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 6);
	MR_r1 = MR_tfield(1, MR_tempr3, 4);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i139);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_sv(12) = MR_tempr3;
	MR_sv(10) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__compute_expr_purity_7_0_i121);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__check_outer_var_type_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i122);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__purity__check_outer_var_type_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i123);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i124);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i126);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, atomic_interface_vars);
	}
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i129);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__purity__wrap_inner_outer_goals_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__purity, purity_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__purity__compute_expr_purity_7_0_i132);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i134);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i133);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.purity", 17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.purity.compute_expr_purity\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("AllAtomicGoals1 = []", 20);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__purity__compute_expr_purity_7_0_i133);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r3;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i139);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__purity, purity_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__purity__compute_expr_purity_7_0_i138);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i139);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i140);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_expr_purity_7_0_i141);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i145);
	}
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i144);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i143);
	}
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(9);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_expr_purity_7_0_i153);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_expr_purity_7_0_i154);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.purity", 17);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.purity.compute_expr_purity\'/7", 51);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,448)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r2 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_cases_purity_8_0,
		check_hlds__purity__compute_expr_purity_7_0_i158);
MR_def_label(check_hlds__purity__compute_expr_purity_7_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module11)
	MR_init_entry1(check_hlds__purity__compute_goal_purity_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_goal_purity_6_0);
	MR_init_label5(check_hlds__purity__compute_goal_purity_6_0,2,3,6,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_goal_purity'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_goal_purity_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_goal_purity_6_0_i2);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i3);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_goal_purity_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i6);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 17;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__purity__compute_goal_purity_6_0_i8);
MR_def_label(check_hlds__purity__compute_goal_purity_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__worst_contains_trace_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module12)
	MR_init_entry1(check_hlds__purity__compute_goals_purity_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_goals_purity_8_0);
	MR_init_label5(check_hlds__purity__compute_goals_purity_8_0,19,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_goals_purity'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_goals_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_goals_purity_8_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_goals_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_goals_purity_8_0_i5);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_goals_purity_8_0_i6);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_goals_purity_8_0,
		check_hlds__purity__compute_goals_purity_8_0_i7);
MR_def_label(check_hlds__purity__compute_goals_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module13)
	MR_init_entry1(check_hlds__purity__compute_cases_purity_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_cases_purity_8_0);
	MR_init_label5(check_hlds__purity__compute_cases_purity_8_0,20,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_cases_purity'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_cases_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_cases_purity_8_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_cases_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_cases_purity_8_0_i6);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_cases_purity_8_0_i7);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_cases_purity_8_0,
		check_hlds__purity__compute_cases_purity_8_0_i8);
MR_def_label(check_hlds__purity__compute_cases_purity_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module14)
	MR_init_entry1(check_hlds__purity__compute_parallel_goals_purity_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_parallel_goals_purity_8_0);
	MR_init_label9(check_hlds__purity__compute_parallel_goals_purity_8_0,45,4,7,8,10,6,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_parallel_goals_purity'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_parallel_goals_purity_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_parallel_goals_purity_8_0_i45);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i4);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__purity__compute_parallel_goals_purity_8_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i7);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i8);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,20);
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
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i24);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i24);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i25);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_parallel_goals_purity_8_0,
		check_hlds__purity__compute_parallel_goals_purity_8_0_i26);
MR_def_label(check_hlds__purity__compute_parallel_goals_purity_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_general_11_0);

MR_BEGIN_MODULE(check_hlds__purity_module15)
	MR_init_entry1(check_hlds__purity__compute_purity_for_clause_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_purity_for_clause_6_0);
	MR_init_label10(check_hlds__purity__compute_purity_for_clause_6_0,2,4,9,10,8,13,14,12,16,7)
	MR_init_label9(check_hlds__purity__compute_purity_for_clause_6_0,5,19,20,23,24,25,26,27,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_purity_for_clause'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_purity_for_clause_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i2);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_expr_purity_7_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i4);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i9);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__purity__applies_to_all_modes_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i10);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i7);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i13);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i14);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i7);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i16);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i5);
	}
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i19);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i19);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i20);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_r5 = MR_tfield(0, MR_tempr2, 6);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i23);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clause_6_0_i22);
	}
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i24);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i25);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i26);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_general_11_0,
		check_hlds__purity__compute_purity_for_clause_6_0_i27);
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
MR_def_label(check_hlds__purity__compute_purity_for_clause_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module16)
	MR_init_entry1(check_hlds__purity__compute_purity_for_clauses_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__compute_purity_for_clauses_7_0);
	MR_init_label4(check_hlds__purity__compute_purity_for_clauses_7_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_purity_for_clauses'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__compute_purity_for_clauses_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__compute_purity_for_clauses_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__purity__compute_purity_for_clauses_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__purity__compute_purity_for_clause_6_0,
		check_hlds__purity__compute_purity_for_clauses_7_0_i4);
MR_def_label(check_hlds__purity__compute_purity_for_clauses_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		check_hlds__purity__compute_purity_for_clauses_7_0_i5);
MR_def_label(check_hlds__purity__compute_purity_for_clauses_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__purity__compute_purity_for_clauses_7_0,
		check_hlds__purity__compute_purity_for_clauses_7_0_i6);
MR_def_label(check_hlds__purity__compute_purity_for_clauses_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);

MR_BEGIN_MODULE(check_hlds__purity_module17)
	MR_init_entry1(fn__check_hlds__purity__error_inconsistent_promise_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__error_inconsistent_promise_4_0);
	MR_init_label8(fn__check_hlds__purity__error_inconsistent_promise_4_0,2,3,4,5,6,12,13,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_inconsistent_promise'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_inconsistent_promise_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i2);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i3);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i4);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i5);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i6);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i12);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i13);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,13);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inconsistent_promise_4_0_i20);
MR_def_label(fn__check_hlds__purity__error_inconsistent_promise_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,25);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module18)
	MR_init_entry1(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0);
	MR_init_label8(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,2,3,9,10,11,12,16,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_exaggerated_impurity_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i2);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i3);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i9);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i10);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i11);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i12);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,29);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,30);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i16);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0_i22);
MR_def_label(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module19)
	MR_init_entry1(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0);
	MR_init_label8(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,2,3,9,10,12,13,11,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_unnecessary_promise_pure'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i2);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i3);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i9);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i10);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i12);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("promise_pure", 12);
	MR_sv(4) = (MR_Word) MR_string_const("impure or semipure", 18);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i15);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_string_const("promise_semipure", 16);
	MR_sv(4) = (MR_Word) MR_string_const("impure", 6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i15);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.purity", 17);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.purity.warn_unnecessary_promise_pure\'/4", 60);
	MR_r3 = (MR_Word) MR_string_const("promise_impure", 14);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i11);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0_i15);
MR_def_label(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,31);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,16);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,35);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,34);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,33);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,32);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module20)
	MR_init_entry1(fn__check_hlds__purity__error_inferred_impure_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__purity__error_inferred_impure_4_0);
	MR_init_label10(fn__check_hlds__purity__error_inferred_impure_4_0,2,3,4,5,11,12,13,14,15,28)
	MR_init_label2(fn__check_hlds__purity__error_inferred_impure_4_0,26,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'error_inferred_impure'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__purity__error_inferred_impure_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i2);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
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
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i5);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i11);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i12);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i13);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i14);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__purity_name_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i15);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,37);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,36);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i28);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__purity__error_inferred_impure_4_0_i26);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,39);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,40);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__purity__error_inferred_impure_4_0_i44);
MR_def_label(fn__check_hlds__purity__error_inferred_impure_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_promised_purity_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_4_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_pragma_goal_type_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(check_hlds__purity_module21)
	MR_init_entry1(check_hlds__purity__puritycheck_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__puritycheck_pred_6_0);
	MR_init_label10(check_hlds__purity__puritycheck_pred_6_0,2,3,4,5,6,7,9,10,11,12)
	MR_init_label10(check_hlds__purity__puritycheck_pred_6_0,13,14,15,24,26,18,19,31,34,32)
	MR_init_label10(check_hlds__purity__puritycheck_pred_6_0,39,40,47,50,52,41,38,59,61,64)
	MR_init_label4(check_hlds__purity__puritycheck_pred_6_0,67,68,71,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'puritycheck_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__puritycheck_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r2;
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
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i5);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i6);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i7);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__purity__compute_purity_for_clauses_7_0,
		check_hlds__purity__puritycheck_pred_6_0_i9);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i10);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i11);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i12);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i13);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__purity__puritycheck_pred_6_0_i14);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i15);
	}
	if ((MR_sv(3) == MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i15);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i19);
	}
	if ((MR_sv(9) != MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i19);
	}
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_pragma_goal_type_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i24);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i18);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i26);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i18);
	}
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i18);
	}
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(9) != MR_sv(3))) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i31);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i34);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i32);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i39);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i40);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i41);
	}
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i47);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i50);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i52);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i38);
	}
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__check_hlds__purity__workaround_gcc_bug_1_0,
		check_hlds__purity__puritycheck_pred_6_0_i59);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__purity__error_inconsistent_promise_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i71);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i64);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__check_hlds__purity__error_inferred_impure_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i71);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i67);
	}
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i73);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__purity__puritycheck_pred_6_0_i68);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(fn__check_hlds__purity__warn_exaggerated_impurity_decl_5_0,
		check_hlds__purity__puritycheck_pred_6_0_i71);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__purity__warn_unnecessary_promise_pure_4_0,
		check_hlds__purity__puritycheck_pred_6_0_i71);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__purity__puritycheck_pred_6_0_i73);
MR_def_label(check_hlds__purity__puritycheck_pred_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
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

MR_BEGIN_MODULE(check_hlds__purity_module22)
	MR_init_entry1(check_hlds__purity__check_preds_purity_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__check_preds_purity_5_0);
	MR_init_label10(check_hlds__purity__check_preds_purity_5_0,55,3,4,10,8,12,5,14,15,16)
	MR_init_label6(check_hlds__purity__check_preds_purity_5_0,18,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_preds_purity'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__check_preds_purity_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__purity__check_preds_purity_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__purity__check_preds_purity_5_0_i4);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__purity__check_preds_purity_5_0_i10);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__purity__check_preds_purity_5_0_i12);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("% Purity-checking ", 18);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__purity__check_preds_purity_5_0_i14);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__purity__puritycheck_pred_6_0,
		check_hlds__purity__check_preds_purity_5_0_i15);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__purity__check_preds_purity_5_0_i16);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		check_hlds__purity__check_preds_purity_5_0_i18);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i20);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i55);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i55);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i55);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i55);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,
		check_hlds__purity__check_preds_purity_5_0_i24);
MR_def_label(check_hlds__purity__check_preds_purity_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__purity__check_preds_purity_5_0_i55);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module23)
	MR_init_entry1(check_hlds__purity__puritycheck_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__puritycheck_module_4_0);
	MR_init_label1(check_hlds__purity__puritycheck_module_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'puritycheck_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__purity__puritycheck_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		check_hlds__purity__puritycheck_module_4_0_i2);
MR_def_label(check_hlds__purity__puritycheck_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__purity__check_preds_purity_5_0);
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
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__hlds_pred__remove_marker_3_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module24)
	MR_init_entry1(check_hlds__purity__repuritycheck_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__repuritycheck_proc_4_0);
	MR_init_label10(check_hlds__purity__repuritycheck_proc_4_0,2,3,4,5,6,8,9,10,11,48)
	MR_init_label10(check_hlds__purity__repuritycheck_proc_4_0,13,15,16,17,18,21,24,26,25,19)
	MR_init_label9(check_hlds__purity__repuritycheck_proc_4_0,31,34,36,39,41,40,43,44,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'repuritycheck_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__purity__repuritycheck_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i2);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i3);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i4);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i5);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i6);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 7) = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__purity__compute_goal_purity_6_0,
		check_hlds__purity__repuritycheck_proc_4_0_i8);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i9);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i10);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i11);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i13);
	}
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__purity__repuritycheck_proc_4_0_i15);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i48);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i16);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i17);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i18);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i21);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i19);
	}
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i24);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i25);
	}
	MR_r1 = (MR_Integer) 15;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i26);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 14;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i44);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i44);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__less_pure_2_0,
		check_hlds__purity__repuritycheck_proc_4_0_i31);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i30);
	}
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 2);
	MR_tfield(1, MR_sv(8), 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__purity__repuritycheck_proc_4_0_i34);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_sv(8);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__purity__repuritycheck_proc_4_0_i36);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i30);
	}
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i39);
	}
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__purity__repuritycheck_proc_4_0_i40);
	}
	MR_r1 = (MR_Integer) 12;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i41);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i44);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i43);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 13;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		check_hlds__purity__repuritycheck_proc_4_0_i44);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_def_label(check_hlds__purity__repuritycheck_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module25)
	MR_init_entry1(check_hlds__purity__wrap_inner_outer_goals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__purity__wrap_inner_outer_goals_5_0);
	MR_init_label10(check_hlds__purity__wrap_inner_outer_goals_5_0,2,3,4,13,14,15,22,23,29,30)
	MR_init_label1(check_hlds__purity__wrap_inner_outer_goals_5_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_inner_outer_goals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__purity__wrap_inner_outer_goals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i2);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i3);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(11) = MR_tfield(0, MR_r2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_sv(7), 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i4);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(8);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(13) = MR_tempr1;
	MR_tempr6 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,8,1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,8,1);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i13);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("stm_from_outer_to_inner", 23);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(13);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i14);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i15);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(11);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i22);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_string_const("stm_from_inner_to_outer", 23);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i23);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i29);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i30);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 21;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__purity__wrap_inner_outer_goals_5_0_i31);
MR_def_label(check_hlds__purity__wrap_inner_outer_goals_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module26)
	MR_init_entry1(__Unify___check_hlds__purity__converted_unify_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__purity__converted_unify_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__purity__converted_unify_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__purity_module27)
	MR_init_entry1(__Compare___check_hlds__purity__converted_unify_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__purity__converted_unify_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__purity__converted_unify_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module28)
	MR_init_entry1(__Unify___check_hlds__purity__purity_check_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__purity__purity_check_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(check_hlds__purity_module29)
	MR_init_entry1(__Compare___check_hlds__purity__purity_check_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__purity__purity_check_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(check_hlds__purity_module30)
	MR_init_entry1(__Unify___check_hlds__purity__purity_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__purity__purity_info_0_0);
	MR_init_label7(__Unify___check_hlds__purity__purity_info_0_0,4,6,9,11,13,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__purity__purity_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i15);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__purity__purity_info_0_0_i4);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___check_hlds__purity__purity_info_0_0_i6);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__purity__purity_info_0_0_i9);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__purity__purity_info_0_0_i11);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__purity__purity_info_0_0_i13);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___check_hlds__purity__purity_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__purity__purity_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
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

MR_BEGIN_MODULE(check_hlds__purity_module31)
	MR_init_entry1(__Compare___check_hlds__purity__purity_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__purity__purity_info_0_0);
	MR_init_label10(__Compare___check_hlds__purity__purity_info_0_0,3,2,5,9,13,18,22,26,30,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__purity__purity_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__purity__purity_info_0_0_i5);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__purity__purity_info_0_0_i9);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___check_hlds__purity__purity_info_0_0_i13);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__purity__purity_info_0_0_i18);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__purity__purity_info_0_0_i22);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__purity__purity_info_0_0_i26);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__purity__purity_info_0_0_i30);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__purity__purity_info_0_0_i94);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__purity__purity_info_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module32)
	MR_init_entry1(__Unify___check_hlds__purity__run_post_typecheck_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__purity__run_post_typecheck_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__purity__run_post_typecheck_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__purity_module33)
	MR_init_entry1(__Compare___check_hlds__purity__run_post_typecheck_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__purity__run_post_typecheck_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__purity__run_post_typecheck_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
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
	check_hlds__purity_module26();
	check_hlds__purity_module27();
	check_hlds__purity_module28();
	check_hlds__purity_module29();
	check_hlds__purity_module30();
	check_hlds__purity_module31();
	check_hlds__purity_module32();
	check_hlds__purity_module33();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__purity__init(void);
void mercury__check_hlds__purity__init_type_tables(void);
void mercury__check_hlds__purity__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__purity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__purity__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__purity__init_threadscope_string_table(void);
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
		mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0,
		check_hlds__purity__converted_unify_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0,
		check_hlds__purity__purity_check_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__purity__type_ctor_info_purity_info_0,
		check_hlds__purity__purity_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0,
		check_hlds__purity__run_post_typecheck_0_0);
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
		&mercury_data_check_hlds__purity__type_ctor_info_converted_unify_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__purity__type_ctor_info_purity_check_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__purity__type_ctor_info_purity_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__purity__type_ctor_info_run_post_typecheck_0);
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

void mercury__check_hlds__purity__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__purity);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__purity__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__purity__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
