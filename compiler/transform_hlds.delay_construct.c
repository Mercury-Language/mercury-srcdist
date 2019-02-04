/*
** Automatically generated from `delay_construct.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__delay_construct__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.delay_construct.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.delay_construct.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.delay_construct.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.delay_construct.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.delay_construct.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.delay_construct.c"
#line 48 "transform_hlds.delay_construct.c"
#include "transform_hlds.delay_construct.mh"

#line 51 "transform_hlds.delay_construct.c"
#line 52 "transform_hlds.delay_construct.c"
#ifndef TRANSFORM_HLDS__DELAY_CONSTRUCT_DECL_GUARD
#define TRANSFORM_HLDS__DELAY_CONSTRUCT_DECL_GUARD

#line 56 "transform_hlds.delay_construct.c"
#line 57 "transform_hlds.delay_construct.c"

#endif
#line 60 "transform_hlds.delay_construct.c"

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
	mercury_data_transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0;
MR_decl_label3(transform_hlds__delay_construct__delay_construct_in_cases_4_0, 15,4,6)
MR_decl_label10(transform_hlds__delay_construct__delay_construct_in_conj_6_0, 92,3,5,6,12,13,15,16,19,7)
MR_decl_label10(transform_hlds__delay_construct__delay_construct_in_conj_6_0, 8,23,25,27,29,30,32,33,35,37)
MR_decl_label4(transform_hlds__delay_construct__delay_construct_in_conj_6_0, 22,39,41,42)
MR_decl_label10(transform_hlds__delay_construct__delay_construct_in_goal_4_0, 84,6,7,8,14,15,9,17,85,21)
MR_decl_label10(transform_hlds__delay_construct__delay_construct_in_goal_4_0, 89,25,26,27,28,29,87,33,88,37)
MR_decl_label6(transform_hlds__delay_construct__delay_construct_in_goal_4_0, 40,44,86,47,82,83)
MR_decl_label3(transform_hlds__delay_construct__delay_construct_in_goals_4_0, 14,4,5)
MR_decl_label9(transform_hlds__delay_construct__delay_construct_proc_7_0, 2,3,4,5,6,7,8,10,11)
MR_decl_label4(transform_hlds__delay_construct__delay_construct_skippable_2_0, 3,6,7,1)
MR_decl_label4(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0, 4,7,11,1)
MR_decl_label6(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0, 3,2,5,9,14,38)
MR_decl_static(transform_hlds__delay_construct__delay_construct_skippable_2_0)
MR_decl_static(transform_hlds__delay_construct__delay_construct_in_conj_6_0)
MR_decl_static(transform_hlds__delay_construct__delay_construct_in_goal_4_0)
MR_decl_static(transform_hlds__delay_construct__delay_construct_in_goals_4_0)
MR_decl_static(transform_hlds__delay_construct__delay_construct_in_cases_4_0)
MR_def_extern_entry(transform_hlds__delay_construct__delay_construct_proc_7_0)
MR_decl_static(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0)
MR_decl_static(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0)

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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__delay_construct__field_types_delay_construct_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

const MR_ConstString mercury_data_transform_hlds__delay_construct__field_names_delay_construct_info_0_0[] = {
	"dci_module_info",
	"dci_body_typeinfo_liveness",
	"dci_vartypes",
	"dci_rtti_varmaps"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0 = {
	"delay_construct_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__delay_construct__field_types_delay_construct_info_0_0,
	mercury_data_transform_hlds__delay_construct__field_names_delay_construct_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[] = {
	&mercury_data_transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[] = {
	&mercury_data_transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0
};

const MR_Integer mercury_data_transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0)),
	"transform_hlds.delay_construct",
	"delay_construct_info",
	{ (void *)mercury_data_transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0 },
	{ (void *)mercury_data_transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0 },
	1,
	4,
	mercury_data_transform_hlds__delay_construct__functor_number_map_delay_construct_info_0
};



MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module0)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_skippable_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_skippable_2_0);
	MR_init_label4(transform_hlds__delay_construct__delay_construct_skippable_2_0,3,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_skippable'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__delay_construct__delay_construct_skippable_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_skippable_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_skippable_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__delay_construct__delay_construct_skippable_2_0_i6);
MR_def_label(transform_hlds__delay_construct__delay_construct_skippable_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_skippable_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__delay_construct__delay_construct_skippable_2_0_i6);
MR_def_label(transform_hlds__delay_construct__delay_construct_skippable_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__delay_construct__delay_construct_skippable_2_0_i7);
MR_def_label(transform_hlds__delay_construct__delay_construct_skippable_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) 3);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__delay_construct__delay_construct_skippable_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_info_0_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module1)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_in_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_in_conj_6_0);
	MR_init_label10(transform_hlds__delay_construct__delay_construct_in_conj_6_0,92,3,5,6,12,13,15,16,19,7)
	MR_init_label10(transform_hlds__delay_construct__delay_construct_in_conj_6_0,8,23,25,27,29,30,32,33,35,37)
	MR_init_label4(transform_hlds__delay_construct__delay_construct_in_conj_6_0,22,39,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_in_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__delay_construct__delay_construct_in_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r5;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__reverse_2_0);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i5);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i6);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(7), 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i8);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i8);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i12);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i13);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i15);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i16);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i19);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i92);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i23);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i22);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_info_0_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i25);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i22);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_skippable_2_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i27);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i22);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i29);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i30);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i32);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i33);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i22);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i35);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_conj_6_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_conj_6_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i37);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i39);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i41);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_conj_6_0,
		transform_hlds__delay_construct__delay_construct_in_conj_6_0_i42);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_conj_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module2)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_in_goal_4_0);
	MR_init_label10(transform_hlds__delay_construct__delay_construct_in_goal_4_0,84,6,7,8,14,15,9,17,85,21)
	MR_init_label10(transform_hlds__delay_construct__delay_construct_in_goal_4_0,89,25,26,27,28,29,87,33,88,37)
	MR_init_label6(transform_hlds__delay_construct__delay_construct_in_goal_4_0,40,44,86,47,82,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__delay_construct__delay_construct_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i83);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i83) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i84) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i85) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i86) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i87) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i88) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i89) MR_AND
		MR_LABEL_AP(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i44));
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r5 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i6);
	}
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goals_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i17);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(3, MR_r4, 2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i7);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i8);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i9);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i14);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_conj_6_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i15);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goals_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i17);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goals_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i17);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goals_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i21);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_sv(5), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i25);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i26);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i27);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i28);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i29);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i33);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i37);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goal_4_0_i82);
	}
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i40);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,40)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("delay_construct.m", 17);
	MR_r2 = (MR_Word) MR_string_const("delay_construct_in_goal: unexpected shorthand", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_cases_4_0,
		transform_hlds__delay_construct__delay_construct_in_goal_4_0_i47);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	}
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goal_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__delay_construct_module3)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_in_goals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_in_goals_4_0);
	MR_init_label3(transform_hlds__delay_construct__delay_construct_in_goals_4_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_in_goals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__delay_construct__delay_construct_in_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_goals_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goals_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_goals_4_0_i4);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_goals_4_0,
		transform_hlds__delay_construct__delay_construct_in_goals_4_0_i5);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__delay_construct_module4)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_in_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_in_cases_4_0);
	MR_init_label3(transform_hlds__delay_construct__delay_construct_in_cases_4_0,15,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_in_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__delay_construct__delay_construct_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__delay_construct__delay_construct_in_cases_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__delay_construct__delay_construct_in_cases_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_in_cases_4_0_i4);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(transform_hlds__delay_construct__delay_construct_in_cases_4_0,
		transform_hlds__delay_construct__delay_construct_in_cases_4_0_i6);
MR_def_label(transform_hlds__delay_construct__delay_construct_in_cases_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module5)
	MR_init_entry1(transform_hlds__delay_construct__delay_construct_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__delay_construct__delay_construct_proc_7_0);
	MR_init_label9(transform_hlds__delay_construct__delay_construct_proc_7_0,2,3,4,5,6,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay_construct_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__delay_construct__delay_construct_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% Delaying construction unifications in ", 40);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i2);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i3);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i4);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i5);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i6);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i7);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i8);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i10);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__delay_construct__delay_construct_in_goal_4_0,
		transform_hlds__delay_construct__delay_construct_proc_7_0_i11);
MR_def_label(transform_hlds__delay_construct__delay_construct_proc_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module6)
	MR_init_entry1(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__delay_construct__delay_construct_info_0_0);
	MR_init_label4(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0,4,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i11);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i7);
MR_def_label(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_def_label(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__delay_construct__delay_construct_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(transform_hlds__delay_construct_module7)
	MR_init_entry1(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__delay_construct__delay_construct_info_0_0);
	MR_init_label6(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,3,2,5,9,14,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i38);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i14);
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0_i38);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
MR_def_label(__Compare___transform_hlds__delay_construct__delay_construct_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__delay_construct_maybe_bunch_0(void)
{
	transform_hlds__delay_construct_module0();
	transform_hlds__delay_construct_module1();
	transform_hlds__delay_construct_module2();
	transform_hlds__delay_construct_module3();
	transform_hlds__delay_construct_module4();
	transform_hlds__delay_construct_module5();
	transform_hlds__delay_construct_module6();
	transform_hlds__delay_construct_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__delay_construct__init(void);
void mercury__transform_hlds__delay_construct__init_type_tables(void);
void mercury__transform_hlds__delay_construct__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__delay_construct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__delay_construct__init_complexity_procs(void);
#endif

void mercury__transform_hlds__delay_construct__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__delay_construct_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0,
		transform_hlds__delay_construct__delay_construct_info_0_0);
	mercury__transform_hlds__delay_construct__init_debugger();
}

void mercury__transform_hlds__delay_construct__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0);
	}
}


void mercury__transform_hlds__delay_construct__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__delay_construct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__delay_construct);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__delay_construct__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
