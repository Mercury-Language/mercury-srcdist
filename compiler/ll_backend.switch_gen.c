/*
** Automatically generated from `switch_gen.m'
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
INIT mercury__ll_backend__switch_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.switch_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.switch_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.switch_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.switch_gen.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.switch_gen.c"
#line 44 "ll_backend.switch_gen.c"
#include "ll_backend.switch_gen.mh"

#line 47 "ll_backend.switch_gen.c"
#line 48 "ll_backend.switch_gen.c"
#ifndef LL_BACKEND__SWITCH_GEN_DECL_GUARD
#define LL_BACKEND__SWITCH_GEN_DECL_GUARD

#line 52 "ll_backend.switch_gen.c"
#line 53 "ll_backend.switch_gen.c"

#endif
#line 56 "ll_backend.switch_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__switch_gen__generate_all_cases_11_0, 2,9,10,11,12,13,16,3)
MR_decl_label1(ll_backend__switch_gen__generate_all_cases_11_0, 21)
MR_decl_label8(ll_backend__switch_gen__generate_cases_11_0, 4,5,9,8,12,13,14,15)
MR_decl_label8(ll_backend__switch_gen__generate_cases_11_0, 7,16,17,18,20,21,3,24)
MR_decl_label1(ll_backend__switch_gen__generate_cases_11_0, 23)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 10,11,16,18,19,17,14,20)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 13,26,28,29,30,31,33,22)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 23,38,39,40,41,34,35,48)
MR_decl_label8(ll_backend__switch_gen__generate_switch_8_0, 49,44,45,55,56,52,58,64)
MR_decl_label4(ll_backend__switch_gen__lookup_tags_4_0, 4,5,6,3)
MR_decl_static(ll_backend__switch_gen__lookup_tags_4_0)
MR_decl_static(ll_backend__switch_gen__generate_cases_11_0)
MR_decl_static(ll_backend__switch_gen__generate_all_cases_11_0)
MR_def_extern_entry(ll_backend__switch_gen__generate_switch_8_0)

MR_decl_entry(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_priority_1_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module0)
	MR_init_entry1(ll_backend__switch_gen__lookup_tags_4_0);
	MR_init_label4(ll_backend__switch_gen__lookup_tags_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__lookup_tags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__lookup_tags_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__cons_id_to_tag_for_var_3_0,
		ll_backend__switch_gen__lookup_tags_4_0_i4);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_priority_1_0,
		ll_backend__switch_gen__lookup_tags_4_0_i5);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__switch_gen__lookup_tags_4_0,
		ll_backend__switch_gen__lookup_tags_4_0_i6);
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__switch_gen__lookup_tags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__unify_gen__generate_tag_test_7_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module1)
	MR_init_entry1(ll_backend__switch_gen__generate_cases_11_0);
	MR_init_label8(ll_backend__switch_gen__generate_cases_11_0,4,5,9,8,12,13,14,15)
	MR_init_label8(ll_backend__switch_gen__generate_cases_11_0,7,16,17,18,20,21,3,24)
	MR_init_label1(ll_backend__switch_gen__generate_cases_11_0,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__generate_cases_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_cases_11_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_sv(7) = MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__switch_gen__generate_cases_11_0_i4);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_cases_11_0_i5);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_cases_11_0_i9);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r5;
	MR_GOTO_LAB(ll_backend__switch_gen__generate_cases_11_0_i8);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_cases_11_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_7_0,
		ll_backend__switch_gen__generate_cases_11_0_i12);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_gen__generate_cases_11_0_i13);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_gen__generate_cases_11_0_i14);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_gen__generate_cases_11_0_i15);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("skip to the end of the switch", 29);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("next case", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(6), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(6), 0) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_gen__generate_cases_11_0_i20);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_gen__generate_cases_11_0_i16);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_gen__generate_cases_11_0_i17);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_gen__generate_cases_11_0_i18);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(6), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(6), 0) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_gen__generate_cases_11_0_i20);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_np_localcall_lab(ll_backend__switch_gen__generate_cases_11_0,
		ll_backend__switch_gen__generate_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_cases_11_0_i23);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__switch_gen__generate_cases_11_0_i24);
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of switch", 13);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__switch_gen__generate_cases_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("end of switch", 13);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(2, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(ll_backend__code_info__get_pred_id_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);
MR_decl_entry(hlds__goal_form__count_recursive_calls_5_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module2)
	MR_init_entry1(ll_backend__switch_gen__generate_all_cases_11_0);
	MR_init_label8(ll_backend__switch_gen__generate_all_cases_11_0,2,9,10,11,12,13,16,3)
	MR_init_label1(ll_backend__switch_gen__generate_all_cases_11_0,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__generate_all_cases_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r8;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i2);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i3);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i3);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_sv(8), 3);
	MR_sv(11) = MR_ctfield(0, MR_sv(9), 3);
	MR_tempr4 = MR_r3;
	MR_sv(14) = MR_tempr4;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i9);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i10);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i11);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i12);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i13);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_cases_11_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i16);
	}
	if (MR_INT_LE(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_all_cases_11_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(14);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_cases_11_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_cases_11_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_cases_11_0,
		ll_backend__switch_gen__generate_all_cases_11_0_i21);
MR_def_label(ll_backend__switch_gen__generate_all_cases_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0;
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(ll_backend__lookup_switch__is_lookup_switch_12_0);
MR_decl_entry(ll_backend__lookup_switch__generate_lookup_switch_7_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);
MR_decl_entry(ll_backend__dense_switch__cases_list_is_dense_switch_8_0);
MR_decl_entry(ll_backend__dense_switch__generate_dense_switch_13_0);
MR_decl_entry(ll_backend__string_switch__generate_string_switch_11_0);
MR_decl_entry(ll_backend__tag_switch__generate_tag_switch_11_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module3)
	MR_init_entry1(ll_backend__switch_gen__generate_switch_8_0);
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,10,11,16,18,19,17,14,20)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,13,26,28,29,30,31,33,22)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,23,38,39,40,41,34,35,48)
	MR_init_label8(ll_backend__switch_gen__generate_switch_8_0,49,44,45,55,56,52,58,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_gen__generate_switch_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i2);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i3);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i4);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i5);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__type_cat_to_switch_cat_1_0,
		ll_backend__switch_gen__generate_switch_8_0_i6);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i7);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__lookup_tags_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i8);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i9);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 353;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i11);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(15));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__switch_gen__generate_switch_8_0_i14);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__switch_gen__generate_switch_8_0_i16);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r9 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i18);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r8 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i17);
	}
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r9,3,11)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i19);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r8 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i17);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(15));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i20);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i13);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_all_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i58);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i23);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i23);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i26);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i22);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i28);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 357;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i29);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i22);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 355;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i30);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__lookup_switch__is_lookup_switch_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i31);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_lookup_switch_7_0,
		ll_backend__switch_gen__generate_switch_8_0_i33);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i64);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i35);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i35);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i38);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 356;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i39);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i34);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 354;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i40);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,
		ll_backend__switch_gen__generate_switch_8_0_i41);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i34);
	}
	MR_r1 = MR_sv(8);
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(4);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_dense_switch_13_0,
		ll_backend__switch_gen__generate_switch_8_0_i58);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i45);
	}
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i45);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i48);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 358;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i49);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i44);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i58);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i52);
	}
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i55);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 359;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i56);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(7) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i52);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_tag_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i58);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__switch_gen__generate_all_cases_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i58);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i64);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__switch_gen_maybe_bunch_0(void)
{
	ll_backend__switch_gen_module0();
	ll_backend__switch_gen_module1();
	ll_backend__switch_gen_module2();
	ll_backend__switch_gen_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__switch_gen__init(void);
void mercury__ll_backend__switch_gen__init_type_tables(void);
void mercury__ll_backend__switch_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__switch_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__switch_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__switch_gen_maybe_bunch_0();
	mercury__ll_backend__switch_gen__init_debugger();
}

void mercury__ll_backend__switch_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__switch_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__switch_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
