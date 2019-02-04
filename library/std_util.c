/*
** Automatically generated from `std_util.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__std_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "io.int2"
#include "io.mh"

#line 27 "std_util.c"
#line 142 "io.int2"
#include "string.mh"

#line 31 "std_util.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "std_util.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "std_util.c"
#line 30 "array.int2"
#include "array.mh"

#line 43 "std_util.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "std_util.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "std_util.c"
#line 148 "io.opt"
#include "dir.mh"

#line 55 "std_util.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 59 "std_util.c"
#line 4 "char.opt"
#include "char.mh"

#line 63 "std_util.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "std_util.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "std_util.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "std_util.c"
#line 23 "store.opt"
#include "store.mh"

#line 79 "std_util.c"
#line 3 "list.opt"
#include "list.mh"

#line 83 "std_util.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "std_util.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 91 "std_util.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "std_util.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "std_util.c"
#line 100 "std_util.c"
#include "std_util.mh"

#line 103 "std_util.c"
#line 104 "std_util.c"
#ifndef STD_UTIL_DECL_GUARD
#define STD_UTIL_DECL_GUARD

#line 108 "std_util.c"
#line 109 "std_util.c"

#endif
#line 112 "std_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(std_util__isnt_2_0, 4,1)
MR_decl_label2(std_util__maybe_pred_3_0, 3,2)
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
MR_decl_static(fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(std_util_module0)
	MR_init_entry1(fn__std_util__compose_3_0);
	MR_init_label1(fn__std_util__compose_3_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__compose_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(std_util_module1)
	MR_init_entry1(fn__std_util__converse_3_0);
MR_BEGIN_CODE

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
	MR_init_label3(fn__std_util__pow_3_0,11,2,4)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__std_util__pow_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__std_util__pow_3_0_i4);
MR_def_label(fn__std_util__pow_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__std_util__pow_3_0_i11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(std_util_module3)
	MR_init_entry1(fn__std_util__id_1_0);
MR_BEGIN_CODE

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
	MR_init_label2(std_util__maybe_pred_3_0,3,2)
MR_BEGIN_CODE

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
	MR_init_label2(fn__std_util__maybe_func_2_0,3,2)
MR_BEGIN_CODE

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
	MR_init_label2(std_util__isnt_2_0,4,1)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(std_util_module7)
	MR_init_entry1(fn__f_115_116_100_95_117_116_105_108_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__std_util__init(void);
void mercury__std_util__init_type_tables(void);
void mercury__std_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__std_util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__std_util__init_complexity_procs(void);
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

void mercury__std_util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__std_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
