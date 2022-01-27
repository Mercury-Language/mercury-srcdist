/*
** Automatically generated from `random.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__random__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 250 "array.int"
#include "array.mh"

#line 28 "random.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "random.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "random.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "random.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "random.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 48 "random.c"
#line 58 "array.opt"
#include "store.mh"

#line 52 "random.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "random.c"
#line 157 "io.opt"
#include "dir.mh"

#line 60 "random.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 64 "random.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "random.c"
#line 4 "char.opt"
#include "char.mh"

#line 72 "random.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 76 "random.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "random.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "random.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "random.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 92 "random.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 96 "random.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "random.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "random.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "random.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "random.c"
#line 113 "random.c"
#include "random.mh"

#line 116 "random.c"
#line 117 "random.c"
#ifndef RANDOM_DECL_GUARD
#define RANDOM_DECL_GUARD

#line 121 "random.c"
#line 122 "random.c"

#endif
#line 125 "random.c"

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
	mercury_data_random__type_ctor_info_supply_0;
MR_decl_label7(random__perform_sampling_6_0, 15,2,3,4,5,7,8)
MR_decl_label7(random__perform_sampling_6_1, 15,2,3,4,5,7,8)
MR_decl_label1(random__permutation_4_0, 2)
MR_decl_label1(random__permutation_4_1, 2)
MR_decl_label1(random__random_3_0, 2)
MR_decl_label1(random__random_3_1, 2)
MR_decl_label1(random__random_5_0, 2)
MR_decl_label1(random__random_5_1, 2)
MR_decl_label1(random__test_4_0, 2)
MR_decl_label3(random__test_2_4_0, 3,4,2)
MR_decl_label3(random__test_2_4_1, 3,4,2)
MR_decl_label1(__Unify___random__supply_0_0, 4)
MR_decl_label3(__Compare___random__supply_0_0, 4,11,5)
MR_def_extern_entry(random__init_2_0)
MR_def_extern_entry(random__params_3_0)
MR_def_extern_entry(random__random_3_0)
MR_def_extern_entry(random__random_3_1)
MR_def_extern_entry(random__randcount_3_0)
MR_def_extern_entry(random__randcount_3_1)
MR_def_extern_entry(random__random_5_0)
MR_def_extern_entry(random__random_5_1)
MR_def_extern_entry(random__randmax_3_0)
MR_def_extern_entry(random__randmax_3_1)
MR_def_extern_entry(random__perform_sampling_6_0)
MR_def_extern_entry(random__perform_sampling_6_1)
MR_def_extern_entry(random__permutation_4_0)
MR_def_extern_entry(random__permutation_4_1)
MR_def_extern_entry(random__test_2_4_0)
MR_def_extern_entry(random__test_2_4_1)
MR_def_extern_entry(random__test_4_0)
MR_def_extern_entry(__Unify___random__supply_0_0)
MR_def_extern_entry(__Compare___random__supply_0_0)
MR_decl_static(fn__f_114_97_110_100_111_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

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

static const MR_NotagFunctorDesc mercury_data_random__notag_functor_desc_supply_0 = {
	"rs",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_random__functor_number_map_supply_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_random__type_ctor_info_supply_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___random__supply_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___random__supply_0_0)),
	"random",
	"supply",
	{ (void *)&mercury_data_random__notag_functor_desc_supply_0 },
	{ (void *)&mercury_data_random__notag_functor_desc_supply_0 },
	1,
	4,
	mercury_data_random__functor_number_map_supply_0
};



extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(random_module0)
	MR_init_entry1(random__init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__init_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__random__init_2_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
	Value = MR_r1;
{
#line 56 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 316 "random.c"
	MR_r2 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module1)
	MR_init_entry1(random__params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__params_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9301;
	MR_r2 = (MR_Integer) 49297;
	MR_r3 = (MR_Integer) 233280;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__div_2_0);

MR_BEGIN_MODULE(random_module2)
	MR_init_entry1(random__random_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__random_3_0);
	MR_init_label1(random__random_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'random'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__random_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (((MR_Integer) MR_r1 * (MR_Integer) 9301) + (MR_Integer) 49297);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 233280;
	MR_np_call_localret_ent(fn__int__div_2_0,
		random__random_3_0_i2);
MR_def_label(random__random_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) 233280));
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__random__random_3_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
	Value = MR_tempr1;
{
#line 61 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 394 "random.c"
	MR_tempr2 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module3)
	MR_init_entry1(random__random_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__random_3_1);
	MR_init_label1(random__random_3_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'random'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__random_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (((MR_Integer) MR_r1 * (MR_Integer) 9301) + (MR_Integer) 49297);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 233280;
	MR_np_call_localret_ent(fn__int__div_2_0,
		random__random_3_1_i2);
MR_def_label(random__random_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) 233280));
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__random__random_3_1
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
	Value = MR_tempr1;
{
#line 61 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 449 "random.c"
	MR_tempr2 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module4)
	MR_init_entry1(random__randcount_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__randcount_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'randcount'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__randcount_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 233280;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module5)
	MR_init_entry1(random__randcount_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__randcount_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'randcount'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__randcount_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 233280;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module6)
	MR_init_entry1(random__random_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__random_5_0);
	MR_init_label1(random__random_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'random'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__random_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(random__random_3_0,
		random__random_5_0_i2);
MR_def_label(random__random_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1) / (MR_Integer) 233280));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module7)
	MR_init_entry1(random__random_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__random_5_1);
	MR_init_label1(random__random_5_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'random'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__random_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(random__random_3_1,
		random__random_5_1_i2);
MR_def_label(random__random_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (((MR_Integer) MR_sv(2) * (MR_Integer) MR_r1) / (MR_Integer) 233280));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module8)
	MR_init_entry1(random__randmax_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__randmax_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'randmax'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__randmax_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 233279;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module9)
	MR_init_entry1(random__randmax_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__randmax_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'randmax'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__randmax_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 233279;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(random_module10)
	MR_init_entry1(random__perform_sampling_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__perform_sampling_6_0);
	MR_init_label7(random__perform_sampling_6_0,15,2,3,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'perform_sampling'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__perform_sampling_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(random__perform_sampling_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(random__perform_sampling_6_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(random__perform_sampling_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(random__random_5_0,
		random__perform_sampling_6_0_i3);
MR_def_label(random__perform_sampling_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(array__lookup_3_0,
		random__perform_sampling_6_0_i4);
MR_def_label(random__perform_sampling_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		random__perform_sampling_6_0_i5);
MR_def_label(random__perform_sampling_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__set_4_0,
		random__perform_sampling_6_0_i7);
MR_def_label(random__perform_sampling_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		random__perform_sampling_6_0_i8);
MR_def_label(random__perform_sampling_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(random__perform_sampling_6_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module11)
	MR_init_entry1(random__perform_sampling_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__perform_sampling_6_1);
	MR_init_label7(random__perform_sampling_6_1,15,2,3,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'perform_sampling'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__perform_sampling_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(random__perform_sampling_6_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(random__perform_sampling_6_1_i2);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(random__perform_sampling_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(random__random_5_1,
		random__perform_sampling_6_1_i3);
MR_def_label(random__perform_sampling_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(array__lookup_3_0,
		random__perform_sampling_6_1_i4);
MR_def_label(random__perform_sampling_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		random__perform_sampling_6_1_i5);
MR_def_label(random__perform_sampling_6_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__set_4_0,
		random__perform_sampling_6_1_i7);
MR_def_label(random__perform_sampling_6_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		random__perform_sampling_6_1_i8);
MR_def_label(random__perform_sampling_6_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(random__perform_sampling_6_1_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__from_list_2_0);

MR_BEGIN_MODULE(random_module12)
	MR_init_entry1(random__permutation_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__permutation_4_0);
	MR_init_label1(random__permutation_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'permutation'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__permutation_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(array__from_list_2_0,
		random__permutation_4_0_i2);
MR_def_label(random__permutation_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__random__permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 871 "random.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(random__perform_sampling_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module13)
	MR_init_entry1(random__permutation_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__permutation_4_1);
	MR_init_label1(random__permutation_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'permutation'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__permutation_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(array__from_list_2_0,
		random__permutation_4_1_i2);
MR_def_label(random__permutation_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__random__permutation_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 254 "array.opt"

    Max = Array->size;
;}
#line 925 "random.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(random__perform_sampling_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module14)
	MR_init_entry1(random__test_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__test_2_4_0);
	MR_init_label3(random__test_2_4_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__test_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(random__test_2_4_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(random__random_3_0,
		random__test_2_4_0_i3);
MR_def_label(random__test_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(random__test_2_4_0,
		random__test_2_4_0_i4);
MR_def_label(random__test_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(random__test_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module15)
	MR_init_entry1(random__test_2_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__test_2_4_1);
	MR_init_label3(random__test_2_4_1,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_2'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__test_2_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(random__test_2_4_1_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(random__random_3_1,
		random__test_2_4_1_i3);
MR_def_label(random__test_2_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(random__test_2_4_1,
		random__test_2_4_1_i4);
MR_def_label(random__test_2_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(random__test_2_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module16)
	MR_init_entry1(random__test_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__random__test_4_0);
	MR_init_label1(random__test_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__random__test_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Value;
	MR_Word	Copy;
#define	MR_PROC_LABEL	mercury__random__test_4_0
	TypeInfo_for_T = (MR_Word) MR_INT_CTOR_ADDR;
	Value = MR_r1;
{
#line 56 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();
;}
#line 1087 "random.c"
	MR_tempr1 = Copy;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Integer) 233279;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(random__test_2_4_0,
		random__test_4_0_i2);
MR_def_label(random__test_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module17)
	MR_init_entry1(__Unify___random__supply_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___random__supply_0_0);
	MR_init_label1(__Unify___random__supply_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___random__supply_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___random__supply_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___random__supply_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module18)
	MR_init_entry1(__Compare___random__supply_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___random__supply_0_0);
	MR_init_label3(__Compare___random__supply_0_0,4,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___random__supply_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___random__supply_0_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___random__supply_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___random__supply_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___random__supply_0_0_i5);
	}
MR_def_label(__Compare___random__supply_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___random__supply_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(random_module19)
	MR_init_entry1(fn__f_114_97_110_100_111_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_97_110_100_111_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_114_97_110_100_111_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__random_maybe_bunch_0(void)
{
	random_module0();
	random_module1();
	random_module2();
	random_module3();
	random_module4();
	random_module5();
	random_module6();
	random_module7();
	random_module8();
	random_module9();
	random_module10();
	random_module11();
	random_module12();
	random_module13();
	random_module14();
	random_module15();
	random_module16();
	random_module17();
	random_module18();
	random_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__random__init(void);
void mercury__random__init_type_tables(void);
void mercury__random__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__random__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__random__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__random__init_threadscope_string_table(void);
#endif

void mercury__random__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__random_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_random__type_ctor_info_supply_0,
		random__supply_0_0);
	mercury__random__init_debugger();
}

void mercury__random__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_random__type_ctor_info_supply_0);
	}
}


void mercury__random__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__random__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__random);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__random__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__random__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
