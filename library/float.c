/*
** Automatically generated from `float.m'
** by the Mercury compiler,
** version rotd-2022-01-10
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module float.
// :- implementation.

/*
INIT mercury__float__init
ENDINIT
*/

#include "float.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
  MR_Float Scale0_5,
  MR_Float Base_6,
  MR_Integer Exp_7);


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
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



MR_bool MR_CALL 
mercury__float__float_domain_checks_0_p_0(void)
{
  {
    MR_bool succeeded;

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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__float__float64_bits_string_1_f_0(
  MR_Float Flt_1)
{
  {
    MR_String Str_2;

{
#define MR_PROC_LABEL mercury__float__float64_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = Flt_1 ;
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
            // The I64 size prefix is specific to the Microsoft C library
            // -- we use it here since MSVC and (some) versions of 32-bit
            // MinGW GCC do not support the standard ll size prefix.
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
	 Str_2  = Str;
}
    return Str_2;
  }
}

MR_String MR_CALL 
mercury__float__float32_bits_string_1_f_0(
  MR_Float Flt_1)
{
  {
    MR_String Str_2;

{
#define MR_PROC_LABEL mercury__float__float32_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = Flt_1 ;
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
	 Str_2  = Str;
}
    return Str_2;
  }
}

MR_Word MR_CALL 
mercury__float__float_to_doc_1_f_0(
  MR_Float X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__float__float_to_doc_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = X_3 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 Var_4  = Str;
}
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__float__max_exponent_0_f_0(void)
{
  {
    MR_Integer MaxExp_1;

{
#define MR_PROC_LABEL mercury__float__max_exponent_0_f_0

	MR_Integer MaxExp;

		{

    MaxExp = ML_FLOAT_MAX_EXP;


		;}
#undef MR_PROC_LABEL
	 MaxExp_1  = MaxExp;
}
    return MaxExp_1;
  }
}

MR_Integer MR_CALL 
mercury__float__min_exponent_0_f_0(void)
{
  {
    MR_Integer MinExp_1;

{
#define MR_PROC_LABEL mercury__float__min_exponent_0_f_0

	MR_Integer MinExp;

		{

    MinExp = ML_FLOAT_MIN_EXP;


		;}
#undef MR_PROC_LABEL
	 MinExp_1  = MinExp;
}
    return MinExp_1;
  }
}

MR_Integer MR_CALL 
mercury__float__mantissa_digits_0_f_0(void)
{
  {
    MR_Integer MantDig_1;

{
#define MR_PROC_LABEL mercury__float__mantissa_digits_0_f_0

	MR_Integer MantDig;

		{

    MantDig = ML_FLOAT_MANT_DIG;


		;}
#undef MR_PROC_LABEL
	 MantDig_1  = MantDig;
}
    return MantDig_1;
  }
}

MR_Integer MR_CALL 
mercury__float__radix_0_f_0(void)
{
  {
    MR_Integer Radix_1;

{
#define MR_PROC_LABEL mercury__float__radix_0_f_0

	MR_Integer Radix;

		{

    Radix = ML_FLOAT_RADIX;


		;}
#undef MR_PROC_LABEL
	 Radix_1  = Radix;
}
    return Radix_1;
  }
}

MR_Float MR_CALL 
mercury__float__epsilon_0_f_0(void)
{
  {
    MR_Float Eps_1;

{
#define MR_PROC_LABEL mercury__float__epsilon_0_f_0

	MR_Float Eps;

		{

    Eps = ML_FLOAT_EPSILON;


		;}
#undef MR_PROC_LABEL
	 Eps_1  = Eps;
}
    return Eps_1;
  }
}

MR_Float MR_CALL 
mercury__float__infinity_0_f_0(void)
{
  {
    MR_Float F_1;

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
	 F_1  = F;
}
    return F_1;
  }
}

MR_Float MR_CALL 
mercury__float__min_0_f_0(void)
{
  {
    MR_Float Min_1;

{
#define MR_PROC_LABEL mercury__float__min_0_f_0

	MR_Float Min;

		{

    Min = ML_FLOAT_MIN;


		;}
#undef MR_PROC_LABEL
	 Min_1  = Min;
}
    return Min_1;
  }
}

MR_Float MR_CALL 
mercury__float__max_0_f_0(void)
{
  {
    MR_Float Max_1;

{
#define MR_PROC_LABEL mercury__float__max_0_f_0

	MR_Float Max;

		{

    Max = ML_FLOAT_MAX;


		;}
#undef MR_PROC_LABEL
	 Max_1  = Max;
}
    return Max_1;
  }
}

MR_bool MR_CALL 
mercury__float__is_zero_1_p_0(
  MR_Float HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Float) 0.0000000000000000));

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_finite_1_p_0(
  MR_Float Flt_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_finite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_finite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_or_inf_1_p_0(
  MR_Float Float_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_or_infinite_1_p_0(
  MR_Float Float_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Float_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_nan_1_p_0(
  MR_Float Flt_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_nan_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_inf_1_p_0(
  MR_Float Flt_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = Flt_1 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__is_infinite_1_p_0(
  MR_Float F_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__float__is_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt = F_2 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__float__hash_2_p_0(
  MR_Float F_3,
  MR_Integer * H_4)
{
  {
{
#define MR_PROC_LABEL mercury__float__hash_2_p_0

	MR_Float F;
	MR_Integer H;

	F = F_3 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 *H_4  = H;
}
  }
}

MR_Integer MR_CALL 
mercury__float__hash_1_f_0(
  MR_Float F_1)
{
  {
    MR_Integer H_2;

{
#define MR_PROC_LABEL mercury__float__hash_1_f_0

	MR_Float F;
	MR_Integer H;

	F = F_1 ;
		{

    H = MR_hash_float(F);


		;}
#undef MR_PROC_LABEL
	 H_2  = H;
}
    return H_2;
  }
}

MR_Float MR_CALL 
mercury__float__pow_2_f_0(
  MR_Float Base_4,
  MR_Integer Exp_5)
{
  {
    MR_bool succeeded = (Exp_5 >= (MR_Integer) 0);
    MR_Float Ans_6;

    if (succeeded)
      Ans_6 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, Base_4, Exp_5);
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Base_4 == ((MR_Float) 0.0000000000000000));
      if (succeeded)
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "float.pow: zero base")))));
      else
      {
        MR_Float Var_12;
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Exp_5);

        Var_12 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, Base_4, Var_14);
        Ans_6 = (((MR_Float) 1.0000000000000000) / Var_12);
      }
    }
    return Ans_6;
  }
}

static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
  MR_Float Scale0_5,
  MR_Float Base_6,
  MR_Integer Exp_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Exp_7 == (MR_Integer) 0);
    MR_Float Result_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      Result_8 = Scale0_5;
    else
    {
      MR_Float Scale1_9;
      MR_Float Var_10;
      MR_Integer Var_12;
      MR_Integer Var_15 = (Exp_7 & (MR_Integer) 1);
      MR_Float next_value_of_Scale0_5;
      MR_Float next_value_of_Base_6;
      MR_Integer next_value_of_Exp_7;

      succeeded = (Var_15 != (MR_Integer) 0);
      if (succeeded)
        Scale1_9 = (Scale0_5 * Base_6);
      else
        Scale1_9 = Scale0_5;
      Var_10 = (Base_6 * Base_6);
      Var_12 = mercury__int__div_2_f_0(Exp_7, (MR_Integer) 2);
      // direct tailcall eliminated
      ;
      next_value_of_Scale0_5 = Scale1_9;
      next_value_of_Base_6 = Var_10;
      next_value_of_Exp_7 = Var_12;
      Scale0_5 = next_value_of_Scale0_5;
      Base_6 = next_value_of_Base_6;
      Exp_7 = next_value_of_Exp_7;
      continue;
    }
    return Result_8;
    break;
  }
}

MR_Float MR_CALL 
mercury__float__min_2_f_0(
  MR_Float X_4,
  MR_Float Y_5)
{
  {
    MR_bool succeeded = (X_4 <= Y_5);
    MR_Float Min_6;

    if (succeeded)
      Min_6 = X_4;
    else
      Min_6 = Y_5;
    return Min_6;
  }
}

MR_Float MR_CALL 
mercury__float__max_2_f_0(
  MR_Float X_4,
  MR_Float Y_5)
{
  {
    MR_bool succeeded = (X_4 >= Y_5);
    MR_Float Max_6;

    if (succeeded)
      Max_6 = X_4;
    else
      Max_6 = Y_5;
    return Max_6;
  }
}

MR_Float MR_CALL 
mercury__float__abs_1_f_0(
  MR_Float Num_3)
{
  {
    MR_bool succeeded = (Num_3 <= ((MR_Float) 0.0000000000000000));
    MR_Float Abs_4;

    if (succeeded)
      Abs_4 = (((MR_Float) 0.0000000000000000) - Num_3);
    else
      Abs_4 = Num_3;
    return Abs_4;
  }
}

MR_Integer MR_CALL 
mercury__float__truncate_to_int_1_f_0(
  MR_Float X_1)
{
  {
    MR_Integer Trunc_2;

{
#define MR_PROC_LABEL mercury__float__truncate_to_int_1_f_0

	MR_Float X;
	MR_Integer Trunc;

	X = X_1 ;
		{

    Trunc = (MR_Integer) X;


		;}
#undef MR_PROC_LABEL
	 Trunc_2  = Trunc;
}
    return Trunc_2;
  }
}

MR_Integer MR_CALL 
mercury__float__round_to_int_1_f_0(
  MR_Float X_1)
{
  {
    MR_Integer Round_2;

{
#define MR_PROC_LABEL mercury__float__round_to_int_1_f_0

	MR_Float X;
	MR_Integer Round;

	X = X_1 ;
		{

    Round = (MR_Integer) ML_FLOAT_FLOOR(X + (MR_Float)0.5);


		;}
#undef MR_PROC_LABEL
	 Round_2  = Round;
}
    return Round_2;
  }
}

MR_Integer MR_CALL 
mercury__float__floor_to_int_1_f_0(
  MR_Float X_1)
{
  {
    MR_Integer Floor_2;

{
#define MR_PROC_LABEL mercury__float__floor_to_int_1_f_0

	MR_Float X;
	MR_Integer Floor;

	X = X_1 ;
		{

    Floor = (MR_Integer) ML_FLOAT_FLOOR(X);


		;}
#undef MR_PROC_LABEL
	 Floor_2  = Floor;
}
    return Floor_2;
  }
}

MR_Integer MR_CALL 
mercury__float__ceiling_to_int_1_f_0(
  MR_Float X_1)
{
  {
    MR_Integer Ceil_2;

{
#define MR_PROC_LABEL mercury__float__ceiling_to_int_1_f_0

	MR_Float X;
	MR_Integer Ceil;

	X = X_1 ;
		{

    Ceil = (MR_Integer) ML_FLOAT_CEIL(X);


		;}
#undef MR_PROC_LABEL
	 Ceil_2  = Ceil;
}
    return Ceil_2;
  }
}

MR_Float MR_CALL 
mercury__float__cast_from_uint64_1_f_0(
  uint64_t UInt64Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__cast_from_uint64_1_f_0

	uint64_t UInt64Val;
	MR_Float FloatVal;

	UInt64Val = UInt64Val_1 ;
		{

    FloatVal = UInt64Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__cast_from_uint32_1_f_0(
  uint32_t UInt32Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__cast_from_uint32_1_f_0

	uint32_t UInt32Val;
	MR_Float FloatVal;

	UInt32Val = UInt32Val_1 ;
		{

    FloatVal = UInt32Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__from_uint16_1_f_0(
  uint16_t UInt16Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__from_uint16_1_f_0

	uint16_t UInt16Val;
	MR_Float FloatVal;

	UInt16Val = UInt16Val_1 ;
		{

    FloatVal = UInt16Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__from_uint8_1_f_0(
  uint8_t UInt8Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__from_uint8_1_f_0

	uint8_t UInt8Val;
	MR_Float FloatVal;

	UInt8Val = UInt8Val_1 ;
		{

    FloatVal = UInt8Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__cast_from_int64_1_f_0(
  int64_t Int64Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__cast_from_int64_1_f_0

	int64_t Int64Val;
	MR_Float FloatVal;

	Int64Val = Int64Val_1 ;
		{

    FloatVal = Int64Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__cast_from_int32_1_f_0(
  int32_t Int32Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__cast_from_int32_1_f_0

	int32_t Int32Val;
	MR_Float FloatVal;

	Int32Val = Int32Val_1 ;
		{

    FloatVal = Int32Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__from_int16_1_f_0(
  int16_t Int16Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__from_int16_1_f_0

	int16_t Int16Val;
	MR_Float FloatVal;

	Int16Val = Int16Val_1 ;
		{

    FloatVal = Int16Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__from_int8_1_f_0(
  int8_t Int8Val_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__from_int8_1_f_0

	int8_t Int8Val;
	MR_Float FloatVal;

	Int8Val = Int8Val_1 ;
		{

    FloatVal = Int8Val;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_Float MR_CALL 
mercury__float__float_1_f_0(
  MR_Integer IntVal_1)
{
  {
    MR_Float FloatVal_2;

{
#define MR_PROC_LABEL mercury__float__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal = IntVal_1 ;
		{

    FloatVal = IntVal;


		;}
#undef MR_PROC_LABEL
	 FloatVal_2  = FloatVal;
}
    return FloatVal_2;
  }
}

MR_bool MR_CALL 
mercury__float__f_greater_than_2_p_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_greater_or_equal_2_p_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_less_or_equal_2_p_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__float__f_less_than_2_p_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

MR_Float MR_CALL 
mercury__float__f_minus_1_f_0(
  MR_Float HeadVar__1_1)
{
  {
    MR_Float HeadVar__2_2 = (((MR_Float) 0.0000000000000000) - HeadVar__1_1);

    return HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__float__f_plus_1_f_0(
  MR_Float HeadVar__1_1)
{
  {
    MR_Float HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__float__unchecked_quotient_2_f_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_Float HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_slash_2_f_0(
  MR_Float X_4,
  MR_Float Y_5)
{
  {
    MR_bool succeeded;
    MR_Float Z_6;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Y_5 == ((MR_Float) 0.0000000000000000));
    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "float.\'/\': division by zero")))));
    else
      Z_6 = (X_4 / Y_5);
    return Z_6;
  }
}

MR_Float MR_CALL 
mercury__float__f_times_2_f_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_Float HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_minus_2_f_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_Float HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__float__f_plus_2_f_0(
  MR_Float HeadVar__1_1,
  MR_Float HeadVar__2_2)
{
  {
    MR_Float HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
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

// :- end_module float.
