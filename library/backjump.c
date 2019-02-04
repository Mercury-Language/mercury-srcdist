/*
** Automatically generated from `backjump.m'
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
INIT mercury__backjump__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "backjump.c"
#include "backjump.mh"

#line 28 "backjump.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "backjump.c"
#line 536 "io.int"
#include "time.mh"

#line 36 "backjump.c"
#line 537 "io.int"
#include "string.mh"

#line 40 "backjump.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "backjump.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "backjump.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 52 "backjump.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 56 "backjump.c"
#line 58 "array.opt"
#include "store.mh"

#line 60 "backjump.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "backjump.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 68 "backjump.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 72 "backjump.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "backjump.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "backjump.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "backjump.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "backjump.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "backjump.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "backjump.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "backjump.c"
#line 157 "io.opt"
#include "dir.mh"

#line 104 "backjump.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 108 "backjump.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 112 "backjump.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "backjump.c"
#line 117 "backjump.c"
#ifndef BACKJUMP_DECL_GUARD
#define BACKJUMP_DECL_GUARD

#line 121 "backjump.c"
#line 121 "backjump.m"
#include "mercury_backjump.h"
#line 124 "backjump.c"
#line 128 "backjump.m"

/* protect against multiple inclusion */
#ifndef ML_BACKJUMP_GUARD
#define ML_BACKJUMP_GUARD

#ifdef MR_HIGHLEVEL_CODE

#include <setjmp.h>

#ifdef MR_USE_GCC_NESTED_FUNCTIONS
    #define MR_CONT_PARAMS      MR_NestedCont cont
    #define MR_CONT_PARAM_TYPES MR_NestedCont
    #define MR_CONT_ARGS        cont
    #define MR_CONT_CALL()      (*cont)()
#else
    #define MR_CONT_PARAMS      MR_Cont cont, void *cont_env
    #define MR_CONT_PARAM_TYPES MR_Cont, void *
    #define MR_CONT_ARGS        cont, cont_env
    #define MR_CONT_CALL()      cont(cont_env)
#endif

void MR_CALL
mercury__backjump__builtin_choice_id_1_p_0(MR_BackJumpChoiceId *id, MR_CONT_PARAMS);

void MR_CALL
mercury__backjump__builtin_backjump_1_p_0(MR_BackJumpChoiceId id);

#endif /* MR_HIGHLEVEL_CODE */
#endif /* ML_BACKJUMP_GUARD */

#line 156 "backjump.c"
#line 252 "backjump.m"

#ifndef MR_HIGHLEVEL_CODE

#include "mercury_stacks.h"
#include "mercury_stack_trace.h"
#include "mercury_trace_base.h"
#include "mercury_layout_util.h"
#include "mercury_deep_profiling_hand.h"

#endif /* !MR_HIGHLEVEL_CODE */

#line 169 "backjump.c"
#line 170 "backjump.c"

#endif
#line 173 "backjump.c"

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
	mercury_data_backjump__type_ctor_info_choice_id_0;
MR_decl_label3(backjump__report_invalid_backjump_3_0, 2,3,4)
MR_decl_label2(__Compare___backjump__choice_id_0_0, 2,3)
MR_def_extern_entry(backjump__get_choice_id_1_0)
MR_def_extern_entry(backjump__backjump_1_0)
MR_def_extern_entry(fn__backjump__to_int_1_0)
MR_decl_static(backjump__report_invalid_backjump_3_0)
MR_def_extern_entry(__Unify___backjump__choice_id_0_0)
MR_def_extern_entry(__Compare___backjump__choice_id_0_0)
MR_decl_static(fn__f_98_97_99_107_106_117_109_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_backjump__type_ctor_info_choice_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backjump__choice_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backjump__choice_id_0_0)),
	"backjump",
	"choice_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(backjump__builtin_choice_id_1_0);

MR_BEGIN_MODULE(backjump_module0)
	MR_init_entry1(backjump__get_choice_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backjump__get_choice_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_choice_id'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backjump__get_choice_id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backjump__builtin_choice_id_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backjump__builtin_backjump_1_0);

MR_BEGIN_MODULE(backjump_module1)
	MR_init_entry1(backjump__backjump_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backjump__backjump_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'backjump'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backjump__backjump_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backjump__builtin_backjump_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backjump_module2)
	MR_init_entry1(fn__backjump__to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backjump__to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backjump__to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(backjump_module3)
	MR_init_entry1(backjump__report_invalid_backjump_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backjump__report_invalid_backjump_3_0);
	MR_init_label3(backjump__report_invalid_backjump_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_invalid_backjump'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backjump__report_invalid_backjump_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
#define	MR_PROC_LABEL	mercury__backjump__report_invalid_backjump_3_0
	MR_save_registers();
{
#line 598 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (MR_FLUSH(*out) < 0) {
        mercury_output_error(out);
    }
;}
#line 398 "backjump.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
#define	MR_PROC_LABEL	mercury__backjump__report_invalid_backjump_3_0
{
#line 1317 "io.opt"

    Stream = &mercury_stderr;
;}
#line 414 "backjump.c"
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		backjump__report_invalid_backjump_3_0_i2);
MR_def_label(backjump__report_invalid_backjump_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(string__append_3_2,
		backjump__report_invalid_backjump_3_0_i3);
MR_def_label(backjump__report_invalid_backjump_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Uncaught Mercury backjump (", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		backjump__report_invalid_backjump_3_0_i4);
MR_def_label(backjump__report_invalid_backjump_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
#define	MR_PROC_LABEL	mercury__backjump__report_invalid_backjump_3_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1250 "io.opt"

    mercury_print_string(Stream, Message);
;}
#line 454 "backjump.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
#define	MR_PROC_LABEL	mercury__backjump__report_invalid_backjump_3_0
	Stream = (MercuryFilePtr) MR_sv(1);
	MR_save_registers();
{
#line 1292 "io.opt"

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream);
    }
;}
#line 472 "backjump.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backjump_module4)
	MR_init_entry1(__Unify___backjump__choice_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backjump__choice_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backjump__choice_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backjump_module5)
	MR_init_entry1(__Compare___backjump__choice_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backjump__choice_id_0_0);
	MR_init_label2(__Compare___backjump__choice_id_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backjump__choice_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___backjump__choice_id_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___backjump__choice_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___backjump__choice_id_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backjump__choice_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backjump_module6)
	MR_init_entry1(fn__f_98_97_99_107_106_117_109_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_97_99_107_106_117_109_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_97_99_107_106_117_109_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 265 "backjump.m"

void mercury_sys_init_backjumps_init(void);
void mercury_sys_init_backjumps_init_type_tables(void);
#ifdef MR_DEEP_PROFILING
void mercury_sys_init_backjumps_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp);
#endif

#ifndef MR_HIGHLEVEL_CODE

#define ML_DUMMY_LINE 0

#define ML_BACKJUMP_STRUCT     (((MR_BackJumpHandler *) (MR_curfr + 1 - MR_NONDET_FIXED_SIZE)) - 1)

#ifdef ML_DEBUG_BACKJUMPS
#define ML_BACKJUMP_CHECKPOINT(s, p)     do {         fflush(stdout);         fprintf(stderr, "backjumps (%s): "             "loc %p, prev %p, id %d, sp %p, fr %p\n",             s, p, p->MR_bjh_prev, p->MR_bjh_id, p->MR_bjh_saved_sp,             p->MR_bjh_saved_fr);     } while (0)
#else
#define ML_BACKJUMP_CHECKPOINT(s, p)
#endif

MR_define_extern_entry(mercury__backjump__builtin_choice_id_1_0);
MR_define_extern_entry(mercury__backjump__builtin_backjump_1_0);

MR_declare_label(mercury__backjump__builtin_choice_id_1_0_i1);

MR_proc_static_user_no_site(backjump, builtin_choice_id, 1, 0,
    "backjump.m", ML_DUMMY_LINE, MR_TRUE);
MR_proc_static_user_no_site(backjump, builtin_backjump, 1, 0,
    "backjump.m", ML_DUMMY_LINE, MR_TRUE);

MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(MR_DETISM_NON,
    MR_PROC_NO_SLOT_COUNT, -1, MR_PREDICATE, backjump, builtin_choice_id,
    1, 0);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(MR_DETISM_DET, 1,
    MR_LONG_LVAL_STACKVAR_INT(1), MR_PREDICATE, backjump,
    builtin_backjump, 1, 0);

MR_MAKE_USER_INTERNAL_LAYOUT(backjump, builtin_choice_id, 1, 0, 1);

MR_BEGIN_MODULE(hand_written_backjump_module)
    MR_init_entry_sl(mercury__backjump__builtin_choice_id_1_0);
    MR_init_entry_sl(mercury__backjump__builtin_backjump_1_0);

    MR_init_label_sl(mercury__backjump__builtin_choice_id_1_0_i1);
MR_BEGIN_CODE

MR_define_entry(mercury__backjump__builtin_choice_id_1_0);
{
    MR_mkpragmaframe("builtin_choice_id/1", 0, MR_BackJumpHandler_Struct,
        MR_LABEL(mercury__backjump__builtin_choice_id_1_0_i1));

    #if defined(MR_DEEP_PROFILING)
        MR_fatal_error(
            "builtin_choice_id: NYI backjumping and deep profiling");
    #endif

    ML_BACKJUMP_STRUCT->MR_bjh_prev = MR_GET_BACKJUMP_HANDLER();
    ML_BACKJUMP_STRUCT->MR_bjh_id = MR_GET_NEXT_CHOICE_ID();
    ML_BACKJUMP_STRUCT->MR_bjh_saved_sp = MR_sp;
    ML_BACKJUMP_STRUCT->MR_bjh_saved_fr = MR_curfr;
    MR_SET_BACKJUMP_HANDLER(ML_BACKJUMP_STRUCT);

    ML_BACKJUMP_CHECKPOINT("create", ML_BACKJUMP_STRUCT);

    MR_r1 = (MR_Word) ML_BACKJUMP_STRUCT->MR_bjh_id;
    MR_succeed();
}
MR_define_label(mercury__backjump__builtin_choice_id_1_0_i1);
{
    /* Restore the previous handler. */
    MR_SET_BACKJUMP_HANDLER(ML_BACKJUMP_STRUCT->MR_bjh_prev);
    MR_fail();
}

MR_define_entry(mercury__backjump__builtin_backjump_1_0);
{
    MR_BackJumpChoiceId id = MR_r1;
    MR_BackJumpHandler *backjump_handler;
    
    backjump_handler = MR_GET_BACKJUMP_HANDLER();

    #if defined(MR_DEEP_PROFILING)
        MR_fatal_error(
            "builtin_backjump: NYI backjumping and deep profiling");
    #endif

    /*
    ** XXX see comments in the high-level implementation.
    */
    while (backjump_handler != NULL) {
        if (backjump_handler->MR_bjh_id == id) {
            break;
        }

        ML_BACKJUMP_CHECKPOINT("scan", backjump_handler);

        backjump_handler = backjump_handler->MR_bjh_prev;
    }

    if (backjump_handler == NULL) {
        ML_report_invalid_backjump(id);
        exit(EXIT_FAILURE);
    } else {
        ML_BACKJUMP_CHECKPOINT("found", backjump_handler);

        /*
        ** XXX we should produce some EXCP trace events here, to give
        ** the user an opportunity to retry a goal that calculated a
        ** (possibly incorrect) backjump.
        */

        MR_SET_BACKJUMP_HANDLER(backjump_handler->MR_bjh_prev);
        MR_sp_word = (MR_Word) backjump_handler->MR_bjh_saved_sp;
        MR_maxfr_word = (MR_Word) backjump_handler->MR_bjh_saved_fr;
        MR_fail();
    }
}

MR_END_MODULE

#endif /* !MR_HIGHLEVEL_CODE */

/*
INIT mercury_sys_init_backjumps
*/

void mercury_sys_init_backjumps_init(void)
{
#ifndef MR_HIGHLEVEL_CODE
    hand_written_backjump_module();
#endif
}

void mercury_sys_init_backjumps_init_type_tables(void)
{
    /* no types to register */
}

#ifdef MR_DEEP_PROFILING
void
mercury_sys_init_backjumps_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp)
{
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(backjump, builtin_choice_id, 1, 0));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(backjump, builtin_backjump, 1, 0));
}
#endif /* MR_DEEP_PROFILING */


#line 719 "backjump.c"
#line 160 "backjump.m"

#ifdef MR_HIGHLEVEL_CODE

#ifdef MR_NATIVE_GC

/*
** XXX code is needed to trace the local variables
** in the builtin_choice_id predicate for accurate GC.
*/

#endif /* MR_NATIVE_GC */

void MR_CALL
mercury__backjump__builtin_choice_id_1_p_0(MR_Integer *id, MR_CONT_PARAMS)
{
    MR_BackJumpHandler this_handler;

    this_handler.MR_bjh_prev = MR_GET_BACKJUMP_HANDLER();
    this_handler.MR_bjh_id = MR_GET_NEXT_CHOICE_ID();
    MR_SET_BACKJUMP_HANDLER(&this_handler);

    if (setjmp(this_handler.MR_bjh_handler) == 0) {
    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "choice setjmp %p\n", this_handler.MR_bjh_handler);
    #endif

        *id = this_handler.MR_bjh_id;
        MR_CONT_CALL();
    } else {
    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "choice caught jmp %p\n", this_handler.MR_bjh_handler);
    #endif
    }

    MR_SET_BACKJUMP_HANDLER(this_handler.MR_bjh_prev);
}

void MR_CALL
mercury__backjump__builtin_backjump_1_p_0(MR_BackJumpChoiceId id)
{
    MR_BackJumpHandler *backjump_handler;
    
    backjump_handler = MR_GET_BACKJUMP_HANDLER();

    /*
    ** XXX when we commit and prune away nondet stack frames, we leave the
    ** backjump handlers on the stack.  If the caller tries to backjump to
    ** a frame that has been pruned away, the handler may still be on the
    ** stack and we won't detect the problem.
    **
    ** We could avoid this problem by adding a trailing function which
    ** prunes back the handler stack on a commit, which would mean that in
    ** this case we will reach the bottom of the stack and call
    ** ML_report_invalid_backjump rather than seg faulting.  But that would
    ** require trailing to be always available.  Instead, we just rely on
    ** the caller only backjumping to frames that actually do exist.
    **
    ** (The same problem would occur if the caller tries to backjump to a
    ** frame that has already failed.  In this case, though, the choice ID
    ** will also no longer be live since the call to get_choice_id would have
    ** been bactracked over, so this isn't as much of a problem as with
    ** commits.)
    */
    while (backjump_handler != NULL) {
        if (backjump_handler->MR_bjh_id == id) {
            break;
        }
        backjump_handler = backjump_handler->MR_bjh_prev;
    }

    if (backjump_handler == NULL) {
        ML_report_invalid_backjump(id);
        exit(EXIT_FAILURE);
    } else {

  #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "backjump longjmp %p\n",
            backjump_handler->MR_bjh_handler);
  #endif
        longjmp(backjump_handler->MR_bjh_handler, 1);
    }
}

#endif /* MR_HIGHLEVEL_CODE */

#line 806 "backjump.c"

MR_declare_static(mercury__backjump__report_invalid_backjump_3_0);

void
ML_report_invalid_backjump(MR_Integer Mercury__argument1);

void
ML_report_invalid_backjump(MR_Integer Mercury__argument1)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__backjump__report_invalid_backjump_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__backjump__report_invalid_backjump_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__backjump_maybe_bunch_0(void)
{
	backjump_module0();
	backjump_module1();
	backjump_module2();
	backjump_module3();
	backjump_module4();
	backjump_module5();
	backjump_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backjump__init(void);
void mercury__backjump__init_type_tables(void);
void mercury__backjump__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backjump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backjump__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backjump__init_threadscope_string_table(void);
#endif

void mercury__backjump__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backjump_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backjump__type_ctor_info_choice_id_0,
		backjump__choice_id_0_0);
	mercury__backjump__init_debugger();
}

void mercury__backjump__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backjump__type_ctor_info_choice_id_0);
	}
}


void mercury__backjump__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backjump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backjump);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backjump__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backjump__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
