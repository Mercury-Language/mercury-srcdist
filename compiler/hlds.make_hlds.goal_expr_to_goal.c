/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__hlds__make_hlds__goal_expr_to_goal__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.make_hlds.goal_expr_to_goal.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "hlds.make_hlds.goal_expr_to_goal.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "hlds.make_hlds.goal_expr_to_goal.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_hlds.goal_expr_to_goal.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.make_hlds.goal_expr_to_goal.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.make_hlds.goal_expr_to_goal.c"
#line 49 "hlds.make_hlds.goal_expr_to_goal.c"
#include "hlds.make_hlds.goal_expr_to_goal.mh"

#line 52 "hlds.make_hlds.goal_expr_to_goal.c"
#line 53 "hlds.make_hlds.goal_expr_to_goal.c"
#ifndef HLDS__MAKE_HLDS__GOAL_EXPR_TO_GOAL_DECL_GUARD
#define HLDS__MAKE_HLDS__GOAL_EXPR_TO_GOAL_DECL_GUARD

#line 57 "hlds.make_hlds.goal_expr_to_goal.c"
#line 58 "hlds.make_hlds.goal_expr_to_goal.c"

#endif
#line 61 "hlds.make_hlds.goal_expr_to_goal.c"

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
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0;
MR_decl_label1(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0, 2)
MR_decl_label3(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0, 2,4,6)
MR_decl_label4(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0, 15,4,2,6)
MR_decl_label7(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0, 16,4,2,6,7,8,9)
MR_decl_label7(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0, 16,4,2,6,7,8,9)
MR_decl_label3(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0, 2,3,4)
MR_decl_label9(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0, 6,5,13,16,3,21,22,27,30)
MR_decl_label3(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0, 2,5,8)
MR_decl_label4(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0, 2,4,8,11)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0, 2,10,9,16,17,20,21,22,19,24)
MR_decl_label4(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0, 25,3,26,27)
MR_decl_label8(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0, 2,10,12,9,25,28,40,3)
MR_decl_label2(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0, 2,3)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 823,5,3,9,7,12,13,14,15,16)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 11,18,19,20,21,22,17,23,30,39)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 40,38,44,45,49,50,51,53,55,56)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 48,58,60,62,63,64,66,43,67,68)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 72,73,74,76,78,79,71,81,83,85)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 86,87,42,90,89,94,37,97,107,98)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 138,108,142,141,144,145,139,146,147,148)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 152,151,154,157,149,158,159,163,164,165)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 167,169,173,96,175,176,177,178,179,174)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 181,182,185,180,188,189,190,191,192,193)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 194,201,202,187,204,205,206,207,208,209)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 210,211,212,203,215,223,224,222,227,226)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 232,231,237,236,242,245,241,248,249,252)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 247,255,258,254,261,262,265,260,268,269)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 270,271,274,267,278,280,282,284,279,289)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 290,291,292,293,294,295,298,276,302,306)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 305,314,300,315,316,324,325,334,317,342)
MR_decl_label4(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0, 343,335,344,345)
MR_decl_label3(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0, 18,4,6)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0, 2,3,4,5,7,8,9,10,11,12)
MR_decl_label4(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0, 13,14,15,16)
MR_decl_label10(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0, 2,3,8,9,13,14,15,18,31,32)
MR_decl_label7(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0, 35,39,40,41,46,47,50)
MR_decl_label9(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0, 2,3,8,9,13,17,16,30,35)
MR_decl_label1(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0, 3)
MR_decl_label1(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0, 2)
MR_decl_label1(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0, 2)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0)
MR_decl_static(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0)
MR_decl_static(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0)
MR_decl_static(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0)
MR_def_extern_entry(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0)
MR_decl_static(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_0 mercury_common_0[16] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
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
MR_TAG_COMMON(3,2,0),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,2,1),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,2,2),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,2,3),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,2,4),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(3,2,5),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,2,6),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(3,2,11),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_goal_expr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_item, goal_expr),
MR_CTOR0_ADDR(term, context)
}
},
};

static const struct mercury_type_2 mercury_common_2[12] =
{
{
4,
MR_string_const("cannot have an else part.", 25)
},
{
4,
MR_string_const("Error: a \140try\' goal with an \140io\' parameter", 42)
},
{
4,
MR_string_const("in DCG field access goal.", 25)
},
{
4,
MR_string_const("or \140^ field1 ^ ... ^ fieldN := Field\'", 37)
},
{
4,
MR_string_const("Error: expected \140Field =^ field1 ^ ... ^ fieldN\'", 48)
},
{
4,
MR_string_const("In DCG field extraction goal:", 29)
},
{
4,
MR_string_const("In DCG field update goal:", 25)
},
{
4,
MR_string_const("Error:", 6)
},
{
4,
MR_string_const("cannot appear as a unification argument.", 40)
},
{
4,
MR_string_const("You probably meant", 18)
},
{
4,
MR_string_const("or", 2)
},
{
3,
MR_string_const(".", 1)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_string_const("!:", 2)
},
{
MR_string_const("!.", 2)
},
{
MR_string_const(":=", 2)
},
{
MR_string_const("{}", 2)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
2,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,13),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var),
MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds),
MR_COMMON(0,14),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,14),
MR_COMMON(0,14),
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_state),
MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_state),
MR_COMMON(0,15),
MR_COMMON(0,15)
}
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
	"loc_whole_goal",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
	"loc_inside_atomic_goal",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[] = {
	&mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
	&mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[] = {
	&mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
	&mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0)),
	"hlds.make_hlds.goal_expr_to_goal",
	"loc_kind",
	{ (void *)mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0 },
	{ (void *)mercury_data_hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0 },
	2,
	4,
	mercury_data_hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.state_var",
"hlds.make_hlds.state_var",
"lookup_dot_state_var",
9,
0
},
"hlds.make_hlds.goal_expr_to_goal",
"goal_expr_to_goal.m",
651,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.goal_expr_to_goal",
"hlds.make_hlds.goal_expr_to_goal",
"extract_trace_mutable_var",
7,
0
},
"hlds.make_hlds.goal_expr_to_goal",
"goal_expr_to_goal.m",
310,
"235"
};


MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module0)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0);
	MR_init_label1(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_trace_io_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("trace_get_io_state", 18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_string_const("trace_set_io_state", 18);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tempr8 = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr7, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr7;
	MR_tfield(0, MR_r1, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr4;
	MR_tfield(0, MR_r2, 1) = MR_tempr8;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module1)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0);
	MR_init_label4(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,2,4,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_svar_unify_error'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,7);
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,2,8);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,2,9);
	MR_r1 = (MR_Word) MR_string_const("!.", 2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,2,10);
	MR_r1 = (MR_Word) MR_string_const("!:", 2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0_i11);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_0);
MR_decl_entry(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__make_hlds__field_access__expand_set_field_function_call_22_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module2)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0);
	MR_init_label8(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,2,10,12,9,25,28,40,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_dcg_record_syntax_2'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r7;
	MR_r3 = MR_r5;
	MR_r4 = MR_r10;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r14 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r15 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i3);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i3);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i9);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(1, MR_sv(4), 0);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	MR_r7 = MR_tfield(1, MR_tempr2, 0);
	MR_r8 = MR_tempr4;
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr3;
	MR_r11 = MR_sv(6);
	MR_r12 = MR_sv(7);
	MR_r13 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i10);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(3, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_r5;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_0);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.goal_expr_to_goal", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", 77);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("not cons", 8);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i40);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(1, MR_sv(4), 0);
	MR_r6 = MR_tfield(1, MR_r14, 0);
	MR_r7 = MR_tfield(1, MR_r15, 0);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(6);
	MR_r12 = MR_sv(7);
	MR_r13 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_set_field_function_call_22_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i25);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_tempr7 = MR_r9;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr6;
	MR_r11 = MR_tempr7;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_0);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.goal_expr_to_goal", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", 77);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("not cons", 8);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0_i40);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_0);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.goal_expr_to_goal", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", 77);
	MR_r3 = (MR_Word) MR_string_const("arity != 3", 10);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module3)
	MR_init_entry1(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0);
	MR_init_label1(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dcg_field_error_context_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,10);
	MR_proceed();
MR_def_label(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module4)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0);
	MR_init_label3(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'invalid_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_0,
		hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0_i3);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(hlds__make_hlds__field_access__parse_field_list_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module5)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0);
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,2,10,9,16,17,20,21,22,19,24)
	MR_init_label4(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,25,3,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_dcg_record_syntax'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i10);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr6, 0);
	MR_r4 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_r6 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_r6, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr5;
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(13) = MR_tfield(1, MR_tempr5, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(14) = MR_tempr1;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i9);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(13) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_sv(7), 0);
	MR_sv(14) = MR_r3;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i16);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i17);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i21);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_sv(13) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i22);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i24);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i25);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i26);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0_i27);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(11);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0);
MR_decl_entry(parse_tree__prog_util__construct_qualified_term_with_context_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module6)
	MR_init_entry1(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0);
	MR_init_label1(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exception_functor'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0_i2);
MR_def_label(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__get_term_context_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module7)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0);
	MR_init_label9(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,6,5,13,16,3,21,22,27,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_catch_ite_chain'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("rethrow", 7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(3) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i30);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tfield(0, MR_r1, 1), 1);
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i13);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("exc_univ_value", 14);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i16);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tfield(3, MR_r2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i21);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i22);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exc_univ_to_type", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_sv(4) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i27);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 5) = MR_sv(2);
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__get_term_context_1_0,
		hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0_i30);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module8)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0);
	MR_init_label3(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,2,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_exception_handling_disjunct'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("exception", 9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_with_context_4_0,
		hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0_i5);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_0,
		hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module9)
	MR_init_entry1(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0);
	MR_init_label1(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'magic_exception_result_sym_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0_i2);
MR_def_label(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("magic_exception_result", 22);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module10)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0);
	MR_init_label2(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_goal_expr_context_to_goal'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_tempr7 = MR_r9;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0_i3);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);
MR_decl_entry(parse_tree__prog_data__rename_var_list_4_0);
MR_decl_entry(parse_tree__prog_data__rename_var_4_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_disjunction_9_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0);
MR_decl_entry(hlds__make_hlds__state_var__expand_bang_states_2_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_term_list_4_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0);
MR_decl_entry(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
MR_decl_entry(list__map4_6_0);
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(fn__parse_tree__prog_util__goal_list_to_conj_2_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_term_4_0);
MR_decl_entry(hlds__make_hlds__superhomogeneous__unravel_unification_19_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module11)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0);
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,823,5,3,9,7,12,13,14,15,16)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,11,18,19,20,21,22,17,23,30,39)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,40,38,44,45,49,50,51,53,55,56)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,48,58,60,62,63,64,66,43,67,68)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,72,73,74,76,78,79,71,81,83,85)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,86,87,42,90,89,94,37,97,107,98)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,138,108,142,141,144,145,139,146,147,148)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,152,151,154,157,149,158,159,163,164,165)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,167,169,173,96,175,176,177,178,179,174)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,181,182,185,180,188,189,190,191,192,193)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,194,201,202,187,204,205,206,207,208,209)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,210,211,212,203,215,223,224,222,227,226)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,232,231,237,236,242,245,241,248,249,252)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,247,255,258,254,261,262,265,260,268,269)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,270,271,274,267,278,280,282,284,279,289)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,290,291,292,293,294,295,298,276,302,306)
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,305,314,300,315,316,324,325,334,317,342)
	MR_init_label4(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,343,335,344,345)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_goal_expr_to_goal'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,823)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i3);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i5);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i7);
	}
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i11);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i12);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i13);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i14);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i15);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i16);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i17);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i18);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i19);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i21);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i22);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(20);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i823);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(20);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i823);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i37);
	}
	MR_r11 = MR_tfield(3, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i38);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r11, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i40);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i43);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i44);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i45);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i48);
	}
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i49);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i50);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i51);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i53);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(14) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i55);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i56);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_sv(10) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i66);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(14);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i58);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(10);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i60);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(14) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(17) = MR_r6;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i62);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i63);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i64);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i66);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i42);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i67);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i68);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i71);
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i72);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i73);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i74);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i76);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(14) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i78);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i79);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i42);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i81);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(12);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i83);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(14) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(17) = MR_r6;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i85);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i86);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i87);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i90);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i94);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.goal_expr_to_goal", 32);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.goal_expr_to_goal.transform_goal_expr_to_goal\'/17", 75);
	MR_r3 = (MR_Word) MR_string_const("atomic HLDSGoals = []", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i89);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i94);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,19)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i96);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(18) = MR_tfield(3, MR_r2, 3);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i97);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i98);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("\\=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i98);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i98);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i98);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i98);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(1, MR_r1, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(3, MR_tempr2, 3) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(17);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i107);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i173);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr4, MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr6 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr6 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr6,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr7 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr7, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr7,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr7,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i108);
	}
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr7, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr8 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_tempr7;
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_tfield(3, MR_r2, 3) = MR_sv(18);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr8;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(17);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i138);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i173);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i139);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	MR_r5 = MR_tempr1;
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i142);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i141);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("=^", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i139);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r5;
	MR_r4 = MR_r1;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i144);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i145);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i173);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i146);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i147);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i148);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i149);
	}
	MR_r2 = MR_tfield(0, MR_sv(7), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i152);
	}
	MR_sv(10) = MR_r1;
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i151);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("call", 4)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i149);
	}
	MR_sv(10) = MR_r1;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i154);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i149);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_r1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(18);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 3) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i157);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i163);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i158);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i159);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(9);
	MR_tfield(2, MR_r2, 3) = (MR_Integer) 2;
	MR_tfield(2, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tfield(2, MR_r2, 5) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tag_alloc_heap(MR_sv(11), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(11), 0) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_r2;
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i164);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i165);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__record_called_pred_or_func_5_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i167);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i169);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i173);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i174);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(12) = MR_r5;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i175);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i176);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(17) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i177);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i178);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i179);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i180);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_tempr2 = MR_r5;
	MR_sv(12) = MR_tempr2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i181);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i182);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_sv(12);
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i185);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i187);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__expand_bang_states_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i188);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i189);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i190);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i191);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i192);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i193);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i194);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_sv(7);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr6 = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 5) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(15);
	MR_r11 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i201);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i202);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i203);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 4);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i204);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i205);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i206);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i207);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i208);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_sv(17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i209);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i210);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r7;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i211);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_if_then_else_18_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i212);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r5 = MR_sv(14);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_sv(16);
	MR_r7 = MR_tempr2;
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i215);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(20);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i823);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i222);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(12) = MR_tempr1;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i223);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(12);
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_sv(3) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i224);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i226);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr1 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_tempr8 = MR_r10;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_r12 = MR_tempr7;
	MR_r13 = MR_tempr1;
	MR_r14 = MR_tempr8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i227);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i231);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr1 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_tempr8 = MR_r10;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_r12 = MR_tempr7;
	MR_r13 = MR_tempr1;
	MR_r14 = MR_tempr8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i232);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i236);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr7 = MR_r8;
	MR_r8 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr1 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_tempr8 = MR_r10;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_r12 = MR_tempr7;
	MR_r13 = MR_tempr1;
	MR_r14 = MR_tempr8;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i237);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i241);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i242);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i245);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i247);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i248);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i249);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i252);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i254);
	}
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i255);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i258);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i260);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i261);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i262);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i265);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i267);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i268);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i269);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i270);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i271);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i274);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i276);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 3);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_tempr4;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(18) = MR_tfield(3, MR_r2, 5);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_mutable_var);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_r4;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map4_6_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i278);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i280);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i279);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i282);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(11), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(11), 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i284);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(18);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(19);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i289);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i290);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__goal_list_to_conj_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i291);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i292);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i293);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i294);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_local_state_vars_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i295);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(11);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_tfield(3, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i298);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i300);
	}
	MR_r15 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r15,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i302);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 6);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr7 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_tempr8 = MR_r10;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_r14 = MR_tempr8;
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i305);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 6);
	MR_sv(6) = MR_tfield(1, MR_r15, 0);
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(8) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i306);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(14);
	MR_r12 = MR_sv(16);
	MR_r13 = MR_sv(13);
	MR_r14 = MR_sv(15);
	MR_r15 = MR_sv(17);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r10;
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i314);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(12) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(15) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i315);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_term_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i316);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i317);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i324);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i325);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i334);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i335);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i342);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i343);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__unravel_unification_19_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i344);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_atomic_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0_i345);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__state_var__lookup_dot_state_var_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
MR_decl_entry(list__map_foldl3_9_1);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module12)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0);
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,2,3,4,5,7,8,9,10,11,12)
	MR_init_label4(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_promise_eqv_goal'/23 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_sv(14) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(11) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(15);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i3);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__rename_var_list_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i5);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__state_var__lookup_dot_state_var_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_tempr3 = MR_sv(13);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__state_var, svar_state);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(10);
	MR_r10 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i7);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(15);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(10) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(11) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i10);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i11);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(15);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i12);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i13);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i14);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i15);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0_i16);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(14);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module13)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0);
	MR_init_label7(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_rev_conj'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr7;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i16);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i7);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_par_conj_list_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module14)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0);
	MR_init_label7(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,16,4,2,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_rev_par_conj'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_r9 = MR_tempr6;
	MR_r10 = MR_tempr7;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i16);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_par_conj_list_2_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i7);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module15)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__get_disj_16_0);
	MR_init_label4(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,15,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_disj'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,
		hlds__make_hlds__goal_expr_to_goal__get_disj_16_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(3);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr6;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0_i15);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__get_disj_16_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__get_disj_16_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module16)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0);
	MR_init_label3(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_orelse_goals'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_proceed();
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	}
	MR_np_localcall_lab(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,
		hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_0,6)
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

MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module17)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0);
	MR_init_label10(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,2,3,8,9,13,14,15,18,31,32)
	MR_init_label7(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,35,39,40,41,46,47,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_try_expr_with_io'/22 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(11) = MR_r10;
	MR_sv(16) = MR_r11;
	MR_sv(17) = MR_r13;
	MR_sv(18) = MR_r14;
	MR_sv(19) = MR_r15;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("TryResult", 9);
	MR_r3 = MR_r12;
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i3);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tempr4 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(12) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr4;
	MR_sv(20) = MR_r2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_sv(20);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i13);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r5;
	MR_sv(18) = MR_r6;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i14);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r4;
	MR_sv(21) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("succeeded", 9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i15);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(21);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_sv(19);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(20);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i18);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tempr13 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr13;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr7;
	MR_tempr8 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_tempr9 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr10 = MR_r5;
	MR_r5 = MR_tempr8;
	MR_tempr11 = MR_r6;
	MR_r6 = MR_tempr9;
	MR_tempr12 = MR_r7;
	MR_r7 = MR_tempr10;
	MR_r8 = MR_tempr11;
	MR_r9 = MR_tempr12;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i31);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_sv(13) = MR_r3;
	MR_sv(16) = MR_r5;
	MR_sv(17) = MR_r6;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__lookup_dot_state_var_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i32);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(17);
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i35);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(14);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(15) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_sv(18) = MR_r6;
	MR_sv(19) = MR_r7;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i39);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i40);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(21);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i41);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_sv(5);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(21);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__svar_finish_disjunction_9_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i46);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i47);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(11);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0_i50);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_decr_sp_and_return(22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module18)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0);
	MR_init_label9(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,2,3,8,9,13,17,16,30,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_try_expr_without_io'/21 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_sv(15) = MR_r10;
	MR_sv(16) = MR_r12;
	MR_sv(17) = MR_r13;
	MR_sv(18) = MR_r14;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("TryResult", 9);
	MR_r3 = MR_r11;
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i3);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(12) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr4;
	MR_sv(19) = MR_r2;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i8);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i9);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("succeeded", 9);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__goal_expr_to_goal__exception_functor_3_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i13);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tempr11 = MR_sv(9);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr11;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr12 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr12;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r9 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r10 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r11 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_sv(13) = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr12;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr12;
	MR_r1 = MR_tempr11;
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i16);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tfield(1, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(13) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	}
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i30);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(19);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(17);
	MR_r9 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_0,
		hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0_i35);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(11);
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module19)
	MR_init_entry1(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0);
	MR_init_label3(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_trace_mutable_var'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0_i2);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("get_", 4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0_i4);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("set_", 4);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0_i6);
MR_def_label(hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr9 = MR_sv(3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr9;
	MR_tempr10 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr6, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr6, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr6, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr10;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr9;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module20)
	MR_init_entry1(__Unify___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__goal_expr_to_goal_module21)
	MR_init_entry1(__Compare___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__goal_expr_to_goal_maybe_bunch_0(void)
{
	hlds__make_hlds__goal_expr_to_goal_module0();
	hlds__make_hlds__goal_expr_to_goal_module1();
	hlds__make_hlds__goal_expr_to_goal_module2();
	hlds__make_hlds__goal_expr_to_goal_module3();
	hlds__make_hlds__goal_expr_to_goal_module4();
	hlds__make_hlds__goal_expr_to_goal_module5();
	hlds__make_hlds__goal_expr_to_goal_module6();
	hlds__make_hlds__goal_expr_to_goal_module7();
	hlds__make_hlds__goal_expr_to_goal_module8();
	hlds__make_hlds__goal_expr_to_goal_module9();
	hlds__make_hlds__goal_expr_to_goal_module10();
	hlds__make_hlds__goal_expr_to_goal_module11();
	hlds__make_hlds__goal_expr_to_goal_module12();
	hlds__make_hlds__goal_expr_to_goal_module13();
	hlds__make_hlds__goal_expr_to_goal_module14();
	hlds__make_hlds__goal_expr_to_goal_module15();
	hlds__make_hlds__goal_expr_to_goal_module16();
	hlds__make_hlds__goal_expr_to_goal_module17();
	hlds__make_hlds__goal_expr_to_goal_module18();
	hlds__make_hlds__goal_expr_to_goal_module19();
	hlds__make_hlds__goal_expr_to_goal_module20();
	hlds__make_hlds__goal_expr_to_goal_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__goal_expr_to_goal__init(void);
void mercury__hlds__make_hlds__goal_expr_to_goal__init_type_tables(void);
void mercury__hlds__make_hlds__goal_expr_to_goal__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__goal_expr_to_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__goal_expr_to_goal__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__goal_expr_to_goal__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__goal_expr_to_goal__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__goal_expr_to_goal_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0,
		hlds__make_hlds__goal_expr_to_goal__loc_kind_0_0);
	mercury__hlds__make_hlds__goal_expr_to_goal__init_debugger();
}

void mercury__hlds__make_hlds__goal_expr_to_goal__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0);
	}
}


void mercury__hlds__make_hlds__goal_expr_to_goal__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__goal_expr_to_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__hlds__make_hlds__goal_expr_to_goal);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__goal_expr_to_goal__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__goal_expr_to_goal__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
