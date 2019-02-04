/*
** Automatically generated from `follow_code.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__follow_code__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.follow_code.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.follow_code.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.follow_code.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.follow_code.c"
#line 40 "ll_backend.follow_code.c"
#include "ll_backend.follow_code.mh"

#line 43 "ll_backend.follow_code.c"
#line 44 "ll_backend.follow_code.c"
#ifndef LL_BACKEND__FOLLOW_CODE_DECL_GUARD
#define LL_BACKEND__FOLLOW_CODE_DECL_GUARD

#line 48 "ll_backend.follow_code.c"
#line 49 "ll_backend.follow_code.c"

#endif
#line 52 "ll_backend.follow_code.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0, 2,3,5,6,7,8,9,11)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0, 13,14,15,16,17,10,19,20)
MR_decl_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0, 21,22)
MR_decl_label5(ll_backend__follow_code__check_follow_code_detism_2_0, 17,4,5,2,1)
MR_decl_label3(ll_backend__follow_code__move_follow_code_in_cases_4_0, 4,5,3)
MR_decl_label2(ll_backend__follow_code__move_follow_code_in_conj_5_0, 2,3)
MR_decl_label7(ll_backend__follow_code__move_follow_code_in_conj_2_6_0, 31,5,7,9,4,12,3)
MR_decl_label8(ll_backend__follow_code__move_follow_code_in_goal_4_0, 50,12,11,14,51,16,52,18)
MR_decl_label8(ll_backend__follow_code__move_follow_code_in_goal_4_0, 53,20,54,22,55,24,25,26)
MR_decl_label2(ll_backend__follow_code__move_follow_code_in_goal_4_0, 27,49)
MR_decl_label3(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0, 4,5,3)
MR_decl_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0, 5,6,8,9,11,12,13,14)
MR_decl_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0, 16,21,18,22,23,24,25,26)
MR_decl_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0, 27,28,29,31,36,33,37,38)
MR_decl_label7(ll_backend__follow_code__move_follow_code_move_goals_4_0, 39,40,2,42,43,44,1)
MR_decl_label8(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0, 44,4,5,6,8,13,10,14)
MR_decl_label5(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0, 15,16,17,19,1)
MR_decl_label8(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0, 44,4,5,6,8,13,10,14)
MR_decl_label5(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0, 15,16,17,19,1)
MR_decl_label6(ll_backend__follow_code__move_follow_code_select_5_0, 35,6,11,12,13,4)
MR_decl_static(ll_backend__follow_code__move_follow_code_select_5_0)
MR_decl_static(ll_backend__follow_code__check_follow_code_detism_2_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_move_goals_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_in_goal_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_in_cases_4_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_in_conj_5_0)
MR_decl_static(ll_backend__follow_code__move_follow_code_in_conj_2_6_0)
MR_def_extern_entry(ll_backend__follow_code__move_follow_code_in_proc_7_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0)

MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);
MR_decl_entry(fn__parse_tree__prog_data__worst_purity_2_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module0)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_select_5_0);
	MR_init_label6(ll_backend__follow_code__move_follow_code_select_5_0,35,6,11,12,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_select_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_select_5_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_select_5_0_i6);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_RTAGS_TEST(MR_tempr4,3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_select_5_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_tempr5 = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_select_5_0_i11);
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_select_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r3, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_select_5_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_select_5_0_i11);
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_select_5_0_i12);
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_select_5_0,
		ll_backend__follow_code__move_follow_code_select_5_0_i13);
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_select_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module1)
	MR_init_entry1(ll_backend__follow_code__check_follow_code_detism_2_0);
	MR_init_label5(ll_backend__follow_code__check_follow_code_detism_2_0,17,4,5,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__check_follow_code_detism_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_code__check_follow_code_detism_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__check_follow_code_detism_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		ll_backend__follow_code__check_follow_code_detism_2_0_i4);
MR_def_label(ll_backend__follow_code__check_follow_code_detism_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		ll_backend__follow_code__check_follow_code_detism_2_0_i5);
MR_def_label(ll_backend__follow_code__check_follow_code_detism_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__check_follow_code_detism_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__follow_code__check_follow_code_detism_2_0_i17);
MR_def_label(ll_backend__follow_code__check_follow_code_detism_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__follow_code__check_follow_code_detism_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module2)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0);
	MR_init_label8(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,44,4,5,6,8,13,10,14)
	MR_init_label5(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,15,16,17,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i44);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i4);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i5);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_sv(3);
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i19);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__follow_code__check_follow_code_detism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i8);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(7),3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i13);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i14);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i15);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i16);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i17);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i19);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_code_module3)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0);
	MR_init_label8(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,44,4,5,6,8,13,10,14)
	MR_init_label5(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,15,16,17,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i44);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i4);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i5);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_sv(3);
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i19);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__follow_code__check_follow_code_detism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i8);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(5),3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i13);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i14);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i15);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i16);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i17);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i19);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_code_module4)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_move_goals_4_0);
	MR_init_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0,5,6,8,9,11,12,13,14)
	MR_init_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0,16,21,18,22,23,24,25,26)
	MR_init_label8(ll_backend__follow_code__move_follow_code_move_goals_4_0,27,28,29,31,36,33,37,38)
	MR_init_label7(ll_backend__follow_code__move_follow_code_move_goals_4_0,39,40,2,42,43,44,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_move_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1));
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_move_goals_disj_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i6);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i2);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_move_goals_cases_4_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i9);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i2);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i12);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i13);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i26);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__follow_code__check_follow_code_detism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i16);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i21);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i22);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i23);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i24);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i25);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i27);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i28);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i2);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__follow_code__check_follow_code_detism_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i31);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i36);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_move_goals_4_0_i37);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i38);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i39);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i40);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr2, 4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i42);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__worst_purity_2_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i43);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		ll_backend__follow_code__move_follow_code_move_goals_4_0_i44);
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__follow_code__move_follow_code_move_goals_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module5)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_goal_4_0);
	MR_init_label8(ll_backend__follow_code__move_follow_code_in_goal_4_0,50,12,11,14,51,16,52,18)
	MR_init_label8(ll_backend__follow_code__move_follow_code_in_goal_4_0,53,20,54,22,55,24,25,26)
	MR_init_label2(ll_backend__follow_code__move_follow_code_in_goal_4_0,27,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_in_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_goal_4_0_i49);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__follow_code__move_follow_code_in_goal_4_0_i27));
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_goal_4_0_i11);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i12);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_conj_5_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i14);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i14);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i16);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_cases_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i18);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i20);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i22);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i24);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i25);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_goal_4_0_i26);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("follow_code.m", 13);
	MR_r2 = (MR_Word) MR_string_const("move_follow_code_in_goal: unexpected shorthand", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__follow_code__move_follow_code_in_goal_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_code_module6)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0);
	MR_init_label3(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_independent_goals_4_0_i4);
MR_def_label(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,
		ll_backend__follow_code__move_follow_code_in_independent_goals_4_0_i5);
MR_def_label(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_independent_goals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_code_module7)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_cases_4_0);
	MR_init_label3(ll_backend__follow_code__move_follow_code_in_cases_4_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_in_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_cases_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_cases_4_0_i4);
MR_def_label(ll_backend__follow_code__move_follow_code_in_cases_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__follow_code__move_follow_code_in_cases_4_0,
		ll_backend__follow_code__move_follow_code_in_cases_4_0_i5);
MR_def_label(ll_backend__follow_code__move_follow_code_in_cases_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_cases_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module8)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_conj_5_0);
	MR_init_label2(ll_backend__follow_code__move_follow_code_in_conj_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,
		ll_backend__follow_code__move_follow_code_in_conj_5_0_i2);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__follow_code__move_follow_code_in_conj_5_0_i3);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_is_branched_1_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module9)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_conj_2_6_0);
	MR_init_label7(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,31,5,7,9,4,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_code__move_follow_code_in_conj_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i3);
	}
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_branched_1_0,
		ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i5);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_select_5_0,
		ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i7);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i4);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_move_goals_4_0,
		ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i9);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i4);
	}
	MR_r1 = MR_r2;
	MR_sv(3) = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i12);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i12);
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__follow_code__move_follow_code_in_conj_2_6_0_i31);
	}
MR_def_label(ll_backend__follow_code__move_follow_code_in_conj_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_code_module10)
	MR_init_entry1(ll_backend__follow_code__move_follow_code_in_proc_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__follow_code__move_follow_code_in_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__quantification__implicitly_quantify_clause_body_10_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);

MR_BEGIN_MODULE(ll_backend__follow_code_module11)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,2,3,5,6,7,8,9,11)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,13,14,15,16,17,10,19,20)
	MR_init_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 311;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i3);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__follow_code__move_follow_code_in_goal_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_clause_body_10_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i14);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i16);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i17);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i19);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i20);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_102_111_108_108_111_119_95_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_118_101_95_102_111_108_108_111_119_95_99_111_100_101_95_105_110_95_112_114_111_99_95_95_91_49_44_32_50_44_32_51_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__follow_code_maybe_bunch_0(void)
{
	ll_backend__follow_code_module0();
	ll_backend__follow_code_module1();
	ll_backend__follow_code_module2();
	ll_backend__follow_code_module3();
	ll_backend__follow_code_module4();
	ll_backend__follow_code_module5();
	ll_backend__follow_code_module6();
	ll_backend__follow_code_module7();
	ll_backend__follow_code_module8();
	ll_backend__follow_code_module9();
	ll_backend__follow_code_module10();
	ll_backend__follow_code_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__follow_code__init(void);
void mercury__ll_backend__follow_code__init_type_tables(void);
void mercury__ll_backend__follow_code__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__follow_code__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__follow_code__init_complexity_procs(void);
#endif

void mercury__ll_backend__follow_code__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__follow_code_maybe_bunch_0();
	mercury__ll_backend__follow_code__init_debugger();
}

void mercury__ll_backend__follow_code__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__follow_code__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__follow_code__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__follow_code__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
