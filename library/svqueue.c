/*
** Automatically generated from `svqueue.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__svqueue__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "svqueue.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "svqueue.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "svqueue.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "svqueue.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "svqueue.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "svqueue.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "svqueue.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "svqueue.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "svqueue.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "svqueue.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "svqueue.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "svqueue.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "svqueue.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "svqueue.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 84 "svqueue.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "svqueue.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "svqueue.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "svqueue.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "svqueue.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "svqueue.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "svqueue.c"
#line 109 "svqueue.c"
#include "svqueue.mh"

#line 112 "svqueue.c"
#line 113 "svqueue.c"
#ifndef SVQUEUE_DECL_GUARD
#define SVQUEUE_DECL_GUARD

#line 117 "svqueue.c"
#line 118 "svqueue.c"

#endif
#line 121 "svqueue.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(svqueue__put_list_on_front_3_0, 2)
MR_def_extern_entry(svqueue__put_3_0)
MR_def_extern_entry(svqueue__put_list_3_0)
MR_def_extern_entry(svqueue__get_3_0)
MR_def_extern_entry(svqueue__delete_all_3_0)
MR_def_extern_entry(svqueue__put_on_front_3_0)
MR_def_extern_entry(svqueue__put_list_on_front_3_0)
MR_def_extern_entry(svqueue__get_from_back_3_0)
MR_decl_static(fn__f_115_118_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(queue__put_3_0);

MR_BEGIN_MODULE(svqueue_module0)
	MR_init_entry1(svqueue__put_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__put_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__put_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(queue__put_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__put_list_3_0);

MR_BEGIN_MODULE(svqueue_module1)
	MR_init_entry1(svqueue__put_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__put_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__put_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(queue__put_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);

MR_BEGIN_MODULE(svqueue_module2)
	MR_init_entry1(svqueue__get_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__get_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__get_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(queue__get_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__delete_all_3_0);

MR_BEGIN_MODULE(svqueue_module3)
	MR_init_entry1(svqueue__delete_all_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__delete_all_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_all'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__delete_all_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(queue__delete_all_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svqueue_module4)
	MR_init_entry1(svqueue__put_on_front_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__put_on_front_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_on_front'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__put_on_front_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(svqueue_module5)
	MR_init_entry1(svqueue__put_list_on_front_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__put_list_on_front_3_0);
	MR_init_label1(svqueue__put_list_on_front_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_list_on_front'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__put_list_on_front_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(list__append_3_1,
		svqueue__put_list_on_front_3_0_i2);
MR_def_label(svqueue__put_list_on_front_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_from_back_3_0);

MR_BEGIN_MODULE(svqueue_module6)
	MR_init_entry1(svqueue__get_from_back_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svqueue__get_from_back_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_from_back'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svqueue__get_from_back_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(queue__get_from_back_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svqueue_module7)
	MR_init_entry1(fn__f_115_118_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_113_117_101_117_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svqueue_maybe_bunch_0(void)
{
	svqueue_module0();
	svqueue_module1();
	svqueue_module2();
	svqueue_module3();
	svqueue_module4();
	svqueue_module5();
	svqueue_module6();
	svqueue_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svqueue__init(void);
void mercury__svqueue__init_type_tables(void);
void mercury__svqueue__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svqueue__init_complexity_procs(void);
#endif

void mercury__svqueue__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svqueue_maybe_bunch_0();
	mercury__svqueue__init_debugger();
}

void mercury__svqueue__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svqueue__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svqueue__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svqueue);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svqueue__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
