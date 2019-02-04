/*
** Automatically generated from `gc.m'
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
INIT mercury__gc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "gc.c"
#include "gc.mh"

#line 27 "gc.c"
#line 530 "io.int"
#include "io.mh"

#line 31 "gc.c"
#line 538 "io.int"
#include "string.mh"

#line 35 "gc.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "gc.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "gc.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "gc.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "gc.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "gc.c"
#line 4 "char.opt"
#include "char.mh"

#line 59 "gc.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "gc.c"
#line 23 "store.opt"
#include "store.mh"

#line 67 "gc.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "gc.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "gc.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "gc.c"
#line 4 "int.opt"
#include "int.mh"

#line 83 "gc.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "gc.c"
#line 148 "io.opt"
#include "dir.mh"

#line 91 "gc.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 95 "gc.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "gc.c"
#line 100 "gc.c"
#ifndef GC_DECL_GUARD
#define GC_DECL_GUARD

#line 104 "gc.c"
#line 105 "gc.c"

#endif
#line 108 "gc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(gc__garbage_collect_0_0)
MR_def_extern_entry(gc__garbage_collect_2_0)
MR_decl_static(fn__f_103_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)


MR_BEGIN_MODULE(gc_module0)
	MR_init_entry1(gc__garbage_collect_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gc__garbage_collect_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__gc__garbage_collect_0_0
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("garbage_collect");
{
#line 55 "gc.m"

#ifdef MR_CONSERVATIVE_GC
  #ifndef MR_HIGHLEVEL_CODE
	/* clear out the stacks and registers before garbage collecting */
	MR_clear_zone_for_GC(MR_CONTEXT(MR_ctxt_detstack_zone), MR_sp + 1);
	MR_clear_zone_for_GC(MR_CONTEXT(MR_ctxt_nondetstack_zone),
		MR_maxfr + 1);
	MR_clear_regs_for_GC();
  #endif

	GC_gcollect();
#elif defined(MR_NATIVE_GC)
  #ifdef MR_HIGHLEVEL_CODE
	MR_garbage_collect();
  #else
  	/* XXX not yet implemented */
  #endif
#endif
;}
#line 157 "gc.c"
	MR_RELEASE_GLOBAL_LOCK("garbage_collect");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gc_module1)
	MR_init_entry1(gc__garbage_collect_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gc__garbage_collect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(gc__garbage_collect_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gc_module2)
	MR_init_entry1(fn__f_103_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_103_99_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__gc__garbage_collect_0_0);

void
ML_garbage_collect(void);

void
ML_garbage_collect(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__gc__garbage_collect_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__gc__garbage_collect_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__gc_maybe_bunch_0(void)
{
	gc_module0();
	gc_module1();
	gc_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__gc__init(void);
void mercury__gc__init_type_tables(void);
void mercury__gc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__gc__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__gc__init_complexity_procs(void);
#endif

void mercury__gc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__gc_maybe_bunch_0();
	mercury__gc__init_debugger();
}

void mercury__gc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__gc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__gc__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__gc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
