/*
** Automatically generated from `det_util.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__det_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.det_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.det_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.det_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.det_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.det_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.det_util.c"
#line 49 "check_hlds.det_util.c"
#include "check_hlds.det_util.mh"

#line 52 "check_hlds.det_util.c"
#line 53 "check_hlds.det_util.c"
#ifndef CHECK_HLDS__DET_UTIL_DECL_GUARD
#define CHECK_HLDS__DET_UTIL_DECL_GUARD

#line 57 "check_hlds.det_util.c"
#line 58 "check_hlds.det_util.c"

#endif
#line 61 "check_hlds.det_util.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0,
	mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0,
	mercury_data_check_hlds__det_util__type_ctor_info_det_info_0,
	mercury_data_check_hlds__det_util__type_ctor_info_maybe_changed_0,
	mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0;
MR_decl_label2(check_hlds__det_util__delete_unreachable_cases_3_0, 2,3)
MR_decl_label7(check_hlds__det_util__delete_unreachable_cases_2_4_0, 32,3,5,8,4,12,14)
MR_decl_label3(check_hlds__det_util__det_get_proc_info_2_0, 2,3,4)
MR_decl_label4(check_hlds__det_util__det_info_init_7_0, 2,3,4,5)
MR_decl_label5(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0, 2,3,4,5,6)
MR_decl_label4(check_hlds__det_util__det_lookup_var_type_4_0, 2,4,5,6)
MR_decl_label8(check_hlds__det_util__interpret_unify_4_0, 4,5,7,3,39,12,14,1)
MR_decl_label4(__Unify___check_hlds__det_util__det_info_0_0, 4,7,11,1)
MR_decl_label10(__Compare___check_hlds__det_util__det_info_0_0, 3,2,5,10,14,18,22,26,30,34)
MR_decl_label3(__Compare___check_hlds__det_util__det_info_0_0, 38,42,127)
MR_decl_static(check_hlds__det_util__delete_unreachable_cases_2_4_0)
MR_def_extern_entry(check_hlds__det_util__delete_unreachable_cases_3_0)
MR_def_extern_entry(check_hlds__det_util__interpret_unify_4_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_module_info_2_0)
MR_def_extern_entry(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_pred_id_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_proc_id_2_0)
MR_def_extern_entry(check_hlds__det_util__det_get_proc_info_2_0)
MR_def_extern_entry(check_hlds__det_util__det_lookup_var_type_4_0)
MR_def_extern_entry(check_hlds__det_util__det_no_output_vars_4_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_error_specs_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_add_error_spec_3_0)
MR_def_extern_entry(check_hlds__det_util__det_info_init_7_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_reorder_conj_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_reorder_disj_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_fully_strict_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_vartypes_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_pess_extra_vars_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_has_format_call_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_get_has_req_scope_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_set_module_info_3_0)
MR_def_extern_entry(check_hlds__det_util__det_info_set_vartypes_3_0)
MR_def_extern_entry(check_hlds__det_util__det_info_set_has_format_call_2_0)
MR_def_extern_entry(check_hlds__det_util__det_info_set_has_req_scope_2_0)
MR_def_extern_entry(__Unify___check_hlds__det_util__contains_format_call_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_util__contains_format_call_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_util__contains_require_scope_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_util__contains_require_scope_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_util__det_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_util__det_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_util__maybe_changed_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_util__maybe_changed_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_util__report_pess_extra_vars_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_util__report_pess_extra_vars_0_0)
MR_decl_static(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_0)
MR_decl_static(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
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
mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_0 = {
	"does_not_contain_format_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_1 = {
	"contains_format_call",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_value_ordered_contains_format_call_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_0,
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_name_ordered_contains_format_call_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_1,
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_format_call_0_0
};

const MR_Integer mercury_data_check_hlds__det_util__functor_number_map_contains_format_call_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_util__contains_format_call_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_util__contains_format_call_0_0)),
	"check_hlds.det_util",
	"contains_format_call",
	{ (void *)mercury_data_check_hlds__det_util__enum_name_ordered_contains_format_call_0 },
	{ (void *)mercury_data_check_hlds__det_util__enum_value_ordered_contains_format_call_0 },
	2,
	4,
	mercury_data_check_hlds__det_util__functor_number_map_contains_format_call_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0 = {
	"does_not_contain_require_scope",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1 = {
	"contains_require_scope",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_value_ordered_contains_require_scope_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0,
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_name_ordered_contains_require_scope_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_1,
	&mercury_data_check_hlds__det_util__enum_functor_desc_contains_require_scope_0_0
};

const MR_Integer mercury_data_check_hlds__det_util__functor_number_map_contains_require_scope_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_util__contains_require_scope_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_util__contains_require_scope_0_0)),
	"check_hlds.det_util",
	"contains_require_scope",
	{ (void *)mercury_data_check_hlds__det_util__enum_name_ordered_contains_require_scope_0 },
	{ (void *)mercury_data_check_hlds__det_util__enum_value_ordered_contains_require_scope_0 },
	2,
	4,
	mercury_data_check_hlds__det_util__functor_number_map_contains_require_scope_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_util__field_types_det_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

const MR_ConstString mercury_data_check_hlds__det_util__field_names_det_info_0_0[] = {
	"di_module_info",
	"di_vartypes",
	"di_pred_id",
	"di_proc_id",
	"di_reorder_conj",
	"di_reorder_disj",
	"di_fully_strict",
	"di_pess_extra_vars",
	"di_has_format_call",
	"di_has_req_scope",
	"di_error_specs"
};

const MR_DuArgLocn mercury_data_check_hlds__det_util__field_locns_det_info_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 1 },
	{ 4, 1, 1 },
	{ 4, 2, 1 },
	{ 4, 3, 1 },
	{ 4, 4, 1 },
	{ 4, 5, 1 },
	{ 5, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_util__du_functor_desc_det_info_0_0 = {
	"det_info",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_util__field_types_det_info_0_0,
	mercury_data_check_hlds__det_util__field_names_det_info_0_0,
	mercury_data_check_hlds__det_util__field_locns_det_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_util__du_stag_ordered_det_info_0_0[] = {
	&mercury_data_check_hlds__det_util__du_functor_desc_det_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_util__du_ptag_ordered_det_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_util__du_stag_ordered_det_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_util__du_name_ordered_det_info_0[] = {
	&mercury_data_check_hlds__det_util__du_functor_desc_det_info_0_0
};

const MR_Integer mercury_data_check_hlds__det_util__functor_number_map_det_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_det_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_util__det_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_util__det_info_0_0)),
	"check_hlds.det_util",
	"det_info",
	{ (void *)mercury_data_check_hlds__det_util__du_name_ordered_det_info_0 },
	{ (void *)mercury_data_check_hlds__det_util__du_ptag_ordered_det_info_0 },
	1,
	4,
	mercury_data_check_hlds__det_util__functor_number_map_det_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_0 = {
	"changed",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_1 = {
	"unchanged",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_value_ordered_maybe_changed_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
	&mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_name_ordered_maybe_changed_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_0,
	&mercury_data_check_hlds__det_util__enum_functor_desc_maybe_changed_0_1
};

const MR_Integer mercury_data_check_hlds__det_util__functor_number_map_maybe_changed_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_maybe_changed_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_util__maybe_changed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_util__maybe_changed_0_0)),
	"check_hlds.det_util",
	"maybe_changed",
	{ (void *)mercury_data_check_hlds__det_util__enum_name_ordered_maybe_changed_0 },
	{ (void *)mercury_data_check_hlds__det_util__enum_value_ordered_maybe_changed_0 },
	2,
	4,
	mercury_data_check_hlds__det_util__functor_number_map_maybe_changed_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0 = {
	"pess_extra_vars_report",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1 = {
	"pess_extra_vars_ignore",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0,
	&mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0[] = {
	&mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_1,
	&mercury_data_check_hlds__det_util__enum_functor_desc_report_pess_extra_vars_0_0
};

const MR_Integer mercury_data_check_hlds__det_util__functor_number_map_report_pess_extra_vars_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_util__report_pess_extra_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_util__report_pess_extra_vars_0_0)),
	"check_hlds.det_util",
	"report_pess_extra_vars",
	{ (void *)mercury_data_check_hlds__det_util__enum_name_ordered_report_pess_extra_vars_0 },
	{ (void *)mercury_data_check_hlds__det_util__enum_value_ordered_report_pess_extra_vars_0 },
	2,
	4,
	mercury_data_check_hlds__det_util__functor_number_map_report_pess_extra_vars_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.det_util",
"check_hlds.det_util",
"lambda_det_util_m_168",
2,
0
},
"check_hlds.det_util",
"det_util.m",
168,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_util__delete_unreachable_cases_2_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_util",
"check_hlds.det_util",
"lambda_det_util_m_163",
2,
0
},
"check_hlds.det_util",
"det_util.m",
163,
"16"
};


extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(set_tree234__contains_2_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(check_hlds__det_util_module0)
	MR_init_entry1(check_hlds__det_util__delete_unreachable_cases_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__delete_unreachable_cases_2_4_0);
	MR_init_label7(check_hlds__det_util__delete_unreachable_cases_2_4_0,32,3,5,8,4,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_unreachable_cases_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_util__delete_unreachable_cases_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set_tree234__contains_2_0,
		check_hlds__det_util__delete_unreachable_cases_2_4_0_i5);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__det_util__delete_unreachable_cases_2_4_0_i8);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i32);
	}
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__det_util__delete_unreachable_cases_2_4_0_i12);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i32);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__det_util__delete_unreachable_cases_2_4_0_i32);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set_tree234__list_to_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(check_hlds__det_util_module1)
	MR_init_entry1(check_hlds__det_util__delete_unreachable_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__delete_unreachable_cases_3_0);
	MR_init_label2(check_hlds__det_util__delete_unreachable_cases_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_unreachable_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__delete_unreachable_cases_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_np_call_localret_ent(fn__set_tree234__list_to_set_1_0,
		check_hlds__det_util__delete_unreachable_cases_3_0_i2);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__delete_unreachable_cases_2_4_0,
		check_hlds__det_util__delete_unreachable_cases_3_0_i3);
MR_def_label(check_hlds__det_util__delete_unreachable_cases_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(parse_tree__prog_util__cons_id_and_args_to_term_3_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(term__unify_term_4_0);

MR_BEGIN_MODULE(check_hlds__det_util_module2)
	MR_init_entry1(check_hlds__det_util__interpret_unify_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__interpret_unify_4_0);
	MR_init_label8(check_hlds__det_util__interpret_unify_4_0,4,5,7,3,39,12,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interpret_unify'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__interpret_unify_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__det_util__interpret_unify_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		check_hlds__det_util__interpret_unify_4_0_i4);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__cons_id_and_args_to_term_3_0,
		check_hlds__det_util__interpret_unify_4_0_i5);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_util__interpret_unify_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__det_util__interpret_unify_4_0_i7);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term__unify_term_4_0);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_util__interpret_unify_4_0_i39);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__det_util__interpret_unify_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__det_util__interpret_unify_4_0_i12);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__det_util__interpret_unify_4_0_i14);
MR_def_label(check_hlds__det_util__interpret_unify_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term__unify_term_4_0);
	}
MR_def_label(check_hlds__det_util__interpret_unify_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module3)
	MR_init_entry1(check_hlds__det_util__det_info_get_module_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_module_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_module_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);

MR_BEGIN_MODULE(check_hlds__det_util_module4)
	MR_init_entry1(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_lookup_pred_info_and_detism_5_0);
	MR_init_label5(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_lookup_pred_info_and_detism'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_lookup_pred_info_and_detism_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__det_util__det_lookup_pred_info_and_detism_5_0_i2);
MR_def_label(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_util__det_lookup_pred_info_and_detism_5_0_i3);
MR_def_label(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_util__det_lookup_pred_info_and_detism_5_0_i4);
MR_def_label(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_util__det_lookup_pred_info_and_detism_5_0_i5);
MR_def_label(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__det_util__det_lookup_pred_info_and_detism_5_0_i6);
MR_def_label(check_hlds__det_util__det_lookup_pred_info_and_detism_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module5)
	MR_init_entry1(check_hlds__det_util__det_info_get_pred_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_pred_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_pred_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_pred_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module6)
	MR_init_entry1(check_hlds__det_util__det_info_get_proc_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_proc_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_proc_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_proc_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module7)
	MR_init_entry1(check_hlds__det_util__det_get_proc_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_get_proc_info_2_0);
	MR_init_label3(check_hlds__det_util__det_get_proc_info_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_get_proc_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_get_proc_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__det_util__det_get_proc_info_2_0_i2);
MR_def_label(check_hlds__det_util__det_get_proc_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_util__det_get_proc_info_2_0_i3);
MR_def_label(check_hlds__det_util__det_get_proc_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_util__det_get_proc_info_2_0_i4);
MR_def_label(check_hlds__det_util__det_get_proc_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);

MR_BEGIN_MODULE(check_hlds__det_util_module8)
	MR_init_entry1(check_hlds__det_util__det_lookup_var_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_lookup_var_type_4_0);
	MR_init_label4(check_hlds__det_util__det_lookup_var_type_4_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_lookup_var_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_lookup_var_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_util__det_lookup_var_type_4_0_i2);
MR_def_label(check_hlds__det_util__det_lookup_var_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_util__det_lookup_var_type_4_0_i4);
MR_def_label(check_hlds__det_util__det_lookup_var_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__det_util__det_lookup_var_type_4_0_i5);
MR_def_label(check_hlds__det_util__det_lookup_var_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__det_util__det_lookup_var_type_4_0_i6);
MR_def_label(check_hlds__det_util__det_lookup_var_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_data__search_type_ctor_defn_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_no_output_vars_5_0);

MR_BEGIN_MODULE(check_hlds__det_util_module9)
	MR_init_entry1(check_hlds__det_util__det_no_output_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_no_output_vars_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_no_output_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_no_output_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(0, MR_r4, 1);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(hlds__instmap__instmap_delta_no_output_vars_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module10)
	MR_init_entry1(check_hlds__det_util__det_info_get_error_specs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_error_specs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_error_specs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_error_specs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module11)
	MR_init_entry1(check_hlds__det_util__det_info_add_error_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_add_error_spec_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_add_error_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_add_error_spec_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 5);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 4) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | (((MR_Integer) MR_tempr5 << (MR_Integer) 2) | (((MR_Integer) MR_tempr4 << (MR_Integer) 3) | (((MR_Integer) MR_tempr3 << (MR_Integer) 4) | ((MR_Integer) MR_tempr2 << (MR_Integer) 5))))));
	MR_tfield(0, MR_r1, 5) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(check_hlds__det_util_module12)
	MR_init_entry1(check_hlds__det_util__det_info_init_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_init_7_0);
	MR_init_label4(check_hlds__det_util__det_info_init_7_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_init'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_init_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__det_util__det_info_init_7_0_i2);
MR_def_label(check_hlds__det_util__det_info_init_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 147;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_util__det_info_init_7_0_i3);
MR_def_label(check_hlds__det_util__det_info_init_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 148;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_util__det_info_init_7_0_i4);
MR_def_label(check_hlds__det_util__det_info_init_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 149;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_util__det_info_init_7_0_i5);
MR_def_label(check_hlds__det_util__det_info_init_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = ((MR_Integer) MR_sv(8) | (((MR_Integer) MR_sv(7) << (MR_Integer) 1) | (((MR_Integer) MR_r1 << (MR_Integer) 2) | (((MR_Integer) MR_sv(5) << (MR_Integer) 3) | (((MR_Integer) 0 << (MR_Integer) 4) | ((MR_Integer) 0 << (MR_Integer) 5))))));
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module13)
	MR_init_entry1(check_hlds__det_util__det_info_get_reorder_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_reorder_conj_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_reorder_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_reorder_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 4) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module14)
	MR_init_entry1(check_hlds__det_util__det_info_get_reorder_disj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_reorder_disj_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_reorder_disj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_reorder_disj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module15)
	MR_init_entry1(check_hlds__det_util__det_info_get_fully_strict_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_fully_strict_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_fully_strict'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_fully_strict_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module16)
	MR_init_entry1(check_hlds__det_util__det_info_get_vartypes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_vartypes_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_vartypes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_vartypes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module17)
	MR_init_entry1(check_hlds__det_util__det_info_get_pess_extra_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_pess_extra_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_pess_extra_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_pess_extra_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module18)
	MR_init_entry1(check_hlds__det_util__det_info_get_has_format_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_has_format_call_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_has_format_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_has_format_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module19)
	MR_init_entry1(check_hlds__det_util__det_info_get_has_req_scope_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_get_has_req_scope_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_get_has_req_scope'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_get_has_req_scope_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module20)
	MR_init_entry1(check_hlds__det_util__det_info_set_module_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_set_module_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_set_module_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_set_module_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 4) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr7, 0) = MR_r1;
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr7, 4) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | (((MR_Integer) MR_tempr2 << (MR_Integer) 4) | ((MR_Integer) MR_tempr1 << (MR_Integer) 5))))));
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r2, 5);
	MR_r1 = MR_tempr7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module21)
	MR_init_entry1(check_hlds__det_util__det_info_set_vartypes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_set_vartypes_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_set_vartypes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_set_vartypes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 4) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_r1;
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr7, 4) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | (((MR_Integer) MR_tempr2 << (MR_Integer) 4) | ((MR_Integer) MR_tempr1 << (MR_Integer) 5))))));
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r2, 5);
	MR_r1 = MR_tempr7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module22)
	MR_init_entry1(check_hlds__det_util__det_info_set_has_format_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_set_has_format_call_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_set_has_format_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_set_has_format_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r1, 4) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr5, 4) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | (((MR_Integer) 1 << (MR_Integer) 4) | ((MR_Integer) MR_r2 << (MR_Integer) 5))))));
	MR_tfield(0, MR_tempr5, 5) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module23)
	MR_init_entry1(check_hlds__det_util__det_info_set_has_req_scope_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__det_info_set_has_req_scope_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_info_set_has_req_scope'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_util__det_info_set_has_req_scope_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r1, 4) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr5, 4) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | (((MR_Integer) MR_r2 << (MR_Integer) 4) | ((MR_Integer) 1 << (MR_Integer) 5))))));
	MR_tfield(0, MR_tempr5, 5) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr5;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module24)
	MR_init_entry1(__Unify___check_hlds__det_util__contains_format_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_util__contains_format_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_util__contains_format_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__det_util_module25)
	MR_init_entry1(__Compare___check_hlds__det_util__contains_format_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_util__contains_format_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_util__contains_format_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module26)
	MR_init_entry1(__Unify___check_hlds__det_util__contains_require_scope_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_util__contains_require_scope_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_util__contains_require_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module27)
	MR_init_entry1(__Compare___check_hlds__det_util__contains_require_scope_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_util__contains_require_scope_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_util__contains_require_scope_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__det_util_module28)
	MR_init_entry1(__Unify___check_hlds__det_util__det_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_util__det_info_0_0);
	MR_init_label4(__Unify___check_hlds__det_util__det_info_0_0,4,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_util__det_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i11);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr1, 4) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr1, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr1, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr1, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr1, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr1, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(14) = ((MR_Integer) MR_tfield(0, MR_tempr2, 4) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr2, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr2, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(17) = (((MR_Integer) MR_tfield(0, MR_tempr2, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(18) = (((MR_Integer) MR_tfield(0, MR_tempr2, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(19) = (((MR_Integer) MR_tfield(0, MR_tempr2, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__det_util__det_info_0_0_i4);
MR_def_label(__Unify___check_hlds__det_util__det_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__det_util__det_info_0_0_i7);
MR_def_label(__Unify___check_hlds__det_util__det_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(18))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___check_hlds__det_util__det_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__det_util__det_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_util__det_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__det_util_module29)
	MR_init_entry1(__Compare___check_hlds__det_util__det_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_util__det_info_0_0);
	MR_init_label10(__Compare___check_hlds__det_util__det_info_0_0,3,2,5,10,14,18,22,26,30,34)
	MR_init_label3(__Compare___check_hlds__det_util__det_info_0_0,38,42,127)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_util__det_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i2);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(19) = (((MR_Integer) MR_tfield(0, MR_tempr5, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(18) = (((MR_Integer) MR_tfield(0, MR_tempr5, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(17) = (((MR_Integer) MR_tfield(0, MR_tempr5, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr5, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr5, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(14) = ((MR_Integer) MR_tfield(0, MR_tempr5, 4) & (MR_Integer) 1);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr6, 4) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr6, 4) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr6, 4) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr6, 4) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr6, 4) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr6, 4) & (MR_Integer) 1);
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
		__Compare___check_hlds__det_util__det_info_0_0_i5);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__det_util__det_info_0_0_i10);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i14);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i18);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i22);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i26);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i30);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i34);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i38);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_util__det_info_0_0_i42);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_util__det_info_0_0_i127);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__det_util__det_info_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module30)
	MR_init_entry1(__Unify___check_hlds__det_util__maybe_changed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_util__maybe_changed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_util__maybe_changed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module31)
	MR_init_entry1(__Compare___check_hlds__det_util__maybe_changed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_util__maybe_changed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_util__maybe_changed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module32)
	MR_init_entry1(__Unify___check_hlds__det_util__report_pess_extra_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_util__report_pess_extra_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_util__report_pess_extra_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module33)
	MR_init_entry1(__Compare___check_hlds__det_util__report_pess_extra_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_util__report_pess_extra_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_util__report_pess_extra_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module34)
	MR_init_entry1(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__delete_unreachable_cases_2__163__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__163__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_util_module35)
	MR_init_entry1(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__delete_unreachable_cases_2__168__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_util__IntroducedFrom__pred__delete_unreachable_cases_2__168__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__det_util_maybe_bunch_0(void)
{
	check_hlds__det_util_module0();
	check_hlds__det_util_module1();
	check_hlds__det_util_module2();
	check_hlds__det_util_module3();
	check_hlds__det_util_module4();
	check_hlds__det_util_module5();
	check_hlds__det_util_module6();
	check_hlds__det_util_module7();
	check_hlds__det_util_module8();
	check_hlds__det_util_module9();
	check_hlds__det_util_module10();
	check_hlds__det_util_module11();
	check_hlds__det_util_module12();
	check_hlds__det_util_module13();
	check_hlds__det_util_module14();
	check_hlds__det_util_module15();
	check_hlds__det_util_module16();
	check_hlds__det_util_module17();
	check_hlds__det_util_module18();
	check_hlds__det_util_module19();
	check_hlds__det_util_module20();
	check_hlds__det_util_module21();
	check_hlds__det_util_module22();
	check_hlds__det_util_module23();
	check_hlds__det_util_module24();
	check_hlds__det_util_module25();
	check_hlds__det_util_module26();
	check_hlds__det_util_module27();
	check_hlds__det_util_module28();
	check_hlds__det_util_module29();
	check_hlds__det_util_module30();
	check_hlds__det_util_module31();
	check_hlds__det_util_module32();
	check_hlds__det_util_module33();
	check_hlds__det_util_module34();
	check_hlds__det_util_module35();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__det_util__init(void);
void mercury__check_hlds__det_util__init_type_tables(void);
void mercury__check_hlds__det_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__det_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__det_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__det_util__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__det_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__det_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0,
		check_hlds__det_util__contains_format_call_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0,
		check_hlds__det_util__contains_require_scope_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_util__type_ctor_info_det_info_0,
		check_hlds__det_util__det_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_util__type_ctor_info_maybe_changed_0,
		check_hlds__det_util__maybe_changed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0,
		check_hlds__det_util__report_pess_extra_vars_0_0);
	mercury__check_hlds__det_util__init_debugger();
}

void mercury__check_hlds__det_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_util__type_ctor_info_contains_format_call_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_util__type_ctor_info_contains_require_scope_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_util__type_ctor_info_det_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_util__type_ctor_info_maybe_changed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_util__type_ctor_info_report_pess_extra_vars_0);
	}
}


void mercury__check_hlds__det_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__det_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__det_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__det_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__det_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
