/*
** Automatically generated from `goal_form.m'
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
INIT mercury__hlds__goal_form__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.goal_form.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.goal_form.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.goal_form.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.goal_form.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.goal_form.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.goal_form.c"
#line 49 "hlds.goal_form.c"
#include "hlds.goal_form.mh"

#line 52 "hlds.goal_form.c"
#line 53 "hlds.goal_form.c"
#ifndef HLDS__GOAL_FORM_DECL_GUARD
#define HLDS__GOAL_FORM_DECL_GUARD

#line 57 "hlds.goal_form.c"
#line 58 "hlds.goal_form.c"

#endif
#line 61 "hlds.goal_form.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0,
	mercury_data_hlds__goal_form__type_ctor_info_goal_loop_status_0,
	mercury_data_hlds__goal_form__type_ctor_info_goal_throw_status_0;
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0, 57,3,6,4,9,13,18,64,15,12)
MR_decl_label10(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0, 21,23,28,30,31,33,34,25,37,201)
MR_decl_label8(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0, 74,40,39,209,50,52,53,45)
MR_decl_label4(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0, 17,4,2,1)
MR_decl_label4(hlds__goal_form__cannot_fail_before_stack_flush_1_0, 2,3,4,1)
MR_decl_label7(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0, 36,6,4,10,11,2,1)
MR_decl_label5(hlds__goal_form__cannot_stack_flush_2_1_0, 3,5,8,12,1)
MR_decl_label4(hlds__goal_form__cannot_stack_flush_cases_1_0, 17,4,2,1)
MR_decl_label4(hlds__goal_form__cannot_stack_flush_goals_1_0, 17,4,2,1)
MR_decl_label4(hlds__goal_form__cases_can_throw_4_0, 15,3,4,6)
MR_decl_label4(hlds__goal_form__cases_may_allocate_heap_2_0, 15,3,5,4)
MR_decl_label10(hlds__goal_form__count_recursive_calls_5_0, 111,3,6,8,11,12,13,14,10,16)
MR_decl_label10(hlds__goal_form__count_recursive_calls_5_0, 48,19,18,28,30,31,32,33,26,34)
MR_decl_label1(hlds__goal_form__count_recursive_calls_5_0, 24)
MR_decl_label10(hlds__goal_form__count_recursive_calls_cases_5_0, 35,7,10,9,11,12,13,14,15,16)
MR_decl_label1(hlds__goal_form__count_recursive_calls_cases_5_0, 3)
MR_decl_label3(hlds__goal_form__count_recursive_calls_conj_7_0, 10,3,4)
MR_decl_label10(hlds__goal_form__count_recursive_calls_disj_5_0, 3,35,7,10,9,11,12,13,14,15)
MR_decl_label1(hlds__goal_form__count_recursive_calls_disj_5_0, 16)
MR_decl_label1(hlds__goal_form__goal_can_loop_2_0, 3)
MR_decl_label2(hlds__goal_form__goal_can_loop_or_throw_1_0, 4,1)
MR_decl_label2(hlds__goal_form__goal_can_loop_or_throw_2_0, 4,1)
MR_decl_label4(hlds__goal_form__goal_can_loop_or_throw_4_0, 4,6,8,2)
MR_decl_label3(hlds__goal_form__goal_can_throw_2_0, 3,6,8)
MR_decl_label2(hlds__goal_form__goal_can_throw_4_0, 2,3)
MR_decl_label2(hlds__goal_form__goal_cannot_loop_2_0, 3,1)
MR_decl_label5(hlds__goal_form__goal_cannot_loop_or_throw_1_0, 2,4,11,5,7)
MR_decl_label5(hlds__goal_form__goal_cannot_loop_or_throw_2_0, 3,5,12,6,8)
MR_decl_label4(hlds__goal_form__goal_cannot_throw_2_0, 3,9,4,6)
MR_decl_label4(hlds__goal_form__goal_is_conj_of_unify_2_0, 2,4,5,1)
MR_decl_label1(hlds__goal_form__goal_list_may_allocate_heap_1_0, 2)
MR_decl_label4(hlds__goal_form__goal_list_may_allocate_heap_2_0, 15,3,5,4)
MR_decl_label1(hlds__goal_form__goal_may_allocate_heap_1_0, 2)
MR_decl_label10(hlds__goal_form__goal_may_allocate_heap_2_2_0, 137,3,65,4,7,49,12,15,13,17)
MR_decl_label10(hlds__goal_form__goal_may_allocate_heap_2_2_0, 21,20,23,22,19,27,30,29,37,39)
MR_decl_label2(hlds__goal_form__goal_may_allocate_heap_2_2_0, 38,35)
MR_decl_label4(hlds__goal_form__goals_can_throw_4_0, 15,3,4,6)
MR_decl_label5(hlds__goal_form__only_constant_goals_3_0, 52,5,12,2,1)
MR_decl_label4(fn__hlds__goal_form__case_list_can_loop_2_0, 16,3,5,4)
MR_decl_label6(fn__hlds__goal_form__case_list_can_throw_2_0, 20,3,5,8,10,4)
MR_decl_label10(fn__hlds__goal_form__goal_can_loop_func_2_0, 174,65,3,7,10,9,13,14,8,4)
MR_decl_label10(fn__hlds__goal_form__goal_can_loop_func_2_0, 18,23,26,25,24,21,32,30,34,38)
MR_decl_label10(fn__hlds__goal_form__goal_can_loop_func_2_0, 37,41,40,36,46,106,49,48,57,58)
MR_decl_label4(fn__hlds__goal_form__goal_can_loop_func_2_0, 56,60,62,54)
MR_decl_label2(fn__hlds__goal_form__goal_can_throw_func_2_0, 2,3)
MR_decl_label2(fn__hlds__goal_form__goal_cannot_modify_trail_1_0, 3,2)
MR_decl_label10(fn__hlds__goal_form__goal_expr_can_throw_2_0, 56,3,7,9,4,13,17,21,19,16)
MR_decl_label10(fn__hlds__goal_form__goal_expr_can_throw_2_0, 24,26,30,33,35,29,37,36,28,42)
MR_decl_label6(fn__hlds__goal_form__goal_expr_can_throw_2_0, 95,45,44,52,53,50)
MR_decl_label6(fn__hlds__goal_form__goal_is_flat_expr_1_0, 17,5,3,7,10,9)
MR_decl_label4(fn__hlds__goal_form__goal_is_flat_list_1_0, 18,3,5,4)
MR_decl_label4(fn__hlds__goal_form__goal_list_can_loop_2_0, 16,3,5,4)
MR_decl_label6(fn__hlds__goal_form__goal_list_can_throw_2_0, 20,3,5,8,10,4)
MR_decl_label2(fn__hlds__goal_form__goal_may_modify_trail_1_0, 3,2)
MR_decl_static(hlds__goal_form__only_constant_goals_3_0)
MR_def_extern_entry(hlds__goal_form__goal_is_conj_of_unify_2_0)
MR_def_extern_entry(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0)
MR_def_extern_entry(hlds__goal_form__goal_can_throw_4_0)
MR_decl_static(hlds__goal_form__goals_can_throw_4_0)
MR_decl_static(hlds__goal_form__cases_can_throw_4_0)
MR_decl_static(fn__hlds__goal_form__this_file_0_0)
MR_decl_static(fn__hlds__goal_form__goal_can_loop_func_2_0)
MR_decl_static(fn__hlds__goal_form__goal_list_can_loop_2_0)
MR_decl_static(fn__hlds__goal_form__case_list_can_loop_2_0)
MR_def_extern_entry(hlds__goal_form__goal_cannot_loop_2_0)
MR_def_extern_entry(hlds__goal_form__goal_can_loop_or_throw_4_0)
MR_def_extern_entry(hlds__goal_form__goal_can_loop_2_0)
MR_decl_static(fn__hlds__goal_form__goal_can_throw_func_2_0)
MR_decl_static(fn__hlds__goal_form__goal_expr_can_throw_2_0)
MR_decl_static(fn__hlds__goal_form__goal_list_can_throw_2_0)
MR_decl_static(fn__hlds__goal_form__case_list_can_throw_2_0)
MR_def_extern_entry(hlds__goal_form__goal_cannot_throw_2_0)
MR_def_extern_entry(hlds__goal_form__goal_can_throw_2_0)
MR_def_extern_entry(hlds__goal_form__goal_cannot_loop_or_throw_2_0)
MR_def_extern_entry(hlds__goal_form__goal_can_loop_or_throw_2_0)
MR_def_extern_entry(hlds__goal_form__goal_cannot_loop_or_throw_1_0)
MR_def_extern_entry(hlds__goal_form__goal_can_loop_or_throw_1_0)
MR_def_extern_entry(fn__hlds__goal_form__goal_is_flat_1_0)
MR_decl_static(fn__hlds__goal_form__goal_is_flat_expr_1_0)
MR_decl_static(fn__hlds__goal_form__goal_is_flat_list_1_0)
MR_decl_static(hlds__goal_form__goal_may_allocate_heap_2_2_0)
MR_decl_static(hlds__goal_form__goal_list_may_allocate_heap_2_0)
MR_decl_static(hlds__goal_form__cases_may_allocate_heap_2_0)
MR_def_extern_entry(hlds__goal_form__goal_may_allocate_heap_1_0)
MR_def_extern_entry(hlds__goal_form__goal_list_may_allocate_heap_1_0)
MR_def_extern_entry(hlds__goal_form__cannot_stack_flush_1_0)
MR_decl_static(hlds__goal_form__cannot_stack_flush_2_1_0)
MR_decl_static(hlds__goal_form__cannot_stack_flush_goals_1_0)
MR_decl_static(hlds__goal_form__cannot_stack_flush_cases_1_0)
MR_decl_static(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0)
MR_def_extern_entry(hlds__goal_form__cannot_fail_before_stack_flush_1_0)
MR_def_extern_entry(hlds__goal_form__count_recursive_calls_5_0)
MR_decl_static(hlds__goal_form__count_recursive_calls_conj_7_0)
MR_decl_static(hlds__goal_form__count_recursive_calls_disj_5_0)
MR_decl_static(hlds__goal_form__count_recursive_calls_cases_5_0)
MR_def_extern_entry(fn__hlds__goal_form__goal_cannot_modify_trail_1_0)
MR_def_extern_entry(fn__hlds__goal_form__goal_may_modify_trail_1_0)
MR_def_extern_entry(__Unify___hlds__goal_form__goal_loop_or_throw_status_0_0)
MR_def_extern_entry(__Compare___hlds__goal_form__goal_loop_or_throw_status_0_0)
MR_def_extern_entry(__Unify___hlds__goal_form__goal_loop_status_0_0)
MR_def_extern_entry(__Compare___hlds__goal_form__goal_loop_status_0_0)
MR_def_extern_entry(__Unify___hlds__goal_form__goal_throw_status_0_0)
MR_def_extern_entry(__Compare___hlds__goal_form__goal_throw_status_0_0)
MR_decl_static(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0)

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

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0 = {
	"can_loop_or_throw",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1 = {
	"cannot_loop_or_throw",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_or_throw_status_0_1
};

const MR_Integer mercury_data_hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_form__goal_loop_or_throw_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_form__goal_loop_or_throw_status_0_0)),
	"hlds.goal_form",
	"goal_loop_or_throw_status",
	{ (void *)mercury_data_hlds__goal_form__enum_name_ordered_goal_loop_or_throw_status_0 },
	{ (void *)mercury_data_hlds__goal_form__enum_value_ordered_goal_loop_or_throw_status_0 },
	2,
	4,
	mercury_data_hlds__goal_form__functor_number_map_goal_loop_or_throw_status_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_0 = {
	"can_loop",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_1 = {
	"cannot_loop",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_value_ordered_goal_loop_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_name_ordered_goal_loop_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_loop_status_0_1
};

const MR_Integer mercury_data_hlds__goal_form__functor_number_map_goal_loop_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_form__type_ctor_info_goal_loop_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_form__goal_loop_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_form__goal_loop_status_0_0)),
	"hlds.goal_form",
	"goal_loop_status",
	{ (void *)mercury_data_hlds__goal_form__enum_name_ordered_goal_loop_status_0 },
	{ (void *)mercury_data_hlds__goal_form__enum_value_ordered_goal_loop_status_0 },
	2,
	4,
	mercury_data_hlds__goal_form__functor_number_map_goal_loop_status_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_0 = {
	"can_throw",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_1 = {
	"cannot_throw",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_value_ordered_goal_throw_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__goal_form__enum_name_ordered_goal_throw_status_0[] = {
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_0,
	&mercury_data_hlds__goal_form__enum_functor_desc_goal_throw_status_0_1
};

const MR_Integer mercury_data_hlds__goal_form__functor_number_map_goal_throw_status_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_form__type_ctor_info_goal_throw_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_form__goal_throw_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_form__goal_throw_status_0_0)),
	"hlds.goal_form",
	"goal_throw_status",
	{ (void *)mercury_data_hlds__goal_form__enum_name_ordered_goal_throw_status_0 },
	{ (void *)mercury_data_hlds__goal_form__enum_value_ordered_goal_throw_status_0 },
	2,
	4,
	mercury_data_hlds__goal_form__functor_number_map_goal_throw_status_0
};



MR_decl_entry(set__delete_3_0);

MR_BEGIN_MODULE(hlds__goal_form_module0)
	MR_init_entry1(hlds__goal_form__only_constant_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__only_constant_goals_3_0);
	MR_init_label5(hlds__goal_form__only_constant_goals_3_0,52,5,12,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'only_constant_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__only_constant_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__only_constant_goals_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		hlds__goal_form__only_constant_goals_3_0_i12);
MR_def_label(hlds__goal_form__only_constant_goals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		hlds__goal_form__only_constant_goals_3_0_i12);
MR_def_label(hlds__goal_form__only_constant_goals_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__only_constant_goals_3_0_i52);
	}
MR_def_label(hlds__goal_form__only_constant_goals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__only_constant_goals_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(hlds__goal_form_module1)
	MR_init_entry1(hlds__goal_form__goal_is_conj_of_unify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_is_conj_of_unify_2_0);
	MR_init_label4(hlds__goal_form__goal_is_conj_of_unify_2_0,2,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_conj_of_unify'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_is_conj_of_unify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		hlds__goal_form__goal_is_conj_of_unify_2_0_i2);
MR_def_label(hlds__goal_form__goal_is_conj_of_unify_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_is_conj_of_unify_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__goal_form__goal_is_conj_of_unify_2_0_i4);
MR_def_label(hlds__goal_form__goal_is_conj_of_unify_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_form__only_constant_goals_3_0,
		hlds__goal_form__goal_is_conj_of_unify_2_0_i5);
MR_def_label(hlds__goal_form__goal_is_conj_of_unify_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_is_conj_of_unify_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__empty_1_0);
MR_def_label(hlds__goal_form__goal_is_conj_of_unify_2_0,1)
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


MR_BEGIN_MODULE(hlds__goal_form_module2)
	MR_init_entry1(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
	MR_init_label4(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_disjuncts_are_conj_of_unify'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_is_conj_of_unify_2_0,
		hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0_i4);
MR_def_label(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0_i17);
MR_def_label(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__all_disjuncts_are_conj_of_unify_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);

MR_BEGIN_MODULE(hlds__goal_form_module3)
	MR_init_entry1(hlds__goal_form__goal_can_throw_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_throw_4_0);
	MR_init_label2(hlds__goal_form__goal_can_throw_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_throw'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_throw_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__goal_can_throw_4_0_i2);
MR_def_label(hlds__goal_form__goal_can_throw_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_throw_4_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0);
MR_def_label(hlds__goal_form__goal_can_throw_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module4)
	MR_init_entry1(hlds__goal_form__goals_can_throw_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goals_can_throw_4_0);
	MR_init_label4(hlds__goal_form__goals_can_throw_4_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_can_throw'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__goals_can_throw_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__goals_can_throw_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__goals_can_throw_4_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__goals_can_throw_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		hlds__goal_form__goals_can_throw_4_0_i4);
MR_def_label(hlds__goal_form__goals_can_throw_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goals_can_throw_4_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__goals_can_throw_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__goals_can_throw_4_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module5)
	MR_init_entry1(hlds__goal_form__cases_can_throw_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cases_can_throw_4_0);
	MR_init_label4(hlds__goal_form__cases_can_throw_4_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_can_throw'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cases_can_throw_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__cases_can_throw_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__cases_can_throw_4_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cases_can_throw_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		hlds__goal_form__cases_can_throw_4_0_i4);
MR_def_label(hlds__goal_form__cases_can_throw_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__cases_can_throw_4_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cases_can_throw_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__cases_can_throw_4_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module6)
	MR_init_entry1(fn__hlds__goal_form__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_form.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_termination2_info_2_0);
MR_decl_entry(fn__transform_hlds__term_constr_main__term_status_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_terminates_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
MR_decl_entry(fn__bool__or_2_0);
MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(hlds__goal_form_module7)
	MR_init_entry1(fn__hlds__goal_form__goal_can_loop_func_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_can_loop_func_2_0);
	MR_init_label10(fn__hlds__goal_form__goal_can_loop_func_2_0,174,65,3,7,10,9,13,14,8,4)
	MR_init_label10(fn__hlds__goal_form__goal_can_loop_func_2_0,18,23,26,25,24,21,32,30,34,38)
	MR_init_label10(fn__hlds__goal_form__goal_can_loop_func_2_0,37,41,40,36,46,106,49,48,57,58)
	MR_init_label4(fn__hlds__goal_form__goal_can_loop_func_2_0,56,60,62,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_loop_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_can_loop_func_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i3);
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i65);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i7);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i10);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i8);
	}
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_termination2_info_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i13);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__term_constr_main__term_status_1_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i14);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i65);
	}
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i21);
	}
	MR_sv(1) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i23);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i26);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i65);
	}
	MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i24);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i65);
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i30);
	}
	MR_r2 = MR_tfield(3, MR_r3, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r3, 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_list_can_loop_2_0);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i34);
	}
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_list_can_loop_2_0);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__hlds__goal_form__goal_can_loop_func_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i38);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(fn__hlds__goal_form__goal_can_loop_func_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i41);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i174);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i46);
	}
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i174);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i49);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i49);
	}
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i174);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i56);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 5);
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(fn__hlds__goal_form__goal_can_loop_func_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i57);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_list_can_loop_2_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i58);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i60);
	}
	MR_r2 = MR_tfield(2, MR_r4, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_can_loop_func_2_0_i174);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_form__this_file_0_0,
		fn__hlds__goal_form__goal_can_loop_func_2_0_i62);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_can_loop: bi_implication", 29);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(fn__hlds__goal_form__goal_can_loop_func_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r3, 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__hlds__goal_form__case_list_can_loop_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module8)
	MR_init_entry1(fn__hlds__goal_form__goal_list_can_loop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_list_can_loop_2_0);
	MR_init_label4(fn__hlds__goal_form__goal_list_can_loop_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_can_loop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_list_can_loop_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__goal_list_can_loop_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_loop_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_form__goal_list_can_loop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		fn__hlds__goal_form__goal_list_can_loop_2_0_i5);
MR_def_label(fn__hlds__goal_form__goal_list_can_loop_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_loop_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_form__goal_list_can_loop_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_loop_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module9)
	MR_init_entry1(fn__hlds__goal_form__case_list_can_loop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__case_list_can_loop_2_0);
	MR_init_label4(fn__hlds__goal_form__case_list_can_loop_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_list_can_loop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__case_list_can_loop_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__case_list_can_loop_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_loop_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_form__case_list_can_loop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		fn__hlds__goal_form__case_list_can_loop_2_0_i5);
MR_def_label(fn__hlds__goal_form__case_list_can_loop_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_loop_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_form__case_list_can_loop_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_loop_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module10)
	MR_init_entry1(hlds__goal_form__goal_cannot_loop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_cannot_loop_2_0);
	MR_init_label2(hlds__goal_form__goal_cannot_loop_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cannot_loop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_cannot_loop_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		hlds__goal_form__goal_cannot_loop_2_0_i3);
MR_def_label(hlds__goal_form__goal_cannot_loop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_cannot_loop_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module11)
	MR_init_entry1(hlds__goal_form__goal_can_loop_or_throw_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_loop_or_throw_4_0);
	MR_init_label4(hlds__goal_form__goal_can_loop_or_throw_4_0,4,6,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_loop_or_throw'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_loop_or_throw_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		hlds__goal_form__goal_can_loop_or_throw_4_0_i4);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_loop_or_throw_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		hlds__goal_form__goal_can_loop_or_throw_4_0_i6);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_loop_or_throw_4_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module12)
	MR_init_entry1(hlds__goal_form__goal_can_loop_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_loop_2_0);
	MR_init_label1(hlds__goal_form__goal_can_loop_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_loop'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_loop_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		hlds__goal_form__goal_can_loop_2_0_i3);
MR_def_label(hlds__goal_form__goal_can_loop_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module13)
	MR_init_entry1(fn__hlds__goal_form__goal_can_throw_func_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_can_throw_func_2_0);
	MR_init_label2(fn__hlds__goal_form__goal_can_throw_func_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_throw_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_can_throw_func_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__hlds__goal_form__goal_can_throw_func_2_0_i2);
MR_def_label(fn__hlds__goal_form__goal_can_throw_func_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_can_throw_func_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__goal_form__goal_can_throw_func_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_exception_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_proc_exception_info_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_throw_exception_1_0);

MR_BEGIN_MODULE(hlds__goal_form_module14)
	MR_init_entry1(fn__hlds__goal_form__goal_expr_can_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_expr_can_throw_2_0);
	MR_init_label10(fn__hlds__goal_form__goal_expr_can_throw_2_0,56,3,7,9,4,13,17,21,19,16)
	MR_init_label10(fn__hlds__goal_form__goal_expr_can_throw_2_0,24,26,30,33,35,29,37,36,28,42)
	MR_init_label6(fn__hlds__goal_form__goal_expr_can_throw_2_0,95,45,44,52,53,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_can_throw'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_expr_can_throw_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i56);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exception_info_2_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i7);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, proc_exception_info);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i9);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i56);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i95);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_throw_exception_1_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i17);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i21);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i56);
	}
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i24);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_list_can_throw_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i26);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_list_can_throw_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i28);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i30);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i33);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i29);
	}
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_throw_func_2_0,
		fn__hlds__goal_form__goal_expr_can_throw_2_0_i37);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_can_throw_func_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i42);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_can_throw_func_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i44);
	}
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i45);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i45);
	}
	}
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_can_throw_func_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i50);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_expr_can_throw_2_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_form.m", 11);
	MR_r2 = (MR_Word) MR_string_const("goal_expr_can_throw: bi_implication", 35);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(fn__hlds__goal_form__goal_expr_can_throw_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_tailcall_ent(fn__hlds__goal_form__case_list_can_throw_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module15)
	MR_init_entry1(fn__hlds__goal_form__goal_list_can_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_list_can_throw_2_0);
	MR_init_label6(fn__hlds__goal_form__goal_list_can_throw_2_0,20,3,5,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_can_throw'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_list_can_throw_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_throw_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__hlds__goal_form__goal_list_can_throw_2_0_i5);
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_throw_2_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		fn__hlds__goal_form__goal_list_can_throw_2_0_i8);
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_throw_2_0_i4);
	}
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__goal_list_can_throw_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_list_can_throw_2_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module16)
	MR_init_entry1(fn__hlds__goal_form__case_list_can_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__case_list_can_throw_2_0);
	MR_init_label6(fn__hlds__goal_form__case_list_can_throw_2_0,20,3,5,8,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_list_can_throw'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__case_list_can_throw_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_throw_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__hlds__goal_form__case_list_can_throw_2_0_i5);
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_throw_2_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		fn__hlds__goal_form__case_list_can_throw_2_0_i8);
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_throw_2_0_i4);
	}
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__goal_form__case_list_can_throw_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__hlds__goal_form__case_list_can_throw_2_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module17)
	MR_init_entry1(hlds__goal_form__goal_cannot_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_cannot_throw_2_0);
	MR_init_label4(hlds__goal_form__goal_cannot_throw_2_0,3,9,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cannot_throw'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_cannot_throw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__goal_cannot_throw_2_0_i3);
MR_def_label(hlds__goal_form__goal_cannot_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_throw_2_0_i4);
	}
MR_def_label(hlds__goal_form__goal_cannot_throw_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_cannot_throw_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		hlds__goal_form__goal_cannot_throw_2_0_i6);
MR_def_label(hlds__goal_form__goal_cannot_throw_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_throw_2_0_i9);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module18)
	MR_init_entry1(hlds__goal_form__goal_can_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_throw_2_0);
	MR_init_label3(hlds__goal_form__goal_can_throw_2_0,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_throw'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_throw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__goal_can_throw_2_0_i3);
MR_def_label(hlds__goal_form__goal_can_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_throw_2_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		hlds__goal_form__goal_can_throw_2_0_i6);
MR_def_label(hlds__goal_form__goal_can_throw_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_can_throw_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module19)
	MR_init_entry1(hlds__goal_form__goal_cannot_loop_or_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_cannot_loop_or_throw_2_0);
	MR_init_label5(hlds__goal_form__goal_cannot_loop_or_throw_2_0,3,5,12,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cannot_loop_or_throw'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_cannot_loop_or_throw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		hlds__goal_form__goal_cannot_loop_or_throw_2_0_i3);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_2_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__goal_cannot_loop_or_throw_2_0_i5);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_2_0_i6);
	}
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		hlds__goal_form__goal_cannot_loop_or_throw_2_0_i8);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_2_0_i12);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module20)
	MR_init_entry1(hlds__goal_form__goal_can_loop_or_throw_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_loop_or_throw_2_0);
	MR_init_label2(hlds__goal_form__goal_can_loop_or_throw_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_loop_or_throw'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_loop_or_throw_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_or_throw_2_0,
		hlds__goal_form__goal_can_loop_or_throw_2_0_i4);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_loop_or_throw_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module21)
	MR_init_entry1(hlds__goal_form__goal_cannot_loop_or_throw_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_cannot_loop_or_throw_1_0);
	MR_init_label5(hlds__goal_form__goal_cannot_loop_or_throw_1_0,2,4,11,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cannot_loop_or_throw'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_cannot_loop_or_throw_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_can_loop_func_2_0,
		hlds__goal_form__goal_cannot_loop_or_throw_1_0_i2);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_1_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__goal_cannot_loop_or_throw_1_0_i4);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_1_0_i5);
	}
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_expr_can_throw_2_0,
		hlds__goal_form__goal_cannot_loop_or_throw_1_0_i7);
MR_def_label(hlds__goal_form__goal_cannot_loop_or_throw_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_cannot_loop_or_throw_1_0_i11);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module22)
	MR_init_entry1(hlds__goal_form__goal_can_loop_or_throw_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_can_loop_or_throw_1_0);
	MR_init_label2(hlds__goal_form__goal_can_loop_or_throw_1_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_can_loop_or_throw'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_can_loop_or_throw_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_or_throw_1_0,
		hlds__goal_form__goal_can_loop_or_throw_1_0_i4);
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__goal_form__goal_can_loop_or_throw_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_form__goal_can_loop_or_throw_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module23)
	MR_init_entry1(fn__hlds__goal_form__goal_is_flat_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_is_flat_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_flat'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_form__goal_is_flat_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_is_flat_expr_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module24)
	MR_init_entry1(fn__hlds__goal_form__goal_is_flat_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_is_flat_expr_1_0);
	MR_init_label6(fn__hlds__goal_form__goal_is_flat_expr_1_0,17,5,3,7,10,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_flat_expr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_is_flat_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i3);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i5);
	}
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__hlds__goal_form__goal_is_flat_list_1_0);
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 0);
	MR_np_localtailcall(fn__hlds__goal_form__goal_is_flat_expr_1_0);
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i9);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i10);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_localtailcall(fn__hlds__goal_form__goal_is_flat_expr_1_0);
MR_def_label(fn__hlds__goal_form__goal_is_flat_expr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_expr_1_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module25)
	MR_init_entry1(fn__hlds__goal_form__goal_is_flat_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_is_flat_list_1_0);
	MR_init_label4(fn__hlds__goal_form__goal_is_flat_list_1_0,18,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_flat_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__goal_form__goal_is_flat_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__hlds__goal_form__goal_is_flat_list_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_list_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__hlds__goal_form__goal_is_flat_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_is_flat_expr_1_0,
		fn__hlds__goal_form__goal_is_flat_list_1_0_i5);
MR_def_label(fn__hlds__goal_form__goal_is_flat_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_list_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__hlds__goal_form__goal_is_flat_list_1_0_i18);
MR_def_label(fn__hlds__goal_form__goal_is_flat_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module26)
	MR_init_entry1(hlds__goal_form__goal_may_allocate_heap_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_may_allocate_heap_2_2_0);
	MR_init_label10(hlds__goal_form__goal_may_allocate_heap_2_2_0,137,3,65,4,7,49,12,15,13,17)
	MR_init_label10(hlds__goal_form__goal_may_allocate_heap_2_2_0,21,20,23,22,19,27,30,29,37,39)
	MR_init_label2(hlds__goal_form__goal_may_allocate_heap_2_2_0,38,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_may_allocate_heap_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__goal_may_allocate_heap_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i49);
	}
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i7);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i12);
	}
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__goal_form__goal_list_may_allocate_heap_2_0);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__goal_form__goal_list_may_allocate_heap_2_0);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i19);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__goal_may_allocate_heap_2_2_0_i21);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__goal_may_allocate_heap_2_2_0_i23);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i137);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i27);
	}
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i137);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i29);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i30);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i137);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i35);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (!(((MR_tag(MR_r2) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	MR_np_localcall_lab(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__goal_may_allocate_heap_2_2_0_i39);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__goal_form__goal_may_allocate_heap_2_2_0_i137);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_2_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__goal_form__cases_may_allocate_heap_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module27)
	MR_init_entry1(hlds__goal_form__goal_list_may_allocate_heap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_list_may_allocate_heap_2_0);
	MR_init_label4(hlds__goal_form__goal_list_may_allocate_heap_2_0,15,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_may_allocate_heap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__goal_list_may_allocate_heap_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__goal_list_may_allocate_heap_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__goal_list_may_allocate_heap_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__goal_list_may_allocate_heap_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__goal_list_may_allocate_heap_2_0_i5);
MR_def_label(hlds__goal_form__goal_list_may_allocate_heap_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__goal_list_may_allocate_heap_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__goal_list_may_allocate_heap_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__goal_list_may_allocate_heap_2_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module28)
	MR_init_entry1(hlds__goal_form__cases_may_allocate_heap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cases_may_allocate_heap_2_0);
	MR_init_label4(hlds__goal_form__cases_may_allocate_heap_2_0,15,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_may_allocate_heap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cases_may_allocate_heap_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__cases_may_allocate_heap_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__cases_may_allocate_heap_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cases_may_allocate_heap_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__cases_may_allocate_heap_2_0_i5);
MR_def_label(hlds__goal_form__cases_may_allocate_heap_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__cases_may_allocate_heap_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cases_may_allocate_heap_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__cases_may_allocate_heap_2_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module29)
	MR_init_entry1(hlds__goal_form__goal_may_allocate_heap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_may_allocate_heap_1_0);
	MR_init_label1(hlds__goal_form__goal_may_allocate_heap_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_may_allocate_heap'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_may_allocate_heap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_2_2_0,
		hlds__goal_form__goal_may_allocate_heap_1_0_i2);
MR_def_label(hlds__goal_form__goal_may_allocate_heap_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module30)
	MR_init_entry1(hlds__goal_form__goal_list_may_allocate_heap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__goal_list_may_allocate_heap_1_0);
	MR_init_label1(hlds__goal_form__goal_list_may_allocate_heap_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_may_allocate_heap'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__goal_list_may_allocate_heap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__goal_form__goal_list_may_allocate_heap_2_0,
		hlds__goal_form__goal_list_may_allocate_heap_1_0_i2);
MR_def_label(hlds__goal_form__goal_list_may_allocate_heap_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module31)
	MR_init_entry1(hlds__goal_form__cannot_stack_flush_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_stack_flush_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_stack_flush'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__cannot_stack_flush_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_form__cannot_stack_flush_2_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module32)
	MR_init_entry1(hlds__goal_form__cannot_stack_flush_2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_stack_flush_2_1_0);
	MR_init_label5(hlds__goal_form__cannot_stack_flush_2_1_0,3,5,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_stack_flush_2'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cannot_stack_flush_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
MR_def_label(hlds__goal_form__cannot_stack_flush_2_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i5);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r1 = !(((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1)));
	MR_proceed();
MR_def_label(hlds__goal_form__cannot_stack_flush_2_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_form__cannot_stack_flush_goals_1_0);
MR_def_label(hlds__goal_form__cannot_stack_flush_2_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i12);
	}
	MR_r2 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r1 = !(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1)));
	MR_proceed();
	}
MR_def_label(hlds__goal_form__cannot_stack_flush_2_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_2_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_form__cannot_stack_flush_cases_1_0);
MR_def_label(hlds__goal_form__cannot_stack_flush_2_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module33)
	MR_init_entry1(hlds__goal_form__cannot_stack_flush_goals_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_stack_flush_goals_1_0);
	MR_init_label4(hlds__goal_form__cannot_stack_flush_goals_1_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_stack_flush_goals'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cannot_stack_flush_goals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__cannot_stack_flush_goals_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_goals_1_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_2_1_0,
		hlds__goal_form__cannot_stack_flush_goals_1_0_i4);
MR_def_label(hlds__goal_form__cannot_stack_flush_goals_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_goals_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_goals_1_0_i17);
MR_def_label(hlds__goal_form__cannot_stack_flush_goals_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cannot_stack_flush_goals_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module34)
	MR_init_entry1(hlds__goal_form__cannot_stack_flush_cases_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_stack_flush_cases_1_0);
	MR_init_label4(hlds__goal_form__cannot_stack_flush_cases_1_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_stack_flush_cases'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cannot_stack_flush_cases_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__cannot_stack_flush_cases_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_cases_1_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(hlds__goal_form__cannot_stack_flush_2_1_0,
		hlds__goal_form__cannot_stack_flush_cases_1_0_i4);
MR_def_label(hlds__goal_form__cannot_stack_flush_cases_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_cases_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__cannot_stack_flush_cases_1_0_i17);
MR_def_label(hlds__goal_form__cannot_stack_flush_cases_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cannot_stack_flush_cases_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(hlds__goal_form_module35)
	MR_init_entry1(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0);
	MR_init_label7(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,36,6,4,10,11,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_fail_before_stack_flush_conj'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i10);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i11);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0_i36);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module36)
	MR_init_entry1(hlds__goal_form__cannot_fail_before_stack_flush_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__cannot_fail_before_stack_flush_1_0);
	MR_init_label4(hlds__goal_form__cannot_fail_before_stack_flush_1_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cannot_fail_before_stack_flush'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__cannot_fail_before_stack_flush_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_form__cannot_fail_before_stack_flush_1_0_i2);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__goal_form__cannot_fail_before_stack_flush_1_0_i3);
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_1_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__goal_form__cannot_fail_before_stack_flush_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__goal_form__cannot_fail_before_stack_flush_conj_1_0);
	}
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__goal_form__cannot_fail_before_stack_flush_1_0,1)
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

MR_decl_entry(int__min_3_0);
MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(hlds__goal_form_module37)
	MR_init_entry1(hlds__goal_form__count_recursive_calls_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__count_recursive_calls_5_0);
	MR_init_label10(hlds__goal_form__count_recursive_calls_5_0,111,3,6,8,11,12,13,14,10,16)
	MR_init_label10(hlds__goal_form__count_recursive_calls_5_0,48,19,18,28,30,31,32,33,26,34)
	MR_init_label1(hlds__goal_form__count_recursive_calls_5_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_recursive_calls'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_form__count_recursive_calls_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i48);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if ((MR_r3 != MR_tempr2)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_form__count_recursive_calls_conj_7_0);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_form__count_recursive_calls_disj_5_0);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_5_0_i11);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_5_0_i12);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_5_0_i13);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(2));
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_5_0_i14);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_5_0_i33);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i111);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i19);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i19);
	}
	}
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i111);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i26);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 5);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i28);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i111);
	}
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r5, 4);
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_5_0_i30);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_disj_5_0,
		hlds__goal_form__count_recursive_calls_5_0_i31);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_5_0_i32);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_5_0_i33);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_r5, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i111);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_form.m", 11);
	MR_r2 = (MR_Word) MR_string_const("count_recursive_calls: bi_implication", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(hlds__goal_form__count_recursive_calls_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_5_0_i48);
	}
	MR_r1 = MR_tfield(3, MR_r4, 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_form__count_recursive_calls_cases_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module38)
	MR_init_entry1(hlds__goal_form__count_recursive_calls_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__count_recursive_calls_conj_7_0);
	MR_init_label3(hlds__goal_form__count_recursive_calls_conj_7_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_recursive_calls_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__count_recursive_calls_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__goal_form__count_recursive_calls_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_conj_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__goal_form__count_recursive_calls_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_conj_7_0_i4);
MR_def_label(hlds__goal_form__count_recursive_calls_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_conj_7_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module39)
	MR_init_entry1(hlds__goal_form__count_recursive_calls_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__count_recursive_calls_disj_5_0);
	MR_init_label10(hlds__goal_form__count_recursive_calls_disj_5_0,3,35,7,10,9,11,12,13,14,15)
	MR_init_label1(hlds__goal_form__count_recursive_calls_disj_5_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_recursive_calls_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__count_recursive_calls_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_disj_5_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_disj_5_0_i35);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(hlds__goal_form__count_recursive_calls_5_0);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i7);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_disj_5_0_i9);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i10);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i15);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i11);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_disj_5_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i12);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i13);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i14);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i15);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_disj_5_0_i16);
MR_def_label(hlds__goal_form__count_recursive_calls_disj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module40)
	MR_init_entry1(hlds__goal_form__count_recursive_calls_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_form__count_recursive_calls_cases_5_0);
	MR_init_label10(hlds__goal_form__count_recursive_calls_cases_5_0,35,7,10,9,11,12,13,14,15,16)
	MR_init_label1(hlds__goal_form__count_recursive_calls_cases_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_recursive_calls_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_form__count_recursive_calls_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_cases_5_0_i3);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_cases_5_0_i35);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_tailcall_ent(hlds__goal_form__count_recursive_calls_5_0);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i7);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_form__count_recursive_calls_cases_5_0_i9);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i10);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i15);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i11);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__goal_form__count_recursive_calls_cases_5_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i12);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i13);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i14);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(int__min_3_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i15);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		hlds__goal_form__count_recursive_calls_cases_5_0_i16);
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__goal_form__count_recursive_calls_cases_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_form.m", 11);
	MR_r2 = (MR_Word) MR_string_const("empty cases in count_recursive_calls_cases", 42);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(hlds__goal_form_module41)
	MR_init_entry1(fn__hlds__goal_form__goal_cannot_modify_trail_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_cannot_modify_trail_1_0);
	MR_init_label2(fn__hlds__goal_form__goal_cannot_modify_trail_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cannot_modify_trail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_form__goal_cannot_modify_trail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		fn__hlds__goal_form__goal_cannot_modify_trail_1_0_i3);
MR_def_label(fn__hlds__goal_form__goal_cannot_modify_trail_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_cannot_modify_trail_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__hlds__goal_form__goal_cannot_modify_trail_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__not_1_0);

MR_BEGIN_MODULE(hlds__goal_form_module42)
	MR_init_entry1(fn__hlds__goal_form__goal_may_modify_trail_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__goal_form__goal_may_modify_trail_1_0);
	MR_init_label2(fn__hlds__goal_form__goal_may_modify_trail_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_may_modify_trail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__goal_form__goal_may_modify_trail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		fn__hlds__goal_form__goal_may_modify_trail_1_0_i3);
MR_def_label(fn__hlds__goal_form__goal_may_modify_trail_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__goal_form__goal_may_modify_trail_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__bool__not_1_0);
MR_def_label(fn__hlds__goal_form__goal_may_modify_trail_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__bool__not_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module43)
	MR_init_entry1(__Unify___hlds__goal_form__goal_loop_or_throw_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_form__goal_loop_or_throw_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_form__goal_loop_or_throw_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__goal_form_module44)
	MR_init_entry1(__Compare___hlds__goal_form__goal_loop_or_throw_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_form__goal_loop_or_throw_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_form__goal_loop_or_throw_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module45)
	MR_init_entry1(__Unify___hlds__goal_form__goal_loop_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_form__goal_loop_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_form__goal_loop_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module46)
	MR_init_entry1(__Compare___hlds__goal_form__goal_loop_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_form__goal_loop_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_form__goal_loop_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module47)
	MR_init_entry1(__Unify___hlds__goal_form__goal_throw_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_form__goal_throw_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__goal_form__goal_throw_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_form_module48)
	MR_init_entry1(__Compare___hlds__goal_form__goal_throw_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_form__goal_throw_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__goal_form__goal_throw_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__exception_analysis__lookup_exception_analysis_result_4_0);

MR_BEGIN_MODULE(hlds__goal_form_module49)
	MR_init_entry1(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0);
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,57,3,6,4,9,13,18,64,15,12)
	MR_init_label10(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,21,23,28,30,31,33,34,25,37,201)
	MR_init_label8(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,74,40,39,209,50,52,53,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__goal_can_throw_2__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__exception_analysis__lookup_exception_analysis_result_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i6);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i201);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_throw_exception_1_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i13);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i64);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i18);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i15);
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(hlds__goal_form__goals_can_throw_4_0);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_form__goals_can_throw_4_0);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i28);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i31);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i33);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i34);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i74);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i37);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__goal_form__goal_can_throw_4_0);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i39);
	}
	MR_r3 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i40);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i40);
	}
	}
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(hlds__goal_form__goal_can_throw_4_0);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i45);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i209);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i50);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i52);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_throw_4_0,
		f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i53);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0_i74);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(f_104_108_100_115_95_95_103_111_97_108_95_102_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_99_97_110_95_116_104_114_111_119_95_50_95_95_91_50_93_95_48_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(hlds__goal_form__cases_can_throw_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__goal_form_maybe_bunch_0(void)
{
	hlds__goal_form_module0();
	hlds__goal_form_module1();
	hlds__goal_form_module2();
	hlds__goal_form_module3();
	hlds__goal_form_module4();
	hlds__goal_form_module5();
	hlds__goal_form_module6();
	hlds__goal_form_module7();
	hlds__goal_form_module8();
	hlds__goal_form_module9();
	hlds__goal_form_module10();
	hlds__goal_form_module11();
	hlds__goal_form_module12();
	hlds__goal_form_module13();
	hlds__goal_form_module14();
	hlds__goal_form_module15();
	hlds__goal_form_module16();
	hlds__goal_form_module17();
	hlds__goal_form_module18();
	hlds__goal_form_module19();
	hlds__goal_form_module20();
	hlds__goal_form_module21();
	hlds__goal_form_module22();
	hlds__goal_form_module23();
	hlds__goal_form_module24();
	hlds__goal_form_module25();
	hlds__goal_form_module26();
	hlds__goal_form_module27();
	hlds__goal_form_module28();
	hlds__goal_form_module29();
	hlds__goal_form_module30();
	hlds__goal_form_module31();
	hlds__goal_form_module32();
	hlds__goal_form_module33();
	hlds__goal_form_module34();
	hlds__goal_form_module35();
	hlds__goal_form_module36();
	hlds__goal_form_module37();
	hlds__goal_form_module38();
	hlds__goal_form_module39();
}

static void mercury__hlds__goal_form_maybe_bunch_1(void)
{
	hlds__goal_form_module40();
	hlds__goal_form_module41();
	hlds__goal_form_module42();
	hlds__goal_form_module43();
	hlds__goal_form_module44();
	hlds__goal_form_module45();
	hlds__goal_form_module46();
	hlds__goal_form_module47();
	hlds__goal_form_module48();
	hlds__goal_form_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__goal_form__init(void);
void mercury__hlds__goal_form__init_type_tables(void);
void mercury__hlds__goal_form__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__goal_form__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__goal_form__init_complexity_procs(void);
#endif

void mercury__hlds__goal_form__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__goal_form_maybe_bunch_0();
	mercury__hlds__goal_form_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0,
		hlds__goal_form__goal_loop_or_throw_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_form__type_ctor_info_goal_loop_status_0,
		hlds__goal_form__goal_loop_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_form__type_ctor_info_goal_throw_status_0,
		hlds__goal_form__goal_throw_status_0_0);
	mercury__hlds__goal_form__init_debugger();
}

void mercury__hlds__goal_form__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_form__type_ctor_info_goal_loop_or_throw_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_form__type_ctor_info_goal_loop_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_form__type_ctor_info_goal_throw_status_0);
	}
}


void mercury__hlds__goal_form__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__goal_form__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__goal_form);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__goal_form__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
