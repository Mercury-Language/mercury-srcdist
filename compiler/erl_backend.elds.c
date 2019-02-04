/*
** Automatically generated from `elds.m'
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
INIT mercury__erl_backend__elds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "erl_backend.elds.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "erl_backend.elds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "erl_backend.elds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "erl_backend.elds.c"
#line 40 "erl_backend.elds.c"
#include "erl_backend.elds.mh"

#line 43 "erl_backend.elds.c"
#line 44 "erl_backend.elds.c"
#ifndef ERL_BACKEND__ELDS_DECL_GUARD
#define ERL_BACKEND__ELDS_DECL_GUARD

#line 48 "erl_backend.elds.c"
#line 49 "erl_backend.elds.c"

#endif
#line 52 "erl_backend.elds.c"

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
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_term_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_body_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0,
	mercury_data_erl_backend__elds__type_ctor_info_elds_0;
MR_decl_label1(fn__erl_backend__elds__det_expr_1_0, 3)
MR_decl_label1(fn__erl_backend__elds__elds_body_arity_1_0, 3)
MR_decl_label1(fn__erl_backend__elds__expr_or_void_1_0, 3)
MR_decl_label1(fn__erl_backend__elds__expr_to_term_1_0, 2)
MR_decl_label5(fn__erl_backend__elds__join_exprs_2_0, 2,4,5,8,9)
MR_decl_label1(fn__erl_backend__elds__maybe_join_exprs_2_0, 12)
MR_decl_label1(fn__erl_backend__elds__maybe_join_exprs1_2_0, 3)
MR_decl_label8(__Unify___erl_backend__elds__elds_0_0, 4,6,8,10,12,14,16,20)
MR_decl_label1(__Unify___erl_backend__elds__elds_0_0, 1)
MR_decl_label3(__Unify___erl_backend__elds__elds_body_0_0, 14,5,1)
MR_decl_label4(__Unify___erl_backend__elds__elds_call_target_0_0, 10,6,24,1)
MR_decl_label3(__Unify___erl_backend__elds__elds_case_0_0, 4,8,1)
MR_decl_label4(__Unify___erl_backend__elds__elds_catch_0_0, 4,6,10,1)
MR_decl_label3(__Unify___erl_backend__elds__elds_clause_0_0, 4,8,1)
MR_decl_label5(__Unify___erl_backend__elds__elds_defn_0_0, 4,6,8,12,1)
MR_decl_label8(__Unify___erl_backend__elds__elds_expr_0_0, 187,6,10,14,16,20,21,25)
MR_decl_label8(__Unify___erl_backend__elds__elds_expr_0_0, 27,31,33,37,41,45,47,51)
MR_decl_label8(__Unify___erl_backend__elds__elds_expr_0_0, 53,55,59,63,65,67,71,113)
MR_decl_label1(__Unify___erl_backend__elds__elds_expr_0_0, 1)
MR_decl_label3(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0, 4,8,1)
MR_decl_label4(__Unify___erl_backend__elds__elds_rtti_defn_0_0, 4,6,10,1)
MR_decl_label8(__Unify___erl_backend__elds__elds_rtti_id_0_0, 6,10,14,18,20,22,35,1)
MR_decl_label8(__Unify___erl_backend__elds__elds_term_0_0, 6,7,9,11,12,14,16,18)
MR_decl_label5(__Unify___erl_backend__elds__elds_term_0_0, 22,26,30,52,1)
MR_decl_label8(__Index___erl_backend__elds__elds_expr_0_0, 4,5,6,7,8,9,10,11)
MR_decl_label7(__Index___erl_backend__elds__elds_expr_0_0, 12,13,14,15,16,17,18)
MR_decl_label8(__Compare___erl_backend__elds__elds_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___erl_backend__elds__elds_0_0, 29,69)
MR_decl_label5(__Compare___erl_backend__elds__elds_body_0_0, 3,2,7,5,10)
MR_decl_label8(__Compare___erl_backend__elds__elds_call_target_0_0, 3,2,12,16,6,32,11,9)
MR_decl_label4(__Compare___erl_backend__elds__elds_case_0_0, 3,2,5,21)
MR_decl_label5(__Compare___erl_backend__elds__elds_catch_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___erl_backend__elds__elds_clause_0_0, 3,2,5,21)
MR_decl_label6(__Compare___erl_backend__elds__elds_defn_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___erl_backend__elds__elds_expr_0_0, 209,3,2,4,5,6,7,11)
MR_decl_label8(__Compare___erl_backend__elds__elds_expr_0_0, 14,17,20,25,26,29,34,37)
MR_decl_label8(__Compare___erl_backend__elds__elds_expr_0_0, 41,47,50,55,58,61,64,69)
MR_decl_label8(__Compare___erl_backend__elds__elds_expr_0_0, 72,76,82,85,88,91,96,227)
MR_decl_label1(__Compare___erl_backend__elds__elds_expr_0_0, 228)
MR_decl_label5(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0, 3,2,5,9,29)
MR_decl_label6(__Compare___erl_backend__elds__elds_rtti_defn_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___erl_backend__elds__elds_rtti_id_0_0, 3,2,6,14,18,22,27,29)
MR_decl_label6(__Compare___erl_backend__elds__elds_rtti_id_0_0, 30,35,36,38,42,78)
MR_decl_label8(__Compare___erl_backend__elds__elds_term_0_0, 6,9,12,20,35,40,50,51)
MR_decl_label8(__Compare___erl_backend__elds__elds_term_0_0, 57,66,72,81,87,96,102,106)
MR_decl_label8(__Compare___erl_backend__elds__elds_term_0_0, 111,117,122,126,132,138,140,141)
MR_decl_label2(__Compare___erl_backend__elds__elds_term_0_0, 153,154)
MR_def_extern_entry(fn__erl_backend__elds__elds_true_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_false_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_fail_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_throw_atom_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_empty_tuple_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_commit_marker_0_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_call_builtin_2_0)
MR_def_extern_entry(fn__erl_backend__elds__expr_from_var_1_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_call_element_2_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_call_self_0_0)
MR_def_extern_entry(fn__erl_backend__elds__var_eq_false_1_0)
MR_def_extern_entry(fn__erl_backend__elds__term_from_var_1_0)
MR_def_extern_entry(fn__erl_backend__elds__terms_from_vars_1_0)
MR_def_extern_entry(fn__erl_backend__elds__exprs_from_vars_1_0)
MR_def_extern_entry(fn__erl_backend__elds__terms_from_fixed_vars_1_0)
MR_def_extern_entry(fn__erl_backend__elds__exprs_from_fixed_vars_1_0)
MR_def_extern_entry(fn__erl_backend__elds__expr_to_term_1_0)
MR_def_extern_entry(fn__erl_backend__elds__join_exprs_2_0)
MR_def_extern_entry(fn__erl_backend__elds__maybe_join_exprs_2_0)
MR_def_extern_entry(fn__erl_backend__elds__maybe_join_exprs1_2_0)
MR_def_extern_entry(fn__erl_backend__elds__expr_or_void_1_0)
MR_def_extern_entry(fn__erl_backend__elds__det_expr_1_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_clause_arity_1_0)
MR_def_extern_entry(fn__erl_backend__elds__elds_body_arity_1_0)
MR_def_extern_entry(fn__erl_backend__elds__make_enum_alternative_1_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_binop_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_binop_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_body_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_body_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_call_target_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_call_target_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_case_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_case_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_catch_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_catch_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_clause_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_clause_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_defn_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_defn_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_expr_0_0)
MR_def_extern_entry(__Index___erl_backend__elds__elds_expr_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_expr_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_rtti_defn_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_rtti_defn_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_rtti_id_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_rtti_id_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_term_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_term_0_0)
MR_def_extern_entry(__Unify___erl_backend__elds__elds_unop_0_0)
MR_def_extern_entry(__Compare___erl_backend__elds__elds_unop_0_0)
MR_decl_static(fn__erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__400__1_1_0)
MR_decl_static(fn__erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__402__1_1_0)

static const struct mercury_type_0 mercury_common_0[6] =
{
{
2,
MR_string_const("true", 4)
},
{
2,
MR_string_const("false", 5)
},
{
2,
MR_string_const("fail", 4)
},
{
2,
MR_string_const("throw", 5)
},
{
2,
MR_string_const("MERCURY_COMMIT", 14)
},
{
2,
MR_string_const("void", 4)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
4,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_TAG_COMMON(3,0,4)
},
{
MR_TAG_COMMON(3,0,1)
},
{
MR_TAG_COMMON(3,0,5)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_string_const("element", 7)
},
{
MR_string_const("self", 4)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
2,
MR_TAG_COMMON(2,3,1),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_5 mercury_common_5[2] =
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
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__terms_from_vars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_vars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__terms_from_fixed_vars_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_fixed_vars_1_0_1;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__elds__terms_from_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_term)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,1),
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__elds__terms_from_fixed_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_term)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_fixed_vars_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr)
},
};

static const struct mercury_type_7 mercury_common_7[4] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__erl_backend__elds__term_from_var_1_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(fn__erl_backend__elds__expr_from_var_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(fn__erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__400__1_1_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(fn__erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__402__1_1_0),
0
},
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
	"plus",
	0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
	"minus",
	1
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
	"bnot",
	2
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
	"logical_not",
	3
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds__enum_value_ordered_elds_unop_0[] = {
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_0,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_1,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_2,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds__enum_name_ordered_elds_unop_0[] = {
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_2,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_3,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_1,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_unop_0[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_unop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_unop_0_0)),
	"erl_backend.elds",
	"elds_unop",
	{ (void *)mercury_data_erl_backend__elds__enum_name_ordered_elds_unop_0 },
	{ (void *)mercury_data_erl_backend__elds__enum_value_ordered_elds_unop_0 },
	4,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_unop_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_0 = {
	"elds_char",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_1 = {
	"elds_int",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_2 = {
	"elds_float",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_3 = {
	"elds_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_4 = {
	"elds_atom_raw",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_5 = {
	"elds_atom",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
}};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_6 = {
	"elds_tuple",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_6,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_7 = {
	"elds_var",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	7,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_7,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_8 = {
	"elds_anon_var",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_term_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_9 = {
	"elds_fixed_name_var",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_term_0_9,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_8

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_1[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_0

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_2[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_1

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_3[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_2,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_3,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_4,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_5,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_6,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_7,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_9

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_term_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_2 },
	{ 7, MR_SECTAG_REMOTE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_term_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_term_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_8,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_5,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_4,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_0,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_9,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_2,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_1,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_3,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_6,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_term_0_7
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_term_0[] = {
	3,
	6,
	5,
	7,
	2,
	1,
	8,
	9,
	0,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_term_0_0)),
	"erl_backend.elds",
	"elds_term",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_term_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_term_0 },
	10,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_term_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_ctor_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_0 = {
	"elds_rtti_type_ctor_id",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_1 = {
	"elds_rtti_type_info_id",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_2 = {
	"elds_rtti_pseudo_type_info_id",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_tc_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_tc_name_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_tc_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_3 = {
	"elds_rtti_base_typeclass_id",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_rtti_id_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_0

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_2

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_3

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_rtti_id_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_rtti_id_0[] = {
	2,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_rtti_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0)),
	"erl_backend.elds",
	"elds_rtti_id",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_rtti_id_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_rtti_id_0 },
	4,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_rtti_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_rtti_defn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_rtti_defn_0_0[] = {
	"rtti_defn_id",
	"rtti_defn_exported",
	"rtti_defn_varset",
	"rtti_defn_clause"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0 = {
	"elds_rtti_defn",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_rtti_defn_0_0,
	mercury_data_erl_backend__elds__field_names_elds_rtti_defn_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_rtti_defn_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_rtti_defn_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_rtti_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_rtti_defn_0_0)),
	"erl_backend.elds",
	"elds_rtti_defn",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_rtti_defn_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_rtti_defn_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_foreign_export_defn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_foreign_export_defn_0_0[] = {
	"fe_defn_name",
	"fe_defn_varset",
	"fe_defn_clause"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0 = {
	"elds_foreign_export_defn",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_foreign_export_defn_0_0,
	mercury_data_erl_backend__elds__field_names_elds_foreign_export_defn_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0)),
	"erl_backend.elds",
	"elds_foreign_export_defn",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_foreign_export_defn_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_0 = {
	"elds_block",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_term_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_1 = {
	"elds_term",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_2 = {
	"elds_eq",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_3 = {
	"elds_unop",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_4 = {
	"elds_binop",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_5 = {
	"elds_call",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_6 = {
	"elds_rtti_ref",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_7 = {
	"elds_fun",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_case_0
}};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_8 = {
	"elds_case_expr",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_expr_0_9[] = {
	"try_expr",
	"try_cases",
	"try_catch"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_9 = {
	"elds_try",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_9,
	mercury_data_erl_backend__elds__field_names_elds_expr_0_9,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_10 = {
	"elds_throw",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_11 = {
	"elds_foreign_code",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_12 = {
	"elds_send",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_expr_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_13 = {
	"elds_receive",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_expr_0_13,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_0

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_1[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_1

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_2[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_2

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_3[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_3,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_4,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_5,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_6,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_7,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_8,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_9,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_10,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_11,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_12,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_13

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_expr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_2 },
	{ 11, MR_SECTAG_REMOTE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_expr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_expr_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_4,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_0,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_5,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_8,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_2,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_11,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_7,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_13,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_6,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_12,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_1,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_10,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_9,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_expr_0_3
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_expr_0[] = {
	1,
	10,
	4,
	13,
	0,
	2,
	8,
	6,
	3,
	12,
	11,
	5,
	9,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_expr_0_0)),
	"erl_backend.elds",
	"elds_expr",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_expr_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_expr_0 },
	14,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_expr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_body_0;

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_defn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_body_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_defn_0_0[] = {
	"defn_proc_id",
	"defn_varset",
	"defn_body",
	"defn_env_vars"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_defn_0_0 = {
	"elds_defn",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_defn_0_0,
	mercury_data_erl_backend__elds__field_names_elds_defn_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_defn_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_defn_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_defn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_defn_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_defn_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_defn_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_defn_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_defn_0_0)),
	"erl_backend.elds",
	"elds_defn",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_defn_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_defn_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_defn_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_term_0
}};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_clause_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_clause_0_0[] = {
	"clause_pattern",
	"clause_expr"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_clause_0_0 = {
	"elds_clause",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_clause_0_0,
	mercury_data_erl_backend__elds__field_names_elds_clause_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_clause_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_clause_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_clause_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_clause_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_clause_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_clause_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_clause_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_clause_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_clause_0_0)),
	"erl_backend.elds",
	"elds_clause",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_clause_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_clause_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_clause_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_catch_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_term_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_term_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_catch_0_0 = {
	"elds_catch",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_catch_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_catch_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_catch_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_catch_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_catch_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_catch_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_catch_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_catch_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_catch_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_catch_0_0)),
	"erl_backend.elds",
	"elds_catch",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_catch_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_catch_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_catch_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_case_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_term_0,
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_case_0_0 = {
	"elds_case",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_case_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_case_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_case_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_case_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_case_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_case_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_case_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_case_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_case_0_0)),
	"erl_backend.elds",
	"elds_case",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_case_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_case_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_case_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_call_target_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_0 = {
	"elds_call_plain",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_call_target_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_call_target_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_1 = {
	"elds_call_ho",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_call_target_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_call_target_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_2 = {
	"elds_call_builtin",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_call_target_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_0

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_1[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_1

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_2[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_2

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_call_target_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_call_target_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_call_target_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_2,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_1,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_call_target_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_call_target_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_call_target_0_0)),
	"erl_backend.elds",
	"elds_call_target",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_call_target_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_call_target_0 },
	3,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_call_target_0
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_body_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_0 = {
	"body_defined_here",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_body_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_body_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_1 = {
	"body_external",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_body_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_body_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_0

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_body_0_1[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_1

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_body_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_body_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_body_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_body_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_0,
	&mercury_data_erl_backend__elds__du_functor_desc_elds_body_0_1
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_body_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_body_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_body_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_body_0_0)),
	"erl_backend.elds",
	"elds_body",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_body_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_body_0 },
	2,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_body_0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
	"mul",
	0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
	"float_div",
	1
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
	"int_div",
	2
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
	"rem",
	3
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
	"band",
	4
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
	"add",
	5
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
	"sub",
	6
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
	"bor",
	7
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
	"bxor",
	8
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
	"bsl",
	9
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
	"bsr",
	10
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
	"=<",
	11
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
	"<",
	12
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
	">=",
	13
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
	">",
	14
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
	"=:=",
	15
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
	"=/=",
	16
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
	"andalso",
	17
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
	"orelse",
	18
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds__enum_value_ordered_elds_binop_0[] = {
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_0,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_1,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_2,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_3,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_4,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_5,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_6,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_7,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_8,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_9,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_10,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_11,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_12,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_13,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_14,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_15,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_16,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_17,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_18
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds__enum_name_ordered_elds_binop_0[] = {
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_12,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_16,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_15,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_11,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_14,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_13,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_5,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_17,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_4,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_7,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_9,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_10,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_8,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_1,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_2,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_0,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_18,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_3,
	&mercury_data_erl_backend__elds__enum_functor_desc_elds_binop_0_6
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_binop_0[] = {
	15,
	13,
	14,
	17,
	8,
	6,
	18,
	9,
	12,
	10,
	11,
	3,
	0,
	5,
	4,
	2,
	1,
	7,
	16 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_binop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_binop_0_0)),
	"erl_backend.elds",
	"elds_binop",
	{ (void *)mercury_data_erl_backend__elds__enum_name_ordered_elds_binop_0 },
	{ (void *)mercury_data_erl_backend__elds__enum_value_ordered_elds_binop_0 },
	19,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_binop_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_PseudoTypeInfo mercury_data_erl_backend__elds__field_types_elds_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

const MR_ConstString mercury_data_erl_backend__elds__field_names_elds_0_0[] = {
	"elds_name",
	"elds_foreign_decls",
	"elds_foreign_bodies",
	"elds_funcs",
	"elds_fe_funcs",
	"elds_rtti_funcs",
	"elds_init_preds",
	"elds_final_preds"
};

static const MR_DuFunctorDesc mercury_data_erl_backend__elds__du_functor_desc_elds_0_0 = {
	"elds",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_erl_backend__elds__field_types_elds_0_0,
	mercury_data_erl_backend__elds__field_names_elds_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_stag_ordered_elds_0_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_0_0

};

const MR_DuPtagLayout mercury_data_erl_backend__elds__du_ptag_ordered_elds_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_erl_backend__elds__du_stag_ordered_elds_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_erl_backend__elds__du_name_ordered_elds_0[] = {
	&mercury_data_erl_backend__elds__du_functor_desc_elds_0_0
};

const MR_Integer mercury_data_erl_backend__elds__functor_number_map_elds_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds__elds_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds__elds_0_0)),
	"erl_backend.elds",
	"elds",
	{ (void *)mercury_data_erl_backend__elds__du_name_ordered_elds_0 },
	{ (void *)mercury_data_erl_backend__elds__du_ptag_ordered_elds_0 },
	1,
	4,
	mercury_data_erl_backend__elds__functor_number_map_elds_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__terms_from_vars_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds",
"erl_backend.elds",
"term_from_var",
2,
0
},
"erl_backend.elds",
"elds.m",
394,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_vars_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds",
"erl_backend.elds",
"expr_from_var",
2,
0
},
"erl_backend.elds",
"elds.m",
397,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__terms_from_fixed_vars_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds",
"erl_backend.elds",
"lambda_elds_m_400",
2,
0
},
"erl_backend.elds",
"elds.m",
400,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds__exprs_from_fixed_vars_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds",
"erl_backend.elds",
"lambda_elds_m_402",
2,
0
},
"erl_backend.elds",
"elds.m",
402,
"d1;c3;"
};


MR_BEGIN_MODULE(erl_backend__elds_module0)
	MR_init_entry1(fn__erl_backend__elds__elds_true_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_true_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module1)
	MR_init_entry1(fn__erl_backend__elds__elds_false_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_false_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module2)
	MR_init_entry1(fn__erl_backend__elds__elds_fail_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_fail_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module3)
	MR_init_entry1(fn__erl_backend__elds__elds_throw_atom_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_throw_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module4)
	MR_init_entry1(fn__erl_backend__elds__elds_empty_tuple_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_empty_tuple_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module5)
	MR_init_entry1(fn__erl_backend__elds__elds_commit_marker_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_commit_marker_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module6)
	MR_init_entry1(fn__erl_backend__elds__elds_call_builtin_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_call_builtin_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module7)
	MR_init_entry1(fn__erl_backend__elds__expr_from_var_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__expr_from_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module8)
	MR_init_entry1(fn__erl_backend__elds__elds_call_element_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_call_element_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module9)
	MR_init_entry1(fn__erl_backend__elds__elds_call_self_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_call_self_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module10)
	MR_init_entry1(fn__erl_backend__elds__var_eq_false_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__var_eq_false_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_tfield(2, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module11)
	MR_init_entry1(fn__erl_backend__elds__term_from_var_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__term_from_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(erl_backend__elds_module12)
	MR_init_entry1(fn__erl_backend__elds__terms_from_vars_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__terms_from_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module13)
	MR_init_entry1(fn__erl_backend__elds__exprs_from_vars_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__exprs_from_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(erl_backend__elds_module14)
	MR_init_entry1(fn__erl_backend__elds__terms_from_fixed_vars_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__terms_from_fixed_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module15)
	MR_init_entry1(fn__erl_backend__elds__exprs_from_fixed_vars_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__exprs_from_fixed_vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(erl_backend__elds_module16)
	MR_init_entry1(fn__erl_backend__elds__expr_to_term_1_0);
	MR_init_label1(fn__erl_backend__elds__expr_to_term_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__expr_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__erl_backend__elds__expr_to_term_1_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__erl_backend__elds__expr_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("elds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("unable to convert elds_expr to elds_term", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(erl_backend__elds_module17)
	MR_init_entry1(fn__erl_backend__elds__join_exprs_2_0);
	MR_init_label5(fn__erl_backend__elds__join_exprs_2_0,2,4,5,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__join_exprs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__join_exprs_2_0_i2);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_GOTO_LAB(fn__erl_backend__elds__join_exprs_2_0_i4);
MR_def_label(fn__erl_backend__elds__join_exprs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__erl_backend__elds__join_exprs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__join_exprs_2_0_i5);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__erl_backend__elds__join_exprs_2_0_i8);
MR_def_label(fn__erl_backend__elds__join_exprs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__erl_backend__elds__join_exprs_2_0_i8);
MR_def_label(fn__erl_backend__elds__join_exprs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__join_exprs_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__join_exprs_2_0_i9);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__erl_backend__elds__join_exprs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module18)
	MR_init_entry1(fn__erl_backend__elds__maybe_join_exprs_2_0);
	MR_init_label1(fn__erl_backend__elds__maybe_join_exprs_2_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__maybe_join_exprs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__maybe_join_exprs_2_0_i12);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(fn__erl_backend__elds__join_exprs_2_0);
MR_def_label(fn__erl_backend__elds__maybe_join_exprs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module19)
	MR_init_entry1(fn__erl_backend__elds__maybe_join_exprs1_2_0);
	MR_init_label1(fn__erl_backend__elds__maybe_join_exprs1_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__maybe_join_exprs1_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__maybe_join_exprs1_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__erl_backend__elds__maybe_join_exprs1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__erl_backend__elds__join_exprs_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module20)
	MR_init_entry1(fn__erl_backend__elds__expr_or_void_1_0);
	MR_init_label1(fn__erl_backend__elds__expr_or_void_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__expr_or_void_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__expr_or_void_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_proceed();
MR_def_label(fn__erl_backend__elds__expr_or_void_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module21)
	MR_init_entry1(fn__erl_backend__elds__det_expr_1_0);
	MR_init_label1(fn__erl_backend__elds__det_expr_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__det_expr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__det_expr_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("elds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("det_expr: no expression", 23);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__erl_backend__elds__det_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module22)
	MR_init_entry1(fn__erl_backend__elds__elds_clause_arity_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_clause_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__list__length_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module23)
	MR_init_entry1(fn__erl_backend__elds__elds_body_arity_1_0);
	MR_init_label1(fn__erl_backend__elds__elds_body_arity_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__elds_body_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__erl_backend__elds__elds_body_arity_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 0);
	MR_np_tailcall_ent(fn__list__length_1_0);
	}
MR_def_label(fn__erl_backend__elds__elds_body_arity_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module24)
	MR_init_entry1(fn__erl_backend__elds__make_enum_alternative_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__erl_backend__elds__make_enum_alternative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module25)
	MR_init_entry1(__Unify___erl_backend__elds__elds_0_0);
	MR_init_label8(__Unify___erl_backend__elds__elds_0_0,4,6,8,10,12,14,16,20)
	MR_init_label1(__Unify___erl_backend__elds__elds_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i20);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___erl_backend__elds__elds_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i6);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i8);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i10);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_foreign_export_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i12);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i14);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_0_0_i16);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module26)
	MR_init_entry1(__Compare___erl_backend__elds__elds_0_0);
	MR_init_label8(__Compare___erl_backend__elds__elds_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___erl_backend__elds__elds_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___erl_backend__elds__elds_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i9);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i13);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i17);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_foreign_export_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i21);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i25);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_0_0_i29);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module27)
	MR_init_entry1(__Unify___erl_backend__elds__elds_binop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_binop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(erl_backend__elds_module28)
	MR_init_entry1(__Compare___erl_backend__elds__elds_binop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_binop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module29)
	MR_init_entry1(__Unify___erl_backend__elds__elds_body_0_0);
	MR_init_label3(__Unify___erl_backend__elds__elds_body_0_0,14,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_body_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_body_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_body_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_body_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_clause_0_0);
	}
MR_def_label(__Unify___erl_backend__elds__elds_body_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_body_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_body_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_body_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module30)
	MR_init_entry1(__Compare___erl_backend__elds__elds_body_0_0);
	MR_init_label5(__Compare___erl_backend__elds__elds_body_0_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_body_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_body_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_body_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_body_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_body_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_body_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_body_0_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_body_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_body_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_body_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_body_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);

MR_BEGIN_MODULE(erl_backend__elds_module31)
	MR_init_entry1(__Unify___erl_backend__elds__elds_call_target_0_0);
	MR_init_label4(__Unify___erl_backend__elds__elds_call_target_0_0,10,6,24,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_call_target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
	}
MR_def_label(__Unify___erl_backend__elds__elds_call_target_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_call_target_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_call_target_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_call_target_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_call_target_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(erl_backend__elds_module32)
	MR_init_entry1(__Compare___erl_backend__elds__elds_call_target_0_0);
	MR_init_label8(__Compare___erl_backend__elds__elds_call_target_0_0,3,2,12,16,6,32,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_call_target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i11);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
	}
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i32);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_call_target_0_0_i11);
	}
	}
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_call_target_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_expr_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module33)
	MR_init_entry1(__Unify___erl_backend__elds__elds_case_0_0);
	MR_init_label3(__Unify___erl_backend__elds__elds_case_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_case_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		__Unify___erl_backend__elds__elds_case_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_case_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_case_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_case_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_case_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module34)
	MR_init_entry1(__Compare___erl_backend__elds__elds_case_0_0);
	MR_init_label4(__Compare___erl_backend__elds__elds_case_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_case_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_case_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_case_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_case_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_case_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_term_0_0,
		__Compare___erl_backend__elds__elds_case_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_case_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_case_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_case_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module35)
	MR_init_entry1(__Unify___erl_backend__elds__elds_catch_0_0);
	MR_init_label4(__Unify___erl_backend__elds__elds_catch_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_catch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_catch_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		__Unify___erl_backend__elds__elds_catch_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_catch_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_catch_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_term_0_0,
		__Unify___erl_backend__elds__elds_catch_0_0_i6);
MR_def_label(__Unify___erl_backend__elds__elds_catch_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_catch_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_catch_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_catch_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module36)
	MR_init_entry1(__Compare___erl_backend__elds__elds_catch_0_0);
	MR_init_label5(__Compare___erl_backend__elds__elds_catch_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_catch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_catch_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_catch_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_catch_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_catch_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_term_0_0,
		__Compare___erl_backend__elds__elds_catch_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_catch_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_catch_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_term_0_0,
		__Compare___erl_backend__elds__elds_catch_0_0_i9);
MR_def_label(__Compare___erl_backend__elds__elds_catch_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_catch_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_catch_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module37)
	MR_init_entry1(__Unify___erl_backend__elds__elds_clause_0_0);
	MR_init_label3(__Unify___erl_backend__elds__elds_clause_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_clause_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_clause_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_clause_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_clause_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_clause_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_clause_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_clause_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module38)
	MR_init_entry1(__Compare___erl_backend__elds__elds_clause_0_0);
	MR_init_label4(__Compare___erl_backend__elds__elds_clause_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_clause_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_clause_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_clause_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_clause_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_clause_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_clause_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_clause_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_clause_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_expr_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_clause_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module39)
	MR_init_entry1(__Unify___erl_backend__elds__elds_defn_0_0);
	MR_init_label5(__Unify___erl_backend__elds__elds_defn_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_defn_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___erl_backend__elds__elds_defn_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___erl_backend__elds__elds_defn_0_0_i6);
MR_def_label(__Unify___erl_backend__elds__elds_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_defn_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_body_0_0,
		__Unify___erl_backend__elds__elds_defn_0_0_i8);
MR_def_label(__Unify___erl_backend__elds__elds_defn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_defn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module40)
	MR_init_entry1(__Compare___erl_backend__elds__elds_defn_0_0);
	MR_init_label6(__Compare___erl_backend__elds__elds_defn_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_defn_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_defn_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___erl_backend__elds__elds_defn_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_defn_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___erl_backend__elds__elds_defn_0_0_i9);
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_defn_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_body_0_0,
		__Compare___erl_backend__elds__elds_defn_0_0_i13);
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_defn_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_defn_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module41)
	MR_init_entry1(__Unify___erl_backend__elds__elds_expr_0_0);
	MR_init_label8(__Unify___erl_backend__elds__elds_expr_0_0,187,6,10,14,16,20,21,25)
	MR_init_label8(__Unify___erl_backend__elds__elds_expr_0_0,27,31,33,37,41,45,47,51)
	MR_init_label8(__Unify___erl_backend__elds__elds_expr_0_0,53,55,59,63,65,67,71,113)
	MR_init_label1(__Unify___erl_backend__elds__elds_expr_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i113);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i20));
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_term_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_localcall_lab(__Unify___erl_backend__elds__elds_expr_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i16);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i187);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i37) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i41) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i51) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i59) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i63) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_expr_0_0_i71));
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i187);
	}
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(__Unify___erl_backend__elds__elds_expr_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i27);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i187);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_call_target_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i33);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_rtti_id_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_localcall_lab(__Unify___erl_backend__elds__elds_expr_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i47);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_localcall_lab(__Unify___erl_backend__elds__elds_expr_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i53);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i55);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_catch_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i187);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_localcall_lab(__Unify___erl_backend__elds__elds_expr_0_0,
		__Unify___erl_backend__elds__elds_expr_0_0_i67);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i187);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_expr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___erl_backend__elds__elds_expr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module42)
	MR_init_entry1(__Index___erl_backend__elds__elds_expr_0_0);
	MR_init_label8(__Index___erl_backend__elds__elds_expr_0_0,4,5,6,7,8,9,10,11)
	MR_init_label7(__Index___erl_backend__elds__elds_expr_0_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___erl_backend__elds__elds_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i7));
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___erl_backend__elds__elds_expr_0_0_i18));
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___erl_backend__elds__elds_expr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(erl_backend__elds_module43)
	MR_init_entry1(__Compare___erl_backend__elds__elds_expr_0_0);
	MR_init_label8(__Compare___erl_backend__elds__elds_expr_0_0,209,3,2,4,5,6,7,11)
	MR_init_label8(__Compare___erl_backend__elds__elds_expr_0_0,14,17,20,25,26,29,34,37)
	MR_init_label8(__Compare___erl_backend__elds__elds_expr_0_0,41,47,50,55,58,61,64,69)
	MR_init_label8(__Compare___erl_backend__elds__elds_expr_0_0,72,76,82,85,88,91,96,227)
	MR_init_label1(__Compare___erl_backend__elds__elds_expr_0_0,228)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i4);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i11) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i14) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i25));
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_term_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr5, 0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_localcall_lab(__Compare___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i20);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i209);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i34) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i61) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i69) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_expr_0_0_i96));
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i29);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i209);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i37);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(__Compare___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i41);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i209);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_call_target_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i50);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_rtti_id_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_localcall_lab(__Compare___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i64);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_localcall_lab(__Compare___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i72);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i76);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_catch_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i209);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr5, 1);
	MR_r2 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_localcall_lab(__Compare___erl_backend__elds__elds_expr_0_0,
		__Compare___erl_backend__elds__elds_expr_0_0_i91);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i228);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i209);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_expr_0_0_i227);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_expr_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module44)
	MR_init_entry1(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0);
	MR_init_label3(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_foreign_export_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___erl_backend__elds__elds_foreign_export_defn_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_foreign_export_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module45)
	MR_init_entry1(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0);
	MR_init_label5(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_foreign_export_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i9);
MR_def_label(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_foreign_export_defn_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module46)
	MR_init_entry1(__Unify___erl_backend__elds__elds_rtti_defn_0_0);
	MR_init_label4(__Unify___erl_backend__elds__elds_rtti_defn_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_rtti_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_defn_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_rtti_id_0_0,
		__Unify___erl_backend__elds__elds_rtti_defn_0_0_i4);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_defn_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___erl_backend__elds__elds_rtti_defn_0_0_i6);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_defn_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_rtti_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module47)
	MR_init_entry1(__Compare___erl_backend__elds__elds_rtti_defn_0_0);
	MR_init_label6(__Compare___erl_backend__elds__elds_rtti_defn_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_rtti_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_defn_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_defn_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___erl_backend__elds__elds_rtti_id_0_0,
		__Compare___erl_backend__elds__elds_rtti_defn_0_0_i5);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_defn_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___erl_backend__elds__elds_rtti_defn_0_0_i9);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_defn_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___erl_backend__elds__elds_rtti_defn_0_0_i13);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_defn_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___erl_backend__elds__elds_clause_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_defn_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___backend_libs__rtti__rtti_type_ctor_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__rtti_type_info_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__rtti_pseudo_type_info_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__tc_name_0_0);

MR_BEGIN_MODULE(erl_backend__elds_module48)
	MR_init_entry1(__Unify___erl_backend__elds__elds_rtti_id_0_0);
	MR_init_label8(__Unify___erl_backend__elds__elds_rtti_id_0_0,6,10,14,18,20,22,35,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_rtti_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i35);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_rtti_id_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_rtti_id_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_rtti_id_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_rtti_id_0_0_i18));
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_type_ctor_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_type_info_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_pseudo_type_info_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 0);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__rtti__tc_name_0_0,
		__Unify___erl_backend__elds__elds_rtti_id_0_0_i20);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___erl_backend__elds__elds_rtti_id_0_0_i22);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_rtti_id_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)MR_sv(4)) == 0);
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_rtti_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___backend_libs__rtti__rtti_type_ctor_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__rtti_type_info_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__rtti_pseudo_type_info_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__tc_name_0_0);

MR_BEGIN_MODULE(erl_backend__elds_module49)
	MR_init_entry1(__Compare___erl_backend__elds__elds_rtti_id_0_0);
	MR_init_label8(__Compare___erl_backend__elds__elds_rtti_id_0_0,3,2,6,14,18,22,27,29)
	MR_init_label6(__Compare___erl_backend__elds__elds_rtti_id_0_0,30,35,36,38,42,78)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_rtti_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i2);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i14) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i30));
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i29);
	}
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_type_ctor_0_0);
	}
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i29) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i29));
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_type_info_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_rtti_id_0_0_i29));
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_pseudo_type_info_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i36);
	}
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 0);
	MR_r2 = MR_ctfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__rtti__tc_name_0_0,
		__Compare___erl_backend__elds__elds_rtti_id_0_0_i38);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i78);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___erl_backend__elds__elds_rtti_id_0_0_i42);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_rtti_id_0_0_i78);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___erl_backend__elds__elds_rtti_id_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module50)
	MR_init_entry1(__Unify___erl_backend__elds__elds_term_0_0);
	MR_init_label8(__Unify___erl_backend__elds__elds_term_0_0,6,7,9,11,12,14,16,18)
	MR_init_label5(__Unify___erl_backend__elds__elds_term_0_0,22,26,30,52,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i52);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i11));
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr2 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i14) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i22) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i26) MR_AND
		MR_LABEL_AP(__Unify___erl_backend__elds__elds_term_0_0_i30));
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_tempr2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___erl_backend__elds__elds_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___erl_backend__elds__elds_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(erl_backend__elds_module51)
	MR_init_entry1(__Compare___erl_backend__elds__elds_term_0_0);
	MR_init_label8(__Compare___erl_backend__elds__elds_term_0_0,6,9,12,20,35,40,50,51)
	MR_init_label8(__Compare___erl_backend__elds__elds_term_0_0,57,66,72,81,87,96,102,106)
	MR_init_label8(__Compare___erl_backend__elds__elds_term_0_0,111,117,122,126,132,138,140,141)
	MR_init_label2(__Compare___erl_backend__elds__elds_term_0_0,153,154)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i50));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i12));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),6)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i140);
	}
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i153);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r3),1)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i40);
	}
	MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i140);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i40) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r2, 0);
	MR_r2 = MR_const_mask_field(MR_r3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i96) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i111) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i126) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i141));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i57));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i140);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i72));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i154) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i87));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i154) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i102));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i106) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i117));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i122) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i132));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i138) MR_AND
		MR_LABEL_AP(__Compare___erl_backend__elds__elds_term_0_0_i140));
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i153);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_tempr1, 0),6)) {
		MR_GOTO_LAB(__Compare___erl_backend__elds__elds_term_0_0_i154);
	}
	}
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___erl_backend__elds__elds_term_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module52)
	MR_init_entry1(__Unify___erl_backend__elds__elds_unop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___erl_backend__elds__elds_unop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module53)
	MR_init_entry1(__Compare___erl_backend__elds__elds_unop_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___erl_backend__elds__elds_unop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module54)
	MR_init_entry1(fn__erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__400__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__400__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_module55)
	MR_init_entry1(fn__erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__402__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__402__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__erl_backend__elds_maybe_bunch_0(void)
{
	erl_backend__elds_module0();
	erl_backend__elds_module1();
	erl_backend__elds_module2();
	erl_backend__elds_module3();
	erl_backend__elds_module4();
	erl_backend__elds_module5();
	erl_backend__elds_module6();
	erl_backend__elds_module7();
	erl_backend__elds_module8();
	erl_backend__elds_module9();
	erl_backend__elds_module10();
	erl_backend__elds_module11();
	erl_backend__elds_module12();
	erl_backend__elds_module13();
	erl_backend__elds_module14();
	erl_backend__elds_module15();
	erl_backend__elds_module16();
	erl_backend__elds_module17();
	erl_backend__elds_module18();
	erl_backend__elds_module19();
	erl_backend__elds_module20();
	erl_backend__elds_module21();
	erl_backend__elds_module22();
	erl_backend__elds_module23();
	erl_backend__elds_module24();
	erl_backend__elds_module25();
	erl_backend__elds_module26();
	erl_backend__elds_module27();
	erl_backend__elds_module28();
	erl_backend__elds_module29();
	erl_backend__elds_module30();
	erl_backend__elds_module31();
	erl_backend__elds_module32();
	erl_backend__elds_module33();
	erl_backend__elds_module34();
	erl_backend__elds_module35();
	erl_backend__elds_module36();
	erl_backend__elds_module37();
	erl_backend__elds_module38();
	erl_backend__elds_module39();
}

static void mercury__erl_backend__elds_maybe_bunch_1(void)
{
	erl_backend__elds_module40();
	erl_backend__elds_module41();
	erl_backend__elds_module42();
	erl_backend__elds_module43();
	erl_backend__elds_module44();
	erl_backend__elds_module45();
	erl_backend__elds_module46();
	erl_backend__elds_module47();
	erl_backend__elds_module48();
	erl_backend__elds_module49();
	erl_backend__elds_module50();
	erl_backend__elds_module51();
	erl_backend__elds_module52();
	erl_backend__elds_module53();
	erl_backend__elds_module54();
	erl_backend__elds_module55();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__erl_backend__elds__init(void);
void mercury__erl_backend__elds__init_type_tables(void);
void mercury__erl_backend__elds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erl_backend__elds__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erl_backend__elds__init_complexity_procs(void);
#endif

void mercury__erl_backend__elds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erl_backend__elds_maybe_bunch_0();
	mercury__erl_backend__elds_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0,
		erl_backend__elds__elds_unop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_term_0,
		erl_backend__elds__elds_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0,
		erl_backend__elds__elds_rtti_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
		erl_backend__elds__elds_rtti_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
		erl_backend__elds__elds_foreign_export_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0,
		erl_backend__elds__elds_expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0,
		erl_backend__elds__elds_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0,
		erl_backend__elds__elds_clause_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0,
		erl_backend__elds__elds_catch_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_case_0,
		erl_backend__elds__elds_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0,
		erl_backend__elds__elds_call_target_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_body_0,
		erl_backend__elds__elds_body_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0,
		erl_backend__elds__elds_binop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds__type_ctor_info_elds_0,
		erl_backend__elds__elds_0_0);
	mercury__erl_backend__elds__init_debugger();
}

void mercury__erl_backend__elds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_unop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_clause_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_catch_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_call_target_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_body_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_binop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds__type_ctor_info_elds_0);
	}
}


void mercury__erl_backend__elds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erl_backend__elds__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erl_backend__elds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
