/*
** Automatically generated from `region_builtin.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__region_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "region_builtin.c"
#include "region_builtin.mh"

#line 28 "region_builtin.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "region_builtin.c"
#line 536 "io.int"
#include "string.mh"

#line 36 "region_builtin.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "region_builtin.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "region_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "region_builtin.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 52 "region_builtin.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 56 "region_builtin.c"
#line 61 "array.opt"
#include "store.mh"

#line 60 "region_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "region_builtin.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 68 "region_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 72 "region_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "region_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "region_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "region_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "region_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "region_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "region_builtin.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "region_builtin.c"
#line 156 "io.opt"
#include "dir.mh"

#line 104 "region_builtin.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 108 "region_builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 112 "region_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "region_builtin.c"
#line 117 "region_builtin.c"
#ifndef REGION_BUILTIN_DECL_GUARD
#define REGION_BUILTIN_DECL_GUARD

#line 121 "region_builtin.c"
#line 50 "region_builtin.m"
#include "mercury_region.h"
#line 124 "region_builtin.c"
#line 125 "region_builtin.c"

#endif
#line 128 "region_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_region_builtin__type_ctor_info_region_0;
MR_def_extern_entry(region_builtin__create_region_1_0)
MR_def_extern_entry(region_builtin__remove_region_1_0)
MR_def_extern_entry(region_builtin__print_rbmm_profiling_info_2_0)
MR_def_extern_entry(__Unify___region_builtin__region_0_0)
MR_def_extern_entry(__Compare___region_builtin__region_0_0)
MR_decl_static(fn__f_114_101_103_105_111_110_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_TypeCtorInfo_Struct mercury_data_region_builtin__type_ctor_info_region_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___region_builtin__region_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___region_builtin__region_0_0)),
	"region_builtin",
	"region",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(region_builtin_module0)
	MR_init_entry1(region_builtin__create_region_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__region_builtin__create_region_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_region'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__region_builtin__create_region_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_RegionHeader *	Region;
#define	MR_PROC_LABEL	mercury__region_builtin__create_region_1_0
	MR_OBTAIN_GLOBAL_LOCK("create_region");
{
#line 64 "region_builtin.m"

#ifdef MR_USE_REGIONS
    Region = MR_region_create_region();
#else
    MR_fatal_error("create_region: non-rbmm grade");
#endif
;}
#line 190 "region_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("create_region");
	MR_r1 = (MR_Word) Region;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(region_builtin_module1)
	MR_init_entry1(region_builtin__remove_region_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__region_builtin__remove_region_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_region'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__region_builtin__remove_region_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_RegionHeader *	Region;
#define	MR_PROC_LABEL	mercury__region_builtin__remove_region_1_0
	Region = (MR_RegionHeader *) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("remove_region");
{
#line 75 "region_builtin.m"

#ifdef MR_USE_REGIONS
    MR_region_remove_region(Region);
#else
    MR_fatal_error("remove_region: non-rbmm grade");
#endif
;}
#line 230 "region_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("remove_region");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(region_builtin_module2)
	MR_init_entry1(region_builtin__print_rbmm_profiling_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__region_builtin__print_rbmm_profiling_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_rbmm_profiling_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__region_builtin__print_rbmm_profiling_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__region_builtin__print_rbmm_profiling_info_2_0
	MR_OBTAIN_GLOBAL_LOCK("print_rbmm_profiling_info");
{
#line 86 "region_builtin.m"

#ifdef MR_USE_REGIONS
    MR_region_print_profiling_info();
#else
    printf(
        "There is no rbmm profiling info to print in a non-rbmm grade.\n");
#endif
;}
#line 268 "region_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("print_rbmm_profiling_info");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(region_builtin_module3)
	MR_init_entry1(__Unify___region_builtin__region_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___region_builtin__region_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___region_builtin__region_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(region_builtin_module4)
	MR_init_entry1(__Compare___region_builtin__region_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___region_builtin__region_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___region_builtin__region_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(region_builtin_module5)
	MR_init_entry1(fn__f_114_101_103_105_111_110_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_101_103_105_111_110_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_114_101_103_105_111_110_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__region_builtin_maybe_bunch_0(void)
{
	region_builtin_module0();
	region_builtin_module1();
	region_builtin_module2();
	region_builtin_module3();
	region_builtin_module4();
	region_builtin_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__region_builtin__init(void);
void mercury__region_builtin__init_type_tables(void);
void mercury__region_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__region_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__region_builtin__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__region_builtin__init_threadscope_string_table(void);
#endif

void mercury__region_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__region_builtin_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_region_builtin__type_ctor_info_region_0,
		region_builtin__region_0_0);
	mercury__region_builtin__init_debugger();
}

void mercury__region_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_region_builtin__type_ctor_info_region_0);
	}
}


void mercury__region_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__region_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__region_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__region_builtin__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__region_builtin__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
