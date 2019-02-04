/*
** Automatically generated from `erlang_builtin.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__erlang_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "io.int"
#include "io.mh"

#line 28 "erlang_builtin.c"
#line 542 "io.int"
#include "string.mh"

#line 32 "erlang_builtin.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 36 "erlang_builtin.c"
#line 28 "time.int2"
#include "time.mh"

#line 40 "erlang_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "erlang_builtin.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 48 "erlang_builtin.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 52 "erlang_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "erlang_builtin.c"
#line 20 "store.opt"
#include "store.mh"

#line 60 "erlang_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "erlang_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 68 "erlang_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 72 "erlang_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 76 "erlang_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 80 "erlang_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 84 "erlang_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 88 "erlang_builtin.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 92 "erlang_builtin.c"
#line 150 "io.opt"
#include "dir.mh"

#line 96 "erlang_builtin.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 100 "erlang_builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 104 "erlang_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "erlang_builtin.c"
#line 109 "erlang_builtin.c"
#include "erlang_builtin.mh"

#line 112 "erlang_builtin.c"
#line 113 "erlang_builtin.c"
#ifndef ERLANG_BUILTIN_DECL_GUARD
#define ERLANG_BUILTIN_DECL_GUARD

#line 117 "erlang_builtin.c"
#line 118 "erlang_builtin.c"

#endif
#line 121 "erlang_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_static(fn__f_101_114_108_97_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)




MR_BEGIN_MODULE(erlang_builtin_module0)
	MR_init_entry1(fn__f_101_114_108_97_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_101_114_108_97_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_101_114_108_97_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__erlang_builtin_maybe_bunch_0(void)
{
	erlang_builtin_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__erlang_builtin__init(void);
void mercury__erlang_builtin__init_type_tables(void);
void mercury__erlang_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erlang_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erlang_builtin__init_complexity_procs(void);
#endif

void mercury__erlang_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erlang_builtin_maybe_bunch_0();
	mercury__erlang_builtin__init_debugger();
}

void mercury__erlang_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__erlang_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erlang_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__erlang_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erlang_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
