/*
** Automatically generated from `svlist.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__svlist__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "svlist.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "svlist.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "svlist.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "svlist.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "svlist.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "svlist.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "svlist.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "svlist.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "svlist.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "svlist.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "svlist.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "svlist.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "svlist.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "svlist.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "svlist.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "svlist.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "svlist.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "svlist.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "svlist.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "svlist.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "svlist.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "svlist.c"
#line 113 "svlist.c"
#include "svlist.mh"

#line 116 "svlist.c"
#line 117 "svlist.c"
#ifndef SVLIST_DECL_GUARD
#define SVLIST_DECL_GUARD

#line 121 "svlist.c"
#line 122 "svlist.c"

#endif
#line 125 "svlist.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_def_extern_entry(svlist__delete_3_0)
MR_def_extern_entry(svlist__delete_3_1)
MR_def_extern_entry(svlist__delete_3_2)
MR_def_extern_entry(svlist__delete_3_3)
MR_def_extern_entry(svlist__delete_first_3_0)
MR_def_extern_entry(svlist__delete_elems_3_0)
MR_def_extern_entry(svlist__replace_4_0)
MR_def_extern_entry(svlist__replace_4_1)
MR_def_extern_entry(svlist__replace_first_4_0)
MR_def_extern_entry(svlist__replace_all_4_0)
MR_def_extern_entry(svlist__det_replace_nth_4_0)
MR_decl_static(fn__f_115_118_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(list__delete_3_0);

MR_BEGIN_MODULE(svlist_module0)
	MR_init_entry1(svlist__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_3_1);

MR_BEGIN_MODULE(svlist_module1)
	MR_init_entry1(svlist__delete_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_3_2);

MR_BEGIN_MODULE(svlist_module2)
	MR_init_entry1(svlist__delete_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_3_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_3_3);

MR_BEGIN_MODULE(svlist_module3)
	MR_init_entry1(svlist__delete_3_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_3_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_3_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_first_3_0);

MR_BEGIN_MODULE(svlist_module4)
	MR_init_entry1(svlist__delete_first_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_first_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_first'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_first_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_first_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_elems_3_0);

MR_BEGIN_MODULE(svlist_module5)
	MR_init_entry1(svlist__delete_elems_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__delete_elems_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_elems'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__delete_elems_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_elems_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_4_0);

MR_BEGIN_MODULE(svlist_module6)
	MR_init_entry1(svlist__replace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__replace_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__replace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__replace_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_4_1);

MR_BEGIN_MODULE(svlist_module7)
	MR_init_entry1(svlist__replace_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__replace_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__replace_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__replace_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_first_4_0);

MR_BEGIN_MODULE(svlist_module8)
	MR_init_entry1(svlist__replace_first_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__replace_first_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_first'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__replace_first_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__replace_first_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__replace_all_4_0);

MR_BEGIN_MODULE(svlist_module9)
	MR_init_entry1(svlist__replace_all_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__replace_all_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_all'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__replace_all_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__replace_all_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_replace_nth_4_0);

MR_BEGIN_MODULE(svlist_module10)
	MR_init_entry1(svlist__det_replace_nth_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svlist__det_replace_nth_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_replace_nth'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svlist__det_replace_nth_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__det_replace_nth_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svlist_module11)
	MR_init_entry1(fn__f_115_118_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svlist_maybe_bunch_0(void)
{
	svlist_module0();
	svlist_module1();
	svlist_module2();
	svlist_module3();
	svlist_module4();
	svlist_module5();
	svlist_module6();
	svlist_module7();
	svlist_module8();
	svlist_module9();
	svlist_module10();
	svlist_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svlist__init(void);
void mercury__svlist__init_type_tables(void);
void mercury__svlist__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svlist__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svlist__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__svlist__init_threadscope_string_table(void);
#endif

void mercury__svlist__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svlist_maybe_bunch_0();
	mercury__svlist__init_debugger();
}

void mercury__svlist__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svlist__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svlist__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svlist);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svlist__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__svlist__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
