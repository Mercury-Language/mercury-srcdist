/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.mark_tail_calls.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "hlds.mark_tail_calls.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "hlds.mark_tail_calls.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "hlds.mark_tail_calls.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.mark_tail_calls.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.mark_tail_calls.c"
#line 49 "hlds.mark_tail_calls.c"
#include "hlds.mark_tail_calls.mh"

#line 52 "hlds.mark_tail_calls.c"
#line 53 "hlds.mark_tail_calls.c"
#ifndef HLDS__MARK_TAIL_CALLS_DECL_GUARD
#define HLDS__MARK_TAIL_CALLS_DECL_GUARD

#line 57 "hlds.mark_tail_calls.c"
#line 58 "hlds.mark_tail_calls.c"

#endif
#line 61 "hlds.mark_tail_calls.c"

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
	MR_Integer f1;
	MR_String f2;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0,
	mercury_data_hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0,
	mercury_data_hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
MR_decl_label8(hlds__mark_tail_calls__find_maybe_output_args_2_5_0, 66,8,11,24,13,15,67,1)
MR_decl_label4(hlds__mark_tail_calls__is_output_arg_rename_4_0, 5,4,8,1)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_6_0, 2,3,4,5,7,8,9,10,11,14)
MR_decl_label5(hlds__mark_tail_calls__mark_tail_calls_6_0, 13,18,19,20,22)
MR_decl_label3(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0, 18,4,6)
MR_decl_label4(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0, 28,5,7,9)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0, 51,3,151,7,8,9,4,13,12,17)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0, 18,16,23,25,28,22,21,32,31,38)
MR_decl_label4(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0, 36,45,43,35)
MR_decl_label3(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0, 17,4,5)
MR_decl_label7(hlds__mark_tail_calls__match_output_args_2_0, 48,3,10,11,21,8,1)
MR_decl_label7(hlds__mark_tail_calls__nontailcall_in_hlds_2_0, 1,2,3,4,5,6,7)
MR_decl_label8(hlds__mark_tail_calls__nontailcall_in_proc_5_0, 1,2,4,8,12,14,15,16)
MR_decl_label2(hlds__mark_tail_calls__report_nontailcall_warning_4_0, 2,5)
MR_decl_label2(hlds__mark_tail_calls__warn_non_tail_calls_3_0, 3,4)
MR_decl_label1(hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0, 3)
MR_decl_label4(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0, 4,6,10,1)
MR_decl_label3(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0, 4,8,1)
MR_decl_label7(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label7(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0, 3,2,5,9,13,17,45)
MR_decl_static(hlds__mark_tail_calls__find_maybe_output_args_2_5_0)
MR_decl_static(hlds__mark_tail_calls__is_output_arg_rename_4_0)
MR_decl_static(hlds__mark_tail_calls__match_output_args_2_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0)
MR_def_extern_entry(hlds__mark_tail_calls__mark_tail_calls_6_0)
MR_def_extern_entry(hlds__mark_tail_calls__warn_non_tail_calls_3_0)
MR_def_extern_entry(hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0)
MR_decl_static(hlds__mark_tail_calls__nontailcall_in_proc_5_0)
MR_decl_static(hlds__mark_tail_calls__nontailcall_in_hlds_2_0)
MR_decl_static(hlds__mark_tail_calls__report_nontailcall_warning_4_0)
MR_decl_static(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)
MR_decl_static(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)
MR_decl_static(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0)
MR_decl_static(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0)
MR_decl_static(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0)
MR_decl_static(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(3,1,1),
MR_TAG_COMMON(1,0,3)
}
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
4,
MR_string_const("warning: recursive call is not tail recursive.", 46)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("In mode number", 14)
},
{
4,
MR_string_const("of", 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning)
}
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0 = {
	"found_tail_calls",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1 = {
	"not_found_tail_calls",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[] = {
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[] = {
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

const MR_Integer mercury_data_hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)),
	"hlds.mark_tail_calls",
	"found_tail_calls",
	{ (void *)mercury_data_hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0 },
	{ (void *)mercury_data_hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0 },
	2,
	4,
	mercury_data_hlds__mark_tail_calls__functor_number_map_found_tail_calls_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0[] = {
	"mtc_feature",
	"mtc_module",
	"mtc_pred_id",
	"mtc_proc_id",
	"mtc_vartypes"
};

static const MR_DuFunctorDesc mercury_data_hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0 = {
	"mark_tail_calls_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__mark_tail_calls__field_types_mark_tail_calls_info_0_0,
	mercury_data_hlds__mark_tail_calls__field_names_mark_tail_calls_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0[] = {
	&mercury_data_hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__mark_tail_calls__du_stag_ordered_mark_tail_calls_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0[] = {
	&mercury_data_hlds__mark_tail_calls__du_functor_desc_mark_tail_calls_info_0_0
};

const MR_Integer mercury_data_hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0)),
	"hlds.mark_tail_calls",
	"mark_tail_calls_info",
	{ (void *)mercury_data_hlds__mark_tail_calls__du_name_ordered_mark_tail_calls_info_0 },
	{ (void *)mercury_data_hlds__mark_tail_calls__du_ptag_ordered_mark_tail_calls_info_0 },
	1,
	4,
	mercury_data_hlds__mark_tail_calls__functor_number_map_mark_tail_calls_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_hlds__mark_tail_calls__field_types_tailcall_warning_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0 = {
	"tailcall_warning",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__mark_tail_calls__field_types_tailcall_warning_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0[] = {
	&mercury_data_hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0

};

const MR_DuPtagLayout mercury_data_hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__mark_tail_calls__du_stag_ordered_tailcall_warning_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0[] = {
	&mercury_data_hlds__mark_tail_calls__du_functor_desc_tailcall_warning_0_0
};

const MR_Integer mercury_data_hlds__mark_tail_calls__functor_number_map_tailcall_warning_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0)),
	"hlds.mark_tail_calls",
	"tailcall_warning",
	{ (void *)mercury_data_hlds__mark_tail_calls__du_name_ordered_tailcall_warning_0 },
	{ (void *)mercury_data_hlds__mark_tail_calls__du_ptag_ordered_tailcall_warning_0 },
	1,
	4,
	mercury_data_hlds__mark_tail_calls__functor_number_map_tailcall_warning_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_2 = {
{
MR_PREDICATE,
"hlds.mark_tail_calls",
"hlds.mark_tail_calls",
"report_nontailcall_warning",
4,
0
},
"hlds.mark_tail_calls",
"mark_tail_calls.m",
357,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_1 = {
{
MR_PREDICATE,
"hlds.mark_tail_calls",
"hlds.mark_tail_calls",
"nontailcall_in_proc",
5,
0
},
"hlds.mark_tail_calls",
"mark_tail_calls.m",
355,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_2 = {
{
MR_PREDICATE,
"hlds.mark_tail_calls",
"hlds.mark_tail_calls",
"report_nontailcall_warning",
4,
0
},
"hlds.mark_tail_calls",
"mark_tail_calls.m",
351,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_tail_calls__warn_non_tail_calls_3_0_1 = {
{
MR_PREDICATE,
"hlds.mark_tail_calls",
"hlds.mark_tail_calls",
"nontailcall_in_hlds",
2,
0
},
"hlds.mark_tail_calls",
"mark_tail_calls.m",
349,
"5"
};


MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module0)
	MR_init_entry1(hlds__mark_tail_calls__find_maybe_output_args_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__find_maybe_output_args_2_5_0);
	MR_init_label8(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,66,8,11,24,13,15,67,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_maybe_output_args_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__find_maybe_output_args_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i66);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i67);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i67);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i8);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i24);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i11);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i13);
	}
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i15);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i15);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module1)
	MR_init_entry1(hlds__mark_tail_calls__is_output_arg_rename_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__is_output_arg_rename_4_0);
	MR_init_label4(hlds__mark_tail_calls__is_output_arg_rename_4_0,5,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_output_arg_rename'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__is_output_arg_rename_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i4);
	}
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(hlds__mark_tail_calls__is_output_arg_rename_4_0,
		hlds__mark_tail_calls__is_output_arg_rename_4_0_i5);
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__mark_tail_calls__is_output_arg_rename_4_0_i8);
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module2)
	MR_init_entry1(hlds__mark_tail_calls__match_output_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__match_output_args_2_0);
	MR_init_label7(hlds__mark_tail_calls__match_output_args_2_0,48,3,10,11,21,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_output_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__match_output_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.match_output_args\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__match_output_args_2_0_i21);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i8);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i48);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		hlds__mark_tail_calls__match_output_args_2_0_i11);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i48);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.match_output_args\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__match_output_args_2_0_i21);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_id_0_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__hlds_pred__var_is_of_dummy_type_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module3)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0);
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,51,3,151,7,8,9,4,13,12,17)
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,18,16,23,25,28,22,21,32,31,38)
	MR_init_label4(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,36,45,43,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (!((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 5))))) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i4);
	}
	MR_r6 = MR_tfield(3, MR_r5, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i151);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	MR_sv(5) = MR_r6;
	MR_sv(10) = MR_r4;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_r5, 2);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i7);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i8);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	MR_r3 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i13);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,6)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i17);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i18);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i21);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 3);
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i23);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i22);
	}
	if ((MR_sv(6) != MR_sv(9))) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__mark_tail_calls__match_output_args_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i25);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i22);
	}
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i22);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i28);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i31);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i32);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i35);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__var_is_of_dummy_type_3_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i38);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__is_output_arg_rename_4_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i45);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0_i43);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/7", 58);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module4)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0);
	MR_init_label3(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_goals'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_6_0,5)
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


MR_BEGIN_MODULE(hlds__mark_tail_calls_module5)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0);
	MR_init_label3(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_cases'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr3;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,
		hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0_i6);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_6_0,6)
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


MR_BEGIN_MODULE(hlds__mark_tail_calls_module6)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0);
	MR_init_label4(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,28,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0_i28);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,
		hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module7)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_6_0,2,3,4,5,7,8,9,10,11,14)
	MR_init_label5(hlds__mark_tail_calls__mark_tail_calls_6_0,13,18,19,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_r5;
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i2);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i3);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i7);
	}
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i10);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i11);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i14);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_tfield(0, MR_r1, 4) = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i19);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i18);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_7_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i19);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i20);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module8)
	MR_init_entry1(hlds__mark_tail_calls__warn_non_tail_calls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__warn_non_tail_calls_3_0);
	MR_init_label2(hlds__mark_tail_calls__warn_non_tail_calls_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_non_tail_calls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__mark_tail_calls__warn_non_tail_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__mark_tail_calls__nontailcall_in_hlds_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__mark_tail_calls__warn_non_tail_calls_3_0_i3);
MR_def_label(hlds__mark_tail_calls__warn_non_tail_calls_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__mark_tail_calls__warn_non_tail_calls_3_0_i4);
MR_def_label(hlds__mark_tail_calls__warn_non_tail_calls_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__mark_tail_calls__report_nontailcall_warning_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module9)
	MR_init_entry1(hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0);
	MR_init_label1(hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_non_tail_calls_in_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__mark_tail_calls__nontailcall_in_proc_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_tfield(0, MR_tempr1, 5) = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__mark_tail_calls, tailcall_warning);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0_i3);
MR_def_label(hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__mark_tail_calls__report_nontailcall_warning_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(hlds__goal_util__goal_contains_goal_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__hlds_goal__goal_has_feature_2_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module10)
	MR_init_entry1(hlds__mark_tail_calls__nontailcall_in_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__nontailcall_in_proc_5_0);
	MR_init_label8(hlds__mark_tail_calls__nontailcall_in_proc_5_0,1,2,4,8,12,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nontailcall_in_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__nontailcall_in_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.mark_tail_calls.nontailcall_in_proc/5-0", 9,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_fv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i1);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__goal_util__goal_contains_goal_2_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i2);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(8) = MR_r1;
	MR_fv(9) = MR_tfield(0, MR_r1, 1);
	MR_fv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_fv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_fv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_fv(7) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_fv(1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i4);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_fv(4) != MR_fv(2))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_NE(MR_fv(6),2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(8);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_has_feature_2_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i8);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i12);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i14);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_fv(5);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i15);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(9);
	MR_fv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__mark_tail_calls__nontailcall_in_proc_5_0_i16);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_proc_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_fv(8);
	MR_tfield(0, MR_r2, 1) = MR_fv(7);
	MR_tfield(0, MR_r2, 2) = MR_fv(9);
	MR_tfield(0, MR_r2, 3) = MR_fv(4);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
MR_decl_entry(hlds__hlds_pred__pred_info_proc_info_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module11)
	MR_init_entry1(hlds__mark_tail_calls__nontailcall_in_hlds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__nontailcall_in_hlds_2_0);
	MR_init_label7(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,1,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nontailcall_in_hlds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__nontailcall_in_hlds_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.mark_tail_calls.nontailcall_in_hlds/2-0", 4,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i1);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i2);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i3);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i4);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i5);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_proc_info_3_0,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i6);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__nontailcall_in_proc_5_0,
		hlds__mark_tail_calls__nontailcall_in_hlds_2_0_i7);
MR_def_label(hlds__mark_tail_calls__nontailcall_in_hlds_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(parse_tree__error_util__write_error_spec_8_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module12)
	MR_init_entry1(hlds__mark_tail_calls__report_nontailcall_warning_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__report_nontailcall_warning_4_0);
	MR_init_label2(hlds__mark_tail_calls__report_nontailcall_warning_4_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_nontailcall_warning'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__report_nontailcall_warning_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		hlds__mark_tail_calls__report_nontailcall_warning_4_0_i2);
MR_def_label(hlds__mark_tail_calls__report_nontailcall_warning_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__mark_tail_calls__report_nontailcall_warning_4_0_i5);
MR_def_label(hlds__mark_tail_calls__report_nontailcall_warning_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 14);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_spec_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module13)
	MR_init_entry1(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__mark_tail_calls__found_tail_calls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module14)
	MR_init_entry1(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__mark_tail_calls__found_tail_calls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_vartypes_0;

MR_BEGIN_MODULE(hlds__mark_tail_calls_module15)
	MR_init_entry1(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0);
	MR_init_label4(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i4);
MR_def_label(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i6);
MR_def_label(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, vartypes);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__mark_tail_calls__mark_tail_calls_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_id_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module16)
	MR_init_entry1(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0);
	MR_init_label7(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i2);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i5);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i9);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_id_0_0,
		__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i13);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i17);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, vartypes);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hlds__mark_tail_calls__mark_tail_calls_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module17)
	MR_init_entry1(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__mark_tail_calls__tailcall_warning_0_0);
	MR_init_label3(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i4);
MR_def_label(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__mark_tail_calls__tailcall_warning_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module18)
	MR_init_entry1(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__mark_tail_calls__tailcall_warning_0_0);
	MR_init_label7(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i2);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i5);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i9);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i13);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i17);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___hlds__mark_tail_calls__tailcall_warning_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__mark_tail_calls_maybe_bunch_0(void)
{
	hlds__mark_tail_calls_module0();
	hlds__mark_tail_calls_module1();
	hlds__mark_tail_calls_module2();
	hlds__mark_tail_calls_module3();
	hlds__mark_tail_calls_module4();
	hlds__mark_tail_calls_module5();
	hlds__mark_tail_calls_module6();
	hlds__mark_tail_calls_module7();
	hlds__mark_tail_calls_module8();
	hlds__mark_tail_calls_module9();
	hlds__mark_tail_calls_module10();
	hlds__mark_tail_calls_module11();
	hlds__mark_tail_calls_module12();
	hlds__mark_tail_calls_module13();
	hlds__mark_tail_calls_module14();
	hlds__mark_tail_calls_module15();
	hlds__mark_tail_calls_module16();
	hlds__mark_tail_calls_module17();
	hlds__mark_tail_calls_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__mark_tail_calls__init(void);
void mercury__hlds__mark_tail_calls__init_type_tables(void);
void mercury__hlds__mark_tail_calls__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__mark_tail_calls__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__mark_tail_calls__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__mark_tail_calls__init_threadscope_string_table(void);
#endif

void mercury__hlds__mark_tail_calls__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__mark_tail_calls_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0,
		hlds__mark_tail_calls__found_tail_calls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0,
		hlds__mark_tail_calls__mark_tail_calls_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0,
		hlds__mark_tail_calls__tailcall_warning_0_0);
	mercury__hlds__mark_tail_calls__init_debugger();
}

void mercury__hlds__mark_tail_calls__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__mark_tail_calls__type_ctor_info_mark_tail_calls_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__mark_tail_calls__type_ctor_info_tailcall_warning_0);
	}
}


void mercury__hlds__mark_tail_calls__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__mark_tail_calls__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__hlds__mark_tail_calls);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__mark_tail_calls__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__mark_tail_calls__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
