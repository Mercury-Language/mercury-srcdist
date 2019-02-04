/*
** Automatically generated from `stratify.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.stratify.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.stratify.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "check_hlds.stratify.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "check_hlds.stratify.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "check_hlds.stratify.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.stratify.c"
#line 49 "check_hlds.stratify.c"
#include "check_hlds.stratify.mh"

#line 52 "check_hlds.stratify.c"
#line 53 "check_hlds.stratify.c"
#ifndef CHECK_HLDS__STRATIFY_DECL_GUARD
#define CHECK_HLDS__STRATIFY_DECL_GUARD

#line 57 "check_hlds.stratify.c"
#line 58 "check_hlds.stratify.c"

#endif
#line 61 "check_hlds.stratify.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__stratify__type_ctor_info_call_map_0,
	mercury_data_check_hlds__stratify__type_ctor_info_calls_higher_order_0,
	mercury_data_check_hlds__stratify__type_ctor_info_error_or_warning_0,
	mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0,
	mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0,
	mercury_data_check_hlds__stratify__type_ctor_info_ho_map_0;
MR_decl_label9(check_hlds__stratify__check_stratification_4_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label5(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0, 18,3,4,6,7)
MR_decl_label3(check_hlds__stratify__first_order_check_cases_8_0, 10,3,4)
MR_decl_label10(check_hlds__stratify__first_order_check_goal_8_0, 125,3,10,12,13,7,8,5,16,22)
MR_decl_label10(check_hlds__stratify__first_order_check_goal_8_0, 24,25,19,20,17,28,30,32,34,35)
MR_decl_label7(check_hlds__stratify__first_order_check_goal_8_0, 33,38,37,46,45,48,43)
MR_decl_label3(check_hlds__stratify__first_order_check_goals_8_0, 10,3,4)
MR_decl_label7(check_hlds__stratify__first_order_check_scc_2_6_0, 14,3,4,5,6,7,8)
MR_decl_label8(check_hlds__stratify__first_order_check_sccs_6_0, 27,3,5,6,9,10,4,11)
MR_decl_label6(fn__check_hlds__stratify__generate_stratify_error_5_0, 2,8,9,11,10,20)
MR_decl_label3(__Unify___check_hlds__stratify__higher_order_info_0_0, 4,6,1)
MR_decl_label4(__Compare___check_hlds__stratify__higher_order_info_0_0, 3,2,5,21)
MR_decl_static(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0)
MR_decl_static(fn__check_hlds__stratify__generate_stratify_error_5_0)
MR_decl_static(check_hlds__stratify__first_order_check_goal_8_0)
MR_decl_static(check_hlds__stratify__first_order_check_goals_8_0)
MR_decl_static(check_hlds__stratify__first_order_check_cases_8_0)
MR_decl_static(check_hlds__stratify__first_order_check_scc_2_6_0)
MR_decl_static(check_hlds__stratify__first_order_check_sccs_6_0)
MR_def_extern_entry(check_hlds__stratify__check_stratification_4_0)
MR_decl_static(check_hlds__stratify__get_proc_id_2_0)
MR_decl_static(__Unify___check_hlds__stratify__call_map_0_0)
MR_decl_static(__Compare___check_hlds__stratify__call_map_0_0)
MR_decl_static(__Unify___check_hlds__stratify__calls_higher_order_0_0)
MR_decl_static(__Compare___check_hlds__stratify__calls_higher_order_0_0)
MR_decl_static(__Unify___check_hlds__stratify__error_or_warning_0_0)
MR_decl_static(__Compare___check_hlds__stratify__error_or_warning_0_0)
MR_decl_static(__Unify___check_hlds__stratify__higher_order_info_0_0)
MR_decl_static(__Compare___check_hlds__stratify__higher_order_info_0_0)
MR_decl_static(__Unify___check_hlds__stratify__ho_in_out_0_0)
MR_decl_static(__Compare___check_hlds__stratify__ho_in_out_0_0)
MR_decl_static(__Unify___check_hlds__stratify__ho_map_0_0)
MR_decl_static(__Compare___check_hlds__stratify__ho_map_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(check_hlds__stratify__get_proc_id_2_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[8] =
{
{
4,
MR_string_const("In", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("error:", 6)
},
{
4,
MR_string_const("warning:", 8)
},
{
4,
MR_string_const("bottom-up evaluation of the predicate/function.", 47)
},
{
4,
MR_string_const("itself negatively. This can cause problems for", 46)
},
{
4,
MR_string_const("of the given predicate/function that allows it to call", 54)
},
{
4,
MR_string_const("A non-stratified loop is a loop in the call graph", 49)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
{
MR_TAG_COMMON(3,2,0),
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
MR_TAG_COMMON(3,2,1),
MR_TAG_COMMON(1,3,1)
}
},
{
{
MR_TAG_COMMON(3,2,4),
MR_TAG_COMMON(1,3,1)
}
},
{
{
MR_TAG_COMMON(3,2,5),
MR_TAG_COMMON(1,3,3)
}
},
{
{
MR_TAG_COMMON(3,2,6),
MR_TAG_COMMON(1,3,4)
}
},
{
{
MR_TAG_COMMON(3,2,7),
MR_TAG_COMMON(1,3,5)
}
},
{
{
MR_TAG_COMMON(2,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_TAG_COMMON(1,3,6)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_call_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__call_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__call_map_0_0)),
	"check_hlds.stratify",
	"call_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
	"does_not_calls_higher_order",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
	"calls_higher_order",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_value_ordered_calls_higher_order_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0,
	&mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_name_ordered_calls_higher_order_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1,
	&mercury_data_check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0
};

const MR_Integer mercury_data_check_hlds__stratify__functor_number_map_calls_higher_order_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_calls_higher_order_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__calls_higher_order_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__calls_higher_order_0_0)),
	"check_hlds.stratify",
	"calls_higher_order",
	{ (void *)mercury_data_check_hlds__stratify__enum_name_ordered_calls_higher_order_0 },
	{ (void *)mercury_data_check_hlds__stratify__enum_value_ordered_calls_higher_order_0 },
	2,
	4,
	mercury_data_check_hlds__stratify__functor_number_map_calls_higher_order_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_0 = {
	"is_error",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_1 = {
	"is_warning",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_value_ordered_error_or_warning_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
	&mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_name_ordered_error_or_warning_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
	&mercury_data_check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

const MR_Integer mercury_data_check_hlds__stratify__functor_number_map_error_or_warning_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__error_or_warning_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__error_or_warning_0_0)),
	"check_hlds.stratify",
	"error_or_warning",
	{ (void *)mercury_data_check_hlds__stratify__enum_name_ordered_error_or_warning_0 },
	{ (void *)mercury_data_check_hlds__stratify__enum_value_ordered_error_or_warning_0 },
	2,
	4,
	mercury_data_check_hlds__stratify__functor_number_map_error_or_warning_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__stratify__field_types_higher_order_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__stratify__du_functor_desc_higher_order_info_0_0 = {
	"ho_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__stratify__field_types_higher_order_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__stratify__du_stag_ordered_higher_order_info_0_0[] = {
	&mercury_data_check_hlds__stratify__du_functor_desc_higher_order_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__stratify__du_ptag_ordered_higher_order_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__stratify__du_stag_ordered_higher_order_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__stratify__du_name_ordered_higher_order_info_0[] = {
	&mercury_data_check_hlds__stratify__du_functor_desc_higher_order_info_0_0
};

const MR_Integer mercury_data_check_hlds__stratify__functor_number_map_higher_order_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__higher_order_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__higher_order_info_0_0)),
	"check_hlds.stratify",
	"higher_order_info",
	{ (void *)mercury_data_check_hlds__stratify__du_name_ordered_higher_order_info_0 },
	{ (void *)mercury_data_check_hlds__stratify__du_ptag_ordered_higher_order_info_0 },
	1,
	4,
	mercury_data_check_hlds__stratify__functor_number_map_higher_order_info_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
	"ho_in",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
	"ho_out",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
	"ho_in_out",
	2
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
	"ho_none",
	3
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_value_ordered_ho_in_out_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_1,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_3
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__stratify__enum_name_ordered_ho_in_out_0[] = {
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_3,
	&mercury_data_check_hlds__stratify__enum_functor_desc_ho_in_out_0_1
};

const MR_Integer mercury_data_check_hlds__stratify__functor_number_map_ho_in_out_0[] = {
	0,
	3,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__ho_in_out_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__ho_in_out_0_0)),
	"check_hlds.stratify",
	"ho_in_out",
	{ (void *)mercury_data_check_hlds__stratify__enum_name_ordered_ho_in_out_0 },
	{ (void *)mercury_data_check_hlds__stratify__enum_value_ordered_ho_in_out_0 },
	4,
	4,
	mercury_data_check_hlds__stratify__functor_number_map_ho_in_out_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_higher_order_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__stratify__type_ctor_info_ho_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__stratify__ho_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__stratify__ho_map_0_0)),
	"check_hlds.stratify",
	"ho_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_higher_order_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.stratify",
"check_hlds.stratify",
"get_proc_id",
2,
0
},
"check_hlds.stratify",
"stratify.m",
110,
"11"
};


MR_decl_entry(set__to_sorted_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(check_hlds__stratify_module0)
	MR_init_entry1(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__dep_sets_to_lists_and_sets_3_0);
	MR_init_label5(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dep_sets_to_lists_and_sets'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_i4);
MR_def_label(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_i6);
MR_def_label(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_i7);
MR_def_label(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__stratify_module1)
	MR_init_entry1(fn__check_hlds__stratify__generate_stratify_error_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__stratify__generate_stratify_error_5_0);
	MR_init_label6(fn__check_hlds__stratify__generate_stratify_error_5_0,2,8,9,11,10,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_stratify_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__stratify__generate_stratify_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		fn__check_hlds__stratify__generate_stratify_error_5_0_i2);
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,3,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__stratify__generate_stratify_error_5_0_i8);
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__stratify__generate_stratify_error_5_0_i9);
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__stratify__generate_stratify_error_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__check_hlds__stratify__generate_stratify_error_5_0_i10);
	}
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 1);
	}
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__stratify__generate_stratify_error_5_0_i20);
MR_def_label(fn__check_hlds__stratify__generate_stratify_error_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,7);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__stratify_module2)
	MR_init_entry1(check_hlds__stratify__first_order_check_goal_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__first_order_check_goal_8_0);
	MR_init_label10(check_hlds__stratify__first_order_check_goal_8_0,125,3,10,12,13,7,8,5,16,22)
	MR_init_label10(check_hlds__stratify__first_order_check_goal_8_0,24,25,19,20,17,28,30,32,34,35)
	MR_init_label7(check_hlds__stratify__first_order_check_goal_8_0,33,38,37,46,45,48,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_order_check_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__first_order_check_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	continue;
	}
	break;
	} /* end while */
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_tempr2, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i8);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__stratify__first_order_check_goal_8_0_i10);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__stratify__first_order_check_goal_8_0_i12);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("call introduces a non-stratified loop.", 38);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__stratify__generate_stratify_error_5_0,
		check_hlds__stratify__first_order_check_goal_8_0_i13);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(1);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i16);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i20);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__stratify__first_order_check_goal_8_0_i22);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i19);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__stratify__first_order_check_goal_8_0_i24);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("call introduces a non-stratified loop.", 38);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__stratify__generate_stratify_error_5_0,
		check_hlds__stratify__first_order_check_goal_8_0_i25);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(1);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,2)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r8, 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__stratify__first_order_check_goals_8_0);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,3)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i30);
	}
	MR_r1 = MR_tfield(3, MR_r8, 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__stratify__first_order_check_goals_8_0);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i32);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,6)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i33);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_goal_8_0_i34);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_goal_8_0_i35);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i125);
	}
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,5)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r8;
	MR_r9 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i38);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i38);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i125);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r8,3,7)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r8, 1);
	MR_r9 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i45);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 5);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_goal_8_0_i46);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__stratify__first_order_check_goals_8_0);
	}
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,2)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i48);
	}
	MR_r1 = MR_tfield(2, MR_r9, 2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_goal_8_0_i125);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.stratify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.stratify.first_order_check_goal\'/8", 56);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__stratify__first_order_check_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r8, 3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__stratify__first_order_check_cases_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module3)
	MR_init_entry1(check_hlds__stratify__first_order_check_goals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__first_order_check_goals_8_0);
	MR_init_label3(check_hlds__stratify__first_order_check_goals_8_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_order_check_goals'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__first_order_check_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__first_order_check_goals_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_goals_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__stratify__first_order_check_goals_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_goals_8_0_i4);
MR_def_label(check_hlds__stratify__first_order_check_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_goals_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module4)
	MR_init_entry1(check_hlds__stratify__first_order_check_cases_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__first_order_check_cases_8_0);
	MR_init_label3(check_hlds__stratify__first_order_check_cases_8_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_order_check_cases'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__first_order_check_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__first_order_check_cases_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_cases_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__stratify__first_order_check_cases_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_cases_8_0_i4);
MR_def_label(check_hlds__stratify__first_order_check_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_cases_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);

MR_BEGIN_MODULE(check_hlds__stratify_module5)
	MR_init_entry1(check_hlds__stratify__first_order_check_scc_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__first_order_check_scc_2_6_0);
	MR_init_label7(check_hlds__stratify__first_order_check_scc_2_6_0,14,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_order_check_scc_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__first_order_check_scc_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_scc_2_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__stratify__first_order_check_scc_2_6_0_i4);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__stratify__first_order_check_scc_2_6_0_i5);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__stratify__first_order_check_scc_2_6_0_i6);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__stratify__first_order_check_scc_2_6_0_i7);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_goal_8_0,
		check_hlds__stratify__first_order_check_scc_2_6_0_i8);
MR_def_label(check_hlds__stratify__first_order_check_scc_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_scc_2_6_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__intersect_3_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(check_hlds__stratify_module6)
	MR_init_entry1(check_hlds__stratify__first_order_check_sccs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__first_order_check_sccs_6_0);
	MR_init_label8(check_hlds__stratify__first_order_check_sccs_6_0,27,3,5,6,9,10,4,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_order_check_sccs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__first_order_check_sccs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		check_hlds__stratify__first_order_check_sccs_6_0_i5);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__stratify__first_order_check_sccs_6_0_i6);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i4);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i27);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_scc_2_6_0,
		check_hlds__stratify__first_order_check_sccs_6_0_i10);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i27);
	}
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_scc_2_6_0,
		check_hlds__stratify__first_order_check_sccs_6_0_i11);
MR_def_label(check_hlds__stratify__first_order_check_sccs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__stratify__first_order_check_sccs_6_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_dependency_info_2_0);
MR_decl_entry(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0);
MR_decl_entry(digraph__atsort_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_stratified_preds_2_0);

MR_BEGIN_MODULE(check_hlds__stratify_module7)
	MR_init_entry1(check_hlds__stratify__check_stratification_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__check_stratification_4_0);
	MR_init_label9(check_hlds__stratify__check_stratification_4_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_stratification'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__stratify__check_stratification_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_0,
		check_hlds__stratify__check_stratification_4_0_i2);
MR_def_label(check_hlds__stratify__check_stratification_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_dependency_info_2_0,
		check_hlds__stratify__check_stratification_4_0_i3);
MR_def_label(check_hlds__stratify__check_stratification_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_0,
		check_hlds__stratify__check_stratification_4_0_i4);
MR_def_label(check_hlds__stratify__check_stratification_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__atsort_2_0,
		check_hlds__stratify__check_stratification_4_0_i5);
MR_def_label(check_hlds__stratify__check_stratification_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__stratify__dep_sets_to_lists_and_sets_3_0,
		check_hlds__stratify__check_stratification_4_0_i6);
MR_def_label(check_hlds__stratify__check_stratification_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__stratify__check_stratification_4_0_i7);
MR_def_label(check_hlds__stratify__check_stratification_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__stratify__check_stratification_4_0_i8);
MR_def_label(check_hlds__stratify__check_stratification_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_stratified_preds_2_0,
		check_hlds__stratify__check_stratification_4_0_i9);
MR_def_label(check_hlds__stratify__check_stratification_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__stratify__first_order_check_sccs_6_0,
		check_hlds__stratify__check_stratification_4_0_i10);
MR_def_label(check_hlds__stratify__check_stratification_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module8)
	MR_init_entry1(check_hlds__stratify__get_proc_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__stratify__get_proc_id_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__stratify__get_proc_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__stratify_module9)
	MR_init_entry1(__Unify___check_hlds__stratify__call_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__call_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__call_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,8);
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

MR_BEGIN_MODULE(check_hlds__stratify_module10)
	MR_init_entry1(__Compare___check_hlds__stratify__call_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__call_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__call_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module11)
	MR_init_entry1(__Unify___check_hlds__stratify__calls_higher_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__calls_higher_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__calls_higher_order_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__stratify_module12)
	MR_init_entry1(__Compare___check_hlds__stratify__calls_higher_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__calls_higher_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__calls_higher_order_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module13)
	MR_init_entry1(__Unify___check_hlds__stratify__error_or_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__error_or_warning_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__error_or_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module14)
	MR_init_entry1(__Compare___check_hlds__stratify__error_or_warning_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__error_or_warning_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__error_or_warning_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__stratify_module15)
	MR_init_entry1(__Unify___check_hlds__stratify__higher_order_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__higher_order_info_0_0);
	MR_init_label3(__Unify___check_hlds__stratify__higher_order_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__higher_order_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__stratify__higher_order_info_0_0_i6);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___check_hlds__stratify__higher_order_info_0_0_i4);
MR_def_label(__Unify___check_hlds__stratify__higher_order_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__stratify__higher_order_info_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__stratify__higher_order_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__stratify__higher_order_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(check_hlds__stratify_module16)
	MR_init_entry1(__Compare___check_hlds__stratify__higher_order_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__higher_order_info_0_0);
	MR_init_label4(__Compare___check_hlds__stratify__higher_order_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__higher_order_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__stratify__higher_order_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__stratify__higher_order_info_0_0_i2);
MR_def_label(__Compare___check_hlds__stratify__higher_order_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__stratify__higher_order_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___check_hlds__stratify__higher_order_info_0_0_i5);
MR_def_label(__Compare___check_hlds__stratify__higher_order_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__stratify__higher_order_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__stratify__higher_order_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module17)
	MR_init_entry1(__Unify___check_hlds__stratify__ho_in_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__ho_in_out_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__ho_in_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module18)
	MR_init_entry1(__Compare___check_hlds__stratify__ho_in_out_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__ho_in_out_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__ho_in_out_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module19)
	MR_init_entry1(__Unify___check_hlds__stratify__ho_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__stratify__ho_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__stratify__ho_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__stratify, higher_order_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__stratify_module20)
	MR_init_entry1(__Compare___check_hlds__stratify__ho_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__stratify__ho_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__stratify__ho_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__stratify, higher_order_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__stratify_maybe_bunch_0(void)
{
	check_hlds__stratify_module0();
	check_hlds__stratify_module1();
	check_hlds__stratify_module2();
	check_hlds__stratify_module3();
	check_hlds__stratify_module4();
	check_hlds__stratify_module5();
	check_hlds__stratify_module6();
	check_hlds__stratify_module7();
	check_hlds__stratify_module8();
	check_hlds__stratify_module9();
	check_hlds__stratify_module10();
	check_hlds__stratify_module11();
	check_hlds__stratify_module12();
	check_hlds__stratify_module13();
	check_hlds__stratify_module14();
	check_hlds__stratify_module15();
	check_hlds__stratify_module16();
	check_hlds__stratify_module17();
	check_hlds__stratify_module18();
	check_hlds__stratify_module19();
	check_hlds__stratify_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__stratify__init(void);
void mercury__check_hlds__stratify__init_type_tables(void);
void mercury__check_hlds__stratify__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__stratify__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__stratify__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__stratify__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__stratify__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__stratify_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_call_map_0,
		check_hlds__stratify__call_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_calls_higher_order_0,
		check_hlds__stratify__calls_higher_order_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_error_or_warning_0,
		check_hlds__stratify__error_or_warning_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0,
		check_hlds__stratify__higher_order_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0,
		check_hlds__stratify__ho_in_out_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__stratify__type_ctor_info_ho_map_0,
		check_hlds__stratify__ho_map_0_0);
	mercury__check_hlds__stratify__init_debugger();
}

void mercury__check_hlds__stratify__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_call_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_calls_higher_order_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_error_or_warning_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_higher_order_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_ho_in_out_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__stratify__type_ctor_info_ho_map_0);
	}
}


void mercury__check_hlds__stratify__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__stratify__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__stratify);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__stratify__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__stratify__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
