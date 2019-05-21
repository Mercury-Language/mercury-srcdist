/*
** Automatically generated from `float.m'
** by the Mercury compiler,
** version rotd-2017-07-11
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module float. */
/* :- implementation. */

/*
INIT mercury__float__init
ENDINIT
*/

#include "float.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
  MR_Float mercury__float__Scale0_5,
  MR_Float mercury__float__Base_6,
  MR_Integer mercury__float__Exp_7);


static /* final */ const MR_Box mercury__float_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__float_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__float_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__float_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__float_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__float_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__float_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__float_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__float_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "version_array.mh"



static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__float__succeeded;

    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__float__float_domain_checks_0_p_0(void)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__float_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__float__succeeded;
  }
}

MR_String MR_CALL 
mercury__float__float64_bits_string_1_f_0(
  MR_Float mercury__float__Flt_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_String mercury__float__Str_2;

{
#define MR_PROC_LABEL mercury__float__float64_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{

    #if defined(MR_INT_LEAST64_TYPE)

        union {
            double f;
            MR_int_least64_t i;
        } u;
        char buf[64];

        u.f = (double) Flt;
        #if defined(MR_MINGW64) || defined(MR_CYGWIN32)
            sprintf(buf, "%lld", u.i);
        #elif defined(MR_WIN32)
            /*
            ** The I64 size prefix is specific to the Microsoft
            ** C library -- we use it here since MSVC and (some)
            ** versions of 32-bit MinGW GCC do not support the
            ** standard ll size prefix.
            */
            sprintf(buf, "%I64d", u.i);
        #else
            sprintf(buf, "%" MR_INT_LEAST64_LENGTH_MODIFIER "d", u.i);
        #endif
        MR_make_aligned_string_copy(Str, buf);
    #else
        MR_fatal_error(
        "64-bit integers not supported on this platform");
    #endif


		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
}
    return mercury__float__Str_2;
  }
}

MR_String MR_CALL 
mercury__float__float32_bits_string_1_f_0(
  MR_Float mercury__float__Flt_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_String mercury__float__Str_2;

{
#define MR_PROC_LABEL mercury__float__float32_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{

    union {
        float f;
        MR_int_least32_t i;
    } u;
    char buf[64];

    u.f = (float) Flt;
    sprintf(buf, "%d", u.i);
    MR_make_aligned_string_copy(Str, buf);


		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
}
    return mercury__float__Str_2;
  }
}

MR_Word MR_CALL 
mercury__float__float_to_doc_1_f_0(
  MR_Float mercury__float__X_3)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Word mercury__float__HeadVar__2_2;
    MR_String mercury__float__Var_4;

{
#define MR_PROC_LABEL mercury__float__float_to_doc_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__X_3 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__float__Var_4  = Str;
}
    {
      mercury__float__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__float__HeadVar__2_2, 0) = ((MR_Box) (mercury__float__Var_4));
    }
    return mercury__float__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__float__max_exponent_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__MaxExp_1;

{
#define MR_PROC_LABEL mercury__float__max_exponent_0_f_0

	MR_Integer MaxExp;

		{

    MaxExp = ML_FLOAT_MAX_EXP;


		;}
#undef MR_PROC_LABEL
	 mercury__float__MaxExp_1  = MaxExp;
}
    return mercury__float__MaxExp_1;
  }
}

MR_Integer MR_CALL 
mercury__float__min_exponent_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__MinExp_1;

{
#define MR_PROC_LABEL mercury__float__min_exponent_0_f_0

	MR_Integer MinExp;

		{

    MinExp = ML_FLOAT_MIN_EXP;


		;}
#undef MR_PROC_LABEL
	 mercury__float__MinExp_1  = MinExp;
}
    return mercury__float__MinExp_1;
  }
}

MR_Integer MR_CALL 
mercury__float__mantissa_digits_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__MantDig_1;

{
#define MR_PROC_LABEL mercury__float__mantissa_digits_0_f_0

	MR_Integer MantDig;

		{

    MantDig = ML_FLOAT_MANT_DIG;


		;}
#undef MR_PROC_LABEL
	 mercury__float__MantDig_1  = MantDig;
}
    return mercury__float__MantDig_1;
  }
}

MR_Integer MR_CALL 
mercury__float__radix_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__Radix_1;

{
#define MR_PROC_LABEL mercury__float__radix_0_f_0

	MR_Integer Radix;

		{

    Radix = ML_FLOAT_RADIX;


		;}
#undef MR_PROC_LABEL
	 mercury__float__Radix_1  = Radix;
}
    return mercury__float__Radix_1;
  }
}

MR_Float MR_CALL 
mercury__float__epsilon_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__Eps_1;

{
#define MR_PROC_LABEL mercury__float__epsilon_0_f_0

	MR_Float Eps;

		{

    Eps = ML_FLOAT_EPSILON;


		;}
#undef MR_PROC_LABEL
	 mercury__float__Eps_1  = Eps;
}
    return mercury__float__Eps_1;
  }
}

MR_Float MR_CALL 
mercury__float__infinity_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__F_1;

{
#define MR_PROC_LABEL mercury__float__infinity_0_f_0

	MR_Float F;

		{

    #if defined(MR_USE_SINGLE_PREC_FLOAT)
        #if defined(INFINITY)
            F = INFINITY;
        #elif defined(HUGE_VALF)
            F = HUGE_VALF;
        #else
            F = HUGE_VAL;
        #endif
    #else
        F = HUGE_VAL;
    #endif


		;}
#undef MR_PROC_LABEL
	 mercury__float__F_1  = F;
}
    return mercury__float__F_1;
  }
}

MR_Float MR_CALL 
mercury__float__min_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__Min_1;

{
#define MR_PROC_LABEL mercury__float__min_0_f_0

	MR_Float Min;

		{

    Min = ML_FLOAT_MIN;


		;}
#undef MR_PROC_LABEL
	 mercury__float__Min_1  = Min;
}
    return mercury__float__Min_1;
  }
}

MR_Float MR_CALL 
mercury__float__max_0_f_0(void)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__Max_1;

{
#define MR_PROC_LABEL mercury__float__max_0_f_0

	MR_Float Max;

		{

    Max = ML_FLOAT_MAX;


		;}
#undef MR_PROC_LABEL
	 mercury__float__Max_1  = Max;
}
    return mercury__float__Max_1;
  }
}

MR_bool MR_CALL 
mercury__float__is_zero_1_p_0(
  MR_Float mercury__float__HeadVar__1_1)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 == ((MR_Float) 0.0000000000000000));

    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_finite_1_p_0(
  MR_Float mercury__float__Flt_1)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_finite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_finite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_or_inf_1_p_0(
  MR_Float mercury__float__Float_2)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    if (!(mercury__float__succeeded))
      {
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_or_infinite_1_p_0(
  MR_Float mercury__float__Float_2)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    if (!(mercury__float__succeeded))
      {
{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_1_p_0(
  MR_Float mercury__float__Flt_1)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_inf_1_p_0(
  MR_Float mercury__float__Flt_1)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_infinite_1_p_0(
  MR_Float mercury__float__F_2)
{
  {
    MR_bool mercury__float__succeeded;

{
#define MR_PROC_LABEL mercury__float__is_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__F_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__float__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__float__hash_1_f_0(
  MR_Float mercury__float__F_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__H_2;

{
#define MR_PROC_LABEL mercury__float__hash_1_f_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__float__F_1 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 mercury__float__H_2  = H;
}
    return mercury__float__H_2;
  }
}

MR_Float MR_CALL 
mercury__float__pow_2_f_0(
  MR_Float mercury__float__Base_4,
  MR_Integer mercury__float__Exp_5)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__Exp_5 >= (MR_Integer) 0);
    MR_Float mercury__float__Ans_6;

    if (mercury__float__succeeded)
      {
        {
          mercury__float__Ans_6 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__Exp_5);
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__float__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__float__succeeded)
          mercury__float__succeeded = (mercury__float__Base_4 == ((MR_Float) 0.0000000000000000));
        if (mercury__float__succeeded)
          {
            MR_Word mercury__float__TypeCtorInfo_15_15 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
            MR_Word mercury__float__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "float.pow: zero base"));

            {
              mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_15_15, ((MR_Box) (mercury__float__Var_9)));
            }
          }
        else
          {
            MR_Float mercury__float__Var_12;
            MR_Integer mercury__float__Var_14 = ((MR_Integer) 0 - mercury__float__Exp_5);

            {
              mercury__float__Var_12 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__Var_14);
            }
            mercury__float__Ans_6 = (((MR_Float) 1.0000000000000000) / mercury__float__Var_12);
          }
      }
    return mercury__float__Ans_6;
  }
}

static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
  MR_Float mercury__float__Scale0_5,
  MR_Float mercury__float__Base_6,
  MR_Integer mercury__float__Exp_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__float__succeeded = (mercury__float__Exp_7 == (MR_Integer) 0);
        MR_Float mercury__float__Result_8;

        if (mercury__float__succeeded)
          mercury__float__Result_8 = mercury__float__Scale0_5;
        else
          {
            MR_Float mercury__float__Scale1_9;
            MR_Float mercury__float__Var_10;
            MR_Integer mercury__float__Var_12;
            MR_Integer mercury__float__V_3_15 = (mercury__float__Exp_7 & (MR_Integer) 1);

            mercury__float__succeeded = (mercury__float__V_3_15 == (MR_Integer) 0);
            mercury__float__succeeded = !(mercury__float__succeeded);
            if (mercury__float__succeeded)
              mercury__float__Scale1_9 = (mercury__float__Scale0_5 * mercury__float__Base_6);
            else
              mercury__float__Scale1_9 = mercury__float__Scale0_5;
            mercury__float__Var_10 = (mercury__float__Base_6 * mercury__float__Base_6);
            {
              mercury__float__Var_12 = mercury__int__div_2_f_0(mercury__float__Exp_7, (MR_Integer) 2);
            }
            /* direct tailcall eliminated */
            {
              MR_Float mercury__float__next_value_of_Scale0_5 = mercury__float__Scale1_9;
              MR_Float mercury__float__next_value_of_Base_6 = mercury__float__Var_10;
              MR_Integer mercury__float__next_value_of_Exp_7 = mercury__float__Var_12;

              mercury__float__Exp_7 = mercury__float__next_value_of_Exp_7;
              mercury__float__Base_6 = mercury__float__next_value_of_Base_6;
              mercury__float__Scale0_5 = mercury__float__next_value_of_Scale0_5;
            }
            continue;
          }
        return mercury__float__Result_8;
      }
      break;
    }
}

MR_Float MR_CALL 
mercury__float__min_2_f_0(
  MR_Float mercury__float__X_4,
  MR_Float mercury__float__Y_5)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__X_4 <= mercury__float__Y_5);
    MR_Float mercury__float__Min_6;

    if (mercury__float__succeeded)
      mercury__float__Min_6 = mercury__float__X_4;
    else
      mercury__float__Min_6 = mercury__float__Y_5;
    return mercury__float__Min_6;
  }
}

MR_Float MR_CALL 
mercury__float__max_2_f_0(
  MR_Float mercury__float__X_4,
  MR_Float mercury__float__Y_5)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__X_4 >= mercury__float__Y_5);
    MR_Float mercury__float__Max_6;

    if (mercury__float__succeeded)
      mercury__float__Max_6 = mercury__float__X_4;
    else
      mercury__float__Max_6 = mercury__float__Y_5;
    return mercury__float__Max_6;
  }
}

MR_Float MR_CALL 
mercury__float__abs_1_f_0(
  MR_Float mercury__float__Num_3)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__Num_3 <= ((MR_Float) 0.0000000000000000));
    MR_Float mercury__float__Abs_4;

    if (mercury__float__succeeded)
      mercury__float__Abs_4 = (((MR_Float) 0.0000000000000000) - mercury__float__Num_3);
    else
      mercury__float__Abs_4 = mercury__float__Num_3;
    return mercury__float__Abs_4;
  }
}

MR_Integer MR_CALL 
mercury__float__truncate_to_int_1_f_0(
  MR_Float mercury__float__X_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__Trunc_2;

{
#define MR_PROC_LABEL mercury__float__truncate_to_int_1_f_0

	MR_Float X;
	MR_Integer Trunc;

	X =  mercury__float__X_1 ;
		{

    Trunc = (MR_Integer) X;


		;}
#undef MR_PROC_LABEL
	 mercury__float__Trunc_2  = Trunc;
}
    return mercury__float__Trunc_2;
  }
}

MR_Integer MR_CALL 
mercury__float__round_to_int_1_f_0(
  MR_Float mercury__float__X_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__Round_2;

{
#define MR_PROC_LABEL mercury__float__round_to_int_1_f_0

	MR_Float X;
	MR_Integer Round;

	X =  mercury__float__X_1 ;
		{

    Round = (MR_Integer) floor(X + 0.5);


		;}
#undef MR_PROC_LABEL
	 mercury__float__Round_2  = Round;
}
    return mercury__float__Round_2;
  }
}

MR_Integer MR_CALL 
mercury__float__floor_to_int_1_f_0(
  MR_Float mercury__float__X_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__Floor_2;

{
#define MR_PROC_LABEL mercury__float__floor_to_int_1_f_0

	MR_Float X;
	MR_Integer Floor;

	X =  mercury__float__X_1 ;
		{

    Floor = (MR_Integer) floor(X);


		;}
#undef MR_PROC_LABEL
	 mercury__float__Floor_2  = Floor;
}
    return mercury__float__Floor_2;
  }
}

MR_Integer MR_CALL 
mercury__float__ceiling_to_int_1_f_0(
  MR_Float mercury__float__X_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Integer mercury__float__Ceil_2;

{
#define MR_PROC_LABEL mercury__float__ceiling_to_int_1_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__float__X_1 ;
		{

    Ceil = (MR_Integer) ceil(X);


		;}
#undef MR_PROC_LABEL
	 mercury__float__Ceil_2  = Ceil;
}
    return mercury__float__Ceil_2;
  }
}

MR_Float MR_CALL 
mercury__float__float_1_f_0(
  MR_Integer mercury__float__IntVal_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__float__IntVal_1 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 mercury__float__FloatVal_2  = FloatVal;
}
    return mercury__float__FloatVal_2;
  }
}

MR_bool MR_CALL 
mercury__float__f_greater_than_2_p_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 > mercury__float__HeadVar__2_2);

    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_greater_or_equal_2_p_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 >= mercury__float__HeadVar__2_2);

    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_less_or_equal_2_p_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 <= mercury__float__HeadVar__2_2);

    return mercury__float__succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_less_than_2_p_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 < mercury__float__HeadVar__2_2);

    return mercury__float__succeeded;
  }
}

MR_Float MR_CALL 
mercury__float__f_minus_1_f_0(
  MR_Float mercury__float__HeadVar__1_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__2_2 = (((MR_Float) 0.0000000000000000) - mercury__float__HeadVar__1_1);

    return mercury__float__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__float__f_plus_1_f_0(
  MR_Float mercury__float__HeadVar__1_1)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__2_2 = mercury__float__HeadVar__1_1;

    return mercury__float__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__float__unchecked_quotient_2_f_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 / mercury__float__HeadVar__2_2);

    return mercury__float__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_slash_2_f_0(
  MR_Float mercury__float__X_4,
  MR_Float mercury__float__Y_5)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__Z_6;

{
#define MR_PROC_LABEL mercury__float__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__float__succeeded)
      mercury__float__succeeded = (mercury__float__Y_5 == ((MR_Float) 0.0000000000000000));
    if (mercury__float__succeeded)
      {
        MR_Word mercury__float__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__float__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_9_9, ((MR_Box) (mercury__float__Var_7)));
        }
      }
    else
      mercury__float__Z_6 = (mercury__float__X_4 / mercury__float__Y_5);
    return mercury__float__Z_6;
  }
}

MR_Float MR_CALL 
mercury__float__f_times_2_f_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 * mercury__float__HeadVar__2_2);

    return mercury__float__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_minus_2_f_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 - mercury__float__HeadVar__2_2);

    return mercury__float__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_plus_2_f_0(
  MR_Float mercury__float__HeadVar__1_1,
  MR_Float mercury__float__HeadVar__2_2)
{
  {
    MR_bool mercury__float__succeeded;
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 + mercury__float__HeadVar__2_2);

    return mercury__float__HeadVar__3_3;
  }
}

void mercury__float__init(void)
{
}

void mercury__float__init_type_tables(void)
{
}

void mercury__float__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__float__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module float. */
