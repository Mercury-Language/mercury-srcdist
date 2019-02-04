/*
** Automatically generated from `par_builtin.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__par_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "par_builtin.c"
#include "par_builtin.mh"

#line 28 "par_builtin.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "par_builtin.c"
#line 536 "io.int"
#include "time.mh"

#line 36 "par_builtin.c"
#line 537 "io.int"
#include "string.mh"

#line 40 "par_builtin.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "par_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "par_builtin.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 52 "par_builtin.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 56 "par_builtin.c"
#line 58 "array.opt"
#include "store.mh"

#line 60 "par_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "par_builtin.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 68 "par_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 72 "par_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "par_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "par_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "par_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "par_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "par_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "par_builtin.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "par_builtin.c"
#line 157 "io.opt"
#include "dir.mh"

#line 104 "par_builtin.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 108 "par_builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 112 "par_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "par_builtin.c"
#line 117 "par_builtin.c"
#ifndef PAR_BUILTIN_DECL_GUARD
#define PAR_BUILTIN_DECL_GUARD

#line 121 "par_builtin.c"
#line 212 "par_builtin.m"

/*
INIT mercury_sys_init_par_builtin_modules
*/

#if !defined(MR_HIGHLEVEL_CODE) && defined(MR_THREAD_SAFE)
    MR_define_extern_entry(mercury__par_builtin__wait_resume);
#endif

#line 132 "par_builtin.c"
#line 133 "par_builtin.c"

#endif
#line 136 "par_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_par_builtin__type_ctor_info_future_1,
	mercury_data_par_builtin__type_ctor_info_loop_control_0;
MR_decl_label1(par_builtin__evaluate_parallelism_condition_0_0, 1)
MR_decl_label1(par_builtin__lc_free_slot_2_0, 1)
MR_def_extern_entry(par_builtin__new_future_2_0)
MR_def_extern_entry(par_builtin__wait_future_2_0)
MR_def_extern_entry(par_builtin__get_future_2_0)
MR_def_extern_entry(par_builtin__signal_future_2_0)
MR_def_extern_entry(par_builtin__lc_create_2_0)
MR_def_extern_entry(par_builtin__lc_free_slot_2_0)
MR_def_extern_entry(par_builtin__lc_join_and_terminate_2_0)
MR_def_extern_entry(par_builtin__lc_default_num_contexts_1_0)
MR_def_extern_entry(par_builtin__evaluate_parallelism_condition_0_0)
MR_def_extern_entry(par_builtin__num_os_threads_1_0)
MR_def_extern_entry(par_builtin__par_cond_close_stats_file_2_0)
MR_def_extern_entry(__Unify___par_builtin__future_1_0)
MR_def_extern_entry(__Compare___par_builtin__future_1_0)
MR_def_extern_entry(__Unify___par_builtin__loop_control_0_0)
MR_def_extern_entry(__Compare___par_builtin__loop_control_0_0)
MR_decl_static(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_par_builtin__type_ctor_info_future_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___par_builtin__future_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___par_builtin__future_1_0)),
	"par_builtin",
	"future",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_par_builtin__type_ctor_info_loop_control_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___par_builtin__loop_control_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___par_builtin__loop_control_0_0)),
	"par_builtin",
	"loop_control",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(par_builtin_module0)
	MR_init_entry1(par_builtin__new_future_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__new_future_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_future'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__new_future_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Name;
	MR_Future *	Future;
#define	MR_PROC_LABEL	mercury__par_builtin__new_future_2_0
	Name = MR_r1;
{
#line 167 "par_builtin.m"

    #ifdef MR_THREADSCOPE
        MR_par_builtin_new_future(Future, Name);
    #else
        MR_par_builtin_new_future(Future);
    #endif
;}
#line 317 "par_builtin.c"
	MR_r1 = (MR_Word) Future;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module1)
	MR_init_entry1(par_builtin__wait_future_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__wait_future_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wait_future'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__wait_future_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Var;
#define	MR_PROC_LABEL	mercury__par_builtin__wait_future_2_0
	Future = (MR_Future *) MR_r1;
{
#line 179 "par_builtin.m"

    MR_par_builtin_wait_future(Future, Var);
;}
#line 352 "par_builtin.c"
	MR_r1 = Var;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module2)
	MR_init_entry1(par_builtin__get_future_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__get_future_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_future'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__get_future_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Var;
#define	MR_PROC_LABEL	mercury__par_builtin__get_future_2_0
	Future = (MR_Future *) MR_r1;
{
#line 187 "par_builtin.m"

    MR_par_builtin_get_future(Future, Var);
;}
#line 387 "par_builtin.c"
	MR_r1 = Var;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module3)
	MR_init_entry1(par_builtin__signal_future_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__signal_future_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'signal_future'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__signal_future_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Future *	Future;
	MR_Word	Value;
#define	MR_PROC_LABEL	mercury__par_builtin__signal_future_2_0
	Future = (MR_Future *) MR_r1;
	Value = MR_r2;
{
#line 195 "par_builtin.m"

    MR_par_builtin_signal_future(Future, Value);
;}
#line 423 "par_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module4)
	MR_init_entry1(par_builtin__lc_create_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_create_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lc_create'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__lc_create_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	NumWorkers;
	MR_LoopControl *	LC;
#define	MR_PROC_LABEL	mercury__par_builtin__lc_create_2_0
	NumWorkers = MR_r1;
{
#line 293 "par_builtin.m"

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    LC = MR_lc_create(NumWorkers);
#else
    MR_fatal_error("lc_create is unavailable in this grade");
#endif
;}
#line 461 "par_builtin.c"
	MR_r1 = (MR_Word) LC;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module5)
	MR_init_entry1(par_builtin__lc_free_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_free_slot_2_0);
	MR_init_label1(par_builtin__lc_free_slot_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lc_free_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__lc_free_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_LoopControl *	LC;
	MR_Integer	LCS;
#define	MR_PROC_LABEL	mercury__par_builtin__lc_free_slot_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	LC = (MR_LoopControl *) MR_r1;
{
#line 477 "par_builtin.m"

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_Unsigned LCS_0;
        SUCCESS_INDICATOR = MR_lc_try_get_free_slot(LC, &LCS_0);
        LCS = (MR_Integer)LCS_0;
    }
#else
    MR_fatal_error("lc_free_slot is unavailable in this grade");
#endif
;}
#line 508 "par_builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(par_builtin__lc_free_slot_2_0_i1);
	MR_r2 = LCS;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(par_builtin__lc_free_slot_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module6)
	MR_init_entry1(par_builtin__lc_join_and_terminate_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_join_and_terminate_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lc_join_and_terminate'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__lc_join_and_terminate_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_LoopControl *	LC;
	MR_Integer	LCS;
#define	MR_PROC_LABEL	mercury__par_builtin__lc_join_and_terminate_2_0
	LC = (MR_LoopControl *) MR_r1;
	LCS = MR_r2;
{
#line 492 "par_builtin.m"

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    MR_lc_join_and_terminate(LC, LCS);
#else
    MR_fatal_error("lc_join_and_terminate is unavailable in this grade");
#endif
;}
#line 556 "par_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module7)
	MR_init_entry1(par_builtin__lc_default_num_contexts_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_default_num_contexts_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lc_default_num_contexts'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__lc_default_num_contexts_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	NumContexts;
#define	MR_PROC_LABEL	mercury__par_builtin__lc_default_num_contexts_1_0
{
#line 503 "par_builtin.m"

    NumContexts = MR_num_contexts_per_loop_control;
;}
#line 588 "par_builtin.c"
	MR_r1 = NumContexts;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module8)
	MR_init_entry1(par_builtin__evaluate_parallelism_condition_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__evaluate_parallelism_condition_0_0);
	MR_init_label1(par_builtin__evaluate_parallelism_condition_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_parallelism_condition'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__evaluate_parallelism_condition_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__par_builtin__evaluate_parallelism_condition_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 202 "par_builtin.m"

    /* All uses of this predicate should override the body. */
    MR_fatal_error("evaluate_parallelism_condition called");
;}
#line 625 "par_builtin.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(par_builtin__evaluate_parallelism_condition_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(par_builtin__evaluate_parallelism_condition_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module9)
	MR_init_entry1(par_builtin__num_os_threads_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__num_os_threads_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_os_threads'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__num_os_threads_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	NThreads;
#define	MR_PROC_LABEL	mercury__par_builtin__num_os_threads_1_0
{
#line 513 "par_builtin.m"

    /*
    ** MR_num_threads is available in all grades. Although it won't make sense
    ** for non-parallel grades, it will still reflect the value configured by
    ** the user.
    */
    NThreads = MR_num_threads
;}
#line 670 "par_builtin.c"
	MR_r1 = NThreads;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module10)
	MR_init_entry1(par_builtin__par_cond_close_stats_file_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__par_cond_close_stats_file_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'par_cond_close_stats_file'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__par_builtin__par_cond_close_stats_file_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__par_builtin__par_cond_close_stats_file_2_0
{
#line 525 "par_builtin.m"

#if defined(MR_LL_PARALLEL_CONJ) &&         defined(MR_DEBUG_RUNTIME_GRANULARITY_CONTROL)
    MR_write_out_conditional_parallelism_log();
#else
    MR_fatal_error("par_cond_close_stats_file is unavailable in this grade");
#endif
;}
#line 706 "par_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(par_builtin_module11)
	MR_init_entry1(__Unify___par_builtin__future_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___par_builtin__future_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___par_builtin__future_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(par_builtin_module12)
	MR_init_entry1(__Compare___par_builtin__future_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___par_builtin__future_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___par_builtin__future_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module13)
	MR_init_entry1(__Unify___par_builtin__loop_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___par_builtin__loop_control_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___par_builtin__loop_control_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module14)
	MR_init_entry1(__Compare___par_builtin__loop_control_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___par_builtin__loop_control_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___par_builtin__loop_control_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(par_builtin_module15)
	MR_init_entry1(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 310 "par_builtin.m"


void mercury_sys_init_lc_init(void);
void mercury_sys_init_lc_init_type_tables(void);
#ifdef  MR_DEEP_PROFILING
void mercury_sys_init_lc_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp);
#endif


#ifdef MR_HIGHLEVEL_CODE

void MR_CALL
mercury__par_builtin__lc_finish_1_p_0(MR_Box lc)
{
    MR_fatal_error("lc_finish is unavailable with --highlevel-code");
}

void MR_CALL
mercury__par_builtin__lc_wait_free_slot_2_p_0(MR_Box lc, MR_Integer *slot)
{
    MR_fatal_error("lc_wait_free_slot is unavailable with --highlevel-code");
}

#else /* ! MR_HIGHLEVEL_CODE */

MR_def_extern_entry(par_builtin__lc_finish_1_0)
MR_def_extern_entry(par_builtin__lc_wait_free_slot_2_0)

MR_decl_label1(par_builtin__lc_finish_1_0, 1)

MR_BEGIN_MODULE(par_builtin_module_lc_finish)
    MR_init_entry1(par_builtin__lc_finish_1_0);
    MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_finish_1_0);
    MR_init_label1(par_builtin__lc_finish_1_0,1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif

MR_define_entry(mercury__par_builtin__lc_finish_1_0)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

    MR_incr_sp(1);
    MR_sv(1) = MR_r1; /* LC */

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *LC;

        LC = (MR_LoopControl *) MR_r1;
        MR_lc_finish_part1(LC, MR_LABEL_AP(par_builtin__lc_finish_1_0_i1));
    }
#else
    MR_fatal_error("lc_finish is unavailable in this grade");
#endif

MR_def_label(par_builtin__lc_finish_1_0,1)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

#if defined(MR_THREAD_SAFE) && defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *LC;

        LC = (MR_LoopControl *) MR_sv(1);
        MR_lc_finish_part2(LC);
    }
#endif

    MR_decr_sp(1);
    MR_proceed();

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_label1(par_builtin__lc_wait_free_slot_2_0, 1)

MR_BEGIN_MODULE(par_builtin_module_lc_wait_free_slot)
    MR_init_entry1(par_builtin__lc_wait_free_slot_2_0);
    MR_INIT_PROC_LAYOUT_ADDR(mercury__par_builtin__lc_wait_free_slot_2_0);
    MR_init_label1(par_builtin__lc_wait_free_slot_2_0,1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif

MR_define_entry(mercury__par_builtin__lc_wait_free_slot_2_0)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

    MR_incr_sp(1);
    MR_sv(1) = MR_r1; /* LC */
    /*
    ** LC must be saved to the stack so that we can resume from the label below
    ** and retrieve it.
    */

MR_def_label(par_builtin__lc_wait_free_slot_2_0,1)
    MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE

#if defined(MR_LL_PARALLEL_CONJ)
    {
        MR_LoopControl  *lc;
        MR_Unsigned     lcs_idx;

        lc = (MR_LoopControl *) MR_sv(1);
        MR_lc_wait_free_slot(lc, lcs_idx, MR_LABEL_AP(par_builtin__lc_wait_free_slot_2_0_i1));
        MR_r1 = (MR_Word)lcs_idx;
    }
#else
    MR_fatal_error("lc_wait_free_slot is unavailable in this grade");
#endif

    MR_decr_sp(1);
    MR_proceed();

#ifdef MR_maybe_local_thread_engine_base
    #undef MR_maybe_local_thread_engine_base
    #define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

#endif /* ! MR_HIGHLEVEL_CODE */

/*
** Module initialization
*/
/*
INIT mercury_sys_init_lc
*/

void
mercury_sys_init_lc_init(void)
{
#ifndef MR_HIGHLEVEL_CODE
    par_builtin_module_lc_finish();
    par_builtin_module_lc_wait_free_slot();
#endif
}

void
mercury_sys_init_lc_init_type_tables(void)
{
    /* no types to register */
}

#ifdef  MR_DEEP_PROFILING
void
mercury_sys_init_lc_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp)
{
    /* The deep profiler shouldn't notice loop control predicates. */
}
#endif


#line 990 "par_builtin.c"
#line 223 "par_builtin.m"

#if !defined(MR_HIGHLEVEL_CODE) && defined(MR_THREAD_SAFE)

    MR_BEGIN_MODULE(hand_written_par_builtin_module)
        MR_init_entry_ai(mercury__par_builtin__wait_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__par_builtin__wait_resume);
    {
        MR_Future *Future;

        /* Restore the address of the future after resuming. */
        Future = (MR_Future *) MR_sv(1);
        MR_decr_sp(1);

        assert(Future->MR_fut_signalled);

        /* Return to the caller of par_builtin.wait. */
        MR_r1 = Future->MR_fut_value;
        MR_proceed();
    }
    MR_END_MODULE

#endif

    /* forward decls to suppress gcc warnings */
    void mercury_sys_init_par_builtin_modules_init(void);
    void mercury_sys_init_par_builtin_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_par_builtin_modules_init(void)
    {
    #if (!defined MR_HIGHLEVEL_CODE) && (defined MR_THREAD_SAFE)
        hand_written_par_builtin_module();
    #endif
    }

    void mercury_sys_init_par_builtin_modules_init_type_tables(void)
    {
        /* no types to register */
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_par_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp)
    {
        /* no proc_statics to write out */
    }
    #endif

#line 1045 "par_builtin.c"

static void mercury__par_builtin_maybe_bunch_0(void)
{
	par_builtin_module0();
	par_builtin_module1();
	par_builtin_module2();
	par_builtin_module3();
	par_builtin_module4();
	par_builtin_module5();
	par_builtin_module6();
	par_builtin_module7();
	par_builtin_module8();
	par_builtin_module9();
	par_builtin_module10();
	par_builtin_module11();
	par_builtin_module12();
	par_builtin_module13();
	par_builtin_module14();
	par_builtin_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__par_builtin__init(void);
void mercury__par_builtin__init_type_tables(void);
void mercury__par_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__par_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__par_builtin__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__par_builtin__init_threadscope_string_table(void);
#endif

void mercury__par_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__par_builtin_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_par_builtin__type_ctor_info_future_1,
		par_builtin__future_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_par_builtin__type_ctor_info_loop_control_0,
		par_builtin__loop_control_0_0);
	mercury__par_builtin__init_debugger();
}

void mercury__par_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_par_builtin__type_ctor_info_future_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_par_builtin__type_ctor_info_loop_control_0);
	}
}


void mercury__par_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__par_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__par_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__par_builtin__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__par_builtin__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
