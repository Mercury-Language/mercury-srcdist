/*
** Automatically generated from `code_gen.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__code_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.code_gen.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.code_gen.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.code_gen.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.code_gen.c"
#line 40 "ll_backend.code_gen.c"
#include "ll_backend.code_gen.mh"

#line 43 "ll_backend.code_gen.c"
#line 44 "ll_backend.code_gen.c"
#ifndef LL_BACKEND__CODE_GEN_DECL_GUARD
#define LL_BACKEND__CODE_GEN_DECL_GUARD

#line 48 "ll_backend.code_gen.c"
#line 49 "ll_backend.code_gen.c"

#endif
#line 52 "ll_backend.code_gen.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];
MR_decl_label8(ll_backend__code_gen__generate_goal_5_0, 4,2,6,7,8,11,13,15)
MR_decl_label8(ll_backend__code_gen__generate_goal_5_0, 17,16,22,14,26,27,28,30)
MR_decl_label8(ll_backend__code_gen__generate_goal_5_0, 32,33,35,37,39,29,40,42)
MR_decl_label8(ll_backend__code_gen__generate_goal_5_0, 44,48,50,53,49,45,56,57)
MR_decl_label4(ll_backend__code_gen__generate_goal_5_0, 41,59,60,10)
MR_decl_label8(ll_backend__code_gen__generate_goal_2_6_0, 4,6,7,12,14,83,16,26)
MR_decl_label8(ll_backend__code_gen__generate_goal_2_6_0, 28,30,84,34,36,85,39,86)
MR_decl_label4(ll_backend__code_gen__generate_goal_2_6_0, 42,87,45,47)
MR_decl_label6(ll_backend__code_gen__generate_goals_5_0, 23,4,5,8,7,10)
MR_def_extern_entry(ll_backend__code_gen__generate_goal_5_0)
MR_decl_static(ll_backend__code_gen__generate_goal_2_6_0)
MR_decl_static(ll_backend__code_gen__generate_goals_5_0)

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

MR_decl_entry(hlds__hlds_goal__goal_is_atomic_1_0);
MR_decl_entry(ll_backend__code_info__pre_goal_update_4_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(hlds__instmap__is_reachable_1_0);
MR_decl_entry(hlds__code_model__goal_info_get_code_model_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_features_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
MR_decl_entry(set__member_2_0);
MR_decl_entry(__Unify___hlds__hlds_pred__proc_info_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_call_table_tip_2_0);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(ll_backend__code_info__save_variables_on_stack_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ll_backend__code_info__set_instmap_3_0);
MR_decl_entry(ll_backend__code_info__post_goal_update_3_0);

MR_BEGIN_MODULE(ll_backend__code_gen_module0)
	MR_init_entry1(ll_backend__code_gen__generate_goal_5_0);
	MR_init_label8(ll_backend__code_gen__generate_goal_5_0,4,2,6,7,8,11,13,15)
	MR_init_label8(ll_backend__code_gen__generate_goal_5_0,17,16,22,14,26,27,28,30)
	MR_init_label8(ll_backend__code_gen__generate_goal_5_0,32,33,35,37,39,29,40,42)
	MR_init_label8(ll_backend__code_gen__generate_goal_5_0,44,48,50,53,49,45,56,57)
	MR_init_label4(ll_backend__code_gen__generate_goal_5_0,41,59,60,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_gen__generate_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_is_atomic_1_0,
		ll_backend__code_gen__generate_goal_5_0_i4);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i6);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	}
MR_def_label(ll_backend__code_gen__generate_goal_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__pre_goal_update_4_0,
		ll_backend__code_gen__generate_goal_5_0_i7);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__code_gen__generate_goal_5_0_i8);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		ll_backend__code_gen__generate_goal_5_0_i11);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__code_model__goal_info_get_code_model_2_0,
		ll_backend__code_gen__generate_goal_5_0_i13);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i15);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i14);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i16);
	}
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i17);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i14);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("code_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("semidet model in det context", 28);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__code_gen__generate_goal_5_0_i14);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i22);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i14);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("code_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("nondet model in det/semidet context", 35);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__code_gen__generate_goal_5_0_i14);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_2_6_0,
		ll_backend__code_gen__generate_goal_5_0_i26);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_features_2_0,
		ll_backend__code_gen__generate_goal_5_0_i27);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__code_gen__generate_goal_5_0_i28);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__code_gen__generate_goal_5_0_i30);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i29);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_info_2_0,
		ll_backend__code_gen__generate_goal_5_0_i32);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__proc_info_0_0,
		ll_backend__code_gen__generate_goal_5_0_i33);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		ll_backend__code_gen__generate_goal_5_0_i35);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i29);
	}
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__code_gen__generate_goal_5_0_i37);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__code_gen__generate_goal_5_0_i39);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i40);
	}
MR_def_label(ll_backend__code_gen__generate_goal_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_sv(7);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__code_gen__generate_goal_5_0_i42);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i41);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		ll_backend__code_gen__generate_goal_5_0_i44);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i45);
	}
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		ll_backend__code_gen__generate_goal_5_0_i48);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__code_gen__generate_goal_5_0_i50);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i49);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_5_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__code_gen__generate_goal_5_0_i57);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(7), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__code_gen__generate_goal_5_0_i57);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__code_gen__generate_goal_5_0_i57);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("code_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("compute_deep_save_excp_vars: inconsistent proc_info", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__code_gen__generate_goal_5_0_i56);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_on_stack_4_0,
		ll_backend__code_gen__generate_goal_5_0_i57);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_instmap_3_0,
		ll_backend__code_gen__generate_goal_5_0_i59);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__set_instmap_3_0,
		ll_backend__code_gen__generate_goal_5_0_i59);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__post_goal_update_3_0,
		ll_backend__code_gen__generate_goal_5_0_i60);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__code_gen__generate_goal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__unify_gen__generate_unification_6_0);
MR_decl_entry(ll_backend__call_gen__generate_call_8_0);
MR_decl_entry(ll_backend__call_gen__generate_builtin_7_0);
MR_decl_entry(ll_backend__call_gen__generate_generic_call_9_0);
MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0);
MR_decl_entry(ll_backend__par_conj_gen__generate_par_conj_6_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(ll_backend__disj_gen__generate_disj_7_0);
MR_decl_entry(ll_backend__switch_gen__generate_switch_8_0);
MR_decl_entry(ll_backend__ite_gen__generate_negation_7_0);
MR_decl_entry(ll_backend__commit_gen__generate_scope_7_0);
MR_decl_entry(ll_backend__ite_gen__generate_ite_9_0);

MR_BEGIN_MODULE(ll_backend__code_gen_module1)
	MR_init_entry1(ll_backend__code_gen__generate_goal_2_6_0);
	MR_init_label8(ll_backend__code_gen__generate_goal_2_6_0,4,6,7,12,14,83,16,26)
	MR_init_label8(ll_backend__code_gen__generate_goal_2_6_0,28,30,84,34,36,85,39,86)
	MR_init_label4(ll_backend__code_gen__generate_goal_2_6_0,42,87,45,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_gen__generate_goal_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i14));
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__unify_gen__generate_unification_6_0);
	}
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(1, MR_r1, 2);
	MR_r8 = MR_ctfield(1, MR_r1, 1);
	MR_r9 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_2_6_0_i7);
	}
	MR_r1 = MR_r3;
	MR_r5 = MR_r2;
	MR_r2 = MR_r9;
	MR_r3 = MR_r8;
	MR_r6 = MR_r4;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(ll_backend__call_gen__generate_call_8_0);
	}
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r9;
	MR_r3 = MR_r8;
	MR_r5 = MR_r4;
	MR_r4 = MR_r7;
	MR_np_tailcall_ent(ll_backend__call_gen__generate_builtin_7_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	MR_r7 = MR_r4;
	MR_r4 = MR_ctfield(2, MR_tempr1, 2);
	MR_r5 = MR_ctfield(2, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__call_gen__generate_generic_call_9_0);
	}
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i83) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i84) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i36) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i85) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i86) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i87) MR_AND
		MR_LABEL_AP(ll_backend__code_gen__generate_goal_2_6_0_i47));
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 5);
	MR_sv(5) = MR_ctfield(3, MR_r1, 6);
	MR_sv(6) = MR_ctfield(3, MR_r1, 7);
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_sv(9) = MR_ctfield(3, MR_r1, 2);
	MR_sv(10) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		ll_backend__code_gen__generate_goal_2_6_0_i16);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_2_6_0_i26);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("code_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("generate_goal_2: foreign code other than C unexpected", 53);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goal_2_6_0_i30);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ll_backend__code_gen__generate_goals_5_0);
	}
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__par_conj_gen__generate_par_conj_6_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__code_gen__generate_goal_2_6_0_i34);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__disj_gen__generate_disj_7_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r5 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r6 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ll_backend__switch_gen__generate_switch_8_0);
	}
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__code_gen__generate_goal_2_6_0_i39);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__ite_gen__generate_negation_7_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__code_gen__generate_goal_2_6_0_i42);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__commit_gen__generate_scope_7_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__code_gen__generate_goal_2_6_0_i45);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__ite_gen__generate_ite_9_0);
MR_def_label(ll_backend__code_gen__generate_goal_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("code_gen.m", 10);
	MR_r2 = (MR_Word) MR_string_const("generate_goal_2: unexpected shorthand", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__is_unreachable_1_0);

MR_BEGIN_MODULE(ll_backend__code_gen_module2)
	MR_init_entry1(ll_backend__code_gen__generate_goals_5_0);
	MR_init_label6(ll_backend__code_gen__generate_goals_5_0,23,4,5,8,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_gen__generate_goals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goals_5_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__code_gen__generate_goals_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__code_gen__generate_goals_5_0_i4);
MR_def_label(ll_backend__code_gen__generate_goals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__code_gen__generate_goals_5_0_i5);
MR_def_label(ll_backend__code_gen__generate_goals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		ll_backend__code_gen__generate_goals_5_0_i8);
MR_def_label(ll_backend__code_gen__generate_goals_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_gen__generate_goals_5_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__code_gen__generate_goals_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__code_gen__generate_goals_5_0,
		ll_backend__code_gen__generate_goals_5_0_i10);
MR_def_label(ll_backend__code_gen__generate_goals_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__code_gen_maybe_bunch_0(void)
{
	ll_backend__code_gen_module0();
	ll_backend__code_gen_module1();
	ll_backend__code_gen_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__code_gen__init(void);
void mercury__ll_backend__code_gen__init_type_tables(void);
void mercury__ll_backend__code_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__code_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__code_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__code_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__code_gen_maybe_bunch_0();
	mercury__ll_backend__code_gen__init_debugger();
}

void mercury__ll_backend__code_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__code_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__code_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__code_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
