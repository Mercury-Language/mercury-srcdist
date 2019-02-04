/*
** Automatically generated from `implicit_parallelism.m'
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
INIT mercury__transform_hlds__implicit_parallelism__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.implicit_parallelism.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.implicit_parallelism.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.implicit_parallelism.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.implicit_parallelism.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.implicit_parallelism.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "transform_hlds.implicit_parallelism.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "transform_hlds.implicit_parallelism.c"
#line 52 "transform_hlds.implicit_parallelism.c"
#include "transform_hlds.implicit_parallelism.mh"

#line 55 "transform_hlds.implicit_parallelism.c"
#line 56 "transform_hlds.implicit_parallelism.c"
#ifndef TRANSFORM_HLDS__IMPLICIT_PARALLELISM_DECL_GUARD
#define TRANSFORM_HLDS__IMPLICIT_PARALLELISM_DECL_GUARD

#line 60 "transform_hlds.implicit_parallelism.c"
#line 61 "transform_hlds.implicit_parallelism.c"

#endif
#line 64 "transform_hlds.implicit_parallelism.c"

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

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0,
	mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0;
MR_decl_label8(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0, 5,6,7,8,9,10,11,12)
MR_decl_label1(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0, 2)
MR_decl_label8(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0, 2,5,8,10,15,19,21,20)
MR_decl_label8(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0, 17,9,7,28,29,32,31,34)
MR_decl_label5(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0, 4,37,38,39,40)
MR_decl_label8(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0, 70,2,3,4,9,40,5,16)
MR_decl_label8(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0, 14,19,21,22,24,26,23,27)
MR_decl_label2(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0, 17,31)
MR_decl_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 12,15,16,2,19,20,21,22)
MR_decl_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 23,24,25,26,27,30,31,17)
MR_decl_label3(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0, 36,37,32)
MR_decl_label2(transform_hlds__implicit_parallelism__get_callees_feedback_4_0, 4,3)
MR_decl_label5(transform_hlds__implicit_parallelism__get_number_args_2_0, 11,49,4,6,1)
MR_decl_label6(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0, 2,3,4,5,8,1)
MR_decl_label5(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0, 4,6,40,9,1)
MR_decl_label1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0, 3)
MR_decl_label5(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0, 27,4,3,5,1)
MR_decl_label8(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0, 2,3,4,5,19,15,12,10)
MR_decl_label8(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0, 8,24,26,29,30,50,23,1)
MR_decl_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 11,15,13,9,5,18,19,20)
MR_decl_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 23,25,26,27,29,31,34,36)
MR_decl_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 38,39,40,41,42,44,45,46)
MR_decl_label2(transform_hlds__implicit_parallelism__parallelize_calls_8_0, 22,2)
MR_decl_label8(transform_hlds__implicit_parallelism__process_body2_3_0, 68,4,5,6,10,11,13,16)
MR_decl_label8(transform_hlds__implicit_parallelism__process_body2_3_0, 17,18,19,15,23,21,14,72)
MR_decl_label2(transform_hlds__implicit_parallelism__process_body2_3_0, 2,1)
MR_decl_label8(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0, 2,3,9,12,14,11,8,4)
MR_decl_label8(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0, 29,4,5,6,7,8,32,2)
MR_decl_label4(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0, 12,4,5,3)
MR_decl_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 4,6,8,11,13,15,17,19)
MR_decl_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 20,21,22,23,25,26,28,29)
MR_decl_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 31,32,34,35,37,38,39,40)
MR_decl_label3(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0, 41,42,43)
MR_decl_label5(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0, 13,4,5,6,3)
MR_decl_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 46,4,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 11,12,13,16,17,18,19,20)
MR_decl_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 23,24,25,26,27,28,29,30)
MR_decl_label1(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0, 3)
MR_decl_label4(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0, 12,4,5,3)
MR_decl_label2(transform_hlds__implicit_parallelism__update_conj_and_index_5_0, 5,2)
MR_decl_label2(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0, 4,1)
MR_decl_label6(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0, 3,2,5,9,13,37)
MR_decl_static(transform_hlds__implicit_parallelism__get_callees_feedback_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0)
MR_decl_static(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0)
MR_decl_static(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__get_number_args_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0)
MR_decl_static(transform_hlds__implicit_parallelism__parallelize_calls_8_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0)
MR_decl_static(transform_hlds__implicit_parallelism__update_conj_and_index_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0)
MR_decl_static(transform_hlds__implicit_parallelism__process_body2_3_0)
MR_def_extern_entry(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0)
MR_decl_static(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0)
MR_decl_static(transform_hlds__implicit_parallelism__is_carriage_return_1_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)
MR_decl_static(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
MR_decl_static(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__process_body2_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__process_body2_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

MR_decl_entry(char__is_whitespace_1_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(char__is_whitespace_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__implicit_parallelism__is_carriage_return_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_string_const("Profiling feedback file is not well-formed", 42)
},
{
MR_string_const("Profiling feedback file version incorrect", 41)
},
{
MR_string_const("Not a profiling feedback file", 29)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__implicit_parallelism__field_types_candidate_call_site_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_transform_hlds__implicit_parallelism__field_names_candidate_call_site_0_0[] = {
	"caller",
	"slot_number",
	"kind",
	"callee"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0 = {
	"candidate_call_site",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__implicit_parallelism__field_types_candidate_call_site_0_0,
	mercury_data_transform_hlds__implicit_parallelism__field_names_candidate_call_site_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_candidate_call_site_0_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_candidate_call_site_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__implicit_parallelism__du_stag_ordered_candidate_call_site_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_candidate_call_site_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__du_functor_desc_candidate_call_site_0_0
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_candidate_call_site_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)),
	"transform_hlds.implicit_parallelism",
	"candidate_call_site",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_name_ordered_candidate_call_site_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__du_ptag_ordered_candidate_call_site_0 },
	1,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_candidate_call_site_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0 = {
	"csk_normal",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1 = {
	"csk_special",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2 = {
	"csk_higher_order",
	2
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3 = {
	"csk_method",
	3
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4 = {
	"csk_callback",
	4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_call_site_kind_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_call_site_kind_0[] = {
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_4,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_2,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_3,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_0,
	&mercury_data_transform_hlds__implicit_parallelism__enum_functor_desc_call_site_kind_0_1
};

const MR_Integer mercury_data_transform_hlds__implicit_parallelism__functor_number_map_call_site_kind_0[] = {
	3,
	4,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)),
	"transform_hlds.implicit_parallelism",
	"call_site_kind",
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_name_ordered_call_site_kind_0 },
	{ (void *)mercury_data_transform_hlds__implicit_parallelism__enum_value_ordered_call_site_kind_0 },
	5,
	4,
	mercury_data_transform_hlds__implicit_parallelism__functor_number_map_call_site_kind_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__parallelize_calls_8_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"goal_depends_on_goal",
2,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
607,
"d1;c9;t;e;c5;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__process_body2_3_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"is_whitespace",
1,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
930,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.implicit_parallelism",
"transform_hlds.implicit_parallelism",
"is_carriage_return",
1,
0
},
"transform_hlds.implicit_parallelism",
"implicit_parallelism.m",
858,
"d1;c6;d2;c3;d1;c3;"
};


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module0)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_callees_feedback_4_0);
	MR_init_label2(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_callees_feedback_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr1) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_callees_feedback_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(transform_hlds__implicit_parallelism__get_callees_feedback_4_0);
	}
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_np_localtailcall(transform_hlds__implicit_parallelism__get_callees_feedback_4_0);
MR_def_label(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module1)
	MR_init_entry1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0);
	MR_init_label1(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__from_int_1_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module2)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0);
	MR_init_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,4,5,6,7,8,9,10,11)
	MR_init_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,12,15,16,2,19,20,21,22)
	MR_init_label8(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,23,24,25,26,27,30,31,17)
	MR_init_label3(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,36,37,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("+1", 2);
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i17);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("+1", 2);
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i32);
	}
	MR_r3 = MR_ctfield(2, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i36) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i32) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0_i32));
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("get_call_kind_and_callee", 24);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module3)
	MR_init_entry1(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0);
	MR_init_label5(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,27,4,3,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r6 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((MR_tempr2 != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if ((strcmp((char *)MR_tempr2, (char *)MR_r3) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module4)
	MR_init_entry1(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0);
	MR_init_label5(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,4,6,40,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i4);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i40);
	}
	if ((MR_r1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i40);
	}
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1));
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r2, 1), 0);
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i9);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i40);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0_i40);
	}
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_ctfield(3, MR_r1, 0) == (MR_Integer) 0);
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module5)
	MR_init_entry1(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0);
	MR_init_label8(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,70,2,3,4,9,40,5,16)
	MR_init_label8(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,14,19,21,22,24,26,23,27)
	MR_init_label2(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,17,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i3);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i40) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5));
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r6, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i5);
	}
	}
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i14);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__goal_is_call_or_negated_call_1_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i22);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i70);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i31);
MR_def_label(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0_i70);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module6)
	MR_init_entry1(transform_hlds__implicit_parallelism__get_number_args_2_0);
	MR_init_label5(transform_hlds__implicit_parallelism__get_number_args_2_0,11,49,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__get_number_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i4);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i49);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_r4 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i11);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(2, MR_r3, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(2, MR_r3, 1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(1, MR_r3, 2);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__get_number_args_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_ctfield(3, MR_r3, 4);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__get_number_args_2_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__implicit_parallelism__get_number_args_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module7)
	MR_init_entry1(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0);
	MR_init_label8(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,2,3,4,5,19,15,12,10)
	MR_init_label8(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,8,24,26,29,30,50,23,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__dep_par_conj__find_shared_variables_3_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i8);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i8);
	}
	MR_tempr2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr2,3)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i12);
	}
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i15);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_r4 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_r3, 1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_r3, 2);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_ctfield(3, MR_r3, 4);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) < (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_number_args_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_number_args_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i23);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i29);
	}
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i50);
	}
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i30);
	}
	if (((MR_Integer) MR_sv(1) < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i50);
	}
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("is_worth_parallelizing", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0_i50);
MR_def_label(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_list_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_instmap_delta_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module8)
	MR_init_entry1(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0);
	MR_init_label8(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,5,6,7,8,9,10,11,12)
	MR_init_label1(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_nonlocals_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_instmap_delta_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("add_call_to_parallel_conjunction", 32);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(list__delete_all_3_1);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__is_empty_1_0);
MR_decl_entry(hlds__goal_util__create_conj_4_0);
MR_decl_entry(list__det_split_list_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module9)
	MR_init_entry1(transform_hlds__implicit_parallelism__parallelize_calls_8_0);
	MR_init_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0,11,15,13,9,5,18,19,20)
	MR_init_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0,23,25,26,27,29,31,34,36)
	MR_init_label8(transform_hlds__implicit_parallelism__parallelize_calls_8_0,38,39,40,41,42,44,45,46)
	MR_init_label2(transform_hlds__implicit_parallelism__parallelize_calls_8_0,22,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__parallelize_calls_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(5) = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(8) = MR_tempr5;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i13);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 2) = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tempr2 = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i20);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_worth_parallelizing_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i22);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__delete_all_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__is_empty_1_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i31);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (((MR_Integer) 1 != (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i31);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__add_call_to_parallel_conjunction_3_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__goal_util__create_conj_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(4) = MR_r1;
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i36);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i39);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__parallelize_calls_8_0_i41);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i44);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i42);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i44);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i45);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__parallelize_calls_8_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__implicit_parallelism__parallelize_calls_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("parallelize_calls", 17);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module10)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,2,3,9,12,14,11,8,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(counter__allocate_3_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_call_kind_and_callee_4_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(7), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i4);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__is_in_css_list_to_be_parallelized_6_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__build_goals_surrounded_by_calls_to_be_parallelized_10_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i11);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__parallelize_calls_8_0,
		transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0_i14);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_nth_det_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module11)
	MR_init_entry1(transform_hlds__implicit_parallelism__update_conj_and_index_5_0);
	MR_init_label2(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__update_conj_and_index_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__replace_nth_det_4_0,
		transform_hlds__implicit_parallelism__update_conj_and_index_5_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module12)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,4,6,8,11,13,15,17,19)
	MR_init_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,20,21,22,23,25,26,28,29)
	MR_init_label8(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,31,32,34,35,37,38,39,40)
	MR_init_label3(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,41,42,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r8 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r8),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i19));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_ctfield(2, MR_r8, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r9),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i17));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r8, 0),
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i20) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i22) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i25) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i31) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i34) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i42));
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_call_for_implicit_parallelism_12_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r8;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r8, 1);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r8, 1);
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i32);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i35);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i39);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_np_localcall_lab(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__update_conj_and_index_5_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i41);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__increment_index_if_in_conj_3_0,
		transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0_i43);
MR_def_label(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module13)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,29,4,5,6,7,8,32,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i29);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("process_conj_for_implicit_parallelism", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i32);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__process_conj_for_implicit_parallelism_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("process_conj_for_implicit_parallelism", 37);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module14)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0);
	MR_init_label4(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__process_disj_for_implicit_parallelism_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module15)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0);
	MR_init_label4(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_r6;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__process_switch_cases_for_implicit_parallelism_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module16)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,46,4,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,11,12,13,16,17,18,19,20)
	MR_init_label8(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,23,24,25,26,27,28,29,30)
	MR_init_label1(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i7);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i9);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i12);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i13);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_string_const("+1", 2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i16);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("-", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(12);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i17);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__get_callees_feedback_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i18);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__implicit_parallelism, candidate_call_site);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_goal_for_implicit_parallelism_13_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i24);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i25);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i26);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i27);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i28);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i30);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0_i46);
MR_def_label(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module17)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0);
	MR_init_label5(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,13,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_procs_for_implicit_parallelism_5_0,
		transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i6);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_separator_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__index0_det_3_0);
MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module18)
	MR_init_entry1(transform_hlds__implicit_parallelism__process_body2_3_0);
	MR_init_label8(transform_hlds__implicit_parallelism__process_body2_3_0,68,4,5,6,10,11,13,16)
	MR_init_label8(transform_hlds__implicit_parallelism__process_body2_3_0,17,18,19,15,23,21,14,72)
	MR_init_label2(transform_hlds__implicit_parallelism__process_body2_3_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__process_body2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__index0_det_3_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("Mercury", 7)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i68);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__index0_det_3_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i11);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(list__index0_det_3_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i13);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("callback", 8)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i16);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 4;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("higher_order_call", 17)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i17);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 2;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("method_call", 11)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i18);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 3;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("normal_call", 11)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i19);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("special_call", 12)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i14);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 1;
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(list__index0_det_3_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i23);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i68);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i68);
	}
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implicit_parallelism.m", 22);
	MR_r2 = (MR_Word) MR_string_const("process_body2", 13);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__implicit_parallelism__process_body2_3_0_i72);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__implicit_parallelism__process_body2_3_0_i68);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__implicit_parallelism__process_body2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_file_as_string_4_0);
MR_decl_entry(list__index0_3_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module19)
	MR_init_entry1(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0);
	MR_init_label8(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,2,5,8,10,15,19,21,20)
	MR_init_label8(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,17,9,7,28,29,32,31,34)
	MR_init_label5(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,4,37,38,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i4);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__index0_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i10);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i9);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("Profiling feedback file", 23)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__index0_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i15);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i9);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("Version = 1.0", 13)) != 0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__det_split_list_4_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i19);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(transform_hlds__implicit_parallelism__process_body2_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i21);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_np_call_localret_ent(io__close_input_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_np_call_localret_ent(io__close_input_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_np_call_localret_ent(io__close_input_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i28);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i29);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i31);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i32);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__implicit_parallelism__process_preds_for_implicit_parallelism_4_0);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i34);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i39);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i37);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i38);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i39);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_4_0,
		transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0_i40);
MR_def_label(transform_hlds__implicit_parallelism__apply_implicit_parallelism_transformation_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module20)
	MR_init_entry1(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0);
	MR_init_label6(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,2,3,4,5,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i2);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i3);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i4);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i5);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i8);
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__implicit_parallelism__goal_depends_on_goal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module21)
	MR_init_entry1(transform_hlds__implicit_parallelism__is_carriage_return_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__implicit_parallelism__is_carriage_return_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module22)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__call_site_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module23)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__call_site_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module24)
	MR_init_entry1(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_init_label2(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__implicit_parallelism__candidate_call_site_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(transform_hlds__implicit_parallelism_module25)
	MR_init_entry1(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_init_label6(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i2);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i5);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i9);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i13);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__implicit_parallelism__candidate_call_site_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__implicit_parallelism_maybe_bunch_0(void)
{
	transform_hlds__implicit_parallelism_module0();
	transform_hlds__implicit_parallelism_module1();
	transform_hlds__implicit_parallelism_module2();
	transform_hlds__implicit_parallelism_module3();
	transform_hlds__implicit_parallelism_module4();
	transform_hlds__implicit_parallelism_module5();
	transform_hlds__implicit_parallelism_module6();
	transform_hlds__implicit_parallelism_module7();
	transform_hlds__implicit_parallelism_module8();
	transform_hlds__implicit_parallelism_module9();
	transform_hlds__implicit_parallelism_module10();
	transform_hlds__implicit_parallelism_module11();
	transform_hlds__implicit_parallelism_module12();
	transform_hlds__implicit_parallelism_module13();
	transform_hlds__implicit_parallelism_module14();
	transform_hlds__implicit_parallelism_module15();
	transform_hlds__implicit_parallelism_module16();
	transform_hlds__implicit_parallelism_module17();
	transform_hlds__implicit_parallelism_module18();
	transform_hlds__implicit_parallelism_module19();
	transform_hlds__implicit_parallelism_module20();
	transform_hlds__implicit_parallelism_module21();
	transform_hlds__implicit_parallelism_module22();
	transform_hlds__implicit_parallelism_module23();
	transform_hlds__implicit_parallelism_module24();
	transform_hlds__implicit_parallelism_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__implicit_parallelism__init(void);
void mercury__transform_hlds__implicit_parallelism__init_type_tables(void);
void mercury__transform_hlds__implicit_parallelism__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__implicit_parallelism__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__implicit_parallelism__init_complexity_procs(void);
#endif

void mercury__transform_hlds__implicit_parallelism__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__implicit_parallelism_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0,
		transform_hlds__implicit_parallelism__candidate_call_site_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0,
		transform_hlds__implicit_parallelism__call_site_kind_0_0);
	mercury__transform_hlds__implicit_parallelism__init_debugger();
}

void mercury__transform_hlds__implicit_parallelism__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_candidate_call_site_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__implicit_parallelism__type_ctor_info_call_site_kind_0);
	}
}


void mercury__transform_hlds__implicit_parallelism__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__implicit_parallelism__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__implicit_parallelism__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
