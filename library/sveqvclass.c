/*
** Automatically generated from `sveqvclass.m'
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
INIT mercury__sveqvclass__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 28 "sveqvclass.c"
#line 144 "io.int2"
#include "string.mh"

#line 32 "sveqvclass.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 36 "sveqvclass.c"
#line 28 "time.int2"
#include "time.mh"

#line 40 "sveqvclass.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "sveqvclass.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 48 "sveqvclass.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 52 "sveqvclass.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "sveqvclass.c"
#line 150 "io.opt"
#include "dir.mh"

#line 60 "sveqvclass.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 64 "sveqvclass.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "sveqvclass.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "sveqvclass.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "sveqvclass.c"
#line 20 "store.opt"
#include "store.mh"

#line 80 "sveqvclass.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 84 "sveqvclass.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "sveqvclass.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "sveqvclass.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "sveqvclass.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "sveqvclass.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "sveqvclass.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "sveqvclass.c"
#line 109 "sveqvclass.c"
#include "sveqvclass.mh"

#line 112 "sveqvclass.c"
#line 113 "sveqvclass.c"
#ifndef SVEQVCLASS_DECL_GUARD
#define SVEQVCLASS_DECL_GUARD

#line 117 "sveqvclass.c"
#line 118 "sveqvclass.c"

#endif
#line 121 "sveqvclass.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(sveqvclass__ensure_element_3_0, 2)
MR_def_extern_entry(sveqvclass__ensure_element_3_0)
MR_def_extern_entry(sveqvclass__new_element_3_0)
MR_def_extern_entry(sveqvclass__ensure_equivalence_4_0)
MR_def_extern_entry(sveqvclass__new_equivalence_4_0)
MR_def_extern_entry(sveqvclass__remove_equivalent_elements_3_0)
MR_decl_static(fn__f_115_118_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(eqvclass__ensure_element_partition_id_4_0);

MR_BEGIN_MODULE(sveqvclass_module0)
	MR_init_entry1(sveqvclass__ensure_element_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__sveqvclass__ensure_element_3_0);
	MR_init_label1(sveqvclass__ensure_element_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_element'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__sveqvclass__ensure_element_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(eqvclass__ensure_element_partition_id_4_0,
		sveqvclass__ensure_element_3_0_i2);
MR_def_label(sveqvclass__ensure_element_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__new_element_3_0);

MR_BEGIN_MODULE(sveqvclass_module1)
	MR_init_entry1(sveqvclass__new_element_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__sveqvclass__new_element_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_element'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__sveqvclass__new_element_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(eqvclass__new_element_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__ensure_equivalence_4_0);

MR_BEGIN_MODULE(sveqvclass_module2)
	MR_init_entry1(sveqvclass__ensure_equivalence_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__sveqvclass__ensure_equivalence_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_equivalence'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__sveqvclass__ensure_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(eqvclass__ensure_equivalence_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(eqvclass__new_equivalence_4_0);

MR_BEGIN_MODULE(sveqvclass_module3)
	MR_init_entry1(sveqvclass__new_equivalence_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__sveqvclass__new_equivalence_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_equivalence'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__sveqvclass__new_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(eqvclass__new_equivalence_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__eqvclass__remove_equivalent_elements_2_0);

MR_BEGIN_MODULE(sveqvclass_module4)
	MR_init_entry1(sveqvclass__remove_equivalent_elements_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__sveqvclass__remove_equivalent_elements_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_equivalent_elements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__sveqvclass__remove_equivalent_elements_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__eqvclass__remove_equivalent_elements_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(sveqvclass_module5)
	MR_init_entry1(fn__f_115_118_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__sveqvclass_maybe_bunch_0(void)
{
	sveqvclass_module0();
	sveqvclass_module1();
	sveqvclass_module2();
	sveqvclass_module3();
	sveqvclass_module4();
	sveqvclass_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__sveqvclass__init(void);
void mercury__sveqvclass__init_type_tables(void);
void mercury__sveqvclass__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__sveqvclass__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__sveqvclass__init_complexity_procs(void);
#endif

void mercury__sveqvclass__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__sveqvclass_maybe_bunch_0();
	mercury__sveqvclass__init_debugger();
}

void mercury__sveqvclass__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__sveqvclass__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__sveqvclass__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__sveqvclass);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__sveqvclass__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
