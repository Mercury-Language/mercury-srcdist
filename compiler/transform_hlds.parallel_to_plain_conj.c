/*
** Automatically generated from `parallel_to_plain_conj.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__parallel_to_plain_conj__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.parallel_to_plain_conj.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.parallel_to_plain_conj.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.parallel_to_plain_conj.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.parallel_to_plain_conj.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.parallel_to_plain_conj.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.parallel_to_plain_conj.c"
#line 49 "transform_hlds.parallel_to_plain_conj.c"
#include "transform_hlds.parallel_to_plain_conj.mh"

#line 52 "transform_hlds.parallel_to_plain_conj.c"
#line 53 "transform_hlds.parallel_to_plain_conj.c"
#ifndef TRANSFORM_HLDS__PARALLEL_TO_PLAIN_CONJ_DECL_GUARD
#define TRANSFORM_HLDS__PARALLEL_TO_PLAIN_CONJ_DECL_GUARD

#line 57 "transform_hlds.parallel_to_plain_conj.c"
#line 58 "transform_hlds.parallel_to_plain_conj.c"

#endif
#line 61 "transform_hlds.parallel_to_plain_conj.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0, 2,4,5,6)
MR_decl_label3(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0, 18,4,6)
MR_decl_label10(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0, 5,4,9,8,13,14,15,12,19,18)
MR_decl_label7(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0, 25,22,27,21,32,31,108)
MR_decl_label3(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0, 17,4,5)
MR_decl_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0)
MR_decl_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0)
MR_decl_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0)
MR_def_extern_entry(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0)



MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__parallel_to_plain_conj_module0)
	MR_init_entry1(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0);
	MR_init_label10(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,5,4,9,8,13,14,15,12,19,18)
	MR_init_label7(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,25,22,27,21,32,31,108)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_to_plain_conjs_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if ((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i108);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i9);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i12);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i13);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i14);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i15);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i19);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i21);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i22);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i25);
	}
	MR_r2 = MR_r3;
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i22);
	}
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i27);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i31);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r2, 3);
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0_i32);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.parallel_to_plain_conj", 37);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.parallel_to_plain_conj.parallel_to_plain_conjs_goal\'/2", 80);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__parallel_to_plain_conj_module1)
	MR_init_entry1(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0);
	MR_init_label3(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_to_plain_conjs_goals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0_i4);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0_i5);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__parallel_to_plain_conj_module2)
	MR_init_entry1(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0);
	MR_init_label3(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_to_plain_conjs_cases'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0_i4);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,
		transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0_i6);
MR_def_label(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__parallel_to_plain_conj_module3)
	MR_init_entry1(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_to_plain_conjs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__parallel_to_plain_conj_module4)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0);
	MR_init_label4(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__parallel_to_plain_conjs__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0_i6);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__parallel_to_plain_conj_maybe_bunch_0(void)
{
	transform_hlds__parallel_to_plain_conj_module0();
	transform_hlds__parallel_to_plain_conj_module1();
	transform_hlds__parallel_to_plain_conj_module2();
	transform_hlds__parallel_to_plain_conj_module3();
	transform_hlds__parallel_to_plain_conj_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__parallel_to_plain_conj__init(void);
void mercury__transform_hlds__parallel_to_plain_conj__init_type_tables(void);
void mercury__transform_hlds__parallel_to_plain_conj__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__parallel_to_plain_conj__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__parallel_to_plain_conj__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__parallel_to_plain_conj__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__parallel_to_plain_conj__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__parallel_to_plain_conj_maybe_bunch_0();
	mercury__transform_hlds__parallel_to_plain_conj__init_debugger();
}

void mercury__transform_hlds__parallel_to_plain_conj__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__parallel_to_plain_conj__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__parallel_to_plain_conj__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__parallel_to_plain_conj);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__parallel_to_plain_conj__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__parallel_to_plain_conj__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
