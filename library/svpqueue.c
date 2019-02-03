/*
** Automatically generated from `svpqueue.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__svpqueue__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "svpqueue.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "svpqueue.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "svpqueue.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "svpqueue.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "svpqueue.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "svpqueue.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "svpqueue.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "svpqueue.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "svpqueue.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "svpqueue.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "svpqueue.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "svpqueue.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "svpqueue.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "svpqueue.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "svpqueue.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "svpqueue.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "svpqueue.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "svpqueue.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "svpqueue.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "svpqueue.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "svpqueue.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "svpqueue.c"
#line 113 "svpqueue.c"
#include "svpqueue.mh"

#line 116 "svpqueue.c"
#line 117 "svpqueue.c"
#ifndef SVPQUEUE_DECL_GUARD
#define SVPQUEUE_DECL_GUARD

#line 121 "svpqueue.c"
#line 122 "svpqueue.c"

#endif
#line 125 "svpqueue.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(svpqueue__remove_4_0, 3,1)
MR_def_extern_entry(svpqueue__insert_4_0)
MR_def_extern_entry(svpqueue__remove_4_0)
MR_decl_static(fn__f_115_118_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(pqueue__insert_4_0);

MR_BEGIN_MODULE(svpqueue_module0)
	MR_init_entry1(svpqueue__insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svpqueue__insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svpqueue__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(pqueue__insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(pqueue__remove_2_3_0);

MR_BEGIN_MODULE(svpqueue_module1)
	MR_init_entry1(svpqueue__remove_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svpqueue__remove_4_0);
	MR_init_label2(svpqueue__remove_4_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svpqueue__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(svpqueue__remove_4_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 3);
	MR_r4 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(pqueue__remove_2_3_0,
		svpqueue__remove_4_0_i3);
MR_def_label(svpqueue__remove_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(svpqueue__remove_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svpqueue_module2)
	MR_init_entry1(fn__f_115_118_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_112_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svpqueue_maybe_bunch_0(void)
{
	svpqueue_module0();
	svpqueue_module1();
	svpqueue_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svpqueue__init(void);
void mercury__svpqueue__init_type_tables(void);
void mercury__svpqueue__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svpqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svpqueue__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__svpqueue__init_threadscope_string_table(void);
#endif

void mercury__svpqueue__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svpqueue_maybe_bunch_0();
	mercury__svpqueue__init_debugger();
}

void mercury__svpqueue__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svpqueue__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svpqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svpqueue);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svpqueue__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__svpqueue__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
