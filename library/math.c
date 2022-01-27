/*
** Automatically generated from `math.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__math__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "math.c"
#include "math.mh"

#line 28 "math.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "math.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "math.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "math.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "math.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "math.c"
#line 35 "store.int2"
#include "store.mh"

#line 52 "math.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 56 "math.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 60 "math.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "math.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "math.c"
#line 157 "io.opt"
#include "dir.mh"

#line 72 "math.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 76 "math.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 80 "math.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "math.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "math.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "math.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "math.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "math.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 104 "math.c"
#line 3 "float.opt"
#include "float.mh"

#line 108 "math.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "math.c"
#line 113 "math.c"
#ifndef MATH_DECL_GUARD
#define MATH_DECL_GUARD

#line 117 "math.c"
#line 215 "math.m"


    #include <math.h>

    /*
    ** Mathematical constants.
    **
    ** The maximum number of significant decimal digits which
    ** can be packed into an IEEE-754 extended precision
    ** floating point number is 18.  Therefore 20 significant
    ** decimal digits for these constants should be plenty.
    */

    #define ML_FLOAT_E      2.7182818284590452354
    #define ML_FLOAT_PI     3.1415926535897932384
    #define ML_FLOAT_LN2        0.69314718055994530941


#line 137 "math.c"
#line 138 "math.c"

#endif
#line 141 "math.c"

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
	mercury_data_math__type_ctor_info_domain_error_0,
	mercury_data_math__type_ctor_info_quadratic_roots_0;
MR_decl_label1(math__math_domain_checks_0_0, 1)
MR_decl_label3(fn__math__acos_1_0, 7,6,3)
MR_decl_label3(fn__math__asin_1_0, 7,6,3)
MR_decl_label1(fn__math__ln_1_0, 3)
MR_decl_label4(fn__math__log_2_0, 7,8,6,3)
MR_decl_label1(fn__math__log10_1_0, 3)
MR_decl_label1(fn__math__log2_1_0, 3)
MR_decl_label3(fn__math__pow_2_0, 3,9,7)
MR_decl_label10(fn__math__solve_quadratic_3_0, 2,3,5,7,10,8,17,18,19,21)
MR_decl_label9(fn__math__solve_quadratic_3_0, 25,30,32,23,41,39,49,54,56)
MR_decl_label1(fn__math__sqrt_1_0, 3)
MR_decl_label1(fn__math__truncate_1_0, 2)
MR_decl_label1(__Unify___math__domain_error_0_0, 4)
MR_decl_label4(__Unify___math__quadratic_roots_0_0, 5,15,6,1)
MR_decl_label3(__Compare___math__domain_error_0_0, 4,12,5)
MR_decl_label10(__Compare___math__quadratic_roots_0_0, 36,7,5,11,13,9,18,19,22,23)
MR_decl_label4(__Compare___math__quadratic_roots_0_0, 25,48,28,33)
MR_def_extern_entry(fn__math__pi_0_0)
MR_def_extern_entry(fn__math__e_0_0)
MR_def_extern_entry(fn__math__ceiling_1_0)
MR_def_extern_entry(fn__math__floor_1_0)
MR_def_extern_entry(fn__math__round_1_0)
MR_def_extern_entry(fn__math__truncate_1_0)
MR_def_extern_entry(fn__math__unchecked_sqrt_1_0)
MR_decl_static(math__math_domain_checks_0_0)
MR_def_extern_entry(fn__math__sqrt_1_0)
MR_def_extern_entry(fn__math__solve_quadratic_3_0)
MR_def_extern_entry(fn__math__unchecked_pow_2_0)
MR_def_extern_entry(fn__math__pow_2_0)
MR_def_extern_entry(fn__math__exp_1_0)
MR_def_extern_entry(fn__math__unchecked_ln_1_0)
MR_def_extern_entry(fn__math__ln_1_0)
MR_def_extern_entry(fn__math__unchecked_log10_1_0)
MR_def_extern_entry(fn__math__log10_1_0)
MR_def_extern_entry(fn__math__unchecked_log2_1_0)
MR_def_extern_entry(fn__math__log2_1_0)
MR_def_extern_entry(fn__math__unchecked_log_2_0)
MR_def_extern_entry(fn__math__log_2_0)
MR_def_extern_entry(fn__math__sin_1_0)
MR_def_extern_entry(fn__math__cos_1_0)
MR_def_extern_entry(fn__math__tan_1_0)
MR_def_extern_entry(fn__math__unchecked_asin_1_0)
MR_def_extern_entry(fn__math__asin_1_0)
MR_def_extern_entry(fn__math__unchecked_acos_1_0)
MR_def_extern_entry(fn__math__acos_1_0)
MR_def_extern_entry(fn__math__atan_1_0)
MR_def_extern_entry(fn__math__atan2_2_0)
MR_def_extern_entry(fn__math__sinh_1_0)
MR_def_extern_entry(fn__math__cosh_1_0)
MR_def_extern_entry(fn__math__tanh_1_0)
MR_def_extern_entry(__Unify___math__domain_error_0_0)
MR_def_extern_entry(__Compare___math__domain_error_0_0)
MR_def_extern_entry(__Unify___math__quadratic_roots_0_0)
MR_def_extern_entry(__Compare___math__quadratic_roots_0_0)
MR_decl_static(fn__f_109_97_116_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_math__notag_functor_desc_domain_error_0 = {
	"domain_error",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_math__functor_number_map_domain_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___math__domain_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___math__domain_error_0_0)),
	"math",
	"domain_error",
	{ (void *)&mercury_data_math__notag_functor_desc_domain_error_0 },
	{ (void *)&mercury_data_math__notag_functor_desc_domain_error_0 },
	1,
	4,
	mercury_data_math__functor_number_map_domain_error_0
};

static const MR_DuFunctorDesc mercury_data_math__du_functor_desc_quadratic_roots_0_0 = {
	"no_roots",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_math__field_types_quadratic_roots_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_DuArgLocn mercury_data_math__field_locns_quadratic_roots_0_1[] = {
	{ 0, 0, -1 },
};

static const MR_DuFunctorDesc mercury_data_math__du_functor_desc_quadratic_roots_0_1 = {
	"one_root",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_math__field_types_quadratic_roots_0_1,
	NULL,
	mercury_data_math__field_locns_quadratic_roots_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_math__field_types_quadratic_roots_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_DuArgLocn mercury_data_math__field_locns_quadratic_roots_0_2[] = {
	{ 0, 0, -1 },
	{ 2, 0, -1 },
};

static const MR_DuFunctorDesc mercury_data_math__du_functor_desc_quadratic_roots_0_2 = {
	"two_roots",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_math__field_types_quadratic_roots_0_2,
	NULL,
	mercury_data_math__field_locns_quadratic_roots_0_2,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_math__du_stag_ordered_quadratic_roots_0_0[] = {
	&mercury_data_math__du_functor_desc_quadratic_roots_0_0

};

const MR_DuFunctorDescPtr mercury_data_math__du_stag_ordered_quadratic_roots_0_1[] = {
	&mercury_data_math__du_functor_desc_quadratic_roots_0_1

};

const MR_DuFunctorDescPtr mercury_data_math__du_stag_ordered_quadratic_roots_0_2[] = {
	&mercury_data_math__du_functor_desc_quadratic_roots_0_2

};

const MR_DuPtagLayout mercury_data_math__du_ptag_ordered_quadratic_roots_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_math__du_stag_ordered_quadratic_roots_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_math__du_stag_ordered_quadratic_roots_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_math__du_stag_ordered_quadratic_roots_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_math__du_name_ordered_quadratic_roots_0[] = {
	&mercury_data_math__du_functor_desc_quadratic_roots_0_0,
	&mercury_data_math__du_functor_desc_quadratic_roots_0_1,
	&mercury_data_math__du_functor_desc_quadratic_roots_0_2
};

const MR_Integer mercury_data_math__functor_number_map_quadratic_roots_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_quadratic_roots_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___math__quadratic_roots_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___math__quadratic_roots_0_0)),
	"math",
	"quadratic_roots",
	{ (void *)mercury_data_math__du_name_ordered_quadratic_roots_0 },
	{ (void *)mercury_data_math__du_ptag_ordered_quadratic_roots_0 },
	3,
	4,
	mercury_data_math__functor_number_map_quadratic_roots_0
};




MR_BEGIN_MODULE(math_module0)
	MR_init_entry1(fn__math__pi_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__pi_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pi'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__pi_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Pi;
#define	MR_PROC_LABEL	mercury__fn__math__pi_0_0
{
#line 300 "math.m"

    Pi = ML_FLOAT_PI;
;}
#line 462 "math.c"
	MR_f(1) = Pi;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module1)
	MR_init_entry1(fn__math__e_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__e_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'e'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__e_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	E;
#define	MR_PROC_LABEL	mercury__fn__math__e_0_0
{
#line 333 "math.m"

    E = ML_FLOAT_E;
;}
#line 495 "math.c"
	MR_f(1) = E;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module2)
	MR_init_entry1(fn__math__ceiling_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__ceiling_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ceiling'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__ceiling_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Num;
	MR_Float	Ceil;
#define	MR_PROC_LABEL	mercury__fn__math__ceiling_1_0
	Num = MR_f(1);
{
#line 359 "math.m"

    Ceil = ceil(Num);
;}
#line 530 "math.c"
	MR_f(1) = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module3)
	MR_init_entry1(fn__math__floor_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__floor_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'floor'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__floor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Num;
	MR_Float	Floor;
#define	MR_PROC_LABEL	mercury__fn__math__floor_1_0
	Num = MR_f(1);
{
#line 391 "math.m"

    Floor = floor(Num);
;}
#line 565 "math.c"
	MR_f(1) = Floor;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module4)
	MR_init_entry1(fn__math__round_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__round_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'round'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__round_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Num;
	MR_Float	Rounded;
#define	MR_PROC_LABEL	mercury__fn__math__round_1_0
	Num = MR_f(1);
{
#line 423 "math.m"

    Rounded = floor(Num+0.5);
;}
#line 600 "math.c"
	MR_f(1) = Rounded;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(math_module5)
	MR_init_entry1(fn__math__truncate_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__truncate_1_0);
	MR_init_label1(fn__math__truncate_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'truncate'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__truncate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__truncate_1_0_i2);
	}
	{
	MR_Float	Num;
	MR_Float	Ceil;
#define	MR_PROC_LABEL	mercury__fn__math__truncate_1_0
	Num = MR_f(1);
{
#line 359 "math.m"

    Ceil = ceil(Num);
;}
#line 640 "math.c"
	MR_f(1) = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__math__truncate_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Num;
	MR_Float	Floor;
#define	MR_PROC_LABEL	mercury__fn__math__truncate_1_0
	Num = MR_f(1);
{
#line 391 "math.m"

    Floor = floor(Num);
;}
#line 657 "math.c"
	MR_f(1) = Floor;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module6)
	MR_init_entry1(fn__math__unchecked_sqrt_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_sqrt_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_sqrt'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_sqrt_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	SquareRoot;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_sqrt_1_0
	X = MR_f(1);
{
#line 461 "math.m"

    SquareRoot = sqrt(X);
;}
#line 692 "math.c"
	MR_f(1) = SquareRoot;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module7)
	MR_init_entry1(math__math_domain_checks_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__math__math_domain_checks_0_0);
	MR_init_label1(math__math_domain_checks_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'math_domain_checks'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(math__math_domain_checks_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__math__math_domain_checks_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 732 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(math__math_domain_checks_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(math__math_domain_checks_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(math_module8)
	MR_init_entry1(fn__math__sqrt_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__sqrt_1_0);
	MR_init_label1(fn__math__sqrt_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sqrt'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__sqrt_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__sqrt_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 780 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__sqrt_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__sqrt_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.sqrt", 9);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__sqrt_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	SquareRoot;
#define	MR_PROC_LABEL	mercury__fn__math__sqrt_1_0
	X = MR_f(1);
{
#line 461 "math.m"

    SquareRoot = sqrt(X);
;}
#line 804 "math.c"
	MR_f(1) = SquareRoot;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_4pt0000000000000000 = 4.0000000000000000;
static const MR_Float mercury_float_const_neg0pt50000000000000000 = -0.50000000000000000;

MR_BEGIN_MODULE(math_module9)
	MR_init_entry1(fn__math__solve_quadratic_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__solve_quadratic_3_0);
	MR_init_label10(fn__math__solve_quadratic_3_0,2,3,5,7,10,8,17,18,19,21)
	MR_init_label9(fn__math__solve_quadratic_3_0,25,30,32,23,41,39,49,54,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solve_quadratic'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__solve_quadratic_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tempf2 = MR_f(2);
	MR_tempf3 = MR_f(1);
	MR_tempf4 = MR_f(3);
	MR_tempf1 = ((MR_tempf2 * MR_tempf2) - (((MR_Float) 4.0000000000000000 * MR_tempf3) * MR_tempf4));
	MR_f(4) = MR_tempf1;
	if ((MR_tempf1 >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i2);
	}
	* (MR_Float *) &MR_sv(4) = MR_tempf3;
	* (MR_Float *) &MR_sv(6) = MR_tempf2;
	* (MR_Float *) &MR_sv(2) = MR_tempf4;
	MR_f(1) = MR_tempf1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i5);
	}
MR_def_label(fn__math__solve_quadratic_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(4) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i3);
	}
	* (MR_Float *) &MR_sv(4) = MR_f(1);
	* (MR_Float *) &MR_sv(6) = MR_f(2);
	* (MR_Float *) &MR_sv(2) = MR_f(3);
	MR_f(1) = MR_f(4);
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i5);
MR_def_label(fn__math__solve_quadratic_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(4) = MR_f(1);
	* (MR_Float *) &MR_sv(6) = MR_f(2);
	* (MR_Float *) &MR_sv(2) = MR_f(3);
	MR_f(1) = MR_f(4);
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__math__solve_quadratic_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(fn__math__solve_quadratic_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i8);
	}
	MR_f(1) = ((MR_Float) -0.50000000000000000 * MR_float_from_dword_ptr(&MR_sv(6)));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 897 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i10);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(4)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	{
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempf1 = MR_f(1);
	MR_tempf2 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(1, MR_r1, 0)) = (MR_tempf1 / MR_tempf2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__math__solve_quadratic_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__math__sqrt_1_0,
		fn__math__solve_quadratic_3_0_i17);
MR_def_label(fn__math__solve_quadratic_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_float_from_dword_ptr(&MR_sv(6)) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i21);
MR_def_label(fn__math__solve_quadratic_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_float_from_dword_ptr(&MR_sv(6)) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i21);
MR_def_label(fn__math__solve_quadratic_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__math__solve_quadratic_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i23);
	}
	MR_f(2) = ((MR_Float) -0.50000000000000000 * (MR_float_from_dword_ptr(&MR_sv(6)) - MR_f(1)));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 962 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i25);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(4)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__math__solve_quadratic_3_0_i30);
MR_def_label(fn__math__solve_quadratic_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(2);
	* (MR_Float *) &MR_sv(6) = MR_tempf1;
	* (MR_Float *) &MR_sv(4) = (MR_tempf1 / MR_float_from_dword_ptr(&MR_sv(4)));
	}
MR_def_label(fn__math__solve_quadratic_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 999 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i32);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(6)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	{
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(2, MR_r1, 0)) = MR_tempf1;
	MR_tempf2 = MR_float_from_dword_ptr(&MR_sv(2));
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(6));
	* (MR_Float *) &(MR_tfield(2, MR_r1, 2)) = (MR_tempf2 / MR_tempf3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__math__solve_quadratic_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i39);
	}
	* (MR_Float *) &MR_sv(6) = ((MR_Float) -0.50000000000000000 * MR_f(1));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1045 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i41);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(4)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i41);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	{
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempf1 = MR_float_from_dword_ptr(&MR_sv(6));
	MR_tempf2 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(2, MR_r1, 0)) = (MR_tempf1 / MR_tempf2);
	* (MR_Float *) &(MR_tfield(2, MR_r1, 2)) = ((MR_Float) 0.0000000000000000 - (MR_tempf1 / MR_tempf2));
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__math__solve_quadratic_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(2) = ((MR_Float) -0.50000000000000000 * (MR_float_from_dword_ptr(&MR_sv(6)) + MR_f(1)));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1087 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i49);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(4)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i49);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__math__solve_quadratic_3_0_i54);
MR_def_label(fn__math__solve_quadratic_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(2);
	* (MR_Float *) &MR_sv(6) = MR_tempf1;
	* (MR_Float *) &MR_sv(4) = (MR_tempf1 / MR_float_from_dword_ptr(&MR_sv(4)));
	}
MR_def_label(fn__math__solve_quadratic_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 173 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1124 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i56);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_float_from_dword_ptr(&MR_sv(6)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i56);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float.\'/\': division by zero", 27);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	{
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = MR_float_from_dword_ptr(&MR_sv(4));
	* (MR_Float *) &(MR_tfield(2, MR_r1, 0)) = MR_tempf1;
	MR_tempf2 = MR_float_from_dword_ptr(&MR_sv(2));
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(6));
	* (MR_Float *) &(MR_tfield(2, MR_r1, 2)) = (MR_tempf2 / MR_tempf3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module10)
	MR_init_entry1(fn__math__unchecked_pow_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_pow_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_pow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Y;
	MR_Float	Res;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_pow_2_0
	X = MR_f(1);
	Y = MR_f(2);
{
#line 537 "math.m"

    Res = pow(X, Y);
;}
#line 1182 "math.c"
	MR_f(1) = Res;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module11)
	MR_init_entry1(fn__math__pow_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__pow_2_0);
	MR_init_label3(fn__math__pow_2_0,3,9,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__pow_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1222 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__pow_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.pow", 8);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__pow_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i7);
	}
	if ((MR_f(2) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.pow", 8);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__pow_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = (MR_Float) 0.0000000000000000;
	MR_proceed();
MR_def_label(fn__math__pow_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Y;
	MR_Float	Res;
#define	MR_PROC_LABEL	mercury__fn__math__pow_2_0
	X = MR_f(1);
	Y = MR_f(2);
{
#line 537 "math.m"

    Res = pow(X, Y);
;}
#line 1263 "math.c"
	MR_f(1) = Res;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module12)
	MR_init_entry1(fn__math__exp_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__exp_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exp'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__exp_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Exp;
#define	MR_PROC_LABEL	mercury__fn__math__exp_1_0
	X = MR_f(1);
{
#line 566 "math.m"

    Exp = exp(X);
;}
#line 1298 "math.c"
	MR_f(1) = Exp;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module13)
	MR_init_entry1(fn__math__unchecked_ln_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_ln_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_ln'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_ln_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_ln_1_0
	X = MR_f(1);
{
#line 599 "math.m"

    Log = log(X);
;}
#line 1333 "math.c"
	MR_f(1) = Log;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module14)
	MR_init_entry1(fn__math__ln_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__ln_1_0);
	MR_init_label1(fn__math__ln_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ln'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__ln_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__ln_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1373 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__ln_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__ln_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.ln", 7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__ln_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__ln_1_0
	X = MR_f(1);
{
#line 599 "math.m"

    Log = log(X);
;}
#line 1397 "math.c"
	MR_f(1) = Log;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module15)
	MR_init_entry1(fn__math__unchecked_log10_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_log10_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_log10'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_log10_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log10;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_log10_1_0
	X = MR_f(1);
{
#line 632 "math.m"

    Log10 = log10(X);
;}
#line 1432 "math.c"
	MR_f(1) = Log10;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module16)
	MR_init_entry1(fn__math__log10_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__log10_1_0);
	MR_init_label1(fn__math__log10_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log10'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__log10_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__log10_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1472 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log10_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log10_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.log10", 10);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__log10_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log10;
#define	MR_PROC_LABEL	mercury__fn__math__log10_1_0
	X = MR_f(1);
{
#line 632 "math.m"

    Log10 = log10(X);
;}
#line 1496 "math.c"
	MR_f(1) = Log10;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module17)
	MR_init_entry1(fn__math__unchecked_log2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_log2_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_log2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_log2_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log2;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_log2_1_0
	X = MR_f(1);
{
#line 661 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;
;}
#line 1531 "math.c"
	MR_f(1) = Log2;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module18)
	MR_init_entry1(fn__math__log2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__log2_1_0);
	MR_init_label1(fn__math__log2_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__log2_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__log2_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1571 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log2_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log2_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.log2", 9);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__log2_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log2;
#define	MR_PROC_LABEL	mercury__fn__math__log2_1_0
	X = MR_f(1);
{
#line 661 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;
;}
#line 1595 "math.c"
	MR_f(1) = Log2;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module19)
	MR_init_entry1(fn__math__unchecked_log_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_log_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_log'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_log_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	B;
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_log_2_0
	B = MR_f(1);
	X = MR_f(2);
{
#line 695 "math.m"

    Log = log(X) / log(B);
;}
#line 1632 "math.c"
	MR_f(1) = Log;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(math_module20)
	MR_init_entry1(fn__math__log_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__log_2_0);
	MR_init_label4(fn__math__log_2_0,7,8,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__log_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__log_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1673 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(2) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	* (MR_Float *) &MR_sv(4) = MR_f(2);
	MR_GOTO_LAB(fn__math__log_2_0_i6);
MR_def_label(fn__math__log_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	* (MR_Float *) &MR_sv(4) = MR_f(2);
	MR_GOTO_LAB(fn__math__log_2_0_i6);
MR_def_label(fn__math__log_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) != (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	* (MR_Float *) &MR_sv(4) = MR_f(2);
MR_def_label(fn__math__log_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.log", 8);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__log_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	B;
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__log_2_0
	B = MR_f(1);
	X = MR_f(2);
{
#line 695 "math.m"

    Log = log(X) / log(B);
;}
#line 1727 "math.c"
	MR_f(1) = Log;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module21)
	MR_init_entry1(fn__math__sin_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__sin_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sin'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__sin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Sin;
#define	MR_PROC_LABEL	mercury__fn__math__sin_1_0
	X = MR_f(1);
{
#line 712 "math.m"

    Sin = sin(X);
;}
#line 1762 "math.c"
	MR_f(1) = Sin;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module22)
	MR_init_entry1(fn__math__cos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__cos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__cos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Cos;
#define	MR_PROC_LABEL	mercury__fn__math__cos_1_0
	X = MR_f(1);
{
#line 738 "math.m"

    Cos = cos(X);
;}
#line 1797 "math.c"
	MR_f(1) = Cos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module23)
	MR_init_entry1(fn__math__tan_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__tan_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tan'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__tan_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Tan;
#define	MR_PROC_LABEL	mercury__fn__math__tan_1_0
	X = MR_f(1);
{
#line 764 "math.m"

    Tan = tan(X);
;}
#line 1832 "math.c"
	MR_f(1) = Tan;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module24)
	MR_init_entry1(fn__math__unchecked_asin_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_asin_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_asin'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_asin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ASin;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_asin_1_0
	X = MR_f(1);
{
#line 802 "math.m"

    ASin = asin(X);
;}
#line 1867 "math.c"
	MR_f(1) = ASin;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_neg1pt0000000000000000 = -1.0000000000000000;

MR_BEGIN_MODULE(math_module25)
	MR_init_entry1(fn__math__asin_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__asin_1_0);
	MR_init_label3(fn__math__asin_1_0,7,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'asin'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__asin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__asin_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1908 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__asin_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) >= (MR_Float) -1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__asin_1_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	MR_GOTO_LAB(fn__math__asin_1_0_i6);
MR_def_label(fn__math__asin_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__asin_1_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
MR_def_label(fn__math__asin_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.asin", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__asin_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ASin;
#define	MR_PROC_LABEL	mercury__fn__math__asin_1_0
	X = MR_f(1);
{
#line 802 "math.m"

    ASin = asin(X);
;}
#line 1948 "math.c"
	MR_f(1) = ASin;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module26)
	MR_init_entry1(fn__math__unchecked_acos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__unchecked_acos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_acos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__unchecked_acos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ACos;
#define	MR_PROC_LABEL	mercury__fn__math__unchecked_acos_1_0
	X = MR_f(1);
{
#line 840 "math.m"

    ACos = acos(X);
;}
#line 1983 "math.c"
	MR_f(1) = ACos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module27)
	MR_init_entry1(fn__math__acos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__acos_1_0);
	MR_init_label3(fn__math__acos_1_0,7,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'acos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__acos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__acos_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 2023 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__acos_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_f(1) >= (MR_Float) -1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__acos_1_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	MR_GOTO_LAB(fn__math__acos_1_0_i6);
MR_def_label(fn__math__acos_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__acos_1_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
MR_def_label(fn__math__acos_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.acos", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__acos_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ACos;
#define	MR_PROC_LABEL	mercury__fn__math__acos_1_0
	X = MR_f(1);
{
#line 840 "math.m"

    ACos = acos(X);
;}
#line 2063 "math.c"
	MR_f(1) = ACos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module28)
	MR_init_entry1(fn__math__atan_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__atan_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atan'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__atan_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ATan;
#define	MR_PROC_LABEL	mercury__fn__math__atan_1_0
	X = MR_f(1);
{
#line 866 "math.m"

    ATan = atan(X);
;}
#line 2098 "math.c"
	MR_f(1) = ATan;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module29)
	MR_init_entry1(fn__math__atan2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__atan2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atan2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__atan2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Y;
	MR_Float	X;
	MR_Float	ATan2;
#define	MR_PROC_LABEL	mercury__fn__math__atan2_2_0
	Y = MR_f(1);
	X = MR_f(2);
{
#line 892 "math.m"

    ATan2 = atan2(Y, X);
;}
#line 2135 "math.c"
	MR_f(1) = ATan2;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module30)
	MR_init_entry1(fn__math__sinh_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__sinh_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sinh'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__sinh_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Sinh;
#define	MR_PROC_LABEL	mercury__fn__math__sinh_1_0
	X = MR_f(1);
{
#line 918 "math.m"

    Sinh = sinh(X);
;}
#line 2170 "math.c"
	MR_f(1) = Sinh;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module31)
	MR_init_entry1(fn__math__cosh_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__cosh_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cosh'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__cosh_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Cosh;
#define	MR_PROC_LABEL	mercury__fn__math__cosh_1_0
	X = MR_f(1);
{
#line 941 "math.m"

    Cosh = cosh(X);
;}
#line 2205 "math.c"
	MR_f(1) = Cosh;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module32)
	MR_init_entry1(fn__math__tanh_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__math__tanh_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tanh'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__tanh_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Tanh;
#define	MR_PROC_LABEL	mercury__fn__math__tanh_1_0
	X = MR_f(1);
{
#line 964 "math.m"

    Tanh = tanh(X);
;}
#line 2240 "math.c"
	MR_f(1) = Tanh;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module33)
	MR_init_entry1(__Unify___math__domain_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___math__domain_error_0_0);
	MR_init_label1(__Unify___math__domain_error_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___math__domain_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___math__domain_error_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___math__domain_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module34)
	MR_init_entry1(__Compare___math__domain_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___math__domain_error_0_0);
	MR_init_label3(__Compare___math__domain_error_0_0,4,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___math__domain_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___math__domain_error_0_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___math__domain_error_0_0
	S1 = (MR_String) MR_sv(1);
	S2 = (MR_String) MR_sv(2);
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 2319 "math.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___math__domain_error_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__domain_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___math__domain_error_0_0_i5);
	}
MR_def_label(__Compare___math__domain_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__domain_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module35)
	MR_init_entry1(__Unify___math__quadratic_roots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___math__quadratic_roots_0_0);
	MR_init_label4(__Unify___math__quadratic_roots_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___math__quadratic_roots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___math__quadratic_roots_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempr3 = MR_sv(1);
	MR_tempf1 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr3, 0));
	MR_tempr4 = MR_sv(2);
	MR_tempf2 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr4, 0));
	MR_r1 = (MR_tempf1 == MR_tempf2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___math__quadratic_roots_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___math__quadratic_roots_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempr3 = MR_sv(1);
	MR_tempf1 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr3, 0));
	MR_tempr4 = MR_sv(2);
	MR_tempf2 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr4, 0));
	if ((MR_tempf1 != MR_tempf2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	MR_tempf1 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr3, 2));
	MR_tempf2 = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr4, 2));
	MR_r1 = (MR_tempf1 == MR_tempf2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___math__quadratic_roots_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module36)
	MR_init_entry1(__Compare___math__quadratic_roots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___math__quadratic_roots_0_0);
	MR_init_label10(__Compare___math__quadratic_roots_0_0,36,7,5,11,13,9,18,19,22,23)
	MR_init_label4(__Compare___math__quadratic_roots_0_0,25,48,28,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___math__quadratic_roots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i7);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr1, 0));
	MR_tempr2 = MR_sv(4);
	MR_f(2) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr2, 0));
	if ((MR_f(1) >= MR_f(2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) <= MR_f(2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	* (MR_Float *) &MR_sv(6) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr1, 2));
	MR_tempr2 = MR_sv(4);
	* (MR_Float *) &MR_sv(3) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr2, 2));
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr1, 0));
	MR_f(2) = MR_float_from_dword_ptr(&MR_tfield(2, MR_tempr2, 0));
	if ((MR_f(1) >= MR_f(2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i25);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_f(1) <= MR_f(2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i25);
MR_def_label(__Compare___math__quadratic_roots_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___math__quadratic_roots_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i33);
	}
	if ((MR_float_from_dword_ptr(&MR_sv(6)) >= MR_float_from_dword_ptr(&MR_sv(3)))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i28);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_float_from_dword_ptr(&MR_sv(6)) <= MR_float_from_dword_ptr(&MR_sv(3)))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module37)
	MR_init_entry1(fn__f_109_97_116_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_97_116_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_97_116_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__math_maybe_bunch_0(void)
{
	math_module0();
	math_module1();
	math_module2();
	math_module3();
	math_module4();
	math_module5();
	math_module6();
	math_module7();
	math_module8();
	math_module9();
	math_module10();
	math_module11();
	math_module12();
	math_module13();
	math_module14();
	math_module15();
	math_module16();
	math_module17();
	math_module18();
	math_module19();
	math_module20();
	math_module21();
	math_module22();
	math_module23();
	math_module24();
	math_module25();
	math_module26();
	math_module27();
	math_module28();
	math_module29();
	math_module30();
	math_module31();
	math_module32();
	math_module33();
	math_module34();
	math_module35();
	math_module36();
	math_module37();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__math__init(void);
void mercury__math__init_type_tables(void);
void mercury__math__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__math__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__math__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__math__init_threadscope_string_table(void);
#endif

void mercury__math__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__math_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_math__type_ctor_info_domain_error_0,
		math__domain_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_math__type_ctor_info_quadratic_roots_0,
		math__quadratic_roots_0_0);
	mercury__math__init_debugger();
}

void mercury__math__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_math__type_ctor_info_domain_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_math__type_ctor_info_quadratic_roots_0);
	}
}


void mercury__math__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__math__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__math);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__math__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__math__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
