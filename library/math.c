/*
** Automatically generated from `math.m'
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
INIT mercury__math__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "math.c"
#include "math.mh"

#line 27 "math.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "math.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "math.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "math.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "math.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "math.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "math.c"
#line 3 "list.opt"
#include "list.mh"

#line 55 "math.c"
#line 4 "char.opt"
#include "char.mh"

#line 59 "math.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "math.c"
#line 148 "io.opt"
#include "dir.mh"

#line 67 "math.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 71 "math.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 75 "math.c"
#line 4 "int.opt"
#include "int.mh"

#line 79 "math.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "math.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 87 "math.c"
#line 23 "store.opt"
#include "store.mh"

#line 91 "math.c"
#line 3 "float.opt"
#include "float.mh"

#line 95 "math.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "math.c"
#line 100 "math.c"
#ifndef MATH_DECL_GUARD
#define MATH_DECL_GUARD

#line 104 "math.c"
#line 224 "math.m"


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


#line 124 "math.c"
#line 125 "math.c"

#endif
#line 128 "math.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_math__type_ctor_info_quadratic_roots_0,
	mercury_data_math__type_ctor_info_domain_error_0;
MR_decl_label1(math__math_domain_checks_0_0, 1)
MR_decl_label3(fn__math__acos_1_0, 7,6,3)
MR_decl_label3(fn__math__asin_1_0, 7,6,3)
MR_decl_label1(fn__math__ln_1_0, 3)
MR_decl_label4(fn__math__log_2_0, 7,8,6,3)
MR_decl_label1(fn__math__log10_1_0, 3)
MR_decl_label1(fn__math__log2_1_0, 3)
MR_decl_label3(fn__math__pow_2_0, 3,9,7)
MR_decl_label8(fn__math__solve_quadratic_3_0, 2,3,5,9,7,15,16,17)
MR_decl_label8(fn__math__solve_quadratic_3_0, 18,20,24,22,32,37,30,46)
MR_decl_label2(fn__math__solve_quadratic_3_0, 51,53)
MR_decl_label1(fn__math__sqrt_1_0, 3)
MR_decl_label1(fn__math__truncate_1_0, 2)
MR_decl_label1(__Unify___math__domain_error_0_0, 4)
MR_decl_label4(__Unify___math__quadratic_roots_0_0, 8,6,19,1)
MR_decl_label3(__Compare___math__domain_error_0_0, 4,12,5)
MR_decl_label8(__Compare___math__quadratic_roots_0_0, 42,15,19,22,23,25,28,6)
MR_decl_label5(__Compare___math__quadratic_roots_0_0, 9,52,10,53,37)
MR_def_extern_entry(fn__math__pi_0_0)
MR_def_extern_entry(fn__math__e_0_0)
MR_def_extern_entry(fn__math__ceiling_1_0)
MR_def_extern_entry(fn__math__floor_1_0)
MR_def_extern_entry(fn__math__round_1_0)
MR_def_extern_entry(fn__math__truncate_1_0)
MR_decl_static(math__math_domain_checks_0_0)
MR_decl_static(fn__math__sqrt_2_1_0)
MR_def_extern_entry(fn__math__sqrt_1_0)
MR_def_extern_entry(fn__math__solve_quadratic_3_0)
MR_decl_static(fn__math__pow_2_2_0)
MR_def_extern_entry(fn__math__pow_2_0)
MR_def_extern_entry(fn__math__exp_1_0)
MR_decl_static(fn__math__ln_2_1_0)
MR_def_extern_entry(fn__math__ln_1_0)
MR_decl_static(fn__math__log10_2_1_0)
MR_def_extern_entry(fn__math__log10_1_0)
MR_decl_static(fn__math__log2_2_1_0)
MR_def_extern_entry(fn__math__log2_1_0)
MR_decl_static(fn__math__log_2_2_0)
MR_def_extern_entry(fn__math__log_2_0)
MR_def_extern_entry(fn__math__sin_1_0)
MR_def_extern_entry(fn__math__cos_1_0)
MR_def_extern_entry(fn__math__tan_1_0)
MR_decl_static(fn__math__asin_2_1_0)
MR_def_extern_entry(fn__math__asin_1_0)
MR_decl_static(fn__math__acos_2_1_0)
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
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_math__field_types_quadratic_roots_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
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
	NULL
};

const MR_PseudoTypeInfo mercury_data_math__field_types_quadratic_roots_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
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
	13,
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
	13,
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


MR_BEGIN_MODULE(math_module0)
	MR_init_entry1(fn__math__pi_0_0);
MR_BEGIN_CODE

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
#line 309 "math.m"

    Pi = ML_FLOAT_PI;
;}
#line 344 "math.c"
	MR_r1 = MR_float_to_word(Pi);
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
MR_BEGIN_CODE

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
#line 342 "math.m"

    E = ML_FLOAT_E;
;}
#line 374 "math.c"
	MR_r1 = MR_float_to_word(E);
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
MR_BEGIN_CODE

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
	Num = MR_word_to_float(MR_r1);
{
#line 368 "math.m"

    Ceil = ceil(Num);
;}
#line 406 "math.c"
	MR_r1 = MR_float_to_word(Ceil);
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
MR_BEGIN_CODE

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
	Num = MR_word_to_float(MR_r1);
{
#line 400 "math.m"

    Floor = floor(Num);
;}
#line 438 "math.c"
	MR_r1 = MR_float_to_word(Floor);
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
MR_BEGIN_CODE

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
	Num = MR_word_to_float(MR_r1);
{
#line 432 "math.m"

    Rounded = floor(Num+0.5);
;}
#line 470 "math.c"
	MR_r1 = MR_float_to_word(Rounded);
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
	MR_init_label1(fn__math__truncate_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__truncate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__truncate_1_0_i2);
	}
	{
	MR_Float	Num;
	MR_Float	Ceil;
#define	MR_PROC_LABEL	mercury__fn__math__truncate_1_0
	Num = MR_word_to_float(MR_r1);
{
#line 368 "math.m"

    Ceil = ceil(Num);
;}
#line 507 "math.c"
	MR_r1 = MR_float_to_word(Ceil);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__math__truncate_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Num;
	MR_Float	Floor;
#define	MR_PROC_LABEL	mercury__fn__math__truncate_1_0
	Num = MR_word_to_float(MR_r1);
{
#line 400 "math.m"

    Floor = floor(Num);
;}
#line 524 "math.c"
	MR_r1 = MR_float_to_word(Floor);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module6)
	MR_init_entry1(math__math_domain_checks_0_0);
	MR_init_label1(math__math_domain_checks_0_0,1)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 561 "math.c"
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


MR_BEGIN_MODULE(math_module7)
	MR_init_entry1(fn__math__sqrt_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__sqrt_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	SquareRoot;
#define	MR_PROC_LABEL	mercury__fn__math__sqrt_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 478 "math.m"

    SquareRoot = sqrt(X);
;}
#line 600 "math.c"
	MR_r1 = MR_float_to_word(SquareRoot);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(math_module8)
	MR_init_entry1(fn__math__sqrt_1_0);
	MR_init_label1(fn__math__sqrt_1_0,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 638 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__sqrt_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.0000000000000000)) {
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
	X = MR_word_to_float(MR_r1);
{
#line 478 "math.m"

    SquareRoot = sqrt(X);
;}
#line 662 "math.c"
	MR_r1 = MR_float_to_word(SquareRoot);
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
	MR_init_label8(fn__math__solve_quadratic_3_0,2,3,5,9,7,15,16,17)
	MR_init_label8(fn__math__solve_quadratic_3_0,18,20,24,22,32,37,30,46)
	MR_init_label2(fn__math__solve_quadratic_3_0,51,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__math__solve_quadratic_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_float_to_word(((MR_word_to_float(MR_tempr2) * MR_word_to_float(MR_tempr2)) - (((MR_Float) 4.0000000000000000 * MR_word_to_float(MR_r1)) * MR_word_to_float(MR_tempr3))));
	MR_r4 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i5);
	}
MR_def_label(fn__math__solve_quadratic_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r4) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i5);
MR_def_label(fn__math__solve_quadratic_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
MR_def_label(fn__math__solve_quadratic_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i7);
	}
	MR_r3 = MR_float_to_word(((MR_Float) -0.50000000000000000 * MR_word_to_float(MR_sv(2))));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 745 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i9);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(1)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_float_to_word((MR_word_to_float(MR_r3) / MR_word_to_float(MR_sv(1))));
	MR_decr_sp_and_return(4);
MR_def_label(fn__math__solve_quadratic_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__math__solve_quadratic_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__math__sqrt_1_0,
		fn__math__solve_quadratic_3_0_i16);
MR_def_label(fn__math__solve_quadratic_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(2)) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i17);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i20);
MR_def_label(fn__math__solve_quadratic_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(2)) <= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i18);
	}
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i20);
MR_def_label(fn__math__solve_quadratic_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(fn__math__solve_quadratic_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i22);
	}
	MR_sv(2) = MR_float_to_word(((MR_Float) -0.50000000000000000 * MR_word_to_float(MR_r1)));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 812 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i24);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(1)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i24);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_float_to_word((MR_word_to_float(MR_sv(2)) / MR_word_to_float(MR_sv(1))));
	MR_tfield(2, MR_r1, 1) = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_ctfield(2, MR_r1, 0))));
	MR_decr_sp_and_return(4);
MR_def_label(fn__math__solve_quadratic_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i30);
	}
	MR_r3 = MR_float_to_word(((MR_Float) -0.50000000000000000 * (MR_word_to_float(MR_sv(2)) - MR_word_to_float(MR_r1))));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 852 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i32);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(1)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__math__solve_quadratic_3_0_i37);
MR_def_label(fn__math__solve_quadratic_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_tempr1) / MR_word_to_float(MR_sv(1))));
	}
MR_def_label(fn__math__solve_quadratic_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 889 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i53);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(2)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_float_to_word(((MR_Float) -0.50000000000000000 * (MR_word_to_float(MR_sv(2)) + MR_word_to_float(MR_r1))));
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 920 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i46);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(1)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i46);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__math__solve_quadratic_3_0_i51);
MR_def_label(fn__math__solve_quadratic_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_tempr1) / MR_word_to_float(MR_sv(1))));
	}
MR_def_label(fn__math__solve_quadratic_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__math__solve_quadratic_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 128 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 957 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i53);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_sv(2)) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__solve_quadratic_3_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__solve_quadratic_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_float_to_word((MR_word_to_float(MR_sv(3)) / MR_word_to_float(MR_sv(2))));
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module10)
	MR_init_entry1(fn__math__pow_2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__pow_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Y;
	MR_Float	Res;
#define	MR_PROC_LABEL	mercury__fn__math__pow_2_2_0
	X = MR_word_to_float(MR_r1);
	Y = MR_word_to_float(MR_r2);
{
#line 556 "math.m"

    Res = pow(X, Y);
;}
#line 1006 "math.c"
	MR_r1 = MR_float_to_word(Res);
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
	MR_init_label3(fn__math__pow_2_0,3,9,7)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1043 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__pow_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.pow", 8);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__pow_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i7);
	}
	if ((MR_word_to_float(MR_r2) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__pow_2_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.pow", 8);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__pow_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(fn__math__pow_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Y;
	MR_Float	Res;
#define	MR_PROC_LABEL	mercury__fn__math__pow_2_0
	X = MR_word_to_float(MR_r1);
	Y = MR_word_to_float(MR_r2);
{
#line 556 "math.m"

    Res = pow(X, Y);
;}
#line 1084 "math.c"
	MR_r1 = MR_float_to_word(Res);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 585 "math.m"

    Exp = exp(X);
;}
#line 1116 "math.c"
	MR_r1 = MR_float_to_word(Exp);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module13)
	MR_init_entry1(fn__math__ln_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__ln_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__ln_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 620 "math.m"

    Log = log(X);
;}
#line 1148 "math.c"
	MR_r1 = MR_float_to_word(Log);
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
	MR_init_label1(fn__math__ln_1_0,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1185 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__ln_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) > (MR_Float) 0.0000000000000000)) {
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
	X = MR_word_to_float(MR_r1);
{
#line 620 "math.m"

    Log = log(X);
;}
#line 1209 "math.c"
	MR_r1 = MR_float_to_word(Log);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module15)
	MR_init_entry1(fn__math__log10_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__log10_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log10;
#define	MR_PROC_LABEL	mercury__fn__math__log10_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 655 "math.m"

    Log10 = log10(X);
;}
#line 1241 "math.c"
	MR_r1 = MR_float_to_word(Log10);
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
	MR_init_label1(fn__math__log10_1_0,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1278 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log10_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) > (MR_Float) 0.0000000000000000)) {
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
	X = MR_word_to_float(MR_r1);
{
#line 655 "math.m"

    Log10 = log10(X);
;}
#line 1302 "math.c"
	MR_r1 = MR_float_to_word(Log10);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module17)
	MR_init_entry1(fn__math__log2_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__log2_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	Log2;
#define	MR_PROC_LABEL	mercury__fn__math__log2_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 686 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;
;}
#line 1334 "math.c"
	MR_r1 = MR_float_to_word(Log2);
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
	MR_init_label1(fn__math__log2_1_0,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1371 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log2_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) > (MR_Float) 0.0000000000000000)) {
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
	X = MR_word_to_float(MR_r1);
{
#line 686 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;
;}
#line 1395 "math.c"
	MR_r1 = MR_float_to_word(Log2);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module19)
	MR_init_entry1(fn__math__log_2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__log_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	B;
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__log_2_2_0
	B = MR_word_to_float(MR_r1);
	X = MR_word_to_float(MR_r2);
{
#line 722 "math.m"

    Log = log(X) / log(B);
;}
#line 1429 "math.c"
	MR_r1 = MR_float_to_word(Log);
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
	MR_init_label4(fn__math__log_2_0,7,8,6,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1467 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__log_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r2) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__math__log_2_0_i6);
MR_def_label(fn__math__log_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__math__log_2_0_i6);
MR_def_label(fn__math__log_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) != (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__log_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
MR_def_label(fn__math__log_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.log", 8);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__log_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	B;
	MR_Float	X;
	MR_Float	Log;
#define	MR_PROC_LABEL	mercury__fn__math__log_2_0
	B = MR_word_to_float(MR_r1);
	X = MR_word_to_float(MR_r2);
{
#line 722 "math.m"

    Log = log(X) / log(B);
;}
#line 1521 "math.c"
	MR_r1 = MR_float_to_word(Log);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 739 "math.m"

    Sin = sin(X);
;}
#line 1553 "math.c"
	MR_r1 = MR_float_to_word(Sin);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 765 "math.m"

    Cos = cos(X);
;}
#line 1585 "math.c"
	MR_r1 = MR_float_to_word(Cos);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 791 "math.m"

    Tan = tan(X);
;}
#line 1617 "math.c"
	MR_r1 = MR_float_to_word(Tan);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module24)
	MR_init_entry1(fn__math__asin_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__asin_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ASin;
#define	MR_PROC_LABEL	mercury__fn__math__asin_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 831 "math.m"

    ASin = asin(X);
;}
#line 1649 "math.c"
	MR_r1 = MR_float_to_word(ASin);
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
	MR_init_label3(fn__math__asin_1_0,7,6,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1687 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__asin_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) >= (MR_Float) -1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__asin_1_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__math__asin_1_0_i6);
MR_def_label(fn__math__asin_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__asin_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
MR_def_label(fn__math__asin_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.asin", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__asin_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ASin;
#define	MR_PROC_LABEL	mercury__fn__math__asin_1_0
	X = MR_word_to_float(MR_r1);
{
#line 831 "math.m"

    ASin = asin(X);
;}
#line 1727 "math.c"
	MR_r1 = MR_float_to_word(ASin);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module26)
	MR_init_entry1(fn__math__acos_2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__math__acos_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ACos;
#define	MR_PROC_LABEL	mercury__fn__math__acos_2_1_0
	X = MR_word_to_float(MR_r1);
{
#line 871 "math.m"

    ACos = acos(X);
;}
#line 1759 "math.c"
	MR_r1 = MR_float_to_word(ACos);
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
	MR_init_label3(fn__math__acos_1_0,7,6,3)
MR_BEGIN_CODE

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
#line 267 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1796 "math.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__math__acos_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) >= (MR_Float) -1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__acos_1_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__math__acos_1_0_i6);
MR_def_label(fn__math__acos_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= (MR_Float) 1.0000000000000000)) {
		MR_GOTO_LAB(fn__math__acos_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
MR_def_label(fn__math__acos_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("math.acos", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__math__acos_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Float	ACos;
#define	MR_PROC_LABEL	mercury__fn__math__acos_1_0
	X = MR_word_to_float(MR_r1);
{
#line 871 "math.m"

    ACos = acos(X);
;}
#line 1836 "math.c"
	MR_r1 = MR_float_to_word(ACos);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 898 "math.m"

    ATan = atan(X);
;}
#line 1868 "math.c"
	MR_r1 = MR_float_to_word(ATan);
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
MR_BEGIN_CODE

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
	Y = MR_word_to_float(MR_r1);
	X = MR_word_to_float(MR_r2);
{
#line 924 "math.m"

    ATan2 = atan2(Y, X);
;}
#line 1902 "math.c"
	MR_r1 = MR_float_to_word(ATan2);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 950 "math.m"

    Sinh = sinh(X);
;}
#line 1934 "math.c"
	MR_r1 = MR_float_to_word(Sinh);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 973 "math.m"

    Cosh = cosh(X);
;}
#line 1966 "math.c"
	MR_r1 = MR_float_to_word(Cosh);
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
MR_BEGIN_CODE

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
	X = MR_word_to_float(MR_r1);
{
#line 996 "math.m"

    Tanh = tanh(X);
;}
#line 1998 "math.c"
	MR_r1 = MR_float_to_word(Tanh);
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
	MR_init_label1(__Unify___math__domain_error_0_0,4)
MR_BEGIN_CODE

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
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
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
	MR_init_label3(__Compare___math__domain_error_0_0,4,12,5)
MR_BEGIN_CODE

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
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 2071 "math.c"
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
	MR_init_label4(__Unify___math__quadratic_roots_0_0,8,6,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___math__quadratic_roots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___math__quadratic_roots_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 0);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_r1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___math__quadratic_roots_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___math__quadratic_roots_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_r1));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___math__quadratic_roots_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
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
	MR_init_label8(__Compare___math__quadratic_roots_0_0,42,15,19,22,23,25,28,6)
	MR_init_label5(__Compare___math__quadratic_roots_0_0,9,52,10,53,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___math__quadratic_roots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i15);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i52);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i52);
	}
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i53);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	MR_r6 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r6) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i22);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i25);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r6) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i23);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i25);
MR_def_label(__Compare___math__quadratic_roots_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___math__quadratic_roots_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i37);
	}
	MR_r5 = MR_sv(1);
	MR_r4 = MR_sv(2);
	if ((MR_word_to_float(MR_r4) >= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	if ((MR_word_to_float(MR_r4) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i10);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___math__quadratic_roots_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___math__quadratic_roots_0_0_i42);
	}
MR_def_label(__Compare___math__quadratic_roots_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___math__quadratic_roots_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(math_module37)
	MR_init_entry1(fn__f_109_97_116_104_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

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
void mercury__math__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__math__init_complexity_procs(void);
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
		mercury_data_math__type_ctor_info_quadratic_roots_0,
		math__quadratic_roots_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_math__type_ctor_info_domain_error_0,
		math__domain_error_0_0);
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
		&mercury_data_math__type_ctor_info_quadratic_roots_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_math__type_ctor_info_domain_error_0);
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

void mercury__math__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__math__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
