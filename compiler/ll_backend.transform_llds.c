/*
** Automatically generated from `transform_llds.m'
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
INIT mercury__ll_backend__transform_llds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "ll_backend.transform_llds.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "ll_backend.transform_llds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.transform_llds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.transform_llds.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.transform_llds.c"
#line 44 "ll_backend.transform_llds.c"
#include "ll_backend.transform_llds.mh"

#line 47 "ll_backend.transform_llds.c"
#line 48 "ll_backend.transform_llds.c"
#ifndef LL_BACKEND__TRANSFORM_LLDS_DECL_GUARD
#define LL_BACKEND__TRANSFORM_LLDS_DECL_GUARD

#line 52 "ll_backend.transform_llds.c"
#line 53 "ll_backend.transform_llds.c"

#endif
#line 56 "ll_backend.transform_llds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__transform_llds__split_computed_goto_9_0, 26,3,4,6,5,9,10,11)
MR_decl_label3(ll_backend__transform_llds__split_computed_goto_9_0, 12,13,14)
MR_decl_label8(ll_backend__transform_llds__transform_c_file_3_0, 2,3,5,7,11,12,13,14)
MR_decl_label5(ll_backend__transform_llds__transform_c_file_3_0, 15,16,17,8,19)
MR_decl_label3(ll_backend__transform_llds__transform_c_module_list_3_0, 4,5,3)
MR_decl_label3(ll_backend__transform_llds__transform_c_procedure_list_3_0, 4,5,3)
MR_decl_label7(ll_backend__transform_llds__transform_instructions_6_0, 4,8,9,10,5,6,3)
MR_decl_label1(ll_backend__transform_llds__transform_llds_4_0, 2)
MR_decl_static(ll_backend__transform_llds__split_computed_goto_9_0)
MR_decl_static(ll_backend__transform_llds__transform_instructions_6_0)
MR_decl_static(ll_backend__transform_llds__transform_c_procedure_list_3_0)
MR_decl_static(ll_backend__transform_llds__transform_c_module_list_3_0)
MR_decl_static(ll_backend__transform_llds__transform_c_file_3_0)
MR_def_extern_entry(ll_backend__transform_llds__transform_llds_4_0)

MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(list__split_list_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__transform_llds_module0)
	MR_init_entry1(ll_backend__transform_llds__split_computed_goto_9_0);
	MR_init_label8(ll_backend__transform_llds__split_computed_goto_9_0,26,3,4,6,5,9,10,11)
	MR_init_label3(ll_backend__transform_llds__split_computed_goto_9_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__transform_llds__split_computed_goto_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(ll_backend__transform_llds__split_computed_goto_9_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
	}
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i3);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i4);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__split_list_4_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i6);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__transform_llds__split_computed_goto_9_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(9) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tempr11 = MR_sv(1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr11;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr11;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr5, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("binary search", 13);
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr9;
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr9, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr10, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const(" then", 5);
	MR_GOTO_LAB(ll_backend__transform_llds__split_computed_goto_9_0_i9);
	}
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_llds.m", 16);
	MR_r2 = (MR_Word) MR_string_const("split_computed_goto: list.split_list", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i9);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i10);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(6);
	MR_np_localcall_lab(ll_backend__transform_llds__split_computed_goto_9_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i11);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" else", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i12);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_sv(2));
	MR_r7 = MR_sv(6);
	MR_np_localcall_lab(ll_backend__transform_llds__split_computed_goto_9_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i13);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__transform_llds__split_computed_goto_9_0_i14);
MR_def_label(ll_backend__transform_llds__split_computed_goto_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__transform_llds_module1)
	MR_init_entry1(ll_backend__transform_llds__transform_instructions_6_0);
	MR_init_label7(ll_backend__transform_llds__transform_instructions_6_0,4,8,9,10,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__transform_llds__transform_instructions_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_instructions_6_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__transform_llds__transform_instructions_6_0,
		ll_backend__transform_llds__transform_instructions_6_0_i4);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_instructions_6_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__transform_llds__transform_instructions_6_0_i8);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_instructions_6_0_i5);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__transform_llds__split_computed_goto_9_0,
		ll_backend__transform_llds__transform_instructions_6_0_i9);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__transform_llds__transform_instructions_6_0_i10);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__transform_llds__transform_instructions_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__transform_llds_module2)
	MR_init_entry1(ll_backend__transform_llds__transform_c_procedure_list_3_0);
	MR_init_label3(ll_backend__transform_llds__transform_c_procedure_list_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__transform_llds__transform_c_procedure_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_c_procedure_list_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 6);
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__transform_llds__transform_instructions_6_0,
		ll_backend__transform_llds__transform_c_procedure_list_3_0_i4);
MR_def_label(ll_backend__transform_llds__transform_c_procedure_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__transform_llds__transform_c_procedure_list_3_0,
		ll_backend__transform_llds__transform_c_procedure_list_3_0_i5);
MR_def_label(ll_backend__transform_llds__transform_c_procedure_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__transform_llds__transform_c_procedure_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__transform_llds_module3)
	MR_init_entry1(ll_backend__transform_llds__transform_c_module_list_3_0);
	MR_init_label3(ll_backend__transform_llds__transform_c_module_list_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__transform_llds__transform_c_module_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_c_module_list_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__transform_llds__transform_c_procedure_list_3_0,
		ll_backend__transform_llds__transform_c_module_list_3_0_i4);
MR_def_label(ll_backend__transform_llds__transform_c_module_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__transform_llds__transform_c_module_list_3_0,
		ll_backend__transform_llds__transform_c_module_list_3_0_i5);
MR_def_label(ll_backend__transform_llds__transform_c_module_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__transform_llds__transform_c_module_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_comp_gen_c_module_0;
MR_decl_entry(list__last_det_2_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_pred_id_0_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(fn__counter__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__transform_llds_module4)
	MR_init_entry1(ll_backend__transform_llds__transform_c_file_3_0);
	MR_init_label8(ll_backend__transform_llds__transform_c_file_3_0,2,3,5,7,11,12,13,14)
	MR_init_label5(ll_backend__transform_llds__transform_c_file_3_0,15,16,17,8,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__transform_llds__transform_c_file_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 9);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 243;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__transform_llds__transform_c_file_3_0_i2);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_c_file_3_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ll_backend__transform_llds__transform_c_file_3_0_i7);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__transform_llds__transform_c_module_list_3_0,
		ll_backend__transform_llds__transform_c_file_3_0_i5);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ll_backend__transform_llds__transform_c_file_3_0_i7);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_c_file_3_0_i8);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__transform_llds__transform_c_file_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, comp_gen_c_module);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__last_det_2_0,
		ll_backend__transform_llds__transform_c_file_3_0_i11);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ll_backend__transform_llds__transform_c_file_3_0_i12);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		ll_backend__transform_llds__transform_c_file_3_0_i13);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		ll_backend__transform_llds__transform_c_file_3_0_i14);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_string_const("ACCURATE_GC_END_LABEL", 21);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("label to indicate end of previous procedure", 43);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr4, 1) = MR_sv(5);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ll_backend__transform_llds__transform_c_file_3_0_i15);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__transform_llds__transform_c_file_3_0_i16);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("ACCURATE_GC_END_LABEL", 21);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("_END", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__transform_llds__transform_c_file_3_0_i17);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, comp_gen_c_module);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__transform_llds__transform_c_file_3_0_i19);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__transform_llds__transform_c_file_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);

MR_BEGIN_MODULE(ll_backend__transform_llds_module5)
	MR_init_entry1(ll_backend__transform_llds__transform_llds_4_0);
	MR_init_label1(ll_backend__transform_llds__transform_llds_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__transform_llds__transform_llds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		ll_backend__transform_llds__transform_llds_4_0_i2);
MR_def_label(ll_backend__transform_llds__transform_llds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__transform_llds__transform_c_file_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__transform_llds_maybe_bunch_0(void)
{
	ll_backend__transform_llds_module0();
	ll_backend__transform_llds_module1();
	ll_backend__transform_llds_module2();
	ll_backend__transform_llds_module3();
	ll_backend__transform_llds_module4();
	ll_backend__transform_llds_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__transform_llds__init(void);
void mercury__ll_backend__transform_llds__init_type_tables(void);
void mercury__ll_backend__transform_llds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__transform_llds__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__transform_llds__init_complexity_procs(void);
#endif

void mercury__ll_backend__transform_llds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__transform_llds_maybe_bunch_0();
	mercury__ll_backend__transform_llds__init_debugger();
}

void mercury__ll_backend__transform_llds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__transform_llds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__transform_llds__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__transform_llds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
