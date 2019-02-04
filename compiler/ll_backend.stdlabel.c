/*
** Automatically generated from `stdlabel.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__stdlabel__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.stdlabel.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.stdlabel.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.stdlabel.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.stdlabel.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.stdlabel.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.stdlabel.c"
#line 48 "ll_backend.stdlabel.c"
#include "ll_backend.stdlabel.mh"

#line 51 "ll_backend.stdlabel.c"
#line 52 "ll_backend.stdlabel.c"
#ifndef LL_BACKEND__STDLABEL_DECL_GUARD
#define LL_BACKEND__STDLABEL_DECL_GUARD

#line 56 "ll_backend.stdlabel.c"
#line 57 "ll_backend.stdlabel.c"

#endif
#line 60 "ll_backend.stdlabel.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0, 2,6,7,8,9,11,3)
MR_decl_label5(ll_backend__stdlabel__build_std_map_6_0, 20,3,6,8,4)
MR_decl_static(ll_backend__stdlabel__build_std_map_6_0)
MR_def_extern_entry(ll_backend__stdlabel__standardize_labels_4_0)
MR_def_extern_entry(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0)

MR_decl_entry(counter__allocate_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__stdlabel_module0)
	MR_init_entry1(ll_backend__stdlabel__build_std_map_6_0);
	MR_init_label5(ll_backend__stdlabel__build_std_map_6_0,20,3,6,8,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_std_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stdlabel__build_std_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__stdlabel__build_std_map_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stdlabel__build_std_map_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__stdlabel__build_std_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__stdlabel__build_std_map_6_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__stdlabel__build_std_map_6_0_i6);
MR_def_label(ll_backend__stdlabel__build_std_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__stdlabel__build_std_map_6_0_i8);
MR_def_label(ll_backend__stdlabel__build_std_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__stdlabel__build_std_map_6_0_i20);
	}
MR_def_label(ll_backend__stdlabel__build_std_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__stdlabel__build_std_map_6_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stdlabel_module1)
	MR_init_entry1(ll_backend__stdlabel__standardize_labels_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'standardize_labels'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__stdlabel__standardize_labels_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__get_prologue_4_0);
MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_instruction_list_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__stdlabel_module2)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0);
	MR_init_label7(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,2,6,7,8,9,11,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__standardize_labels__[3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i2);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i3);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i7);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stdlabel__build_std_map_6_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i8);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0_i11);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_100_108_97_98_101_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_110_100_97_114_100_105_122_101_95_108_97_98_101_108_115_95_95_91_51_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stdlabel.m", 10);
	MR_r2 = (MR_Word) MR_string_const("standardize_labels: no proc_label", 33);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__stdlabel_maybe_bunch_0(void)
{
	ll_backend__stdlabel_module0();
	ll_backend__stdlabel_module1();
	ll_backend__stdlabel_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__stdlabel__init(void);
void mercury__ll_backend__stdlabel__init_type_tables(void);
void mercury__ll_backend__stdlabel__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__stdlabel__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__stdlabel__init_complexity_procs(void);
#endif

void mercury__ll_backend__stdlabel__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__stdlabel_maybe_bunch_0();
	mercury__ll_backend__stdlabel__init_debugger();
}

void mercury__ll_backend__stdlabel__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__stdlabel__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__stdlabel__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__stdlabel);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__stdlabel__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
