/*
** Automatically generated from `std_util.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__std_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "std_util.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "std_util.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "std_util.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "std_util.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "std_util.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "std_util.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "std_util.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "std_util.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "std_util.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "std_util.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "std_util.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "std_util.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "std_util.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "std_util.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "std_util.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "std_util.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "std_util.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "std_util.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "std_util.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "std_util.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "std_util.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "std_util.c"
#line 113 "std_util.c"
#include "std_util.mh"

#line 116 "std_util.c"
#line 117 "std_util.c"
#ifndef STD_UTIL_DECL_GUARD
#define STD_UTIL_DECL_GUARD

#line 121 "std_util.c"
#line 122 "std_util.c"

#endif
#line 125 "std_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(std_util__isnt_2_0, 4,1)
MR_decl_label2(std_util__maybe_pred_3_0, 3,2)
MR_decl_label2(std_util__negate_1_0, 4,1)
MR_decl_label1(fn__std_util__compose_3_0, 2)
MR_decl_label2(fn__std_util__maybe_func_2_0, 3,2)
MR_decl_label3(fn__std_util__pow_3_0, 11,2,4)
MR_def_extern_entry(fn__std_util__compose_3_0)
MR_def_extern_entry(fn__std_util__converse_3_0)
MR_def_extern_entry(fn__std_util__pow_3_0)
MR_def_extern_entry(fn__std_util__id_1_0)
MR_def_extern_entry(std_util__maybe_pred_3_0)
MR_def_extern_entry(fn__std_util__maybe_func_2_0)
MR_def_extern_entry(std_util__isnt_2_0)
MR_def_extern_entry(std_util__negate_1_0)
MR_decl_static(fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(std_util_module0)
	MR_init_entry1(fn__std_util__compose_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__std_util__compose_3_0);
	MR_init_label1(fn__std_util__compose_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compose'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__std_util__compose_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__compose_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__std_util__compose_3_0_i2);
MR_def_label(fn__std_util__compose_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__compose_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(std_util_module1)
	MR_init_entry1(fn__std_util__converse_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__std_util__converse_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'converse'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__std_util__converse_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__converse_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module2)
	MR_init_entry1(fn__std_util__pow_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__std_util__pow_3_0);
	MR_init_label3(fn__std_util__pow_3_0,11,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pow'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__std_util__pow_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__std_util__pow_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__std_util__pow_3_0_i2);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(fn__std_util__pow_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__pow_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__std_util__pow_3_0_i4);
MR_def_label(fn__std_util__pow_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__std_util__pow_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module3)
	MR_init_entry1(fn__std_util__id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__std_util__id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__std_util__id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module4)
	MR_init_entry1(std_util__maybe_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__std_util__maybe_pred_3_0);
	MR_init_label2(std_util__maybe_pred_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__std_util__maybe_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(std_util__maybe_pred_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__std_util__maybe_pred_3_0_i3);
MR_def_label(std_util__maybe_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(std_util__maybe_pred_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(std_util__maybe_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module5)
	MR_init_entry1(fn__std_util__maybe_func_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__std_util__maybe_func_2_0);
	MR_init_label2(fn__std_util__maybe_func_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__std_util__maybe_func_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__maybe_func_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__std_util__maybe_func_2_0_i3);
MR_def_label(fn__std_util__maybe_func_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__std_util__maybe_func_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__std_util__maybe_func_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module6)
	MR_init_entry1(std_util__isnt_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__std_util__isnt_2_0);
	MR_init_label2(std_util__isnt_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'isnt'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__std_util__isnt_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(std_util__isnt_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__std_util__isnt_2_0_i4);
MR_def_label(std_util__isnt_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(std_util__isnt_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(std_util__isnt_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_0);

MR_BEGIN_MODULE(std_util_module7)
	MR_init_entry1(std_util__negate_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__std_util__negate_1_0);
	MR_init_label2(std_util__negate_1_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negate'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__std_util__negate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(std_util__negate_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__std_util__negate_1_0_i4);
MR_def_label(std_util__negate_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(std_util__negate_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(std_util__negate_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module8)
	MR_init_entry1(fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__std_util_maybe_bunch_0(void)
{
	std_util_module0();
	std_util_module1();
	std_util_module2();
	std_util_module3();
	std_util_module4();
	std_util_module5();
	std_util_module6();
	std_util_module7();
	std_util_module8();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__std_util__init(void);
void mercury__std_util__init_type_tables(void);
void mercury__std_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__std_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__std_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__std_util__init_threadscope_string_table(void);
#endif

void mercury__std_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__std_util_maybe_bunch_0();
	mercury__std_util__init_debugger();
}

void mercury__std_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__std_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__std_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__std_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__std_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__std_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
