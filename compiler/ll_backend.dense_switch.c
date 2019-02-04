/*
** Automatically generated from `dense_switch.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__dense_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.dense_switch.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.dense_switch.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.dense_switch.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.dense_switch.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.dense_switch.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.dense_switch.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.dense_switch.c"
#line 52 "ll_backend.dense_switch.c"
#include "ll_backend.dense_switch.mh"

#line 55 "ll_backend.dense_switch.c"
#line 56 "ll_backend.dense_switch.c"
#ifndef LL_BACKEND__DENSE_SWITCH_DECL_GUARD
#define LL_BACKEND__DENSE_SWITCH_DECL_GUARD

#line 60 "ll_backend.dense_switch.c"
#line 61 "ll_backend.dense_switch.c"

#endif
#line 64 "ll_backend.dense_switch.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__dense_switch__cases_list_is_dense_switch_8_0, 2,5,7,10,11,12,14,15)
MR_decl_label3(ll_backend__dense_switch__cases_list_is_dense_switch_8_0, 17,8,1)
MR_decl_label8(ll_backend__dense_switch__generate_case_11_0, 5,6,7,8,9,10,2,11)
MR_decl_label4(ll_backend__dense_switch__generate_cases_12_0, 14,3,4,5)
MR_decl_label6(ll_backend__dense_switch__generate_dense_switch_13_0, 2,3,5,8,7,9)
MR_decl_label3(ll_backend__dense_switch__type_range_4_0, 2,3,1)
MR_def_extern_entry(ll_backend__dense_switch__type_range_4_0)
MR_def_extern_entry(ll_backend__dense_switch__cases_list_is_dense_switch_8_0)
MR_decl_static(ll_backend__dense_switch__generate_case_11_0)
MR_decl_static(ll_backend__dense_switch__generate_cases_12_0)
MR_def_extern_entry(ll_backend__dense_switch__generate_dense_switch_13_0)

MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(backend_libs__switch_util__type_range_5_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module0)
	MR_init_entry1(ll_backend__dense_switch__type_range_4_0);
	MR_init_label3(ll_backend__dense_switch__type_range_4_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dense_switch__type_range_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__dense_switch__type_range_4_0_i2);
MR_def_label(ll_backend__dense_switch__type_range_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__switch_util__type_range_5_0,
		ll_backend__dense_switch__type_range_4_0_i3);
MR_def_label(ll_backend__dense_switch__type_range_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dense_switch__type_range_4_0_i1);
	}
	MR_r2 = (((MR_Integer) MR_r3 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__type_range_4_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_extended_case_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_density_2_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module1)
	MR_init_entry1(ll_backend__dense_switch__cases_list_is_dense_switch_8_0);
	MR_init_label8(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,2,5,7,10,11,12,14,15)
	MR_init_label3(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,17,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dense_switch__cases_list_is_dense_switch_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i2);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i1);
	}
	MR_r2 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, extended_case);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__index1_det_3_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i5);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i1);
	}
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = (((MR_Integer) MR_sv(7) - (MR_Integer) MR_sv(6)) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i7);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i10);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i11);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i12);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i14);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__switch_util__type_range_5_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i15);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i8);
	}
	MR_sv(1) = (((MR_Integer) MR_r3 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i17);
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(ll_backend__dense_switch__cases_list_is_dense_switch_8_0_i8);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dense_switch__cases_list_is_dense_switch_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module2)
	MR_init_entry1(ll_backend__dense_switch__generate_case_11_0);
	MR_init_label8(ll_backend__dense_switch__generate_case_11_0,5,6,7,8,9,10,2,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__generate_case_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_case_11_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_case_11_0_i2);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if ((MR_r2 != MR_tempr3)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_case_11_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = MR_r5;
	MR_tempr4 = MR_r6;
	MR_sv(4) = MR_tempr4;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__dense_switch__generate_case_11_0_i5);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__dense_switch__generate_case_11_0_i6);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__dense_switch__generate_case_11_0_i7);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__dense_switch__generate_case_11_0_i8);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__dense_switch__generate_case_11_0_i9);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(1), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(1), 0) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__dense_switch__generate_case_11_0_i10);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("case of dense switch", 20);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__dense_switch__generate_case_11_0_i11);
MR_def_label(ll_backend__dense_switch__generate_case_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_string_const("compiler-introduced \140fail\' case of dense switch", 47);
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_next_label_3_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module3)
	MR_init_entry1(ll_backend__dense_switch__generate_cases_12_0);
	MR_init_label4(ll_backend__dense_switch__generate_cases_12_0,14,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dense_switch__generate_cases_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_cases_12_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("End of dense switch", 19);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r7;
	MR_r4 = MR_r8;
	MR_proceed();
	}
MR_def_label(ll_backend__dense_switch__generate_cases_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__dense_switch__generate_cases_12_0_i3);
MR_def_label(ll_backend__dense_switch__generate_cases_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_case_11_0,
		ll_backend__dense_switch__generate_cases_12_0_i4);
MR_def_label(ll_backend__dense_switch__generate_cases_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tempr6 = MR_sv(6);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("branch to end of dense switch", 29);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_tempr5;
	MR_r7 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_r8 = MR_r5;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr6;
	}
	MR_np_localcall_lab(ll_backend__dense_switch__generate_cases_12_0,
		ll_backend__dense_switch__generate_cases_12_0_i5);
MR_def_label(ll_backend__dense_switch__generate_cases_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r3, 0) = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(ll_backend__code_info__fail_if_rval_is_false_4_0);

MR_BEGIN_MODULE(ll_backend__dense_switch_module4)
	MR_init_entry1(ll_backend__dense_switch__generate_dense_switch_13_0);
	MR_init_label6(ll_backend__dense_switch__generate_dense_switch_13_0,2,3,5,8,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dense_switch__generate_dense_switch_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = MR_r4;
	MR_r2 = MR_r10;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__dense_switch__generate_dense_switch_13_0_i2);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_13_0_i3);
	}
	MR_sv(9) = MR_r2;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_13_0_i5);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(9) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_r2;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_r2 = MR_r3;
	}
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__dense_switch__generate_dense_switch_13_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(2));
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 25);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__fail_if_rval_is_false_4_0,
		ll_backend__dense_switch__generate_dense_switch_13_0_i8);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_cases_12_0,
		ll_backend__dense_switch__generate_dense_switch_13_0_i9);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_cases_12_0,
		ll_backend__dense_switch__generate_dense_switch_13_0_i9);
MR_def_label(ll_backend__dense_switch__generate_dense_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("switch (using dense jump table)", 31);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__dense_switch_maybe_bunch_0(void)
{
	ll_backend__dense_switch_module0();
	ll_backend__dense_switch_module1();
	ll_backend__dense_switch_module2();
	ll_backend__dense_switch_module3();
	ll_backend__dense_switch_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__dense_switch__init(void);
void mercury__ll_backend__dense_switch__init_type_tables(void);
void mercury__ll_backend__dense_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__dense_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__dense_switch__init_complexity_procs(void);
#endif

void mercury__ll_backend__dense_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__dense_switch_maybe_bunch_0();
	mercury__ll_backend__dense_switch__init_debugger();
}

void mercury__ll_backend__dense_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__dense_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__dense_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__dense_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__dense_switch__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
