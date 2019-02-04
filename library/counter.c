/*
** Automatically generated from `counter.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__counter__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "io.int2"
#include "io.mh"

#line 27 "counter.c"
#line 136 "io.int2"
#include "string.mh"

#line 31 "counter.c"
#line 23 "bitmap.int2"
#include "bitmap.mh"

#line 35 "counter.c"
#line 26 "time.int2"
#include "time.mh"

#line 39 "counter.c"
#line 28 "array.int2"
#include "array.mh"

#line 43 "counter.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "counter.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 51 "counter.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "counter.c"
#line 131 "io.opt"
#include "dir.mh"

#line 59 "counter.c"
#line 139 "io.opt"
#include "table_builtin.mh"

#line 63 "counter.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "counter.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "counter.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "counter.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 79 "counter.c"
#line 22 "store.opt"
#include "store.mh"

#line 83 "counter.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "counter.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "counter.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 95 "counter.c"
#line 96 "counter.c"
#include "counter.mh"

#line 99 "counter.c"
#line 100 "counter.c"
#ifndef COUNTER_DECL_GUARD
#define COUNTER_DECL_GUARD

#line 104 "counter.c"
#line 105 "counter.c"

#endif
#line 108 "counter.c"


extern const MR_TypeCtorInfo_Struct
	mercury_data_counter__type_ctor_info_counter_0;
MR_decl_label2(__Compare___counter__counter_0_0, 2,3)
MR_def_extern_entry(fn__counter__init_1_0)
MR_def_extern_entry(counter__init_2_0)
MR_def_extern_entry(counter__allocate_3_0)
MR_def_extern_entry(__Unify___counter__counter_0_0)
MR_def_extern_entry(__Compare___counter__counter_0_0)
MR_decl_static(fn__f_99_111_117_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_counter__notag_functor_desc_counter_0 = {
	"counter",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_counter__functor_number_map_counter_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___counter__counter_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___counter__counter_0_0)),
	"counter",
	"counter",
	{ (void *)&mercury_data_counter__notag_functor_desc_counter_0 },
	{ (void *)&mercury_data_counter__notag_functor_desc_counter_0 },
	1,
	4,
	mercury_data_counter__functor_number_map_counter_0
};


MR_BEGIN_MODULE(counter_module0)
	MR_init_entry1(fn__counter__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__counter__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(counter_module1)
	MR_init_entry1(counter__init_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__counter__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(counter_module2)
	MR_init_entry1(counter__allocate_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__counter__allocate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(counter_module3)
	MR_init_entry1(__Unify___counter__counter_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___counter__counter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(counter_module4)
	MR_init_entry1(__Compare___counter__counter_0_0);
	MR_init_label2(__Compare___counter__counter_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___counter__counter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___counter__counter_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___counter__counter_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Compare___counter__counter_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___counter__counter_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(counter_module5)
	MR_init_entry1(fn__f_99_111_117_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_117_110_116_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__counter_maybe_bunch_0(void)
{
	counter_module0();
	counter_module1();
	counter_module2();
	counter_module3();
	counter_module4();
	counter_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__counter__init(void);
void mercury__counter__init_type_tables(void);
void mercury__counter__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__counter__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__counter__init_complexity_procs(void);
#endif

void mercury__counter__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__counter_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_counter__type_ctor_info_counter_0,
		counter__counter_0_0);
	mercury__counter__init_debugger();
}

void mercury__counter__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_counter__type_ctor_info_counter_0);
	}
}


void mercury__counter__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__counter__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__counter__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
