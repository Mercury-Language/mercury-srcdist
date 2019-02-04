/*
** Automatically generated from `svbimap.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__svbimap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "svbimap.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "svbimap.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "svbimap.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "svbimap.c"
#line 30 "string.opt"
#include "array.mh"

#line 44 "svbimap.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 48 "svbimap.c"
#line 61 "array.opt"
#include "store.mh"

#line 52 "svbimap.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "svbimap.c"
#line 156 "io.opt"
#include "dir.mh"

#line 60 "svbimap.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 64 "svbimap.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "svbimap.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "svbimap.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 76 "svbimap.c"
#line 4 "char.opt"
#include "char.mh"

#line 80 "svbimap.c"
#line 3 "float.opt"
#include "float.mh"

#line 84 "svbimap.c"
#line 3 "math.opt"
#include "math.mh"

#line 88 "svbimap.c"
#line 4 "int.opt"
#include "int.mh"

#line 92 "svbimap.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 96 "svbimap.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "svbimap.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 104 "svbimap.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 108 "svbimap.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "svbimap.c"
#line 113 "svbimap.c"
#include "svbimap.mh"

#line 116 "svbimap.c"
#line 117 "svbimap.c"
#ifndef SVBIMAP_DECL_GUARD
#define SVBIMAP_DECL_GUARD

#line 121 "svbimap.c"
#line 122 "svbimap.c"

#endif
#line 125 "svbimap.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(svbimap__det_insert_4_0, 2,3)
MR_decl_label3(svbimap__insert_4_0, 2,4,1)
MR_def_extern_entry(svbimap__insert_4_0)
MR_def_extern_entry(svbimap__det_insert_4_0)
MR_def_extern_entry(svbimap__set_4_0)
MR_decl_static(fn__f_115_118_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(tree234__insert_4_0);

MR_BEGIN_MODULE(svbimap_module0)
	MR_init_entry1(svbimap__insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svbimap__insert_4_0);
	MR_init_label3(svbimap__insert_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svbimap__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_r5 = MR_tfield(0, MR_r5, 0);
	MR_np_call_localret_ent(tree234__insert_4_0,
		svbimap__insert_4_0_i2);
MR_def_label(svbimap__insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(svbimap__insert_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(tree234__insert_4_0,
		svbimap__insert_4_0_i4);
MR_def_label(svbimap__insert_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(svbimap__insert_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(svbimap__insert_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(svbimap_module1)
	MR_init_entry1(svbimap__det_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svbimap__det_insert_4_0);
	MR_init_label2(svbimap__det_insert_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svbimap__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_r5 = MR_tfield(0, MR_r5, 0);
	MR_np_call_localret_ent(map__det_insert_4_0,
		svbimap__det_insert_4_0_i2);
MR_def_label(svbimap__det_insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		svbimap__det_insert_4_0_i3);
MR_def_label(svbimap__det_insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__set_4_0);

MR_BEGIN_MODULE(svbimap_module2)
	MR_init_entry1(svbimap__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svbimap__set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svbimap__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svbimap_module3)
	MR_init_entry1(fn__f_115_118_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svbimap_maybe_bunch_0(void)
{
	svbimap_module0();
	svbimap_module1();
	svbimap_module2();
	svbimap_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svbimap__init(void);
void mercury__svbimap__init_type_tables(void);
void mercury__svbimap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svbimap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svbimap__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__svbimap__init_threadscope_string_table(void);
#endif

void mercury__svbimap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svbimap_maybe_bunch_0();
	mercury__svbimap__init_debugger();
}

void mercury__svbimap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svbimap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svbimap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svbimap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svbimap__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__svbimap__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
