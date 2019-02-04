/*
** Automatically generated from `rbmm.m'
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
INIT mercury__transform_hlds__rbmm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.rbmm.c"
#line 44 "transform_hlds.rbmm.c"
#include "transform_hlds.rbmm.mh"

#line 47 "transform_hlds.rbmm.c"
#line 48 "transform_hlds.rbmm.c"
#ifndef TRANSFORM_HLDS__RBMM_DECL_GUARD
#define TRANSFORM_HLDS__RBMM_DECL_GUARD

#line 52 "transform_hlds.rbmm.c"
#line 53 "transform_hlds.rbmm.c"

#endif
#line 56 "transform_hlds.rbmm.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(transform_hlds__rbmm__do_region_analysis_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__rbmm__do_region_analysis_4_0, 10,11,12,13,14,15,16,17)
MR_def_extern_entry(transform_hlds__rbmm__do_region_analysis_4_0)

MR_decl_entry(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0);
MR_decl_entry(transform_hlds__rbmm__execution_path__execution_path_analysis_2_0);
MR_decl_entry(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
MR_decl_entry(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0);
MR_decl_entry(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0);
MR_decl_entry(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0);
MR_decl_entry(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0);
MR_decl_entry(transform_hlds__rbmm__actual_region_arguments__record_actual_region_arguments_6_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_7_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_9_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0);

MR_BEGIN_MODULE(transform_hlds__rbmm_module0)
	MR_init_entry1(transform_hlds__rbmm__do_region_analysis_4_0);
	MR_init_label8(transform_hlds__rbmm__do_region_analysis_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__rbmm__do_region_analysis_4_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__do_region_analysis_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i2);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__execution_path__execution_path_analysis_2_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i3);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i4);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i5);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r8;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i6);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i7);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_r7;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i8);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__actual_region_arguments__record_actual_region_arguments_6_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i9);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_7_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i10);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i11);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i12);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_9_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i13);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i14);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i15);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i16);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i17);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm_maybe_bunch_0(void)
{
	transform_hlds__rbmm_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__init(void);
void mercury__transform_hlds__rbmm__init_type_tables(void);
void mercury__transform_hlds__rbmm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__init_complexity_procs(void);
#endif

void mercury__transform_hlds__rbmm__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm_maybe_bunch_0();
	mercury__transform_hlds__rbmm__init_debugger();
}

void mercury__transform_hlds__rbmm__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__rbmm__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
