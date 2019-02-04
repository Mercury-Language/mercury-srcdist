/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__try_expand__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.try_expand.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.try_expand.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.try_expand.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.try_expand.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.try_expand.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.try_expand.c"
#line 48 "check_hlds.try_expand.c"
#include "check_hlds.try_expand.mh"

#line 51 "check_hlds.try_expand.c"
#line 52 "check_hlds.try_expand.c"
#ifndef CHECK_HLDS__TRY_EXPAND_DECL_GUARD
#define CHECK_HLDS__TRY_EXPAND_DECL_GUARD

#line 56 "check_hlds.try_expand.c"
#line 57 "check_hlds.try_expand.c"

#endif
#line 60 "check_hlds.try_expand.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__try_expand__type_ctor_info_trys_info_0;
MR_decl_label8(check_hlds__try_expand__expand_try_goal_5_0, 2,3,4,5,7,8,6,10)
MR_decl_label6(check_hlds__try_expand__expand_try_goal_5_0, 11,12,15,22,17,19)
MR_decl_label8(check_hlds__try_expand__expand_try_goal_2_15_0, 2,4,5,7,11,12,13,14)
MR_decl_label8(check_hlds__try_expand__expand_try_goal_2_15_0, 17,16,18,20,23,25,27,28)
MR_decl_label8(check_hlds__try_expand__expand_try_goal_2_15_0, 31,32,33,35,37,38,40,41)
MR_decl_label8(check_hlds__try_expand__expand_try_goal_2_15_0, 42,43,48,49,51,54,62,72)
MR_decl_label3(check_hlds__try_expand__expand_try_goals_in_cases_5_0, 15,4,5)
MR_decl_label5(check_hlds__try_expand__expand_try_goals_in_conj_5_0, 16,4,5,6,7)
MR_decl_label8(check_hlds__try_expand__expand_try_goals_in_goal_5_0, 132,5,133,9,136,13,135,17)
MR_decl_label8(check_hlds__try_expand__expand_try_goals_in_goal_5_0, 20,137,138,34,95,41,60,141)
MR_decl_label6(check_hlds__try_expand__expand_try_goals_in_goal_5_0, 69,140,63,64,134,76)
MR_decl_label5(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0, 2,3,4,5,6)
MR_decl_label8(check_hlds__try_expand__expand_try_goals_in_module_4_0, 2,4,5,7,8,9,10,13)
MR_decl_label4(check_hlds__try_expand__expand_try_goals_in_module_4_0, 14,15,16,3)
MR_decl_label2(check_hlds__try_expand__expand_try_goals_in_pred_5_0, 2,3)
MR_decl_label8(check_hlds__try_expand__expand_try_goals_in_proc_6_0, 2,3,4,6,8,9,10,11)
MR_decl_label8(check_hlds__try_expand__expand_try_goals_in_proc_6_0, 12,13,14,17,18,20,16,21)
MR_decl_label1(check_hlds__try_expand__expand_try_goals_in_proc_6_0, 22)
MR_decl_label8(check_hlds__try_expand__extract_from_succeeded_goal_5_0, 16,17,20,21,22,19,24,25)
MR_decl_label8(check_hlds__try_expand__extract_from_succeeded_goal_5_0, 13,31,37,38,41,40,44,1)
MR_decl_label8(check_hlds__try_expand__extract_intermediate_goal_parts_7_0, 10,14,17,18,19,21,22,2)
MR_decl_label6(check_hlds__try_expand__lookup_case_goal_3_0, 26,5,4,3,10,11)
MR_decl_label8(check_hlds__try_expand__make_output_tuple_inst_cast_4_0, 6,7,4,10,11,16,17,3)
MR_decl_label1(check_hlds__try_expand__make_output_tuple_inst_cast_4_0, 20)
MR_decl_label8(check_hlds__try_expand__make_try_call_13_0, 2,3,4,5,11,12,13,14)
MR_decl_label5(check_hlds__try_expand__make_try_call_13_0, 15,16,18,24,25)
MR_decl_label8(check_hlds__try_expand__make_try_lambda_8_0, 2,4,6,11,8,18,19,23)
MR_decl_label8(check_hlds__try_expand__make_try_lambda_8_0, 24,25,29,32,33,34,35,36)
MR_decl_label8(check_hlds__try_expand__make_try_lambda_8_0, 37,38,39,40,41,42,43,44)
MR_decl_label3(check_hlds__try_expand__make_try_lambda_8_0, 46,48,50)
MR_decl_label3(check_hlds__try_expand__make_unreachable_call_2_0, 2,3,4)
MR_decl_label3(check_hlds__try_expand__try_expand_may_introduce_calls_2_0, 3,5,1)
MR_decl_label5(__Unify___check_hlds__try_expand__trys_info_0_0, 4,6,8,10,1)
MR_decl_label6(__Compare___check_hlds__try_expand__trys_info_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(check_hlds__try_expand__expand_try_goals_in_module_4_0)
MR_def_extern_entry(check_hlds__try_expand__try_expand_may_introduce_calls_2_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_pred_5_0)
MR_decl_static(fn__check_hlds__try_expand__this_file_0_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_disj_5_0)
MR_decl_static(check_hlds__try_expand__make_try_lambda_8_0)
MR_decl_static(check_hlds__try_expand__make_try_call_13_0)
MR_decl_static(check_hlds__try_expand__make_output_tuple_inst_cast_4_0)
MR_decl_static(check_hlds__try_expand__expand_try_goal_2_15_0)
MR_decl_static(check_hlds__try_expand__make_unreachable_call_2_0)
MR_decl_static(check_hlds__try_expand__extract_from_succeeded_goal_5_0)
MR_decl_static(check_hlds__try_expand__lookup_case_goal_3_0)
MR_decl_static(check_hlds__try_expand__extract_intermediate_goal_parts_7_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_goal_5_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_conj_5_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_cases_5_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0)
MR_decl_static(check_hlds__try_expand__expand_try_goal_5_0)
MR_decl_static(check_hlds__try_expand__expand_try_goals_in_proc_6_0)
MR_decl_static(__Unify___check_hlds__try_expand__trys_info_0_0)
MR_decl_static(__Compare___check_hlds__try_expand__trys_info_0_0)
MR_decl_static(check_hlds__try_expand__IntroducedFrom__pred__update_changed_proc__335__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
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
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_module_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_disj_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__try_expand__type_ctor_info_trys_info_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_module_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_disj_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__try_expand, trys_info),
MR_CTOR0_ADDR(check_hlds__try_expand, trys_info)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(check_hlds__try_expand__expand_try_goals_in_pred_5_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_pred_5_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_pred_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_string_const("OutputTuple", 11)
},
{
MR_string_const("TryLambda", 9)
},
{
MR_string_const("try_expand", 10)
},
{
MR_string_const("TryIOOutput", 11)
},
{
MR_string_const("TmpOutputTuple", 14)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goal_5_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__try_expand__expand_try_goal_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_proc_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_proc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[8] =
{
{
0
},
{
1
},
{
4
},
{
5
},
{
4
},
{
5
},
{
0
},
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__try_expand__field_types_trys_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__try_expand__field_names_trys_info_0_0[] = {
	"ti_module_info",
	"ti_pred_info",
	"ti_proc_info",
	"ti_changed"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__try_expand__du_functor_desc_trys_info_0_0 = {
	"trys_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__try_expand__field_types_trys_info_0_0,
	mercury_data_check_hlds__try_expand__field_names_trys_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__try_expand__du_stag_ordered_trys_info_0_0[] = {
	&mercury_data_check_hlds__try_expand__du_functor_desc_trys_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__try_expand__du_ptag_ordered_trys_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__try_expand__du_stag_ordered_trys_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__try_expand__du_name_ordered_trys_info_0[] = {
	&mercury_data_check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

const MR_Integer mercury_data_check_hlds__try_expand__functor_number_map_trys_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__try_expand__type_ctor_info_trys_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__try_expand__trys_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__try_expand__trys_info_0_0)),
	"check_hlds.try_expand",
	"trys_info",
	{ (void *)mercury_data_check_hlds__try_expand__du_name_ordered_trys_info_0 },
	{ (void *)mercury_data_check_hlds__try_expand__du_ptag_ordered_trys_info_0 },
	1,
	4,
	mercury_data_check_hlds__try_expand__functor_number_map_trys_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_module_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.try_expand",
"check_hlds.try_expand",
"expand_try_goals_in_pred",
5,
0
},
"check_hlds.try_expand",
"try_expand.m",
262,
"d1;c6;t;q;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_pred_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.try_expand",
"check_hlds.try_expand",
"expand_try_goals_in_proc",
6,
0
},
"check_hlds.try_expand",
"try_expand.m",
280,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_disj_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.try_expand",
"check_hlds.try_expand",
"expand_try_goals_in_goal",
5,
0
},
"check_hlds.try_expand",
"try_expand.m",
447,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goal_5_0_1 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"var_is_bound_in_instmap_delta",
4,
0
},
"check_hlds.try_expand",
"try_expand.m",
778,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__try_expand__expand_try_goals_in_proc_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.try_expand",
"check_hlds.try_expand",
"lambda_try_expand_m_335",
2,
0
},
"check_hlds.try_expand",
"try_expand.m",
335,
"d1;c17;d2;c4;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(set__contains_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(check_hlds__det_report__disable_det_warnings_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_globals_3_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(check_hlds__det_report__restore_det_warnings_3_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module0)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_module_4_0);
	MR_init_label8(check_hlds__try_expand__expand_try_goals_in_module_4_0,2,4,5,7,8,9,10,13)
	MR_init_label4(check_hlds__try_expand__expand_try_goals_in_module_4_0,14,15,16,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__try_expand__expand_try_goals_in_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_module_4_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i7);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_report__disable_det_warnings_3_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i8);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i9);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i10);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i13);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i14);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__restore_det_warnings_3_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i15);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_globals_3_0,
		check_hlds__try_expand__expand_try_goals_in_module_4_0_i16);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module1)
	MR_init_entry1(check_hlds__try_expand__try_expand_may_introduce_calls_2_0);
	MR_init_label3(check_hlds__try_expand__try_expand_may_introduce_calls_2_0,3,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'try_expand_may_introduce_calls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__try_expand__try_expand_may_introduce_calls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__try_expand__try_expand_may_introduce_calls_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 2);
	MR_proceed();
MR_def_label(check_hlds__try_expand__try_expand_may_introduce_calls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("try_io", 6)) != 0)) {
		MR_GOTO_LAB(check_hlds__try_expand__try_expand_may_introduce_calls_2_0_i5);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 4);
	MR_proceed();
MR_def_label(check_hlds__try_expand__try_expand_may_introduce_calls_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unreachable", 11)) != 0)) {
		MR_GOTO_LAB(check_hlds__try_expand__try_expand_may_introduce_calls_2_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(check_hlds__try_expand__try_expand_may_introduce_calls_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(check_hlds__try_expand_module2)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_pred_5_0);
	MR_init_label2(check_hlds__try_expand__expand_try_goals_in_pred_5_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_pred'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_pred_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__try_expand__expand_try_goals_in_pred_5_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_pred_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__try_expand__expand_try_goals_in_pred_5_0_i3);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_pred_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__try_expand__expand_try_goals_in_proc_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, module_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module3)
	MR_init_entry1(fn__check_hlds__try_expand__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__try_expand__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("try_expand.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(check_hlds__try_expand_module4)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_disj_5_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__try_expand, trys_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_create_var_from_type_5_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__di_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__uo_mode_0_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(hlds__hlds_goal__construct_tuple_3_0);
MR_decl_entry(hlds__hlds_goal__conjoin_goals_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__goal_util__clone_variables_9_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module5)
	MR_init_entry1(check_hlds__try_expand__make_try_lambda_8_0);
	MR_init_label8(check_hlds__try_expand__make_try_lambda_8_0,2,4,6,11,8,18,19,23)
	MR_init_label8(check_hlds__try_expand__make_try_lambda_8_0,24,25,29,32,33,34,35,36)
	MR_init_label8(check_hlds__try_expand__make_try_lambda_8_0,37,38,39,40,41,42,43,44)
	MR_init_label3(check_hlds__try_expand__make_try_lambda_8_0,46,48,50)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_try_lambda'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__make_try_lambda_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__try_expand__make_try_lambda_8_0_i2);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i4);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__make_try_lambda_8_0_i6);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__make_try_lambda_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i11);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__make_try_lambda_8_0_i32);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(1, MR_sv(4), 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i18);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i19);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i23);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__di_mode_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i24);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__uo_mode_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i25);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__delete_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i29);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__make_try_lambda_8_0_i32);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__try_expand__make_try_lambda_8_0_i33);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_tuple_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i34);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goals_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i35);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__try_expand__make_try_lambda_8_0_i36);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__try_expand__make_try_lambda_8_0_i37);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__try_expand__make_try_lambda_8_0_i38);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i39);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r5 = MR_r3;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__clone_variables_9_0,
		check_hlds__try_expand__make_try_lambda_8_0_i40);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i41);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i42);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		check_hlds__try_expand__make_try_lambda_8_0_i43);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__try_expand__make_try_lambda_8_0_i44);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_tempr3);
	MR_r2 = MR_sv(6);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__try_expand__make_try_lambda_8_0_i46);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_tfield(2, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 8) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_try_lambda_8_0_i48);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__try_expand__make_try_lambda_8_0_i50);
MR_def_label(check_hlds__try_expand__make_try_lambda_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module6)
	MR_init_entry1(check_hlds__try_expand__make_try_call_13_0);
	MR_init_label8(check_hlds__try_expand__make_try_call_13_0,2,3,4,5,11,12,13,14)
	MR_init_label5(check_hlds__try_expand__make_try_call_13_0,15,16,18,24,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_try_call'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__make_try_call_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_r9;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__try_expand__make_try_call_13_0_i2);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_try_call_13_0_i3);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		check_hlds__try_expand__make_try_call_13_0_i4);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__try_expand__make_try_call_13_0_i5);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__try_expand__make_try_call_13_0_i11);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		check_hlds__try_expand__make_try_call_13_0_i12);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__try_expand__make_try_call_13_0_i13);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_try_call_13_0_i14);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 4;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__try_expand__make_try_call_13_0_i15);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__try_expand__make_try_call_13_0_i16);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__try_expand__make_try_call_13_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__try_expand__make_try_call_13_0_i24);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_sv(1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__try_expand__make_try_call_13_0_i24);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__try_expand__make_try_call_13_0_i25);
MR_def_label(check_hlds__try_expand__make_try_call_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);
MR_decl_entry(hlds__goal_util__generate_cast_with_insts_7_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module7)
	MR_init_entry1(check_hlds__try_expand__make_output_tuple_inst_cast_4_0);
	MR_init_label8(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,6,7,4,10,11,16,17,3)
	MR_init_label1(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,20)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_output_tuple_inst_cast'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__make_output_tuple_inst_cast_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i6);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i7);
	}
	MR_r3 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i10);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i3);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i11);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i16);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i17);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__goal_util__generate_cast_with_insts_7_0);
	}
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_output_tuple_inst_cast_4_0_i20);
MR_def_label(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_get_purity_1_0);
MR_decl_entry(fn__map__from_assoc_list_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_functor_4_0);
MR_decl_entry(hlds__instmap__instmap_lookup_vars_3_0);
MR_decl_entry(hlds__hlds_goal__deconstruct_tuple_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module8)
	MR_init_entry1(check_hlds__try_expand__expand_try_goal_2_15_0);
	MR_init_label8(check_hlds__try_expand__expand_try_goal_2_15_0,2,4,5,7,11,12,13,14)
	MR_init_label8(check_hlds__try_expand__expand_try_goal_2_15_0,17,16,18,20,23,25,27,28)
	MR_init_label8(check_hlds__try_expand__expand_try_goal_2_15_0,31,32,33,35,37,38,40,41)
	MR_init_label8(check_hlds__try_expand__expand_try_goal_2_15_0,42,43,48,49,51,54,62,72)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goal_2'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goal_2_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(13) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(11) = MR_tempr1;
	MR_sv(14) = MR_r11;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i7);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("exception_result", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i11);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i12);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__make_try_lambda_8_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i13);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_purity_1_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i14);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goal_2_15_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("try", 3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__make_try_call_13_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i17);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_sv(4);
	MR_sv(4) = MR_sv(6);
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i33);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i18);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i20);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("try_io", 6);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_sv(13);
	MR_r8 = MR_tempr4;
	MR_r9 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__make_try_call_13_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i23);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(16), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(16), 0) = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r3;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i25);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i27);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goals_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i28);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__from_assoc_list_1_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i31);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i32);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i33);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i35);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_create_var_from_type_5_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i37);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i38);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_functor_4_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i40);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_vars_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i41);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__make_output_tuple_inst_cast_4_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i42);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__deconstruct_tuple_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i43);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i48);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i49);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i51);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goal_2_15_0_i54);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr6 = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i72);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_failed_functor_0_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i62);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__try_expand__expand_try_goal_2_15_0_i72);
MR_def_label(check_hlds__try_expand__expand_try_goal_2_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module9)
	MR_init_entry1(check_hlds__try_expand__make_unreachable_call_2_0);
	MR_init_label3(check_hlds__try_expand__make_unreachable_call_2_0,2,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_unreachable_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__make_unreachable_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		check_hlds__try_expand__make_unreachable_call_2_0_i2);
MR_def_label(check_hlds__try_expand__make_unreachable_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__try_expand__make_unreachable_call_2_0_i3);
MR_def_label(check_hlds__try_expand__make_unreachable_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__make_unreachable_call_2_0_i4);
MR_def_label(check_hlds__try_expand__make_unreachable_call_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("unreachable", 11);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_goal__conjoin_goal_and_goal_list_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module10)
	MR_init_entry1(check_hlds__try_expand__extract_from_succeeded_goal_5_0);
	MR_init_label8(check_hlds__try_expand__extract_from_succeeded_goal_5_0,16,17,20,21,22,19,24,25)
	MR_init_label8(check_hlds__try_expand__extract_from_succeeded_goal_5_0,13,31,37,38,41,40,44,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'extract_from_succeeded_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__extract_from_succeeded_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr4 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_r2 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,2)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr3 = MR_ctfield(2, MR_tempr5, 0);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr6;
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i13);
	}
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr6, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i16);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i17);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i19);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_exception_module_0_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i20);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i21);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i22);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("unreachable", 11);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i24);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goal_and_goal_list_3_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i24);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goal_and_goal_list_3_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i25);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i1);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i31);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i31);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i31);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i31);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conjoin_goal_and_goal_list_3_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i41);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i37);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i38);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_from_succeeded_goal_5_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__try_expand__make_unreachable_call_2_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i41);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("try_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("find_subparts_2: Goal not erroneous", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__try_expand__extract_from_succeeded_goal_5_0_i44);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__try_expand__extract_from_succeeded_goal_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module11)
	MR_init_entry1(check_hlds__try_expand__lookup_case_goal_3_0);
	MR_init_label6(check_hlds__try_expand__lookup_case_goal_3_0,26,5,4,3,10,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'lookup_case_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__lookup_case_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__lookup_case_goal_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__try_expand__lookup_case_goal_3_0_i5);
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__try_expand__lookup_case_goal_3_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__lookup_case_goal_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__try_expand__lookup_case_goal_3_0_i26);
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_np_call_localret_ent(fn__string__string_1_0,
		check_hlds__try_expand__lookup_case_goal_3_0_i10);
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lookup_case_goal: couldn\'t find ", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__try_expand__lookup_case_goal_3_0_i11);
MR_def_label(check_hlds__try_expand__lookup_case_goal_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("try_expand.m", 12);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module12)
	MR_init_entry1(check_hlds__try_expand__extract_intermediate_goal_parts_7_0);
	MR_init_label8(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,10,14,17,18,19,21,22,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'extract_intermediate_goal_parts'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__extract_intermediate_goal_parts_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr3 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i10);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i14);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_succeeded_functor_0_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i17);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__lookup_case_goal_3_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i18);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__extract_from_succeeded_goal_5_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i19);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__exception_exception_functor_0_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i21);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__lookup_case_goal_3_0,
		check_hlds__try_expand__extract_intermediate_goal_parts_7_0_i22);
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("try_expand.m", 12);
	MR_r2 = (MR_Word) MR_string_const("find_subparts: unexpected goal form", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module13)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_goal_5_0);
	MR_init_label8(check_hlds__try_expand__expand_try_goals_in_goal_5_0,132,5,133,9,136,13,135,17)
	MR_init_label8(check_hlds__try_expand__expand_try_goals_in_goal_5_0,20,137,138,34,95,41,60,141)
	MR_init_label6(check_hlds__try_expand__expand_try_goals_in_goal_5_0,69,140,63,64,134,76)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i95);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i95) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i132) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i133) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i134) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i135) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i136) MR_AND
		MR_LABEL_AP(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i60));
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_conj_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_disj_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i9);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr2, 3);
	MR_r4 = MR_ctfield(3, MR_r4, 4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i13);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i17);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i137);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 0);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i137);
	}
	if (MR_INT_EQ(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i138);
	}
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i34);
	}
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i41);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_r5;
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i41);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r5, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i137);
	}
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i140);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_goal_5_0_i141);
	}
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__try_expand__expand_try_goal_5_0);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__try_expand__this_file_0_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i69);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("expand_try_goals_in_goal: bi_implication", 40);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 6);
	MR_r2 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i63);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_disj_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i64);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_cases_5_0,
		check_hlds__try_expand__expand_try_goals_in_goal_5_0_i76);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_goal_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module14)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_conj_5_0);
	MR_init_label5(check_hlds__try_expand__expand_try_goals_in_conj_5_0,16,4,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_conj_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__try_expand__expand_try_goals_in_conj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_conj_5_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__try_expand__expand_try_goals_in_conj_5_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__try_expand__expand_try_goals_in_conj_5_0_i6);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_conj_5_0,
		check_hlds__try_expand__expand_try_goals_in_conj_5_0_i7);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module15)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_cases_5_0);
	MR_init_label3(check_hlds__try_expand__expand_try_goals_in_cases_5_0,15,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_cases_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__try_expand__expand_try_goals_in_cases_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_cases_5_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__try_expand__expand_try_goals_in_cases_5_0,
		check_hlds__try_expand__expand_try_goals_in_cases_5_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module16)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0);
	MR_init_label5(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,2,3,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_if_then_else'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0_i3);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0_i6);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_if_then_else_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(hlds__instmap__var_is_bound_in_instmap_delta_4_0);
MR_decl_entry(fn__set__filter_2_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module17)
	MR_init_entry1(check_hlds__try_expand__expand_try_goal_5_0);
	MR_init_label8(check_hlds__try_expand__expand_try_goal_5_0,2,3,4,5,7,8,6,10)
	MR_init_label6(check_hlds__try_expand__expand_try_goal_5_0,11,12,15,22,17,19)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__extract_intermediate_goal_parts_7_0,
		check_hlds__try_expand__expand_try_goal_5_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goal_5_0_i3);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__try_expand__expand_try_goal_5_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goal_5_0_i5);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goal_5_0_i7);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(check_hlds__try_expand__expand_try_goal_5_0_i6);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goal_5_0_i8);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goal_5_0_i10);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(9) = MR_tempr2;
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__try_expand__expand_try_goal_5_0_i11);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__try_expand__expand_try_goal_5_0_i12);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__var_is_bound_in_instmap_delta_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		check_hlds__try_expand__expand_try_goal_5_0_i15);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goal_5_0_i17);
	}
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_sv(9);
	MR_r11 = MR_ctfield(0, MR_tempr2, 0);
	MR_r9 = MR_ctfield(0, MR_tempr2, 1);
	MR_r10 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goal_2_15_0,
		check_hlds__try_expand__expand_try_goal_5_0_i19);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_ctfield(1, MR_sv(2), 0), 1);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		check_hlds__try_expand__expand_try_goal_5_0_i22);
MR_def_label(check_hlds__try_expand__expand_try_goal_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(check_hlds__modes__modecheck_proc_6_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(check_hlds__det_analysis__determinism_check_proc_5_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module18)
	MR_init_entry1(check_hlds__try_expand__expand_try_goals_in_proc_6_0);
	MR_init_label8(check_hlds__try_expand__expand_try_goals_in_proc_6_0,2,3,4,6,8,9,10,11)
	MR_init_label8(check_hlds__try_expand__expand_try_goals_in_proc_6_0,12,13,14,17,18,20,16,21)
	MR_init_label1(check_hlds__try_expand__expand_try_goals_in_proc_6_0,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'expand_try_goals_in_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__expand_try_goals_in_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i2);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i3);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i4);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__try_expand__expand_try_goals_in_goal_5_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i6);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_proc_6_0_i8);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i9);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i10);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i11);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_6_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i12);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i13);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i14);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__try_expand__expand_try_goals_in_proc_6_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_analysis__determinism_check_proc_5_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i17);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i18);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__try_expand__IntroducedFrom__pred__update_changed_proc__335__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("try_expand.m", 12);
	MR_r3 = (MR_Word) MR_string_const("determinism check fails when repeated", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i20);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i22);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i21);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0,
		check_hlds__try_expand__expand_try_goals_in_proc_6_0_i22);
MR_def_label(check_hlds__try_expand__expand_try_goals_in_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module19)
	MR_init_entry1(__Unify___check_hlds__try_expand__trys_info_0_0);
	MR_init_label5(__Unify___check_hlds__try_expand__trys_info_0_0,4,6,8,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__try_expand__trys_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__try_expand__trys_info_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__try_expand__trys_info_0_0_i4);
MR_def_label(__Unify___check_hlds__try_expand__trys_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__try_expand__trys_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_info_0_0,
		__Unify___check_hlds__try_expand__trys_info_0_0_i6);
MR_def_label(__Unify___check_hlds__try_expand__trys_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__try_expand__trys_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		__Unify___check_hlds__try_expand__trys_info_0_0_i8);
MR_def_label(__Unify___check_hlds__try_expand__trys_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__try_expand__trys_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___check_hlds__try_expand__trys_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__try_expand__trys_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__try_expand_module20)
	MR_init_entry1(__Compare___check_hlds__try_expand__trys_info_0_0);
	MR_init_label6(__Compare___check_hlds__try_expand__trys_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__try_expand__trys_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__try_expand__trys_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__try_expand__trys_info_0_0_i2);
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__try_expand__trys_info_0_0_i5);
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__try_expand__trys_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_info_0_0,
		__Compare___check_hlds__try_expand__trys_info_0_0_i9);
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__try_expand__trys_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__proc_info_0_0,
		__Compare___check_hlds__try_expand__trys_info_0_0_i13);
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__try_expand__trys_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__try_expand__trys_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__try_expand_module21)
	MR_init_entry1(check_hlds__try_expand__IntroducedFrom__pred__update_changed_proc__335__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_changed_proc__335__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__try_expand__IntroducedFrom__pred__update_changed_proc__335__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__try_expand_maybe_bunch_0(void)
{
	check_hlds__try_expand_module0();
	check_hlds__try_expand_module1();
	check_hlds__try_expand_module2();
	check_hlds__try_expand_module3();
	check_hlds__try_expand_module4();
	check_hlds__try_expand_module5();
	check_hlds__try_expand_module6();
	check_hlds__try_expand_module7();
	check_hlds__try_expand_module8();
	check_hlds__try_expand_module9();
	check_hlds__try_expand_module10();
	check_hlds__try_expand_module11();
	check_hlds__try_expand_module12();
	check_hlds__try_expand_module13();
	check_hlds__try_expand_module14();
	check_hlds__try_expand_module15();
	check_hlds__try_expand_module16();
	check_hlds__try_expand_module17();
	check_hlds__try_expand_module18();
	check_hlds__try_expand_module19();
	check_hlds__try_expand_module20();
	check_hlds__try_expand_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__try_expand__init(void);
void mercury__check_hlds__try_expand__init_type_tables(void);
void mercury__check_hlds__try_expand__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__try_expand__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__try_expand__init_complexity_procs(void);
#endif

void mercury__check_hlds__try_expand__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__try_expand_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__try_expand__type_ctor_info_trys_info_0,
		check_hlds__try_expand__trys_info_0_0);
	mercury__check_hlds__try_expand__init_debugger();
}

void mercury__check_hlds__try_expand__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__try_expand__type_ctor_info_trys_info_0);
	}
}


void mercury__check_hlds__try_expand__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__try_expand__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__try_expand);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__try_expand__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
