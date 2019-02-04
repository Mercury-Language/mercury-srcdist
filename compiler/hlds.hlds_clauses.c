/*
** Automatically generated from `hlds_clauses.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hlds_clauses__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "hlds.hlds_clauses.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 31 "hlds.hlds_clauses.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 35 "hlds.hlds_clauses.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "hlds.hlds_clauses.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "hlds.hlds_clauses.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "hlds.hlds_clauses.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "hlds.hlds_clauses.c"
#line 52 "hlds.hlds_clauses.c"
#include "hlds.hlds_clauses.mh"

#line 55 "hlds.hlds_clauses.c"
#line 56 "hlds.hlds_clauses.c"
#ifndef HLDS__HLDS_CLAUSES_DECL_GUARD
#define HLDS__HLDS_CLAUSES_DECL_GUARD

#line 60 "hlds.hlds_clauses.c"
#line 61 "hlds.hlds_clauses.c"

#endif
#line 64 "hlds.hlds_clauses.c"

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
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
	mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0,
	mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_label2(hlds__hlds_clauses__add_clause_3_0, 16,5)
MR_decl_label3(hlds__hlds_clauses__clauses_info_clauses_3_0, 6,5,4)
MR_decl_label2(hlds__hlds_clauses__clauses_info_clauses_only_2_0, 5,4)
MR_decl_label7(hlds__hlds_clauses__clauses_info_init_3_0, 2,3,4,5,6,7,8)
MR_decl_label6(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0, 2,3,4,5,6,7)
MR_decl_label1(hlds__hlds_clauses__clauses_info_set_clauses_3_0, 2)
MR_decl_label2(hlds__hlds_clauses__get_clause_list_2_0, 5,4)
MR_decl_label2(hlds__hlds_clauses__get_clause_list_any_order_2_0, 7,5)
MR_decl_label1(hlds__hlds_clauses__set_clause_list_2_0, 2)
MR_decl_label1(fn__hlds__hlds_clauses__clause_list_is_empty_1_0, 7)
MR_decl_label5(__Unify___hlds__hlds_clauses__clause_0_0, 4,6,8,12,1)
MR_decl_label8(__Unify___hlds__hlds_clauses__clauses_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label1(__Unify___hlds__hlds_clauses__clauses_info_0_0, 1)
MR_decl_label5(__Unify___hlds__hlds_clauses__clauses_rep_0_0, 10,12,6,32,1)
MR_decl_label6(__Compare___hlds__hlds_clauses__clause_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___hlds__hlds_clauses__clauses_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___hlds__hlds_clauses__clauses_info_0_0, 29,69)
MR_decl_label8(__Compare___hlds__hlds_clauses__clauses_rep_0_0, 3,2,38,17,21,23,27,6)
MR_decl_label5(__Compare___hlds__hlds_clauses__clauses_rep_0_0, 55,16,9,11,102)
MR_def_extern_entry(hlds__hlds_clauses__set_clause_list_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_init_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0)
MR_def_extern_entry(fn__hlds__hlds_clauses__init_clauses_rep_0_0)
MR_def_extern_entry(fn__hlds__hlds_clauses__clause_list_is_empty_1_0)
MR_def_extern_entry(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0)
MR_def_extern_entry(hlds__hlds_clauses__add_clause_3_0)
MR_def_extern_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0)
MR_def_extern_entry(hlds__hlds_clauses__get_clause_list_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_clauses_only_2_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_clauses_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_headvars_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_clauses_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0)
MR_def_extern_entry(hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_0)
MR_def_extern_entry(__Unify___hlds__hlds_clauses__clause_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_clauses__clause_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_clauses__clauses_info_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_clauses__clauses_info_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_clauses__clauses_rep_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_clauses__clauses_rep_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

const MR_ConstString mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_0[] = {
	"rev_num",
	"rev_list"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0 = {
	"rev",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_0,
	mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

const MR_ConstString mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_1[] = {
	"forw_num",
	"forw_list"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1 = {
	"forw",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_1,
	mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_clauses__type_ctor_info_clause_0
};

const MR_ConstString mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_2[] = {
	"both_num",
	"both_rev",
	"both_forw"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2 = {
	"both",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_clauses__field_types_clauses_rep_0_2,
	mercury_data_hlds__hlds_clauses__field_names_clauses_rep_0_2,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_1[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_2[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2

};

const MR_DuPtagLayout mercury_data_hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_rep_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_name_ordered_clauses_rep_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_2,
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_1,
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_rep_0_0
};

const MR_Integer mercury_data_hlds__hlds_clauses__functor_number_map_clauses_rep_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_clauses__clauses_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_clauses__clauses_rep_0_0)),
	"hlds.hlds_clauses",
	"clauses_rep",
	{ (void *)mercury_data_hlds__hlds_clauses__du_name_ordered_clauses_rep_0 },
	{ (void *)mercury_data_hlds__hlds_clauses__du_ptag_ordered_clauses_rep_0 },
	3,
	4,
	mercury_data_hlds__hlds_clauses__functor_number_map_clauses_rep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_clauses__field_types_clauses_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_args__ti_proc_arg_vector_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_hlds__hlds_clauses__field_names_clauses_info_0_0[] = {
	"clauses_varset",
	"clauses_explicit_vartypes",
	"clauses_tvar_name_map",
	"clauses_vartypes",
	"clauses_headvars",
	"clauses_rep",
	"clauses_rtti_varmaps",
	"have_foreign_clauses"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_info_0_0 = {
	"clauses_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_clauses__field_types_clauses_info_0_0,
	mercury_data_hlds__hlds_clauses__field_names_clauses_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_clauses__du_ptag_ordered_clauses_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_clauses__du_stag_ordered_clauses_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_name_ordered_clauses_info_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clauses_info_0_0
};

const MR_Integer mercury_data_hlds__hlds_clauses__functor_number_map_clauses_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_clauses__clauses_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_clauses__clauses_info_0_0)),
	"hlds.hlds_clauses",
	"clauses_info",
	{ (void *)mercury_data_hlds__hlds_clauses__du_name_ordered_clauses_info_0 },
	{ (void *)mercury_data_hlds__hlds_clauses__du_ptag_ordered_clauses_info_0 },
	1,
	4,
	mercury_data_hlds__hlds_clauses__functor_number_map_clauses_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_implementation_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_implementation_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_clauses__field_types_clause_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_implementation_language_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_hlds__hlds_clauses__field_names_clause_0_0[] = {
	"applicable_procs",
	"clause_body",
	"clause_lang",
	"clause_context"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_clauses__du_functor_desc_clause_0_0 = {
	"clause",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_clauses__field_types_clause_0_0,
	mercury_data_hlds__hlds_clauses__field_names_clause_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_stag_ordered_clause_0_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clause_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_clauses__du_ptag_ordered_clause_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_clauses__du_stag_ordered_clause_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_clauses__du_name_ordered_clause_0[] = {
	&mercury_data_hlds__hlds_clauses__du_functor_desc_clause_0_0
};

const MR_Integer mercury_data_hlds__hlds_clauses__functor_number_map_clause_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_clauses__clause_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_clauses__clause_0_0)),
	"hlds.hlds_clauses",
	"clause",
	{ (void *)mercury_data_hlds__hlds_clauses__du_name_ordered_clause_0 },
	{ (void *)mercury_data_hlds__hlds_clauses__du_ptag_ordered_clause_0 },
	1,
	4,
	mercury_data_hlds__hlds_clauses__functor_number_map_clause_0
};

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module0)
	MR_init_entry1(hlds__hlds_clauses__set_clause_list_2_0);
	MR_init_label1(hlds__hlds_clauses__set_clause_list_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__set_clause_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_clauses__set_clause_list_2_0_i2);
MR_def_label(hlds__hlds_clauses__set_clause_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__prog_util__make_n_fresh_vars_5_0);
MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_init_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module1)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_init_3_0);
	MR_init_label7(hlds__hlds_clauses__clauses_info_init_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i2);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i3);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i4);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__make_n_fresh_vars_5_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i5);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_init_2_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i6);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i7);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_clauses__clauses_info_init_3_0_i8);
MR_def_label(hlds__hlds_clauses__clauses_info_init_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_tfield(0, MR_r1, 4) = MR_sv(2);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_sv(5);
	MR_tfield(0, MR_r1, 7) = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module2)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0);
	MR_init_label6(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_init_for_assertion_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i2);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i3);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i4);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_init_2_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i5);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i6);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_init_1_0,
		hlds__hlds_clauses__clauses_info_init_for_assertion_2_0_i7);
MR_def_label(hlds__hlds_clauses__clauses_info_init_for_assertion_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module3)
	MR_init_entry1(fn__hlds__hlds_clauses__init_clauses_rep_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_clauses__init_clauses_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module4)
	MR_init_entry1(fn__hlds__hlds_clauses__clause_list_is_empty_1_0);
	MR_init_label1(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_clauses__clause_list_is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_clauses__clause_list_is_empty_1_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__hlds__hlds_clauses__clause_list_is_empty_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module5)
	MR_init_entry1(fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_clauses__num_clauses_in_clauses_rep_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module6)
	MR_init_entry1(hlds__hlds_clauses__add_clause_3_0);
	MR_init_label2(hlds__hlds_clauses__add_clause_3_0,16,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__add_clause_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_clauses__add_clause_3_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_const_mask_field(MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_const_mask_field(MR_tempr2, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(hlds__hlds_clauses__add_clause_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Integer) MR_ctfield(1, MR_r2, 0) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__hlds_clauses__add_clause_3_0_i5);
MR_def_label(hlds__hlds_clauses__add_clause_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module7)
	MR_init_entry1(hlds__hlds_clauses__get_clause_list_any_order_2_0);
	MR_init_label2(hlds__hlds_clauses__get_clause_list_any_order_2_0,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__get_clause_list_any_order_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_clauses__get_clause_list_any_order_2_0_i7);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_clauses__get_clause_list_any_order_2_0_i5);
	}
MR_def_label(hlds__hlds_clauses__get_clause_list_any_order_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_proceed();
MR_def_label(hlds__hlds_clauses__get_clause_list_any_order_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module8)
	MR_init_entry1(hlds__hlds_clauses__get_clause_list_2_0);
	MR_init_label2(hlds__hlds_clauses__get_clause_list_2_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__get_clause_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_clauses__get_clause_list_2_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_clauses__get_clause_list_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
MR_def_label(hlds__hlds_clauses__get_clause_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 2);
	MR_proceed();
MR_def_label(hlds__hlds_clauses__get_clause_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module9)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module10)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module11)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module12)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module13)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_headvars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module14)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_np_tailcall_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module15)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_get_clauses_rep_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_get_clauses_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module16)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_clauses_only_2_0);
	MR_init_label2(hlds__hlds_clauses__clauses_info_clauses_only_2_0,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_clauses_only_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_clauses__clauses_info_clauses_only_2_0_i4);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_clauses__clauses_info_clauses_only_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
MR_def_label(hlds__hlds_clauses__clauses_info_clauses_only_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 2);
	MR_proceed();
MR_def_label(hlds__hlds_clauses__clauses_info_clauses_only_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module17)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_clauses_3_0);
	MR_init_label3(hlds__hlds_clauses__clauses_info_clauses_3_0,6,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_clauses_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_clauses__clauses_info_clauses_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_clauses__clauses_info_clauses_3_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__hlds_clauses__clauses_info_clauses_3_0_i6);
MR_def_label(hlds__hlds_clauses__clauses_info_clauses_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 8);
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__hlds_clauses__clauses_info_clauses_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r3, 2);
	MR_proceed();
MR_def_label(hlds__hlds_clauses__clauses_info_clauses_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module18)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_headvars_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_headvars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module19)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_clauses_3_0);
	MR_init_label1(hlds__hlds_clauses__clauses_info_set_clauses_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_clauses_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_clauses__clauses_info_set_clauses_3_0_i2);
MR_def_label(hlds__hlds_clauses__clauses_info_set_clauses_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module20)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_clauses_rep_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_clauses_rep_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module21)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_varset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module22)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module23)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module24)
	MR_init_entry1(hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_clauses__clauses_info_set_rtti_varmaps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__implementation_language_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module25)
	MR_init_entry1(__Unify___hlds__hlds_clauses__clause_0_0);
	MR_init_label5(__Unify___hlds__hlds_clauses__clause_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_clauses__clause_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clause_0_0_i12);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_clauses__clause_0_0_i4);
MR_def_label(__Unify___hlds__hlds_clauses__clause_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clause_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___hlds__hlds_clauses__clause_0_0_i6);
MR_def_label(__Unify___hlds__hlds_clauses__clause_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clause_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__implementation_language_0_0,
		__Unify___hlds__hlds_clauses__clause_0_0_i8);
MR_def_label(__Unify___hlds__hlds_clauses__clause_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clause_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___hlds__hlds_clauses__clause_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_clauses__clause_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__implementation_language_0_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module26)
	MR_init_entry1(__Compare___hlds__hlds_clauses__clause_0_0);
	MR_init_label6(__Compare___hlds__hlds_clauses__clause_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_clauses__clause_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clause_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clause_0_0_i2);
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_clauses__clause_0_0_i5);
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clause_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___hlds__hlds_clauses__clause_0_0_i9);
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clause_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__implementation_language_0_0,
		__Compare___hlds__hlds_clauses__clause_0_0_i13);
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clause_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___hlds__hlds_clauses__clause_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_args__proc_arg_vector_1_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module27)
	MR_init_entry1(__Unify___hlds__hlds_clauses__clauses_info_0_0);
	MR_init_label8(__Unify___hlds__hlds_clauses__clauses_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label1(__Unify___hlds__hlds_clauses__clauses_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_clauses__clauses_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i18);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i4);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i6);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i8);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i10);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___hlds__hlds_args__proc_arg_vector_1_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i12);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___hlds__hlds_clauses__clauses_rep_0_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i14);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___hlds__hlds_clauses__clauses_info_0_0_i16);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_clauses__clauses_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_args__proc_arg_vector_1_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_clauses_module28)
	MR_init_entry1(__Compare___hlds__hlds_clauses__clauses_info_0_0);
	MR_init_label8(__Compare___hlds__hlds_clauses__clauses_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___hlds__hlds_clauses__clauses_info_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_clauses__clauses_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i2);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i5);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i9);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i13);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i17);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___hlds__hlds_args__proc_arg_vector_1_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i21);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___hlds__hlds_clauses__clauses_rep_0_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i25);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___hlds__hlds_clauses__clauses_info_0_0_i29);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_info_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module29)
	MR_init_entry1(__Unify___hlds__hlds_clauses__clauses_rep_0_0);
	MR_init_label5(__Unify___hlds__hlds_clauses__clauses_rep_0_0,10,12,6,32,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_clauses__clauses_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i32);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___hlds__hlds_clauses__clauses_rep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr1 = MR_tempr4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr3, 1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_clauses__clauses_rep_0_0_i12);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_rep_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__hlds_clauses__clauses_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_clauses__clauses_rep_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r3 = MR_ctfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___hlds__hlds_clauses__clauses_rep_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_clauses__clauses_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_clauses_module30)
	MR_init_entry1(__Compare___hlds__hlds_clauses__clauses_rep_0_0);
	MR_init_label8(__Compare___hlds__hlds_clauses__clauses_rep_0_0,3,2,38,17,21,23,27,6)
	MR_init_label5(__Compare___hlds__hlds_clauses__clauses_rep_0_0,55,16,9,11,102)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_clauses__clauses_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i2);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i17);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i16);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i16);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_clauses__clauses_rep_0_0_i38);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i102);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i55);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_clauses__clauses_rep_0_0_i23);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i102);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_clauses__clauses_rep_0_0_i27);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i102);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i16);
	}
	}
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_clauses__clauses_rep_0_0_i11);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_clauses__clauses_rep_0_0_i102);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__hlds_clauses__clauses_rep_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_clauses_maybe_bunch_0(void)
{
	hlds__hlds_clauses_module0();
	hlds__hlds_clauses_module1();
	hlds__hlds_clauses_module2();
	hlds__hlds_clauses_module3();
	hlds__hlds_clauses_module4();
	hlds__hlds_clauses_module5();
	hlds__hlds_clauses_module6();
	hlds__hlds_clauses_module7();
	hlds__hlds_clauses_module8();
	hlds__hlds_clauses_module9();
	hlds__hlds_clauses_module10();
	hlds__hlds_clauses_module11();
	hlds__hlds_clauses_module12();
	hlds__hlds_clauses_module13();
	hlds__hlds_clauses_module14();
	hlds__hlds_clauses_module15();
	hlds__hlds_clauses_module16();
	hlds__hlds_clauses_module17();
	hlds__hlds_clauses_module18();
	hlds__hlds_clauses_module19();
	hlds__hlds_clauses_module20();
	hlds__hlds_clauses_module21();
	hlds__hlds_clauses_module22();
	hlds__hlds_clauses_module23();
	hlds__hlds_clauses_module24();
	hlds__hlds_clauses_module25();
	hlds__hlds_clauses_module26();
	hlds__hlds_clauses_module27();
	hlds__hlds_clauses_module28();
	hlds__hlds_clauses_module29();
	hlds__hlds_clauses_module30();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_clauses__init(void);
void mercury__hlds__hlds_clauses__init_type_tables(void);
void mercury__hlds__hlds_clauses__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_clauses__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_clauses__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_clauses__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_clauses_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0,
		hlds__hlds_clauses__clauses_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0,
		hlds__hlds_clauses__clauses_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0,
		hlds__hlds_clauses__clause_0_0);
	mercury__hlds__hlds_clauses__init_debugger();
}

void mercury__hlds__hlds_clauses__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_clauses__type_ctor_info_clauses_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0);
	}
}


void mercury__hlds__hlds_clauses__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_clauses__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_clauses__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
