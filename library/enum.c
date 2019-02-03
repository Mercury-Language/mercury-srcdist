/*
** Automatically generated from `enum.m'
** by the Mercury compiler,
** version 11.07.2-beta-2012-06-26, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__enum__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "enum.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "enum.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "enum.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "enum.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "enum.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "enum.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "enum.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "enum.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "enum.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "enum.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "enum.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "enum.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "enum.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "enum.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "enum.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "enum.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "enum.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "enum.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "enum.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "enum.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "enum.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "enum.c"
#line 113 "enum.c"
#include "enum.mh"

#line 116 "enum.c"
#line 117 "enum.c"
#ifndef ENUM_DECL_GUARD
#define ENUM_DECL_GUARD

#line 121 "enum.c"
#line 122 "enum.c"

#endif
#line 125 "enum.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeClassDeclStruct
	mercury_data_enum__type_class_decl_enum_1;
MR_def_extern_entry(fn__enum__to_int_1_0)
MR_def_extern_entry(fn__enum__from_int_1_0)
MR_decl_static(fn__f_101_110_117_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_ConstString mercury_data_enum__type_class_id_var_names_enum_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_enum__type_class_id_method_ids_enum_1[] = {
	{ "to_int", 2, MR_FUNCTION },
	{ "from_int", 2, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_enum__type_class_id_enum_1 = {
	"enum",
	"enum",
	1,
	1,
	2,
	mercury_data_enum__type_class_id_var_names_enum_1,
	mercury_data_enum__type_class_id_method_ids_enum_1
};

const MR_TypeClassDeclStruct mercury_data_enum__type_class_decl_enum_1 = {
	&mercury_data_enum__type_class_id_enum_1,
	0,
	0,
	NULL
};



MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(enum_module0)
	MR_init_entry1(fn__enum__to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__enum__to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__enum__to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__enum__to_int_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(enum_module1)
	MR_init_entry1(fn__enum__from_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__enum__from_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__enum__from_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__enum__from_int_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(enum_module2)
	MR_init_entry1(fn__f_101_110_117_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_101_110_117_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_101_110_117_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__enum_maybe_bunch_0(void)
{
	enum_module0();
	enum_module1();
	enum_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__enum__init(void);
void mercury__enum__init_type_tables(void);
void mercury__enum__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__enum__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__enum__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__enum__init_threadscope_string_table(void);
#endif

void mercury__enum__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__enum_maybe_bunch_0();
	mercury__enum__init_debugger();
}

void mercury__enum__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_class_decl(
		&mercury_data_enum__type_class_decl_enum_1);
	}
}


void mercury__enum__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__enum__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__enum);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__enum__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__enum__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
