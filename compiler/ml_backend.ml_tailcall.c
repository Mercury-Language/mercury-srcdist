/*
** Automatically generated from `ml_tailcall.m'
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
INIT mercury__ml_backend__ml_tailcall__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ml_backend.ml_tailcall.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "ml_backend.ml_tailcall.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.ml_tailcall.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.ml_tailcall.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.ml_tailcall.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_tailcall.c"
#line 49 "ml_backend.ml_tailcall.c"
#include "ml_backend.ml_tailcall.mh"

#line 52 "ml_backend.ml_tailcall.c"
#line 53 "ml_backend.ml_tailcall.c"
#ifndef ML_BACKEND__ML_TAILCALL_DECL_GUARD
#define ML_BACKEND__ML_TAILCALL_DECL_GUARD

#line 57 "ml_backend.ml_tailcall.c"
#line 58 "ml_backend.ml_tailcall.c"

#endif
#line 61 "ml_backend.ml_tailcall.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_at_tail_0,
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_is_local_0,
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0,
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_locals_0,
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0,
	mercury_data_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0;
MR_decl_label1(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0, 2)
MR_decl_label3(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0, 17,4,5)
MR_decl_label2(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0, 4,3)
MR_decl_label6(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0, 5,7,3,15,17,43)
MR_decl_label2(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0, 16,4)
MR_decl_label1(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0, 2)
MR_decl_label5(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0, 35,4,6,7,11)
MR_decl_label10(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0, 5,8,3,11,14,16,10,20,19,27)
MR_decl_label10(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0, 30,31,29,33,35,23,24,22,40,41)
MR_decl_label3(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0, 39,44,46)
MR_decl_label5(ml_backend__ml_tailcall__match_return_vals_2_0, 35,3,7,9,1)
MR_decl_label1(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0, 3)
MR_decl_label1(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0, 3)
MR_decl_label10(ml_backend__ml_tailcall__nontailcall_in_defn_3_0, 5,4,7,2,11,17,19,23,25,9)
MR_decl_label1(ml_backend__ml_tailcall__nontailcall_in_defn_3_0, 1)
MR_decl_label3(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0, 1,2,3)
MR_decl_label3(ml_backend__ml_tailcall__report_nontailcall_warning_4_0, 6,21,38)
MR_decl_label10(fn__ml_backend__ml_tailcall__check_const_2_0, 6,5,9,12,11,14,16,18,3,27)
MR_decl_label7(fn__ml_backend__ml_tailcall__check_const_2_0, 30,29,33,36,26,38,22)
MR_decl_label9(fn__ml_backend__ml_tailcall__check_lval_2_0, 66,8,11,10,14,17,7,19,5)
MR_decl_label10(fn__ml_backend__ml_tailcall__check_rval_2_0, 50,3,5,6,10,24,9,8,14,16)
MR_decl_label4(fn__ml_backend__ml_tailcall__check_rvals_2_0, 16,3,5,4)
MR_decl_label2(fn__ml_backend__ml_tailcall__lval_is_local_1_0, 3,8)
MR_decl_label3(__Unify___ml_backend__ml_tailcall__local_defns_0_0, 16,5,1)
MR_decl_label3(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0, 4,8,1)
MR_decl_label5(__Compare___ml_backend__ml_tailcall__local_defns_0_0, 3,2,7,5,10)
MR_decl_label5(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0, 3,2,5,9,29)
MR_def_extern_entry(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0)
MR_def_extern_entry(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0)
MR_decl_static(fn__ml_backend__ml_tailcall__lval_is_local_1_0)
MR_decl_static(ml_backend__ml_tailcall__match_return_vals_2_0)
MR_decl_static(fn__ml_backend__ml_tailcall__check_const_2_0)
MR_decl_static(fn__ml_backend__ml_tailcall__check_rval_2_0)
MR_decl_static(fn__ml_backend__ml_tailcall__check_lval_2_0)
MR_decl_static(fn__ml_backend__ml_tailcall__check_rvals_2_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0)
MR_decl_static(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0)
MR_decl_static(ml_backend__ml_tailcall__nontailcall_in_defn_3_0)
MR_decl_static(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0)
MR_decl_static(ml_backend__ml_tailcall__report_nontailcall_warning_4_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__at_tail_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__at_tail_0_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__is_local_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__is_local_0_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__local_defns_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__local_defns_0_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__locals_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__locals_0_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)
MR_decl_static(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0)
MR_decl_static(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_mark_tailcalls_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_2;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__ml_mark_tailcalls_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_CTOR0_ADDR(ml_backend__ml_tailcall, tailcall_warning)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(ml_backend__ml_tailcall, tailcall_warning),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
4,
MR_string_const("In mode number", 14)
},
{
4,
MR_string_const("of", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("warning: recursive call is not tail recursive.", 46)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,3),
MR_TAG_COMMON(1,5,0)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,5,1)
}
},
{
{
MR_TAG_COMMON(3,4,2),
MR_TAG_COMMON(1,5,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_at_tail_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__at_tail_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__at_tail_0_0)),
	"ml_backend.ml_tailcall",
	"at_tail",
	{ 0 },
	{ (void *)&mercury_data_maybe__ti_maybe_1list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0 = {
	"is_local",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1 = {
	"is_not_local",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tailcall__enum_value_ordered_is_local_0[] = {
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tailcall__enum_name_ordered_is_local_0[] = {
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_0,
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_is_local_0_1
};

const MR_Integer mercury_data_ml_backend__ml_tailcall__functor_number_map_is_local_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_is_local_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__is_local_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__is_local_0_0)),
	"ml_backend.ml_tailcall",
	"is_local",
	{ (void *)mercury_data_ml_backend__ml_tailcall__enum_name_ordered_is_local_0 },
	{ (void *)mercury_data_ml_backend__ml_tailcall__enum_value_ordered_is_local_0 },
	2,
	4,
	mercury_data_ml_backend__ml_tailcall__functor_number_map_is_local_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_tailcall__field_types_local_defns_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_argument_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0 = {
	"local_params",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_tailcall__field_types_local_defns_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_tailcall__field_types_local_defns_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1 = {
	"local_defns",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_tailcall__field_types_local_defns_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0[] = {
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1[] = {
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_tailcall__du_stag_ordered_local_defns_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tailcall__du_name_ordered_local_defns_0[] = {
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_1,
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_local_defns_0_0
};

const MR_Integer mercury_data_ml_backend__ml_tailcall__functor_number_map_local_defns_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__local_defns_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__local_defns_0_0)),
	"ml_backend.ml_tailcall",
	"local_defns",
	{ (void *)mercury_data_ml_backend__ml_tailcall__du_name_ordered_local_defns_0 },
	{ (void *)mercury_data_ml_backend__ml_tailcall__du_ptag_ordered_local_defns_0 },
	2,
	4,
	mercury_data_ml_backend__ml_tailcall__functor_number_map_local_defns_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_locals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__locals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__locals_0_0)),
	"ml_backend.ml_tailcall",
	"locals",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ml_backend__ml_tailcall__type_ctor_info_local_defns_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0 = {
	"may_yield_dangling_stack_ref",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1 = {
	"will_not_yield_dangling_stack_ref",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0[] = {
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0[] = {
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_0,
	&mercury_data_ml_backend__ml_tailcall__enum_functor_desc_may_yield_dangling_stack_ref_0_1
};

const MR_Integer mercury_data_ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)),
	"ml_backend.ml_tailcall",
	"may_yield_dangling_stack_ref",
	{ (void *)mercury_data_ml_backend__ml_tailcall__enum_name_ordered_may_yield_dangling_stack_ref_0 },
	{ (void *)mercury_data_ml_backend__ml_tailcall__enum_value_ordered_may_yield_dangling_stack_ref_0 },
	2,
	4,
	mercury_data_ml_backend__ml_tailcall__functor_number_map_may_yield_dangling_stack_ref_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pred_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pred_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_tailcall__field_types_tailcall_warning_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_pred_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0 = {
	"tailcall_warning",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_tailcall__field_types_tailcall_warning_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0[] = {
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_tailcall__du_stag_ordered_tailcall_warning_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0[] = {
	&mercury_data_ml_backend__ml_tailcall__du_functor_desc_tailcall_warning_0_0
};

const MR_Integer mercury_data_ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0)),
	"ml_backend.ml_tailcall",
	"tailcall_warning",
	{ (void *)mercury_data_ml_backend__ml_tailcall__du_name_ordered_tailcall_warning_0 },
	{ (void *)mercury_data_ml_backend__ml_tailcall__du_ptag_ordered_tailcall_warning_0 },
	1,
	4,
	mercury_data_ml_backend__ml_tailcall__functor_number_map_tailcall_warning_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"mark_tailcalls_in_defn",
2,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
137,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"mark_tailcalls_in_defn",
2,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
137,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"mark_tailcalls_in_defn",
2,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
137,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"report_nontailcall_warning",
4,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
600,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"nontailcall_in_mlds",
2,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
599,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tailcall__ml_mark_tailcalls_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tailcall",
"ml_backend.ml_tailcall",
"mark_tailcalls_in_defn",
2,
0
},
"ml_backend.ml_tailcall",
"ml_tailcall.m",
137,
"4"
};


MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module0)
	MR_init_entry1(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__ml_mark_tailcalls_4_0);
	MR_init_label1(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_mark_tailcalls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_tailcall__ml_mark_tailcalls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_tailcall__ml_mark_tailcalls_4_0_i3);
MR_def_label(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module1)
	MR_init_entry1(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0);
	MR_init_label1(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_warn_tailcalls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_tailcall__ml_warn_tailcalls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, tailcall_warning);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		ml_backend__ml_tailcall__ml_warn_tailcalls_4_0_i3);
MR_def_label(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tailcall__report_nontailcall_warning_4_0);
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


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module2)
	MR_init_entry1(fn__ml_backend__ml_tailcall__lval_is_local_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tailcall__lval_is_local_1_0);
	MR_init_label2(fn__ml_backend__ml_tailcall__lval_is_local_1_0,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lval_is_local'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tailcall__lval_is_local_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__lval_is_local_1_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__lval_is_local_1_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_localtailcall(fn__ml_backend__ml_tailcall__lval_is_local_1_0);
MR_def_label(fn__ml_backend__ml_tailcall__lval_is_local_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__lval_is_local_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_tailcall__lval_is_local_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_lval_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module3)
	MR_init_entry1(ml_backend__ml_tailcall__match_return_vals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__match_return_vals_2_0);
	MR_init_label5(ml_backend__ml_tailcall__match_return_vals_2_0,35,3,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_return_vals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__match_return_vals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_tailcall__match_return_vals_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_tailcall__match_return_vals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_lval_0_0,
		ml_backend__ml_tailcall__match_return_vals_2_0_i7);
MR_def_label(ml_backend__ml_tailcall__match_return_vals_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_tailcall__lval_is_local_1_0,
		ml_backend__ml_tailcall__match_return_vals_2_0_i9);
MR_def_label(ml_backend__ml_tailcall__match_return_vals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ml_tailcall__match_return_vals_2_0_i35);
MR_def_label(ml_backend__ml_tailcall__match_return_vals_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_pred_label_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_var_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module4)
	MR_init_entry1(fn__ml_backend__ml_tailcall__check_const_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tailcall__check_const_2_0);
	MR_init_label10(fn__ml_backend__ml_tailcall__check_const_2_0,6,5,9,12,11,14,16,18,3,27)
	MR_init_label7(fn__ml_backend__ml_tailcall__check_const_2_0,30,29,33,36,26,38,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_const'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tailcall__check_const_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_r4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i5);
	}
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r3, 0), 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	}
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__ml_backend__ml_tailcall__check_const_2_0_i26);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, local_defns);
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i9);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i12);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_pred_label_0_0,
		fn__ml_backend__ml_tailcall__check_const_2_0_i16);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i14);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_pred_label_0_0,
		fn__ml_backend__ml_tailcall__check_const_2_0_i16);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(3) != MR_sv(4))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		fn__ml_backend__ml_tailcall__check_const_2_0_i18);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i38);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i22);
	}
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__ml_backend__ml_tailcall__check_const_2_0_i26);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, local_defns);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i27);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i30);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		fn__ml_backend__ml_tailcall__check_const_2_0_i36);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_const_2_0_i33);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		fn__ml_backend__ml_tailcall__check_const_2_0_i36);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i38);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_const_2_0_i22);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(fn__ml_backend__ml_tailcall__check_const_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module5)
	MR_init_entry1(fn__ml_backend__ml_tailcall__check_rval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tailcall__check_rval_2_0);
	MR_init_label10(fn__ml_backend__ml_tailcall__check_rval_2_0,50,3,5,6,10,24,9,8,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tailcall__check_rval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ml_tailcall__check_const_2_0);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i50);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i8);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__ml_tailcall__check_rval_2_0,
		fn__ml_backend__ml_tailcall__check_rval_2_0_i10);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i9);
	}
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i50);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ml_tailcall__check_lval_2_0);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i50);
MR_def_label(fn__ml_backend__ml_tailcall__check_rval_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i24);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rval_2_0_i50);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module6)
	MR_init_entry1(fn__ml_backend__ml_tailcall__check_lval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tailcall__check_lval_2_0);
	MR_init_label9(fn__ml_backend__ml_tailcall__check_lval_2_0,66,8,11,10,14,17,7,19,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tailcall__check_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_lval_2_0_i66);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_tailcall__check_rval_2_0);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_lval_2_0_i5);
	}
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__ml_backend__ml_tailcall__check_lval_2_0_i7);
	MR_sv(1) = MR_tfield(0, MR_tfield(3, MR_r1, 0), 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, local_defns);
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_lval_2_0_i8);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_lval_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_lval_2_0_i11);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		fn__ml_backend__ml_tailcall__check_lval_2_0_i17);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__ml_backend__ml_tailcall__check_lval_2_0_i14);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		fn__ml_backend__ml_tailcall__check_lval_2_0_i17);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_lval_2_0_i19);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_lval_2_0_i5);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_tailcall__check_lval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module7)
	MR_init_entry1(fn__ml_backend__ml_tailcall__check_rvals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tailcall__check_rvals_2_0);
	MR_init_label4(fn__ml_backend__ml_tailcall__check_rvals_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_rvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tailcall__check_rvals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_tailcall__check_rvals_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rvals_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_tailcall__check_rvals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_tailcall__check_rval_2_0,
		fn__ml_backend__ml_tailcall__check_rvals_2_0_i5);
MR_def_label(fn__ml_backend__ml_tailcall__check_rvals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rvals_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_tailcall__check_rvals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_tailcall__check_rvals_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module8)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0);
	MR_init_label5(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,35,4,6,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_statements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i4);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i11);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i11);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0_i11);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module9)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0);
	MR_init_label1(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0_i2);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module10)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0);
	MR_init_label10(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,5,8,3,11,14,16,10,20,19,27)
	MR_init_label10(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,30,31,29,33,35,23,24,22,40,41)
	MR_init_label3(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,39,44,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_stmt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i5);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statements_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i8);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i11);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i14);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i16);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i20);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 6);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i24);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i24);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__match_return_vals_2_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i27);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i30);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i29);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_tailcall__check_rval_2_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i31);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i23);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_tailcall__check_rvals_2_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i33);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_tailcall__check_rval_2_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i35);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i23);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_sv(7);
	MR_tfield(3, MR_r1, 6) = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_r3 = MR_tfield(3, MR_r3, 4);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i40);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i41);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i44);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_tempr4 = MR_sv(4);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0_i46);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module11)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0);
	MR_init_label3(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0_i4);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0_i5);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module12)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0);
	MR_init_label1(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_case'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0_i2);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_case_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module13)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0);
	MR_init_label2(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_default'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_stmt_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0_i4);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_default_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module14)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0);
	MR_init_label2(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_function_body'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_statement_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0_i4);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module15)
	MR_init_entry1(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0);
	MR_init_label6(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,5,7,3,15,17,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tailcalls_in_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r5, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i5);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i7);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_sv(9);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i43);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i15);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr3, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i17);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_r6;
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__mark_tailcalls_in_function_body_4_0,
		ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0_i17);
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_tailcall__mark_tailcalls_in_defn_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(ml_backend__ml_util__statement_contains_statement_2_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module16)
	MR_init_entry1(ml_backend__ml_tailcall__nontailcall_in_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__nontailcall_in_defn_3_0);
	MR_init_label10(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,5,4,7,2,11,17,19,23,25,9)
	MR_init_label1(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nontailcall_in_defn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__nontailcall_in_defn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_tailcall.nontailcall_in_defn/3-0", 8,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i2);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	MR_fv(2) = MR_tfield(0, MR_tempr2, 6);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i4);
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i5);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i1);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i7);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i1);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 2);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__statement_contains_statement_2_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i11);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 6);
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr3 = MR_tfield(2, MR_tempr2, 0);
	MR_r3 = MR_tempr3;
	if (MR_RTAGS_TESTR(MR_tempr3,3,6)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr4 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i17);
	}
	MR_tag_alloc_heap(MR_fv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_fv(4), 0) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_fv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr5 = MR_tfield(1, MR_tempr4, 0);
	MR_fv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_fv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_r2 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i19);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_fv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_fv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	MR_fv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_fv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i19);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_INT_NE(MR_fv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TESTR(MR_fv(2),2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_fv(5);
	MR_fv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_fv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_fv(2);
	MR_fv(7) = MR_tfield(2, MR_tempr2, 1);
	MR_fv(8) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_fv(5);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_pred_label_0_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i23);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_fv(6) != MR_fv(7))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(8);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ml_backend__ml_tailcall__nontailcall_in_defn_3_0_i25);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_fv(5);
	MR_tfield(0, MR_r1, 1) = MR_fv(6);
	MR_tfield(0, MR_r1, 2) = MR_fv(3);
	MR_succeed();
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module17)
	MR_init_entry1(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__nontailcall_in_mlds_2_0);
	MR_init_label3(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0,1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nontailcall_in_mlds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_tailcall.nontailcall_in_mlds/2-0", 1,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_tailcall__nontailcall_in_mlds_2_0_i1);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(1);
	MR_fv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_tailcall__nontailcall_in_mlds_2_0_i2);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_tailcall__nontailcall_in_defn_3_0,
		ml_backend__ml_tailcall__nontailcall_in_mlds_2_0_i3);
MR_def_label(ml_backend__ml_tailcall__nontailcall_in_mlds_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(parse_tree__error_util__write_error_spec_8_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module18)
	MR_init_entry1(ml_backend__ml_tailcall__report_nontailcall_warning_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tailcall__report_nontailcall_warning_4_0);
	MR_init_label3(ml_backend__ml_tailcall__report_nontailcall_warning_4_0,6,21,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_nontailcall_warning'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tailcall__report_nontailcall_warning_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_tailcall__report_nontailcall_warning_4_0_i38);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__ml_tailcall__report_nontailcall_warning_4_0_i6);
MR_def_label(ml_backend__ml_tailcall__report_nontailcall_warning_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__ml_tailcall__report_nontailcall_warning_4_0_i21);
MR_def_label(ml_backend__ml_tailcall__report_nontailcall_warning_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__error_util__write_error_spec_8_0);
	}
MR_def_label(ml_backend__ml_tailcall__report_nontailcall_warning_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module19)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__at_tail_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__at_tail_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__at_tail_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module20)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__at_tail_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__at_tail_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__at_tail_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module21)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__is_local_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__is_local_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__is_local_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module22)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__is_local_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__is_local_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__is_local_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module23)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__local_defns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__local_defns_0_0);
	MR_init_label3(__Unify___ml_backend__ml_tailcall__local_defns_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__local_defns_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__local_defns_0_0_i16);
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
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__local_defns_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__local_defns_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ml_backend__ml_tailcall__local_defns_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_tailcall__local_defns_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__local_defns_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ml_tailcall__local_defns_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module24)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__local_defns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__local_defns_0_0);
	MR_init_label5(__Compare___ml_backend__ml_tailcall__local_defns_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__local_defns_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__local_defns_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__local_defns_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_tailcall__local_defns_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_tailcall__local_defns_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__local_defns_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__local_defns_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ml_tailcall__local_defns_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_tailcall__local_defns_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__local_defns_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_tailcall__local_defns_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module25)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__locals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__locals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__locals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, local_defns);
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


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module26)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__locals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__locals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__locals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tailcall, local_defns);
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


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module27)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tailcall_module28)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module29)
	MR_init_entry1(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tailcall__tailcall_warning_0_0);
	MR_init_label3(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_pred_label_0_0,
		__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_context_0_0);
MR_def_label(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_tailcall__tailcall_warning_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_pred_label_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tailcall_module30)
	MR_init_entry1(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tailcall__tailcall_warning_0_0);
	MR_init_label5(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_pred_label_0_0,
		__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_context_0_0);
MR_def_label(__Compare___ml_backend__ml_tailcall__tailcall_warning_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_tailcall_maybe_bunch_0(void)
{
	ml_backend__ml_tailcall_module0();
	ml_backend__ml_tailcall_module1();
	ml_backend__ml_tailcall_module2();
	ml_backend__ml_tailcall_module3();
	ml_backend__ml_tailcall_module4();
	ml_backend__ml_tailcall_module5();
	ml_backend__ml_tailcall_module6();
	ml_backend__ml_tailcall_module7();
	ml_backend__ml_tailcall_module8();
	ml_backend__ml_tailcall_module9();
	ml_backend__ml_tailcall_module10();
	ml_backend__ml_tailcall_module11();
	ml_backend__ml_tailcall_module12();
	ml_backend__ml_tailcall_module13();
	ml_backend__ml_tailcall_module14();
	ml_backend__ml_tailcall_module15();
	ml_backend__ml_tailcall_module16();
	ml_backend__ml_tailcall_module17();
	ml_backend__ml_tailcall_module18();
	ml_backend__ml_tailcall_module19();
	ml_backend__ml_tailcall_module20();
	ml_backend__ml_tailcall_module21();
	ml_backend__ml_tailcall_module22();
	ml_backend__ml_tailcall_module23();
	ml_backend__ml_tailcall_module24();
	ml_backend__ml_tailcall_module25();
	ml_backend__ml_tailcall_module26();
	ml_backend__ml_tailcall_module27();
	ml_backend__ml_tailcall_module28();
	ml_backend__ml_tailcall_module29();
	ml_backend__ml_tailcall_module30();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_tailcall__init(void);
void mercury__ml_backend__ml_tailcall__init_type_tables(void);
void mercury__ml_backend__ml_tailcall__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_tailcall__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_tailcall__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_tailcall__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_tailcall_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_at_tail_0,
		ml_backend__ml_tailcall__at_tail_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_is_local_0,
		ml_backend__ml_tailcall__is_local_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0,
		ml_backend__ml_tailcall__local_defns_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_locals_0,
		ml_backend__ml_tailcall__locals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0,
		ml_backend__ml_tailcall__may_yield_dangling_stack_ref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0,
		ml_backend__ml_tailcall__tailcall_warning_0_0);
	mercury__ml_backend__ml_tailcall__init_debugger();
}

void mercury__ml_backend__ml_tailcall__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_at_tail_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_is_local_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_local_defns_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_locals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_may_yield_dangling_stack_ref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tailcall__type_ctor_info_tailcall_warning_0);
	}
}


void mercury__ml_backend__ml_tailcall__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_tailcall__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_tailcall);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_tailcall__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
