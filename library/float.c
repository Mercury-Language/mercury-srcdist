/*
** Automatically generated from `float.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__float__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "float.c"
#include "float.mh"

#line 27 "float.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "float.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "float.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "float.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "float.c"
#line 30 "array.int2"
#include "array.mh"

#line 47 "float.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "float.c"
#line 3 "list.opt"
#include "list.mh"

#line 55 "float.c"
#line 4 "char.opt"
#include "char.mh"

#line 59 "float.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "float.c"
#line 148 "io.opt"
#include "dir.mh"

#line 67 "float.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 71 "float.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 75 "float.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 79 "float.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 83 "float.c"
#line 23 "store.opt"
#include "store.mh"

#line 87 "float.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "float.c"
#line 3 "math.opt"
#include "math.mh"

#line 95 "float.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "float.c"
#line 100 "float.c"
#ifndef FLOAT_DECL_GUARD
#define FLOAT_DECL_GUARD

#line 104 "float.c"
#line 232 "float.m"

	#include <float.h>
	#include <math.h>

#ifdef MR_HAVE_IEEEFP_H
	#include <ieeefp.h>
#endif

#line 114 "float.c"
#line 682 "float.m"

	#define	ML_FLOAT_RADIX	FLT_RADIX	/* There is no DBL_RADIX. */

	#if defined MR_USE_SINGLE_PREC_FLOAT
		#define	ML_FLOAT_MAX		FLT_MAX
		#define	ML_FLOAT_MIN		FLT_MIN
		#define	ML_FLOAT_EPSILON	FLT_EPSILON
		#define	ML_FLOAT_MANT_DIG	FLT_MANT_DIG
		#define	ML_FLOAT_MIN_EXP	FLT_MIN_EXP
		#define	ML_FLOAT_MAX_EXP	FLT_MAX_EXP
	#else
		#define	ML_FLOAT_MAX		DBL_MAX
		#define	ML_FLOAT_MIN		DBL_MIN
		#define	ML_FLOAT_EPSILON	DBL_EPSILON
		#define	ML_FLOAT_MANT_DIG	DBL_MANT_DIG
		#define	ML_FLOAT_MIN_EXP	DBL_MIN_EXP
		#define	ML_FLOAT_MAX_EXP	DBL_MAX_EXP
	#endif

#line 135 "float.c"
#line 136 "float.c"

#endif
#line 139 "float.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(float__float_domain_checks_0_0, 1)
MR_decl_label1(float__is_inf_1_0, 1)
MR_decl_label1(float__is_nan_1_0, 1)
MR_decl_label2(float__is_nan_or_inf_1_0, 4,1)
MR_decl_label1(fn__f_102_108_111_97_116_95_95_47_2_0, 3)
MR_decl_label1(fn__float__abs_1_0, 3)
MR_decl_label1(fn__float__max_2_0, 3)
MR_decl_label1(fn__float__min_2_0, 3)
MR_decl_label4(fn__float__multiply_by_pow_3_0, 19,5,9,21)
MR_decl_label3(fn__float__pow_2_0, 2,37,10)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_43_2_0)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_45_2_0)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_42_2_0)
MR_def_extern_entry(fn__float__unchecked_quotient_2_0)
MR_def_extern_entry(float__float_domain_checks_0_0)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_47_2_0)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_43_1_0)
MR_def_extern_entry(fn__f_102_108_111_97_116_95_95_45_1_0)
MR_def_extern_entry(f_102_108_111_97_116_95_95_60_2_0)
MR_def_extern_entry(f_102_108_111_97_116_95_95_61_60_2_0)
MR_def_extern_entry(f_102_108_111_97_116_95_95_62_61_2_0)
MR_def_extern_entry(f_102_108_111_97_116_95_95_62_2_0)
MR_def_extern_entry(fn__float__float_1_0)
MR_def_extern_entry(fn__float__ceiling_to_int_1_0)
MR_def_extern_entry(fn__float__floor_to_int_1_0)
MR_def_extern_entry(fn__float__round_to_int_1_0)
MR_def_extern_entry(fn__float__truncate_to_int_1_0)
MR_def_extern_entry(fn__float__abs_1_0)
MR_def_extern_entry(fn__float__max_2_0)
MR_def_extern_entry(fn__float__min_2_0)
MR_decl_static(fn__float__multiply_by_pow_3_0)
MR_def_extern_entry(fn__float__pow_2_0)
MR_def_extern_entry(fn__float__hash_1_0)
MR_def_extern_entry(float__is_nan_1_0)
MR_def_extern_entry(float__is_inf_1_0)
MR_def_extern_entry(float__is_nan_or_inf_1_0)
MR_def_extern_entry(fn__float__max_0_0)
MR_def_extern_entry(fn__float__min_0_0)
MR_def_extern_entry(fn__float__epsilon_0_0)
MR_def_extern_entry(fn__float__radix_0_0)
MR_def_extern_entry(fn__float__mantissa_digits_0_0)
MR_def_extern_entry(fn__float__min_exponent_0_0)
MR_def_extern_entry(fn__float__max_exponent_0_0)
MR_decl_static(fn__f_102_108_111_97_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)


MR_BEGIN_MODULE(float_module0)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_43_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) + MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module1)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_45_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_45_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module2)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_42_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module3)
	MR_init_entry1(fn__float__unchecked_quotient_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__unchecked_quotient_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) / MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module4)
	MR_init_entry1(float__float_domain_checks_0_0);
	MR_init_label1(float__float_domain_checks_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__float__float_domain_checks_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__float__float_domain_checks_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 266 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 293 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(float__float_domain_checks_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(float__float_domain_checks_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(float_module5)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_47_2_0);
	MR_init_label1(fn__f_102_108_111_97_116_95_95_47_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__f_102_108_111_97_116_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 266 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 340 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_102_108_111_97_116_95_95_47_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r2) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__f_102_108_111_97_116_95_95_47_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:\'/\'", 9);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__f_102_108_111_97_116_95_95_47_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) / MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module6)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_43_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_43_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module7)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_45_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_102_108_111_97_116_95_95_45_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_r1)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module8)
	MR_init_entry1(f_102_108_111_97_116_95_95_60_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_102_108_111_97_116_95_95_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module9)
	MR_init_entry1(f_102_108_111_97_116_95_95_61_60_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_102_108_111_97_116_95_95_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) <= MR_word_to_float(MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module10)
	MR_init_entry1(f_102_108_111_97_116_95_95_62_61_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_102_108_111_97_116_95_95_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) >= MR_word_to_float(MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module11)
	MR_init_entry1(f_102_108_111_97_116_95_95_62_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_102_108_111_97_116_95_95_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) > MR_word_to_float(MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module12)
	MR_init_entry1(fn__float__float_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__float_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__float__float_1_0
	IntVal = MR_r1;
{
#line 311 "float.m"

	FloatVal = IntVal;
;}
#line 496 "float.c"
	MR_r1 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module13)
	MR_init_entry1(fn__float__ceiling_to_int_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__ceiling_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Integer	Ceil;
#define	MR_PROC_LABEL	mercury__fn__float__ceiling_to_int_1_0
	X = MR_word_to_float(MR_r1);
{
#line 340 "float.m"

	Ceil = (MR_Integer) ceil(X);
;}
#line 528 "float.c"
	MR_r1 = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module14)
	MR_init_entry1(fn__float__floor_to_int_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__floor_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Integer	Floor;
#define	MR_PROC_LABEL	mercury__fn__float__floor_to_int_1_0
	X = MR_word_to_float(MR_r1);
{
#line 379 "float.m"

	Floor = (MR_Integer) floor(X);
;}
#line 560 "float.c"
	MR_r1 = Floor;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module15)
	MR_init_entry1(fn__float__round_to_int_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__round_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Integer	Round;
#define	MR_PROC_LABEL	mercury__fn__float__round_to_int_1_0
	X = MR_word_to_float(MR_r1);
{
#line 418 "float.m"

	Round = (MR_Integer) floor(X + 0.5);
;}
#line 592 "float.c"
	MR_r1 = Round;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module16)
	MR_init_entry1(fn__float__truncate_to_int_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__truncate_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	X;
	MR_Integer	Trunc;
#define	MR_PROC_LABEL	mercury__fn__float__truncate_to_int_1_0
	X = MR_word_to_float(MR_r1);
{
#line 453 "float.m"

	Trunc = (MR_Integer) X;
;}
#line 624 "float.c"
	MR_r1 = Trunc;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module17)
	MR_init_entry1(fn__float__abs_1_0);
	MR_init_label1(fn__float__abs_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__float__abs_1_0_i3);
	}
	MR_r1 = MR_float_to_word(((MR_Float) 0.0000000000000000 - MR_word_to_float(MR_r1)));
MR_def_label(fn__float__abs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module18)
	MR_init_entry1(fn__float__max_2_0);
	MR_init_label1(fn__float__max_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__max_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__float__max_2_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__float__max_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module19)
	MR_init_entry1(fn__float__min_2_0);
	MR_init_label1(fn__float__min_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__min_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__float__min_2_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__float__min_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__div_2_0);

MR_BEGIN_MODULE(float_module20)
	MR_init_entry1(fn__float__multiply_by_pow_3_0);
	MR_init_label4(fn__float__multiply_by_pow_3_0,19,5,9,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__float__multiply_by_pow_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__float__multiply_by_pow_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(fn__float__multiply_by_pow_3_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_tempr2 & (MR_Integer) 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__float__multiply_by_pow_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(1)) * MR_word_to_float(MR_tempr3)));
	MR_sv(2) = MR_float_to_word((MR_word_to_float(MR_tempr3) * MR_word_to_float(MR_tempr3)));
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__float__multiply_by_pow_3_0_i9);
MR_def_label(fn__float__multiply_by_pow_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_float_to_word((MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_tempr1)));
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__float__multiply_by_pow_3_0_i9);
MR_def_label(fn__float__multiply_by_pow_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__float__multiply_by_pow_3_0_i19);
MR_def_label(fn__float__multiply_by_pow_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(float_module21)
	MR_init_entry1(fn__float__pow_2_0);
	MR_init_label3(fn__float__pow_2_0,2,37,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__float__pow_2_0_i2);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_np_tailcall_ent(fn__float__multiply_by_pow_3_0);
MR_def_label(fn__float__pow_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__float__pow_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 266 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 810 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__float__pow_2_0_i37);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_word_to_float(MR_r1) != (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__float__pow_2_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("float:pow", 9);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__float__pow_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r3 = ((MR_Integer) 0 - (MR_Integer) MR_sv(2));
	MR_np_call_localret_ent(fn__float__multiply_by_pow_3_0,
		fn__float__pow_2_0_i10);
MR_def_label(fn__float__pow_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word(((MR_Float) 1.0000000000000000 / MR_word_to_float(MR_r1)));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module22)
	MR_init_entry1(fn__float__hash_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__hash_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__fn__float__hash_1_0
	F = MR_word_to_float(MR_r1);
{
#line 567 "float.m"

	H = MR_hash_float(F);
;}
#line 863 "float.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module23)
	MR_init_entry1(float__is_nan_1_0);
	MR_init_label1(float__is_nan_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__float__is_nan_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__float__is_nan_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Flt = MR_word_to_float(MR_r1);
{
#line 610 "float.m"

	SUCCESS_INDICATOR = MR_is_nan(Flt);
;}
#line 898 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(float__is_nan_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(float__is_nan_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module24)
	MR_init_entry1(float__is_inf_1_0);
	MR_init_label1(float__is_inf_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__float__is_inf_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__float__is_inf_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Flt = MR_word_to_float(MR_r1);
{
#line 640 "float.m"

	SUCCESS_INDICATOR = MR_is_inf(Flt);
;}
#line 940 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(float__is_inf_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(float__is_inf_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module25)
	MR_init_entry1(float__is_nan_or_inf_1_0);
	MR_init_label2(float__is_nan_or_inf_1_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__float__is_nan_or_inf_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	{
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__float__is_nan_or_inf_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Flt = MR_word_to_float(MR_r1);
{
#line 610 "float.m"

	SUCCESS_INDICATOR = MR_is_nan(Flt);
;}
#line 983 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(float__is_nan_or_inf_1_0_i4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(float__is_nan_or_inf_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Flt;
#define	MR_PROC_LABEL	mercury__float__is_nan_or_inf_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Flt = MR_word_to_float(MR_r1);
{
#line 640 "float.m"

	SUCCESS_INDICATOR = MR_is_inf(Flt);
;}
#line 1006 "float.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(float__is_nan_or_inf_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(float__is_nan_or_inf_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module26)
	MR_init_entry1(fn__float__max_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__max_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Max;
#define	MR_PROC_LABEL	mercury__fn__float__max_0_0
{
#line 707 "float.m"

	Max = ML_FLOAT_MAX;
;}
#line 1045 "float.c"
	MR_r1 = MR_float_to_word(Max);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module27)
	MR_init_entry1(fn__float__min_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__min_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Min;
#define	MR_PROC_LABEL	mercury__fn__float__min_0_0
{
#line 734 "float.m"

	Min = ML_FLOAT_MIN;
;}
#line 1075 "float.c"
	MR_r1 = MR_float_to_word(Min);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module28)
	MR_init_entry1(fn__float__epsilon_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__epsilon_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	Eps;
#define	MR_PROC_LABEL	mercury__fn__float__epsilon_0_0
{
#line 756 "float.m"

	Eps = ML_FLOAT_EPSILON;
;}
#line 1105 "float.c"
	MR_r1 = MR_float_to_word(Eps);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module29)
	MR_init_entry1(fn__float__radix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__radix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Radix;
#define	MR_PROC_LABEL	mercury__fn__float__radix_0_0
{
#line 779 "float.m"

	Radix = ML_FLOAT_RADIX;
;}
#line 1135 "float.c"
	MR_r1 = Radix;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module30)
	MR_init_entry1(fn__float__mantissa_digits_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__mantissa_digits_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	MantDig;
#define	MR_PROC_LABEL	mercury__fn__float__mantissa_digits_0_0
{
#line 798 "float.m"

	MantDig = ML_FLOAT_MANT_DIG;
;}
#line 1165 "float.c"
	MR_r1 = MantDig;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module31)
	MR_init_entry1(fn__float__min_exponent_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__min_exponent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	MinExp;
#define	MR_PROC_LABEL	mercury__fn__float__min_exponent_0_0
{
#line 815 "float.m"

	MinExp = ML_FLOAT_MIN_EXP;
;}
#line 1195 "float.c"
	MR_r1 = MinExp;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module32)
	MR_init_entry1(fn__float__max_exponent_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__float__max_exponent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	MaxExp;
#define	MR_PROC_LABEL	mercury__fn__float__max_exponent_0_0
{
#line 832 "float.m"

	MaxExp = ML_FLOAT_MAX_EXP;
;}
#line 1225 "float.c"
	MR_r1 = MaxExp;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(float_module33)
	MR_init_entry1(fn__f_102_108_111_97_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_102_108_111_97_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__float_maybe_bunch_0(void)
{
	float_module0();
	float_module1();
	float_module2();
	float_module3();
	float_module4();
	float_module5();
	float_module6();
	float_module7();
	float_module8();
	float_module9();
	float_module10();
	float_module11();
	float_module12();
	float_module13();
	float_module14();
	float_module15();
	float_module16();
	float_module17();
	float_module18();
	float_module19();
	float_module20();
	float_module21();
	float_module22();
	float_module23();
	float_module24();
	float_module25();
	float_module26();
	float_module27();
	float_module28();
	float_module29();
	float_module30();
	float_module31();
	float_module32();
	float_module33();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__float__init(void);
void mercury__float__init_type_tables(void);
void mercury__float__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__float__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__float__init_complexity_procs(void);
#endif

void mercury__float__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__float_maybe_bunch_0();
	mercury__float__init_debugger();
}

void mercury__float__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__float__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__float__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__float__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
