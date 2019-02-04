/*
** Automatically generated from `mer_std.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__mer_std__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "mer_std.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "mer_std.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "mer_std.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "mer_std.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 43 "mer_std.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 47 "mer_std.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 51 "mer_std.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "mer_std.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "mer_std.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "mer_std.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "mer_std.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "mer_std.c"
#line 23 "store.opt"
#include "store.mh"

#line 75 "mer_std.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "mer_std.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "mer_std.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 87 "mer_std.c"
#line 3 "list.opt"
#include "list.mh"

#line 91 "mer_std.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 95 "mer_std.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "mer_std.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 103 "mer_std.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "mer_std.c"
#line 108 "mer_std.c"
#include "mer_std.mh"

#line 111 "mer_std.c"
#line 112 "mer_std.c"
#ifndef MER_STD_DECL_GUARD
#define MER_STD_DECL_GUARD

#line 116 "mer_std.c"
#line 117 "mer_std.c"

#endif
#line 120 "mer_std.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_static(fn__f_109_101_114_95_115_116_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)


MR_BEGIN_MODULE(mer_std_module0)
	MR_init_entry1(fn__f_109_101_114_95_115_116_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_101_114_95_115_116_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mer_std_maybe_bunch_0(void)
{
	mer_std_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mer_std__init(void);
void mercury__mer_std__init_type_tables(void);
void mercury__mer_std__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mer_std__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mer_std__init_complexity_procs(void);
#endif

void mercury__mer_std__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mer_std_maybe_bunch_0();
	mercury__mer_std__init_debugger();
}

void mercury__mer_std__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mer_std__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mer_std__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mer_std);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mer_std__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
