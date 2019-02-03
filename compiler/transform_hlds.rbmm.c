/*
** Automatically generated from `rbmm.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.rbmm.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.rbmm.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.rbmm.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.rbmm.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.rbmm.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.rbmm.c"
#line 49 "transform_hlds.rbmm.c"
#include "transform_hlds.rbmm.mh"

#line 52 "transform_hlds.rbmm.c"
#line 53 "transform_hlds.rbmm.c"
#ifndef TRANSFORM_HLDS__RBMM_DECL_GUARD
#define TRANSFORM_HLDS__RBMM_DECL_GUARD

#line 57 "transform_hlds.rbmm.c"
#line 58 "transform_hlds.rbmm.c"

#endif
#line 61 "transform_hlds.rbmm.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label10(transform_hlds__rbmm__do_region_analysis_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label9(transform_hlds__rbmm__do_region_analysis_4_0, 12,13,14,15,16,17,18,21,22)
MR_def_extern_entry(transform_hlds__rbmm__do_region_analysis_4_0)

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

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
}
},
};



MR_decl_entry(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0);
MR_decl_entry(transform_hlds__rbmm__execution_path__execution_path_analysis_2_0);
MR_decl_entry(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0);
MR_decl_entry(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0);
MR_decl_entry(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0);
MR_decl_entry(transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_0);
MR_decl_entry(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0);
MR_decl_entry(transform_hlds__rbmm__region_arguments__record_region_arguments_7_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_0);
MR_decl_entry(transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0);
MR_decl_entry(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(transform_hlds__rbmm__region_transformation__region_transform_12_0);
MR_decl_entry(transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_0);

MR_BEGIN_MODULE(transform_hlds__rbmm_module0)
	MR_init_entry1(transform_hlds__rbmm__do_region_analysis_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__do_region_analysis_4_0);
	MR_init_label10(transform_hlds__rbmm__do_region_analysis_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label9(transform_hlds__rbmm__do_region_analysis_4_0,12,13,14,15,16,17,18,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_region_analysis'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__do_region_analysis_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i2);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__rbmm__execution_path__execution_path_analysis_2_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i3);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i4);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i5);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r8;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i6);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	}
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
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_r7;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i8);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_arguments__record_region_arguments_7_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i9);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i10);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i11);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i12);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i13);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i14);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i15);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i16);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i17);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i18);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i21);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_transformation__region_transform_12_0,
		transform_hlds__rbmm__do_region_analysis_4_0_i22);
MR_def_label(transform_hlds__rbmm__do_region_analysis_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_0);
	}
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
void mercury__transform_hlds__rbmm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__rbmm__init_threadscope_string_table(void);
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

void mercury__transform_hlds__rbmm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__rbmm);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__rbmm__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
