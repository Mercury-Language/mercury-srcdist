/*
** Automatically generated from `benchmarking.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__benchmarking__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "benchmarking.c"
#include "benchmarking.mh"

#line 27 "benchmarking.c"
#line 534 "io.int"
#include "io.mh"

#line 31 "benchmarking.c"
#line 542 "io.int"
#include "string.mh"

#line 35 "benchmarking.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "benchmarking.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "benchmarking.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "benchmarking.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "benchmarking.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 55 "benchmarking.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "benchmarking.c"
#line 20 "store.opt"
#include "store.mh"

#line 63 "benchmarking.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 67 "benchmarking.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "benchmarking.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "benchmarking.c"
#line 4 "char.opt"
#include "char.mh"

#line 79 "benchmarking.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 83 "benchmarking.c"
#line 3 "list.opt"
#include "list.mh"

#line 87 "benchmarking.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "benchmarking.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "benchmarking.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "benchmarking.c"
#line 150 "io.opt"
#include "dir.mh"

#line 103 "benchmarking.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 107 "benchmarking.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 111 "benchmarking.c"
#line 1080 "benchmarking.m"

#include "mercury_prof.h"
#include "mercury_heap_profile.h"

#line 117 "benchmarking.c"
#line 118 "benchmarking.c"
#ifndef BENCHMARKING_DECL_GUARD
#define BENCHMARKING_DECL_GUARD

#line 122 "benchmarking.c"
#line 135 "benchmarking.m"


#include "mercury_timing.h"
#include "mercury_heap.h"

extern void ML_report_stats(void);

extern void ML_report_full_memory_stats(void);


#line 134 "benchmarking.c"
#line 896 "benchmarking.m"

    extern  volatile    MR_Word ML_benchmarking_dummy_word;

#line 139 "benchmarking.c"
#line 140 "benchmarking.c"

#endif
#line 143 "benchmarking.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_benchmarking__type_ctor_info_int_reference_0;
MR_decl_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0, 11,2,13)
MR_decl_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1, 11,2,13)
MR_decl_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0, 11,2,13)
MR_decl_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0, 11,2,13)
MR_decl_label1(benchmarking__benchmark_det_5_0, 2)
MR_decl_label1(benchmarking__benchmark_det_5_1, 2)
MR_decl_label1(benchmarking__benchmark_det_io_7_0, 2)
MR_decl_label1(benchmarking__benchmark_func_5_0, 2)
MR_decl_label3(benchmarking__benchmark_nondet_5_0, 7,8,5)
MR_decl_label2(benchmarking__repeat_1_0, 4,2)
MR_decl_label6(benchmarking__write_out_trace_counts_4_0, 50,4,9,14,19,20)
MR_decl_label1(__Unify___benchmarking__int_reference_0_0, 6)
MR_decl_label2(__Compare___benchmarking__int_reference_0_0, 3,2)
MR_def_extern_entry(benchmarking__report_stats_0_0)
MR_def_extern_entry(benchmarking__report_full_memory_stats_0_0)
MR_decl_static(benchmarking__do_nothing_1_0)
MR_decl_static(benchmarking__get_user_cpu_milliseconds_1_0)
MR_def_extern_entry(benchmarking__benchmark_det_5_0)
MR_def_extern_entry(benchmarking__benchmark_det_5_1)
MR_def_extern_entry(benchmarking__benchmark_func_5_0)
MR_def_extern_entry(benchmarking__benchmark_det_io_7_0)
MR_decl_static(benchmarking__repeat_1_0)
MR_decl_static(benchmarking__new_int_reference_2_0)
MR_decl_static(benchmarking__ref_value_2_0)
MR_decl_static(benchmarking__update_ref_2_0)
MR_def_extern_entry(benchmarking__benchmark_nondet_5_0)
MR_def_extern_entry(benchmarking__turn_off_call_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_off_time_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_off_heap_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_off_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_off_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_on_call_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_on_time_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_on_heap_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_on_profiling_0_0)
MR_def_extern_entry(benchmarking__turn_on_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_off_call_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_on_call_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_off_time_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_on_time_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_off_heap_profiling_2_0)
MR_def_extern_entry(benchmarking__turn_on_heap_profiling_2_0)
MR_decl_static(benchmarking__dump_trace_counts_to_4_0)
MR_def_extern_entry(benchmarking__write_out_trace_counts_4_0)
MR_def_extern_entry(__Unify___benchmarking__int_reference_0_0)
MR_def_extern_entry(__Compare___benchmarking__int_reference_0_0)
MR_decl_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1)
MR_decl_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0)
MR_decl_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_ref_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_private_builtin__ti_ref_1builtin__type_ctor_info_int_0 = {
	&mercury_data_private_builtin__type_ctor_info_ref_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_NotagFunctorDesc mercury_data_benchmarking__notag_functor_desc_int_reference_0 = {
	"int_reference",
	(MR_PseudoTypeInfo) &mercury_data_private_builtin__ti_ref_1builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_benchmarking__functor_number_map_int_reference_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_benchmarking__type_ctor_info_int_reference_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___benchmarking__int_reference_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___benchmarking__int_reference_0_0)),
	"benchmarking",
	"int_reference",
	{ (void *)&mercury_data_benchmarking__notag_functor_desc_int_reference_0 },
	{ (void *)&mercury_data_benchmarking__notag_functor_desc_int_reference_0 },
	1,
	4,
	mercury_data_benchmarking__functor_number_map_int_reference_0
};


MR_BEGIN_MODULE(benchmarking_module0)
	MR_init_entry1(benchmarking__report_stats_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__report_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__report_stats_0_0
	MR_OBTAIN_GLOBAL_LOCK("report_stats");
{
#line 149 "benchmarking.m"

    ML_report_stats();
;}
#line 258 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("report_stats");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module1)
	MR_init_entry1(benchmarking__report_full_memory_stats_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__report_full_memory_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__report_full_memory_stats_0_0
	MR_OBTAIN_GLOBAL_LOCK("report_full_memory_stats");
{
#line 156 "benchmarking.m"

#ifdef  MR_MPROF_PROFILE_MEMORY
    ML_report_full_memory_stats();
#endif
;}
#line 290 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("report_full_memory_stats");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module2)
	MR_init_entry1(benchmarking__do_nothing_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__do_nothing_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module3)
	MR_init_entry1(benchmarking__get_user_cpu_milliseconds_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__get_user_cpu_milliseconds_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__get_user_cpu_milliseconds_1_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 340 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_r1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module4)
	MR_init_entry1(benchmarking__benchmark_det_5_0);
	MR_init_label1(benchmarking__benchmark_det_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__benchmark_det_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 377 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,
		benchmarking__benchmark_det_5_0_i2);
MR_def_label(benchmarking__benchmark_det_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 402 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_0
	X = MR_tempr2;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 418 "benchmarking.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module5)
	MR_init_entry1(benchmarking__benchmark_det_5_1);
	MR_init_label1(benchmarking__benchmark_det_5_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__benchmark_det_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_1
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 455 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1,
		benchmarking__benchmark_det_5_1_i2);
MR_def_label(benchmarking__benchmark_det_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_1
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 480 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_5_1
	X = MR_tempr2;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 496 "benchmarking.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module6)
	MR_init_entry1(benchmarking__benchmark_func_5_0);
	MR_init_label1(benchmarking__benchmark_func_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__benchmark_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_func_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 533 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,
		benchmarking__benchmark_func_5_0_i2);
MR_def_label(benchmarking__benchmark_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_func_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 558 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_func_5_0
	X = MR_tempr2;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 574 "benchmarking.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module7)
	MR_init_entry1(benchmarking__benchmark_det_io_7_0);
	MR_init_label1(benchmarking__benchmark_det_io_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__benchmark_det_io_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_io_7_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 611 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0,
		benchmarking__benchmark_det_io_7_0_i2);
MR_def_label(benchmarking__benchmark_det_io_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_det_io_7_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 637 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(benchmarking_module8)
	MR_init_entry1(benchmarking__repeat_1_0);
	MR_init_label2(benchmarking__repeat_1_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__repeat_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred benchmarking.repeat/1-0", 1);
MR_def_label(benchmarking__repeat_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(benchmarking__repeat_1_0_i2);
	MR_fv(1) = MR_r1;
	MR_succeed();
MR_def_label(benchmarking__repeat_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = ((MR_Integer) MR_fv(1) - (MR_Integer) 1);
	MR_GOTO_LAB(benchmarking__repeat_1_0_i4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module9)
	MR_init_entry1(benchmarking__new_int_reference_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__new_int_reference_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	X;
	MR_Word	Ref;
#define	MR_PROC_LABEL	mercury__benchmarking__new_int_reference_2_0
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("new_int_reference");
{
#line 972 "benchmarking.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "benchmarking:int_reference/1");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Integer *) Ref = X;
;}
#line 710 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("new_int_reference");
	MR_r1 = Ref;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module10)
	MR_init_entry1(benchmarking__ref_value_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__ref_value_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__ref_value_2_0
	Ref = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("ref_value");
{
#line 997 "benchmarking.m"

    X = * (MR_Integer *) Ref;
;}
#line 744 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("ref_value");
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module11)
	MR_init_entry1(benchmarking__update_ref_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__update_ref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__update_ref_2_0
	Ref = MR_r1;
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("update_ref");
{
#line 1013 "benchmarking.m"

    * (MR_Integer *) Ref = X;
;}
#line 779 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("update_ref");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(benchmarking_module12)
	MR_init_entry1(benchmarking__benchmark_nondet_5_0);
	MR_init_label3(benchmarking__benchmark_nondet_5_0,7,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__benchmark_nondet_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 817 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr1 = Time;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	X;
	MR_Word	Ref;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	X = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("new_int_reference");
{
#line 972 "benchmarking.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "benchmarking:int_reference/1");
    MR_define_size_slot(0, Ref, 1);
    * (MR_Integer *) Ref = X;
;}
#line 836 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("new_int_reference");
	MR_tempr2 = Ref;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(benchmarking__benchmark_nondet_5_0_i5);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r5;
	}
	MR_np_call_localret_ent(benchmarking__repeat_1_0,
		benchmarking__benchmark_nondet_5_0_i7);
MR_def_label(benchmarking__benchmark_nondet_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	Ref = MR_sv(4);
	X = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("update_ref");
{
#line 1013 "benchmarking.m"

    * (MR_Integer *) Ref = X;
;}
#line 868 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("update_ref");
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(benchmarking__benchmark_nondet_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__benchmarking__benchmark_nondet_5_0_i8);
MR_def_label(benchmarking__benchmark_nondet_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 888 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	Ref = MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("ref_value");
{
#line 997 "benchmarking.m"

    X = * (MR_Integer *) Ref;
;}
#line 902 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("ref_value");
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	Ref = MR_sv(4);
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("update_ref");
{
#line 1013 "benchmarking.m"

    * (MR_Integer *) Ref = X;
;}
#line 920 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("update_ref");
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(benchmarking__benchmark_nondet_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	{
	MR_Word	Ref;
	MR_Integer	X;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	Ref = MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("ref_value");
{
#line 997 "benchmarking.m"

    X = * (MR_Integer *) Ref;
;}
#line 944 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("ref_value");
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Time;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	MR_OBTAIN_GLOBAL_LOCK("get_user_cpu_milliseconds");
{
#line 855 "benchmarking.m"

    Time = MR_get_user_cpu_milliseconds();
;}
#line 958 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("get_user_cpu_milliseconds");
	MR_tempr2 = Time;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_sv(3));
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__benchmarking__benchmark_nondet_5_0
	X = MR_tempr3;
{
#line 89 "builtin.opt"

    Y = X;
;}
#line 974 "benchmarking.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module13)
	MR_init_entry1(benchmarking__turn_off_call_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_call_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_call_profiling_0_0
{
#line 1086 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif
;}
#line 1006 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module14)
	MR_init_entry1(benchmarking__turn_off_time_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_time_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_time_profiling_0_0
{
#line 1100 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif
;}
#line 1036 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module15)
	MR_init_entry1(benchmarking__turn_off_heap_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_heap_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_heap_profiling_0_0
{
#line 1114 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();
;}
#line 1064 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module16)
	MR_init_entry1(benchmarking__turn_off_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_0_0
{
#line 1086 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif
;}
#line 1094 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_0_0
{
#line 1100 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif
;}
#line 1106 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_0_0
{
#line 1114 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();
;}
#line 1116 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module17)
	MR_init_entry1(benchmarking__turn_off_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_2_0
{
#line 1086 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif
;}
#line 1146 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_2_0
{
#line 1100 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif
;}
#line 1158 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_profiling_2_0
{
#line 1114 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();
;}
#line 1168 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module18)
	MR_init_entry1(benchmarking__turn_on_call_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_call_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_call_profiling_0_0
{
#line 1093 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif
;}
#line 1198 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module19)
	MR_init_entry1(benchmarking__turn_on_time_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_time_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_time_profiling_0_0
{
#line 1107 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif
;}
#line 1228 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module20)
	MR_init_entry1(benchmarking__turn_on_heap_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_heap_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_heap_profiling_0_0
{
#line 1119 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();
;}
#line 1256 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module21)
	MR_init_entry1(benchmarking__turn_on_profiling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_profiling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_0_0
{
#line 1093 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif
;}
#line 1286 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_0_0
{
#line 1107 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif
;}
#line 1298 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_0_0
{
#line 1119 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();
;}
#line 1308 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module22)
	MR_init_entry1(benchmarking__turn_on_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_2_0
{
#line 1093 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif
;}
#line 1338 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_2_0
{
#line 1107 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif
;}
#line 1350 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_profiling_2_0
{
#line 1119 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();
;}
#line 1360 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module23)
	MR_init_entry1(benchmarking__turn_off_call_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_call_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_call_profiling_2_0
{
#line 1086 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif
;}
#line 1390 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module24)
	MR_init_entry1(benchmarking__turn_on_call_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_call_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_call_profiling_2_0
{
#line 1093 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif
;}
#line 1420 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module25)
	MR_init_entry1(benchmarking__turn_off_time_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_time_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_time_profiling_2_0
{
#line 1100 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif
;}
#line 1450 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module26)
	MR_init_entry1(benchmarking__turn_on_time_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_time_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_time_profiling_2_0
{
#line 1107 "benchmarking.m"

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif
;}
#line 1480 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module27)
	MR_init_entry1(benchmarking__turn_off_heap_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_off_heap_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_off_heap_profiling_2_0
{
#line 1114 "benchmarking.m"

    MR_prof_turn_off_heap_profiling();
;}
#line 1508 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module28)
	MR_init_entry1(benchmarking__turn_on_heap_profiling_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__turn_on_heap_profiling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__benchmarking__turn_on_heap_profiling_2_0
{
#line 1119 "benchmarking.m"

    MR_prof_turn_on_heap_profiling();
;}
#line 1536 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module29)
	MR_init_entry1(benchmarking__dump_trace_counts_to_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(benchmarking__dump_trace_counts_to_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	FileName;
	MR_Integer	Result;
#define	MR_PROC_LABEL	mercury__benchmarking__dump_trace_counts_to_4_0
	FileName = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("dump_trace_counts_to");
{
#line 1148 "benchmarking.m"

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif
;}
#line 1585 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("dump_trace_counts_to");
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(benchmarking_module30)
	MR_init_entry1(benchmarking__write_out_trace_counts_4_0);
	MR_init_label6(benchmarking__write_out_trace_counts_4_0,50,4,9,14,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__benchmarking__write_out_trace_counts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	FileName;
	MR_Integer	Result;
#define	MR_PROC_LABEL	mercury__benchmarking__write_out_trace_counts_4_0
	FileName = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("dump_trace_counts_to");
{
#line 1148 "benchmarking.m"

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif
;}
#line 1638 "benchmarking.c"
	MR_RELEASE_GLOBAL_LOCK("dump_trace_counts_to");
	MR_r3 = Result;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(benchmarking__write_out_trace_counts_4_0_i50);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(benchmarking__write_out_trace_counts_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(benchmarking__write_out_trace_counts_4_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("\': no compiled with debugging", 29);
	MR_np_call_localret_ent(string__append_3_2,
		benchmarking__write_out_trace_counts_4_0_i19);
MR_def_label(benchmarking__write_out_trace_counts_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(benchmarking__write_out_trace_counts_4_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const("\': trace counting not turned on", 31);
	MR_np_call_localret_ent(string__append_3_2,
		benchmarking__write_out_trace_counts_4_0_i19);
MR_def_label(benchmarking__write_out_trace_counts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(benchmarking__write_out_trace_counts_4_0_i14);
	}
	MR_r2 = (MR_Word) MR_string_const("\': couldn\'t open file", 21);
	MR_np_call_localret_ent(string__append_3_2,
		benchmarking__write_out_trace_counts_4_0_i19);
MR_def_label(benchmarking__write_out_trace_counts_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		benchmarking__write_out_trace_counts_4_0_i19);
MR_def_label(benchmarking__write_out_trace_counts_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Couldn\'t dump trace counts to \140", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		benchmarking__write_out_trace_counts_4_0_i20);
MR_def_label(benchmarking__write_out_trace_counts_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___private_builtin__ref_1_0);

MR_BEGIN_MODULE(benchmarking_module31)
	MR_init_entry1(__Unify___benchmarking__int_reference_0_0);
	MR_init_label1(__Unify___benchmarking__int_reference_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___benchmarking__int_reference_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___benchmarking__int_reference_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___private_builtin__ref_1_0);
MR_def_label(__Unify___benchmarking__int_reference_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___private_builtin__ref_1_0);

MR_BEGIN_MODULE(benchmarking_module32)
	MR_init_entry1(__Compare___benchmarking__int_reference_0_0);
	MR_init_label2(__Compare___benchmarking__int_reference_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___benchmarking__int_reference_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___benchmarking__int_reference_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___benchmarking__int_reference_0_0_i2);
MR_def_label(__Compare___benchmarking__int_reference_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___benchmarking__int_reference_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___private_builtin__ref_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module33)
	MR_init_entry1(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,11,2,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i2);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 1812 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i11);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module34)
	MR_init_entry1(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1);
	MR_init_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1,11,2,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1_i2);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 1865 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1_i11);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module35)
	MR_init_entry1(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,11,2,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i2);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 1918 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0_i11);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(benchmarking_module36)
	MR_init_entry1(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0);
	MR_init_label3(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0,11,2,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0_i2);
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 1972 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0_i13);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0_i11);
	}
MR_def_label(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module37)
	MR_init_entry1(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_0
	X = MR_r1;
{
#line 908 "benchmarking.m"

    ML_benchmarking_dummy_word = (MR_Word) X;
;}
#line 2017 "benchmarking.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(benchmarking_module38)
	MR_init_entry1(fn__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_101_110_99_104_109_97_114_107_105_110_103_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 899 "benchmarking.m"

    volatile        MR_Word ML_benchmarking_dummy_word;

#line 2049 "benchmarking.c"
#line 185 "benchmarking.m"


#include <stdio.h>
#include <stdlib.h>
#include "mercury_prof_mem.h"
#include "mercury_heap_profile.h"
#include "mercury_wrapper.h"      /* for MR_user_time_at_last_stat */

#ifdef MR_MPROF_PROFILE_MEMORY

  #define MEMORY_PROFILE_SIZE   10  /* Profile the top 10 entries */

  #define MAX_REPORT_LINES  10  /* Display the top 10 entries */

  /* local types */

  typedef struct ML_memprof_float_counter
  {
    double      cells_at_period_end;
    double      words_at_period_end;
    double      cells_since_period_start;
    double      words_since_period_start;
  } ML_memprof_float_counter;

  typedef struct    ML_memprof_report_entry
  {
    const char                  *name;
    ML_memprof_float_counter    counter;
  } ML_memprof_report_entry;

  /* static variables */

  static ML_memprof_float_counter   ML_overall_counter;

  /* local function declarations */

  static    void    ML_update_counter(MR_memprof_counter *counter,
                        ML_memprof_float_counter *float_counter);

  static    int     ML_insert_into_table(const ML_memprof_report_entry
                        *new_entry, ML_memprof_report_entry *table,
                        int table_size, int next_slot);

  static    int     ML_memory_profile_top_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table,
                        int size, int next_slot);

  static    int     ML_memory_profile_fill_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table, int next_slot);

  static    void    ML_memory_profile_report(const ML_memprof_report_entry *,
                        int num_entries, MR_bool complete);

  static    int     ML_memory_profile_compare_final(const void *i1,
                        const void *i2);

#endif /* MR_MPROF_PROFILE_MEMORY */

void
ML_report_stats(void)
{
    int                 user_time_at_prev_stat;
    int                 real_time_at_prev_stat;
#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    MercuryEngine       *eng;
#endif
#ifdef MR_MPROF_PROFILE_MEMORY
    int                 num_table_entries;
    ML_memprof_report_entry table[MEMORY_PROFILE_SIZE];
#endif

    /*
    ** Print timing and stack usage information
    */

    user_time_at_prev_stat = MR_user_time_at_last_stat;
    MR_user_time_at_last_stat = MR_get_user_cpu_milliseconds();

    real_time_at_prev_stat = MR_real_time_at_last_stat;
    MR_real_time_at_last_stat = MR_get_real_milliseconds();

#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    eng = MR_get_engine();
#endif

    fprintf(stderr, "[User time: +%.3fs, %.3fs,",
        (MR_user_time_at_last_stat - user_time_at_prev_stat) / 1000.0,
        (MR_user_time_at_last_stat - MR_user_time_at_start) / 1000.0
    );

    fprintf(stderr, " Real time: +%.3fs, %.3fs,",
        (MR_real_time_at_last_stat - real_time_at_prev_stat) / 1000.0,
        (MR_real_time_at_last_stat - MR_real_time_at_start) / 1000.0
    );

#ifndef MR_HIGHLEVEL_CODE
    fprintf(stderr, " D Stack: %.3fk, ND Stack: %.3fk,",
        ((char *) MR_sp - (char *)
            eng->MR_eng_context.MR_ctxt_detstack_zone->MR_zone_min) / 1024.0,
        ((char *) MR_maxfr - (char *)
            eng->MR_eng_context.MR_ctxt_nondetstack_zone->MR_zone_min) / 1024.0
    );
#endif

#ifdef MR_CONSERVATIVE_GC
    {
        char local_var;

        fprintf(stderr, " C Stack: %.3fk,",
            labs(&local_var - (char *) GC_stackbottom) / 1024.0);
    }
#endif

#ifdef MR_USE_TRAIL
    #ifdef MR_THREAD_SAFE
        fprintf(stderr, ", Trail: %.3fk,",
            ((char *) MR_trail_ptr - 
            (char *) MR_CONTEXT(MR_ctxt_trail_zone)->MR_zone_min) / 1024.0
        );
    #else
        fprintf(stderr, " Trail: %.3fk,",
            ((char *) MR_trail_ptr - 
            (char *) MR_trail_zone->MR_zone_min) / 1024.0
        );
   #endif /* !MR_THREAD_SAFE */     
#endif /* !MR_USE_TRAIL */

    /*
    ** Print heap usage information.
    */

#ifdef MR_CONSERVATIVE_GC
  #ifdef MR_MPS_GC
    {
        size_t committed, spare;

        committed = mps_arena_committed(mercury_mps_arena);
        spare = mps_arena_spare_committed(mercury_mps_arena);

        fprintf(stderr, "\nHeap in use: %.3fk, spare: %.3fk, total: %.3fk",
            (committed - spare) / 1024.0, spare / 1024.0, committed / 1024.0);
    }
  #endif /* MR_MPS_GC */
  #ifdef MR_BOEHM_GC
    fprintf(stderr, "\n#GCs: %lu, ",
        (unsigned long) GC_gc_no);
    if (GC_mercury_calc_gc_time) {
        /* convert from unsigned long milliseconds to float seconds */
        fprintf(stderr, "total GC time: %.2fs, ",
            (float) GC_total_gc_time / (float) 1000);
    }
    fprintf(stderr, "Heap used since last GC: %.3fk, Total used: %.3fk",
        GC_get_bytes_since_gc() / 1024.0,
        GC_get_heap_size() / 1024.0
    );
  #endif
#else /* !MR_CONSERVATIVE_GC */
    fprintf(stderr, "\nHeap: %.3fk",
        ((char *) MR_hp - (char *) eng->MR_eng_heap_zone->MR_zone_min) / 1024.0
    );
#endif /* !MR_CONSERVATIVE_GC */

#ifdef  MR_MPROF_PROFILE_MEMORY

    /*
    ** Update the overall counter (this needs to be done first,
    ** so that the percentages come out right).
    */
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    /*
    ** Print out the per-procedure memory profile (top N entries)
    */
    num_table_entries = ML_memory_profile_top_table(MR_memprof_procs.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by procedure\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    /*
    ** Print out the per-type memory profile (top N entries)
    */
    num_table_entries = ML_memory_profile_top_table(MR_memprof_types.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by type\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    /*
    ** Print out the overall memory usage.
    */
    fprintf(stderr, "Overall memory usage:"
        "+%8.8g %8.8g cells, +%8.8g %8.8g words\n",
        ML_overall_counter.cells_since_period_start,
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_since_period_start,
        ML_overall_counter.words_at_period_end
    );

#endif /* MR_MPROF_PROFILE_MEMORY */

    fprintf(stderr, "]\n");
}

#ifdef MR_MPROF_PROFILE_MEMORY

void
ML_report_full_memory_stats(void)
{
    int                     num_table_entries;
    int                     table_size;
    ML_memprof_report_entry *table;

    /*
    ** Update the overall counter (this needs to be done first,
    ** so that the percentages come out right).
    */
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    /*
    ** Allocate space for the table
    */
    if (MR_memprof_procs.num_entries > MR_memprof_types.num_entries) {
        table_size = MR_memprof_procs.num_entries;
    } else {
        table_size = MR_memprof_types.num_entries;
    }
    table = MR_GC_NEW_ARRAY(ML_memprof_report_entry, table_size);

    /*
    ** Print the by-procedure memory profile
    */
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_procs.root,
        table, 0);
    qsort(table, MR_memprof_procs.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by procedure\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    /*
    ** Print the by-type memory profile
    */
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_types.root,
        table, 0);
    qsort(table, MR_memprof_types.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by type\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    /*
    ** Deallocate space for the table
    */
    MR_GC_free(table);

    /*
    ** Print the overall memory usage
    */
    fprintf(stderr, "\nOverall memory usage: %8.8g cells, %8.8g words\n",
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_at_period_end
    );
}

/*
** ML_update_counter(counter, float_counter):
**
** Copy the data for a period from `counter' into
** `float_counter' (changing the format slightly as we go),
** and update `counter' to reflect the start of a new period.
*/

static void
ML_update_counter(MR_memprof_counter *counter,
    ML_memprof_float_counter *float_counter)
{
    MR_add_two_dwords(counter->cells_at_period_start,
        counter->cells_since_period_start);
    MR_add_two_dwords(counter->words_at_period_start,
        counter->words_since_period_start);

    MR_convert_dword_to_double(counter->cells_since_period_start,
        float_counter->cells_since_period_start);
    MR_convert_dword_to_double(counter->words_since_period_start,
        float_counter->words_since_period_start);

    /* since the 'at start' numbers have already been incremented, */
    /* they now refer to the start of the *next* period */
    MR_convert_dword_to_double(counter->cells_at_period_start,
        float_counter->cells_at_period_end);
    MR_convert_dword_to_double(counter->words_at_period_start,
        float_counter->words_at_period_end);

    MR_zero_dword(counter->cells_since_period_start);
    MR_zero_dword(counter->words_since_period_start);
}

/*
** Insert an entry into the table of the top `table_size' entries.
** Entries are ranked according to their words_since_period_start.
** (This is an arbitrary choice; we might equally well choose
** to order them by cells_since_period_start. I prefer words (zs).)
** Entries that are not in the top `table_size' are discarded.
*/
static int
ML_insert_into_table(const ML_memprof_report_entry *new_entry,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    int slot;

    /* ignore entries whose counts are zero (allowing for rounding) */
    if (new_entry->counter.words_since_period_start < 1.0) {
        return next_slot;
    }

    /*
    ** Find the slot where this entry should be inserted.
    ** Start at the end and work backwards until we find
    ** the start of the table or until we find a table
    ** entry which ranks higher that the new entry.
    */
    slot = next_slot;
    while (slot > 0 && table[slot - 1].counter.words_since_period_start
        < new_entry->counter.words_since_period_start)
    {
        slot--;
    }

    /*
    ** If this entry fits in the table, then shuffle the displaced entries
    ** to the right, insert the new entry in the table, and increment next_slot
    ** (unless it is already at the end of the table).
    */
    if (slot < table_size) {
#if 0
/*
** The following code is disabled because it causes gcc (2.7.2) internal
** errors (``fixed or forbidden register spilled'') on x86 machines when
** using gcc global register variables.
*/
        int i;
        for (i = table_size - 1; i > slot; i--) {
            table[i] = table[i - 1];
        }
        table[slot] = *new_entry;
#else
        memmove(&table[slot + 1], &table[slot],
            (table_size - slot - 1) * sizeof(*table));
        MR_memcpy(&table[slot], new_entry, sizeof(*table));
#endif

        if (next_slot < table_size) {
            next_slot++;
        }
    }

    return next_slot;
}

/*
** ML_memory_profile_top_table(node, table, table_size, next_slot):
**
** Insert the entries for `node' and its children into `table', which is
** big enough to hold the top `table_size' entries. `next_slot' specifies
** the number of entries currently in the table. Returns the new value
** of `next_slot'.
*/
static int
ML_memory_profile_top_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    ML_memprof_report_entry new_entry;

    if (node != NULL) {
        next_slot = ML_memory_profile_top_table(node->left,
            table, table_size, next_slot);

        new_entry.name = node->name;
        ML_update_counter(&node->counter, &new_entry.counter);
        next_slot = ML_insert_into_table(&new_entry,
            table, table_size, next_slot);

        next_slot = ML_memory_profile_top_table(node->right,
            table, table_size, next_slot);
    }

    return next_slot;
}

/*
** ML_memory_profile_fill_table(node, table, next_slot):
** Insert the entries for `node' and its children into `table', which the
** caller guarantees is big enough to hold them all. `next_slot' specifies
** the number of entries currently in the table. Returns the new value
** of `next_slot'.
*/

static int
ML_memory_profile_fill_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int next_slot)
{
    if (node != NULL) {
        next_slot = ML_memory_profile_fill_table(node->left,
            table, next_slot);

        table[next_slot].name = node->name;
        ML_update_counter(&node->counter, &table[next_slot].counter);
        next_slot++;

        next_slot = ML_memory_profile_fill_table(node->right,
            table, next_slot);
    }
    return next_slot;
}

/*
** ML_memory_profile_report(table, num_entries, complete):
**
** Print out a profiling report for the specified table.
*/

static void
ML_memory_profile_report(const ML_memprof_report_entry *table, int num_entries,
    MR_bool complete)
{
    int     i;
    const char  *name;

    if (complete) {
        if (ML_overall_counter.cells_at_period_end < 1.0
        ||  ML_overall_counter.words_at_period_end < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    } else {
        if (ML_overall_counter.cells_since_period_start < 1.0
        ||  ML_overall_counter.words_since_period_start < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    }

    if (num_entries > MAX_REPORT_LINES && !complete) {
        num_entries = MAX_REPORT_LINES;
    }

    for (i = 0; i < num_entries; i++) {
        if (complete) {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_at_period_end,
                100 * table[i].counter.cells_at_period_end /
                    ML_overall_counter.cells_at_period_end,
                table[i].counter.words_at_period_end,
                100 * table[i].counter.words_at_period_end /
                    ML_overall_counter.words_at_period_end,
                table[i].name
            );
        } else {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_since_period_start,
                100 * table[i].counter.cells_since_period_start /
                   ML_overall_counter.cells_since_period_start,
                table[i].counter.words_since_period_start,
                100 * table[i].counter.words_since_period_start /
                   ML_overall_counter.words_since_period_start,
                table[i].name
            );
        }
    }
}

/*
** Comparison routine used for qsort().
** Compares two ML_memprof_report_entry structures.
*/

static int
ML_memory_profile_compare_final(const void *i1, const void *i2)
{
    const ML_memprof_report_entry *e1 = (const ML_memprof_report_entry *) i1;
    const ML_memprof_report_entry *e2 = (const ML_memprof_report_entry *) i2;

    if (e1->counter.words_at_period_end < e2->counter.words_at_period_end)
    {
        return 1;
    } else if
      (e1->counter.words_at_period_end > e2->counter.words_at_period_end)
    {
        return -1;
    } else {
        return strcmp(e1->name, e2->name);
    }
}

#endif /* MR_MPROF_PROFILE_MEMORY */

#line 2550 "benchmarking.c"

static void mercury__benchmarking_maybe_bunch_0(void)
{
	benchmarking_module0();
	benchmarking_module1();
	benchmarking_module2();
	benchmarking_module3();
	benchmarking_module4();
	benchmarking_module5();
	benchmarking_module6();
	benchmarking_module7();
	benchmarking_module8();
	benchmarking_module9();
	benchmarking_module10();
	benchmarking_module11();
	benchmarking_module12();
	benchmarking_module13();
	benchmarking_module14();
	benchmarking_module15();
	benchmarking_module16();
	benchmarking_module17();
	benchmarking_module18();
	benchmarking_module19();
	benchmarking_module20();
	benchmarking_module21();
	benchmarking_module22();
	benchmarking_module23();
	benchmarking_module24();
	benchmarking_module25();
	benchmarking_module26();
	benchmarking_module27();
	benchmarking_module28();
	benchmarking_module29();
	benchmarking_module30();
	benchmarking_module31();
	benchmarking_module32();
	benchmarking_module33();
	benchmarking_module34();
	benchmarking_module35();
	benchmarking_module36();
	benchmarking_module37();
	benchmarking_module38();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__benchmarking__init(void);
void mercury__benchmarking__init_type_tables(void);
void mercury__benchmarking__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__benchmarking__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__benchmarking__init_complexity_procs(void);
#endif

void mercury__benchmarking__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__benchmarking_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_benchmarking__type_ctor_info_int_reference_0,
		benchmarking__int_reference_0_0);
	mercury__benchmarking__init_debugger();
}

void mercury__benchmarking__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_benchmarking__type_ctor_info_int_reference_0);
	}
}


void mercury__benchmarking__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__benchmarking__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__benchmarking);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__benchmarking__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
