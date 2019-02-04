/*
** Automatically generated from `transform.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__transform__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.transform.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.transform.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.transform.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.transform.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.transform.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.transform.c"
#line 49 "transform_hlds.transform.c"
#include "transform_hlds.transform.mh"

#line 52 "transform_hlds.transform.c"
#line 53 "transform_hlds.transform.c"
#ifndef TRANSFORM_HLDS__TRANSFORM_DECL_GUARD
#define TRANSFORM_HLDS__TRANSFORM_DECL_GUARD

#line 57 "transform_hlds.transform.c"
#line 58 "transform_hlds.transform.c"

#endif
#line 61 "transform_hlds.transform.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(transform_hlds__transform__reschedule_conj_4_0, 30,3,4,5,6,7,10,11,12,13)
MR_decl_label2(transform_hlds__transform__reschedule_conj_4_0, 9,15)
MR_def_extern_entry(transform_hlds__transform__reschedule_conj_4_0)



MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_delay_info_2_0);
MR_decl_entry(check_hlds__delay_info__delay_info_wakeup_goals_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_delay_info_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__transform_module0)
	MR_init_entry1(transform_hlds__transform__reschedule_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__transform__reschedule_conj_4_0);
	MR_init_label10(transform_hlds__transform__reschedule_conj_4_0,30,3,4,5,6,7,10,11,12,13)
	MR_init_label2(transform_hlds__transform__reschedule_conj_4_0,9,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reschedule_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__transform__reschedule_conj_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__transform__reschedule_conj_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		transform_hlds__transform__reschedule_conj_4_0_i4);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_delay_info_2_0,
		transform_hlds__transform__reschedule_conj_4_0_i5);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		transform_hlds__transform__reschedule_conj_4_0_i6);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_delay_info_3_0,
		transform_hlds__transform__reschedule_conj_4_0_i7);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(transform_hlds__transform__reschedule_conj_4_0_i9);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__transform__reschedule_conj_4_0_i10);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		transform_hlds__transform__reschedule_conj_4_0_i11);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		transform_hlds__transform__reschedule_conj_4_0_i12);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(transform_hlds__transform__reschedule_conj_4_0,
		transform_hlds__transform__reschedule_conj_4_0_i13);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__transform__reschedule_conj_4_0_i15);
MR_def_label(transform_hlds__transform__reschedule_conj_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__transform__reschedule_conj_4_0_i30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__transform_maybe_bunch_0(void)
{
	transform_hlds__transform_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__transform__init(void);
void mercury__transform_hlds__transform__init_type_tables(void);
void mercury__transform_hlds__transform__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__transform__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__transform__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__transform__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__transform__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__transform_maybe_bunch_0();
	mercury__transform_hlds__transform__init_debugger();
}

void mercury__transform_hlds__transform__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__transform__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__transform__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__transform);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__transform__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__transform__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
