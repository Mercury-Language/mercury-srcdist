/*
** Automatically generated from `float.m'
** by the Mercury compiler,
** version DEV
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 591 "float.m"
static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
#line 591 "float.m"
  MR_Float mercury__float__Scale0_5,
#line 591 "float.m"
  MR_Float mercury__float__Base_6,
#line 591 "float.m"
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
#include "version_array.mh"



#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__float__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 591 "float.m"
static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
#line 591 "float.m"
  MR_Float mercury__float__Scale0_5,
#line 591 "float.m"
  MR_Float mercury__float__Base_6,
#line 591 "float.m"
  MR_Integer mercury__float__Exp_7)
#line 591 "float.m"
{
#line 596 "float.m"
  while (MR_TRUE)
#line 596 "float.m"
    {
#line 596 "float.m"
      /* tailcall optimized into a loop */
#line 596 "float.m"
      {
#line 596 "float.m"
        MR_bool mercury__float__succeeded = (mercury__float__Exp_7 == (MR_Integer) 0);
#line 596 "float.m"
        MR_Float mercury__float__Result_8;

#line 596 "float.m"
        if (mercury__float__succeeded)
#line 595 "float.m"
          mercury__float__Result_8 = mercury__float__Scale0_5;
#line 596 "float.m"
        else
#line 601 "float.m"
          {
#line 601 "float.m"
            MR_Float mercury__float__Scale1_9;
#line 601 "float.m"
            MR_Float mercury__float__V_10_10;
#line 601 "float.m"
            MR_Integer mercury__float__V_12_12;
#line 275 "int.opt"
            MR_Integer mercury__float__V_3_15 = (mercury__float__Exp_7 & (MR_Integer) 1);

#line 277 "int.opt"
            mercury__float__succeeded = (mercury__float__V_3_15 == (MR_Integer) 0);
#line 274 "int.opt"
            mercury__float__succeeded = !(mercury__float__succeeded);
#line 599 "float.m"
            if (mercury__float__succeeded)
#line 598 "float.m"
              mercury__float__Scale1_9 = (mercury__float__Scale0_5 * mercury__float__Base_6);
#line 599 "float.m"
            else
#line 600 "float.m"
              mercury__float__Scale1_9 = mercury__float__Scale0_5;
#line 602 "float.m"
            mercury__float__V_10_10 = (mercury__float__Base_6 * mercury__float__Base_6);
#line 602 "float.m"
            {
#line 602 "float.m"
              mercury__float__V_12_12 = mercury__int__div_2_f_0(mercury__float__Exp_7, (MR_Integer) 2);
            }
#line 602 "float.m"
            /* direct tailcall eliminated */
#line 602 "float.m"
            {
#line 602 "float.m"
              MR_Float mercury__float__Scale0__tmp_copy_5 = mercury__float__Scale1_9;
#line 602 "float.m"
              MR_Float mercury__float__Base__tmp_copy_6 = mercury__float__V_10_10;
#line 602 "float.m"
              MR_Integer mercury__float__Exp__tmp_copy_7 = mercury__float__V_12_12;

#line 602 "float.m"
              mercury__float__Exp_7 = mercury__float__Exp__tmp_copy_7;
#line 602 "float.m"
              mercury__float__Base_6 = mercury__float__Base__tmp_copy_6;
#line 602 "float.m"
              mercury__float__Scale0_5 = mercury__float__Scale0__tmp_copy_5;
#line 602 "float.m"
            }
#line 602 "float.m"
            continue;
#line 601 "float.m"
          }
#line 596 "float.m"
        return mercury__float__Result_8;
#line 596 "float.m"
      }
#line 596 "float.m"
      break;
#line 596 "float.m"
    }
#line 591 "float.m"
}

#line 325 "float.m"
MR_bool MR_CALL 
mercury__float__float_domain_checks_0_p_0(void)
#line 325 "float.m"
{
#line 328 "float.m"
  {
#line 328 "float.m"
    MR_bool mercury__float__succeeded;

#line 332 "float.m"
{
#define MR_PROC_LABEL mercury__float__float_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 332 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 319 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 332 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 328 "float.m"
    return mercury__float__succeeded;
#line 328 "float.m"
  }
#line 325 "float.m"
}

#line 285 "float.m"
MR_String MR_CALL 
mercury__float__float64_bits_string_1_f_0(
#line 285 "float.m"
  MR_Float mercury__float__Flt_1)
#line 285 "float.m"
{
#line 1021 "float.m"
  {
#line 1021 "float.m"
    MR_bool mercury__float__succeeded;
#line 1021 "float.m"
    MR_String mercury__float__Str_2;

#line 1024 "float.m"
{
#define MR_PROC_LABEL mercury__float__float64_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{
#line 1024 "float.m"

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

#line 388 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
#line 1024 "float.m"
}
#line 1021 "float.m"
    return mercury__float__Str_2;
#line 1021 "float.m"
  }
#line 285 "float.m"
}

#line 279 "float.m"
MR_String MR_CALL 
mercury__float__float32_bits_string_1_f_0(
#line 279 "float.m"
  MR_Float mercury__float__Flt_1)
#line 279 "float.m"
{
#line 980 "float.m"
  {
#line 980 "float.m"
    MR_bool mercury__float__succeeded;
#line 980 "float.m"
    MR_String mercury__float__Str_2;

#line 983 "float.m"
{
#define MR_PROC_LABEL mercury__float__float32_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{
#line 983 "float.m"

    union {
        float f;
        MR_int_least32_t i;
    } u;
    char buf[64];

    u.f = (float) Flt;
    sprintf(buf, "%d", u.i);
    MR_make_aligned_string_copy(Str, buf);

#line 437 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
#line 983 "float.m"
}
#line 980 "float.m"
    return mercury__float__Str_2;
#line 980 "float.m"
  }
#line 279 "float.m"
}

#line 262 "float.m"
MR_Word MR_CALL 
mercury__float__float_to_doc_1_f_0(
#line 262 "float.m"
  MR_Float mercury__float__X_3)
#line 262 "float.m"
{
#line 976 "float.m"
  {
#line 976 "float.m"
    MR_bool mercury__float__succeeded;
#line 976 "float.m"
    MR_Word mercury__float__HeadVar__2_2;
#line 976 "float.m"
    MR_String mercury__float__V_4_4;

#line 335 "string.opt"
{
#define MR_PROC_LABEL mercury__float__float_to_doc_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__X_3 ;
		{
#line 335 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 484 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__V_4_4  = Str;
#line 335 "string.opt"
}
#line 976 "float.m"
    {
#line 976 "float.m"
      mercury__float__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 976 "float.m"
      MR_hl_field(MR_mktag(1), mercury__float__HeadVar__2_2, 0) = ((MR_Box) (mercury__float__V_4_4));
#line 976 "float.m"
    }
#line 976 "float.m"
    return mercury__float__HeadVar__2_2;
#line 976 "float.m"
  }
#line 262 "float.m"
}

#line 256 "float.m"
MR_Integer MR_CALL 
mercury__float__max_exponent_0_f_0(void)
#line 256 "float.m"
{
#line 957 "float.m"
  {
#line 957 "float.m"
    MR_bool mercury__float__succeeded;
#line 957 "float.m"
    MR_Integer mercury__float__MaxExp_1;

#line 961 "float.m"
{
#define MR_PROC_LABEL mercury__float__max_exponent_0_f_0

	MR_Integer MaxExp;

		{
#line 961 "float.m"

    MaxExp = ML_FLOAT_MAX_EXP;

#line 529 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MaxExp_1  = MaxExp;
#line 961 "float.m"
}
#line 957 "float.m"
    return mercury__float__MaxExp_1;
#line 957 "float.m"
  }
#line 256 "float.m"
}

#line 249 "float.m"
MR_Integer MR_CALL 
mercury__float__min_exponent_0_f_0(void)
#line 249 "float.m"
{
#line 940 "float.m"
  {
#line 940 "float.m"
    MR_bool mercury__float__succeeded;
#line 940 "float.m"
    MR_Integer mercury__float__MinExp_1;

#line 944 "float.m"
{
#define MR_PROC_LABEL mercury__float__min_exponent_0_f_0

	MR_Integer MinExp;

		{
#line 944 "float.m"

    MinExp = ML_FLOAT_MIN_EXP;

#line 566 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MinExp_1  = MinExp;
#line 944 "float.m"
}
#line 940 "float.m"
    return mercury__float__MinExp_1;
#line 940 "float.m"
  }
#line 249 "float.m"
}

#line 242 "float.m"
MR_Integer MR_CALL 
mercury__float__mantissa_digits_0_f_0(void)
#line 242 "float.m"
{
#line 923 "float.m"
  {
#line 923 "float.m"
    MR_bool mercury__float__succeeded;
#line 923 "float.m"
    MR_Integer mercury__float__MantDig_1;

#line 927 "float.m"
{
#define MR_PROC_LABEL mercury__float__mantissa_digits_0_f_0

	MR_Integer MantDig;

		{
#line 927 "float.m"

    MantDig = ML_FLOAT_MANT_DIG;

#line 603 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MantDig_1  = MantDig;
#line 927 "float.m"
}
#line 923 "float.m"
    return mercury__float__MantDig_1;
#line 923 "float.m"
  }
#line 242 "float.m"
}

#line 237 "float.m"
MR_Integer MR_CALL 
mercury__float__radix_0_f_0(void)
#line 237 "float.m"
{
#line 904 "float.m"
  {
#line 904 "float.m"
    MR_bool mercury__float__succeeded;
#line 904 "float.m"
    MR_Integer mercury__float__Radix_1;

#line 908 "float.m"
{
#define MR_PROC_LABEL mercury__float__radix_0_f_0

	MR_Integer Radix;

		{
#line 908 "float.m"

    Radix = ML_FLOAT_RADIX;

#line 640 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Radix_1  = Radix;
#line 908 "float.m"
}
#line 904 "float.m"
    return mercury__float__Radix_1;
#line 904 "float.m"
  }
#line 237 "float.m"
}

#line 232 "float.m"
MR_Float MR_CALL 
mercury__float__epsilon_0_f_0(void)
#line 232 "float.m"
{
#line 881 "float.m"
  {
#line 881 "float.m"
    MR_bool mercury__float__succeeded;
#line 881 "float.m"
    MR_Float mercury__float__Eps_1;

#line 885 "float.m"
{
#define MR_PROC_LABEL mercury__float__epsilon_0_f_0

	MR_Float Eps;

		{
#line 885 "float.m"

    Eps = ML_FLOAT_EPSILON;

#line 677 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Eps_1  = Eps;
#line 885 "float.m"
}
#line 881 "float.m"
    return mercury__float__Eps_1;
#line 881 "float.m"
  }
#line 232 "float.m"
}

#line 224 "float.m"
MR_Float MR_CALL 
mercury__float__infinity_0_f_0(void)
#line 224 "float.m"
{
#line 845 "float.m"
  {
#line 845 "float.m"
    MR_bool mercury__float__succeeded;
#line 845 "float.m"
    MR_Float mercury__float__F_1;

#line 849 "float.m"
{
#define MR_PROC_LABEL mercury__float__infinity_0_f_0

	MR_Float F;

		{
#line 849 "float.m"

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

#line 724 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__F_1  = F;
#line 849 "float.m"
}
#line 845 "float.m"
    return mercury__float__F_1;
#line 845 "float.m"
  }
#line 224 "float.m"
}

#line 220 "float.m"
MR_Float MR_CALL 
mercury__float__min_0_f_0(void)
#line 220 "float.m"
{
#line 810 "float.m"
  {
#line 810 "float.m"
    MR_bool mercury__float__succeeded;
#line 810 "float.m"
    MR_Float mercury__float__Min_1;

#line 814 "float.m"
{
#define MR_PROC_LABEL mercury__float__min_0_f_0

	MR_Float Min;

		{
#line 814 "float.m"

    Min = ML_FLOAT_MIN;

#line 761 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Min_1  = Min;
#line 814 "float.m"
}
#line 810 "float.m"
    return mercury__float__Min_1;
#line 810 "float.m"
  }
#line 220 "float.m"
}

#line 214 "float.m"
MR_Float MR_CALL 
mercury__float__max_0_f_0(void)
#line 214 "float.m"
{
#line 784 "float.m"
  {
#line 784 "float.m"
    MR_bool mercury__float__succeeded;
#line 784 "float.m"
    MR_Float mercury__float__Max_1;

#line 788 "float.m"
{
#define MR_PROC_LABEL mercury__float__max_0_f_0

	MR_Float Max;

		{
#line 788 "float.m"

    Max = ML_FLOAT_MAX;

#line 798 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Max_1  = Max;
#line 788 "float.m"
}
#line 784 "float.m"
    return mercury__float__Max_1;
#line 784 "float.m"
  }
#line 214 "float.m"
}

#line 203 "float.m"
MR_bool MR_CALL 
mercury__float__is_zero_1_p_0(
#line 203 "float.m"
  MR_Float mercury__float__HeadVar__1_1)
#line 203 "float.m"
{
#line 744 "float.m"
  {
#line 744 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 == ((MR_Float) 0.0000000000000000));

#line 744 "float.m"
    return mercury__float__succeeded;
#line 744 "float.m"
  }
#line 203 "float.m"
}

#line 199 "float.m"
MR_bool MR_CALL 
mercury__float__is_finite_1_p_0(
#line 199 "float.m"
  MR_Float mercury__float__Flt_1)
#line 199 "float.m"
{
#line 732 "float.m"
  {
#line 732 "float.m"
    MR_bool mercury__float__succeeded;

#line 736 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_finite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{
#line 736 "float.m"

    SUCCESS_INDICATOR = MR_is_finite(Flt);

#line 856 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 736 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 732 "float.m"
    return mercury__float__succeeded;
#line 732 "float.m"
  }
#line 199 "float.m"
}

#line 194 "float.m"
MR_bool MR_CALL 
mercury__float__is_nan_or_inf_1_p_0(
#line 194 "float.m"
  MR_Float mercury__float__Float_2)
#line 194 "float.m"
{
#line 671 "float.m"
  {
#line 671 "float.m"
    MR_bool mercury__float__succeeded;

#line 679 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 679 "float.m"

    SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 897 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 679 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 671 "float.m"
    if (!(mercury__float__succeeded))
#line 705 "float.m"
      {
#line 709 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 709 "float.m"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 923 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 709 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 705 "float.m"
      }
#line 671 "float.m"
    return mercury__float__succeeded;
#line 671 "float.m"
  }
#line 194 "float.m"
}

#line 190 "float.m"
MR_bool MR_CALL 
mercury__float__is_nan_or_infinite_1_p_0(
#line 190 "float.m"
  MR_Float mercury__float__Float_2)
#line 190 "float.m"
{
#line 671 "float.m"
  {
#line 671 "float.m"
    MR_bool mercury__float__succeeded;

#line 679 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 679 "float.m"

    SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 966 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 679 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 671 "float.m"
    if (!(mercury__float__succeeded))
#line 705 "float.m"
      {
#line 709 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 709 "float.m"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 992 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 709 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 705 "float.m"
      }
#line 671 "float.m"
    return mercury__float__succeeded;
#line 671 "float.m"
  }
#line 190 "float.m"
}

#line 186 "float.m"
MR_bool MR_CALL 
mercury__float__is_nan_1_p_0(
#line 186 "float.m"
  MR_Float mercury__float__Flt_1)
#line 186 "float.m"
{
#line 675 "float.m"
  {
#line 675 "float.m"
    MR_bool mercury__float__succeeded;

#line 679 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{
#line 679 "float.m"

    SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 1035 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 679 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 675 "float.m"
    return mercury__float__succeeded;
#line 675 "float.m"
  }
#line 186 "float.m"
}

#line 182 "float.m"
MR_bool MR_CALL 
mercury__float__is_inf_1_p_0(
#line 182 "float.m"
  MR_Float mercury__float__Flt_1)
#line 182 "float.m"
{
#line 705 "float.m"
  {
#line 705 "float.m"
    MR_bool mercury__float__succeeded;

#line 709 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{
#line 709 "float.m"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 1076 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 709 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 705 "float.m"
    return mercury__float__succeeded;
#line 705 "float.m"
  }
#line 182 "float.m"
}

#line 178 "float.m"
MR_bool MR_CALL 
mercury__float__is_infinite_1_p_0(
#line 178 "float.m"
  MR_Float mercury__float__F_2)
#line 178 "float.m"
{
#line 705 "float.m"
  {
#line 705 "float.m"
    MR_bool mercury__float__succeeded;

#line 709 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_infinite_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__F_2 ;
		{
#line 709 "float.m"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 1117 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 709 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 705 "float.m"
    return mercury__float__succeeded;
#line 705 "float.m"
  }
#line 178 "float.m"
}

#line 169 "float.m"
MR_Integer MR_CALL 
mercury__float__hash_1_f_0(
#line 169 "float.m"
  MR_Float mercury__float__F_1)
#line 169 "float.m"
{
#line 629 "float.m"
  {
#line 629 "float.m"
    MR_bool mercury__float__succeeded;
#line 629 "float.m"
    MR_Integer mercury__float__H_2;

#line 633 "float.m"
{
#define MR_PROC_LABEL mercury__float__hash_1_f_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__float__F_1 ;
		{
#line 633 "float.m"

    H = MR_hash_float(F);

#line 1160 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__H_2  = H;
#line 633 "float.m"
}
#line 629 "float.m"
    return mercury__float__H_2;
#line 629 "float.m"
  }
#line 169 "float.m"
}

#line 165 "float.m"
MR_Float MR_CALL 
mercury__float__pow_2_f_0(
#line 165 "float.m"
  MR_Float mercury__float__Base_4,
#line 165 "float.m"
  MR_Integer mercury__float__Exp_5)
#line 165 "float.m"
{
#line 577 "float.m"
  {
#line 577 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__Exp_5 >= (MR_Integer) 0);
#line 577 "float.m"
    MR_Float mercury__float__Ans_6;

#line 577 "float.m"
    if (mercury__float__succeeded)
#line 576 "float.m"
      {
#line 576 "float.m"
        {
#line 576 "float.m"
          mercury__float__Ans_6 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__Exp_5);
        }
#line 576 "float.m"
      }
#line 577 "float.m"
    else
#line 580 "float.m"
      {
#line 332 "float.m"
{
#define MR_PROC_LABEL mercury__float__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 332 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1220 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 332 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 578 "float.m"
        if (mercury__float__succeeded)
#line 578 "float.m"
          mercury__float__succeeded = (mercury__float__Base_4 == ((MR_Float) 0.0000000000000000));
#line 580 "float.m"
        if (mercury__float__succeeded)
#line 579 "float.m"
          {
#line 579 "float.m"
            MR_Word mercury__float__TypeCtorInfo_15_15 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 579 "float.m"
            MR_Word mercury__float__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "float.pow: zero base"));

#line 579 "float.m"
            {
#line 579 "float.m"
              mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_15_15, ((MR_Box) (mercury__float__V_9_9)));
            }
#line 579 "float.m"
          }
#line 580 "float.m"
        else
#line 581 "float.m"
          {
#line 581 "float.m"
            MR_Float mercury__float__V_12_12;
#line 581 "float.m"
            MR_Integer mercury__float__V_14_14 = ((MR_Integer) 0 - mercury__float__Exp_5);

#line 582 "float.m"
            {
#line 582 "float.m"
              mercury__float__V_12_12 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__V_14_14);
            }
#line 581 "float.m"
            mercury__float__Ans_6 = (((MR_Float) 1.0000000000000000) / mercury__float__V_12_12);
#line 581 "float.m"
          }
#line 580 "float.m"
      }
#line 577 "float.m"
    return mercury__float__Ans_6;
#line 577 "float.m"
  }
#line 165 "float.m"
}

#line 158 "float.m"
MR_Float MR_CALL 
mercury__float__min_2_f_0(
#line 158 "float.m"
  MR_Float mercury__float__X_4,
#line 158 "float.m"
  MR_Float mercury__float__Y_5)
#line 158 "float.m"
{
#line 570 "float.m"
  {
#line 570 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__X_4 <= mercury__float__Y_5);
#line 570 "float.m"
    MR_Float mercury__float__Min_6;

#line 570 "float.m"
    if (mercury__float__succeeded)
#line 569 "float.m"
      mercury__float__Min_6 = mercury__float__X_4;
#line 570 "float.m"
    else
#line 571 "float.m"
      mercury__float__Min_6 = mercury__float__Y_5;
#line 570 "float.m"
    return mercury__float__Min_6;
#line 570 "float.m"
  }
#line 158 "float.m"
}

#line 154 "float.m"
MR_Float MR_CALL 
mercury__float__max_2_f_0(
#line 154 "float.m"
  MR_Float mercury__float__X_4,
#line 154 "float.m"
  MR_Float mercury__float__Y_5)
#line 154 "float.m"
{
#line 563 "float.m"
  {
#line 563 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__X_4 >= mercury__float__Y_5);
#line 563 "float.m"
    MR_Float mercury__float__Max_6;

#line 563 "float.m"
    if (mercury__float__succeeded)
#line 562 "float.m"
      mercury__float__Max_6 = mercury__float__X_4;
#line 563 "float.m"
    else
#line 564 "float.m"
      mercury__float__Max_6 = mercury__float__Y_5;
#line 563 "float.m"
    return mercury__float__Max_6;
#line 563 "float.m"
  }
#line 154 "float.m"
}

#line 150 "float.m"
MR_Float MR_CALL 
mercury__float__abs_1_f_0(
#line 150 "float.m"
  MR_Float mercury__float__Num_3)
#line 150 "float.m"
{
#line 556 "float.m"
  {
#line 556 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__Num_3 <= ((MR_Float) 0.0000000000000000));
#line 556 "float.m"
    MR_Float mercury__float__Abs_4;

#line 556 "float.m"
    if (mercury__float__succeeded)
#line 555 "float.m"
      mercury__float__Abs_4 = (((MR_Float) 0.0000000000000000) - mercury__float__Num_3);
#line 556 "float.m"
    else
#line 557 "float.m"
      mercury__float__Abs_4 = mercury__float__Num_3;
#line 556 "float.m"
    return mercury__float__Abs_4;
#line 556 "float.m"
  }
#line 150 "float.m"
}

#line 141 "float.m"
MR_Integer MR_CALL 
mercury__float__truncate_to_int_1_f_0(
#line 141 "float.m"
  MR_Float mercury__float__X_1)
#line 141 "float.m"
{
#line 515 "float.m"
  {
#line 515 "float.m"
    MR_bool mercury__float__succeeded;
#line 515 "float.m"
    MR_Integer mercury__float__Trunc_2;

#line 519 "float.m"
{
#define MR_PROC_LABEL mercury__float__truncate_to_int_1_f_0

	MR_Float X;
	MR_Integer Trunc;

	X =  mercury__float__X_1 ;
		{
#line 519 "float.m"

    Trunc = (MR_Integer) X;

#line 1394 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Trunc_2  = Trunc;
#line 519 "float.m"
}
#line 515 "float.m"
    return mercury__float__Trunc_2;
#line 515 "float.m"
  }
#line 141 "float.m"
}

#line 136 "float.m"
MR_Integer MR_CALL 
mercury__float__round_to_int_1_f_0(
#line 136 "float.m"
  MR_Float mercury__float__X_1)
#line 136 "float.m"
{
#line 480 "float.m"
  {
#line 480 "float.m"
    MR_bool mercury__float__succeeded;
#line 480 "float.m"
    MR_Integer mercury__float__Round_2;

#line 484 "float.m"
{
#define MR_PROC_LABEL mercury__float__round_to_int_1_f_0

	MR_Float X;
	MR_Integer Round;

	X =  mercury__float__X_1 ;
		{
#line 484 "float.m"

    Round = (MR_Integer) floor(X + 0.5);

#line 1435 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Round_2  = Round;
#line 484 "float.m"
}
#line 480 "float.m"
    return mercury__float__Round_2;
#line 480 "float.m"
  }
#line 136 "float.m"
}

#line 131 "float.m"
MR_Integer MR_CALL 
mercury__float__floor_to_int_1_f_0(
#line 131 "float.m"
  MR_Float mercury__float__X_1)
#line 131 "float.m"
{
#line 441 "float.m"
  {
#line 441 "float.m"
    MR_bool mercury__float__succeeded;
#line 441 "float.m"
    MR_Integer mercury__float__Floor_2;

#line 445 "float.m"
{
#define MR_PROC_LABEL mercury__float__floor_to_int_1_f_0

	MR_Float X;
	MR_Integer Floor;

	X =  mercury__float__X_1 ;
		{
#line 445 "float.m"

    Floor = (MR_Integer) floor(X);

#line 1476 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Floor_2  = Floor;
#line 445 "float.m"
}
#line 441 "float.m"
    return mercury__float__Floor_2;
#line 441 "float.m"
  }
#line 131 "float.m"
}

#line 127 "float.m"
MR_Integer MR_CALL 
mercury__float__ceiling_to_int_1_f_0(
#line 127 "float.m"
  MR_Float mercury__float__X_1)
#line 127 "float.m"
{
#line 402 "float.m"
  {
#line 402 "float.m"
    MR_bool mercury__float__succeeded;
#line 402 "float.m"
    MR_Integer mercury__float__Ceil_2;

#line 406 "float.m"
{
#define MR_PROC_LABEL mercury__float__ceiling_to_int_1_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__float__X_1 ;
		{
#line 406 "float.m"

    Ceil = (MR_Integer) ceil(X);

#line 1517 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Ceil_2  = Ceil;
#line 406 "float.m"
}
#line 402 "float.m"
    return mercury__float__Ceil_2;
#line 402 "float.m"
  }
#line 127 "float.m"
}

#line 123 "float.m"
MR_Float MR_CALL 
mercury__float__float_1_f_0(
#line 123 "float.m"
  MR_Integer mercury__float__IntVal_1)
#line 123 "float.m"
{
#line 373 "float.m"
  {
#line 373 "float.m"
    MR_bool mercury__float__succeeded;
#line 373 "float.m"
    MR_Float mercury__float__FloatVal_2;

#line 377 "float.m"
{
#define MR_PROC_LABEL mercury__float__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__float__IntVal_1 ;
		{
#line 377 "float.m"

    FloatVal = IntVal;

#line 1558 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__FloatVal_2  = FloatVal;
#line 377 "float.m"
}
#line 373 "float.m"
    return mercury__float__FloatVal_2;
#line 373 "float.m"
  }
#line 123 "float.m"
}

#line 114 "float.m"
MR_bool MR_CALL 
mercury__float__f_greater_than_2_p_0(
#line 114 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 114 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 114 "float.m"
{
#line 114 "float.m"
  {
#line 114 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 > mercury__float__HeadVar__2_2);

#line 114 "float.m"
    return mercury__float__succeeded;
#line 114 "float.m"
  }
#line 114 "float.m"
}

#line 110 "float.m"
MR_bool MR_CALL 
mercury__float__f_greater_or_equal_2_p_0(
#line 110 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 110 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 110 "float.m"
{
#line 110 "float.m"
  {
#line 110 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 >= mercury__float__HeadVar__2_2);

#line 110 "float.m"
    return mercury__float__succeeded;
#line 110 "float.m"
  }
#line 110 "float.m"
}

#line 106 "float.m"
MR_bool MR_CALL 
mercury__float__f_less_or_equal_2_p_0(
#line 106 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 106 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 106 "float.m"
{
#line 106 "float.m"
  {
#line 106 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 <= mercury__float__HeadVar__2_2);

#line 106 "float.m"
    return mercury__float__succeeded;
#line 106 "float.m"
  }
#line 106 "float.m"
}

#line 102 "float.m"
MR_bool MR_CALL 
mercury__float__f_less_than_2_p_0(
#line 102 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 102 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 102 "float.m"
{
#line 102 "float.m"
  {
#line 102 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 < mercury__float__HeadVar__2_2);

#line 102 "float.m"
    return mercury__float__succeeded;
#line 102 "float.m"
  }
#line 102 "float.m"
}

#line 94 "float.m"
MR_Float MR_CALL 
mercury__float__f_minus_1_f_0(
#line 94 "float.m"
  MR_Float mercury__float__HeadVar__1_1)
#line 94 "float.m"
{
#line 94 "float.m"
  {
#line 94 "float.m"
    MR_bool mercury__float__succeeded;
#line 94 "float.m"
    MR_Float mercury__float__HeadVar__2_2 = (((MR_Float) 0.0000000000000000) - mercury__float__HeadVar__1_1);

#line 94 "float.m"
    return mercury__float__HeadVar__2_2;
#line 94 "float.m"
  }
#line 94 "float.m"
}

#line 90 "float.m"
MR_Float MR_CALL 
mercury__float__f_plus_1_f_0(
#line 90 "float.m"
  MR_Float mercury__float__HeadVar__1_1)
#line 90 "float.m"
{
#line 90 "float.m"
  {
#line 90 "float.m"
    MR_bool mercury__float__succeeded;
#line 90 "float.m"
    MR_Float mercury__float__HeadVar__2_2 = mercury__float__HeadVar__1_1;

#line 90 "float.m"
    return mercury__float__HeadVar__2_2;
#line 90 "float.m"
  }
#line 90 "float.m"
}

#line 86 "float.m"
MR_Float MR_CALL 
mercury__float__unchecked_quotient_2_f_0(
#line 86 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 86 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 86 "float.m"
{
#line 86 "float.m"
  {
#line 86 "float.m"
    MR_bool mercury__float__succeeded;
#line 86 "float.m"
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 / mercury__float__HeadVar__2_2);

#line 86 "float.m"
    return mercury__float__HeadVar__3_3;
#line 86 "float.m"
  }
#line 86 "float.m"
}

#line 81 "float.m"
MR_Float MR_CALL 
mercury__float__f_slash_2_f_0(
#line 81 "float.m"
  MR_Float mercury__float__X_4,
#line 81 "float.m"
  MR_Float mercury__float__Y_5)
#line 81 "float.m"
{
#line 316 "float.m"
  {
#line 316 "float.m"
    MR_bool mercury__float__succeeded;
#line 316 "float.m"
    MR_Float mercury__float__Z_6;

#line 332 "float.m"
{
#define MR_PROC_LABEL mercury__float__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 332 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1752 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 332 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 314 "float.m"
    if (mercury__float__succeeded)
#line 314 "float.m"
      mercury__float__succeeded = (mercury__float__Y_5 == ((MR_Float) 0.0000000000000000));
#line 316 "float.m"
    if (mercury__float__succeeded)
#line 315 "float.m"
      {
#line 315 "float.m"
        MR_Word mercury__float__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 315 "float.m"
        MR_Word mercury__float__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 315 "float.m"
        {
#line 315 "float.m"
          mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_9_9, ((MR_Box) (mercury__float__V_7_7)));
        }
#line 315 "float.m"
      }
#line 316 "float.m"
    else
#line 317 "float.m"
      mercury__float__Z_6 = (mercury__float__X_4 / mercury__float__Y_5);
#line 316 "float.m"
    return mercury__float__Z_6;
#line 316 "float.m"
  }
#line 81 "float.m"
}

#line 74 "float.m"
MR_Float MR_CALL 
mercury__float__f_times_2_f_0(
#line 74 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 74 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 74 "float.m"
{
#line 74 "float.m"
  {
#line 74 "float.m"
    MR_bool mercury__float__succeeded;
#line 74 "float.m"
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 * mercury__float__HeadVar__2_2);

#line 74 "float.m"
    return mercury__float__HeadVar__3_3;
#line 74 "float.m"
  }
#line 74 "float.m"
}

#line 70 "float.m"
MR_Float MR_CALL 
mercury__float__f_minus_2_f_0(
#line 70 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 70 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 70 "float.m"
{
#line 70 "float.m"
  {
#line 70 "float.m"
    MR_bool mercury__float__succeeded;
#line 70 "float.m"
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 - mercury__float__HeadVar__2_2);

#line 70 "float.m"
    return mercury__float__HeadVar__3_3;
#line 70 "float.m"
  }
#line 70 "float.m"
}

#line 66 "float.m"
MR_Float MR_CALL 
mercury__float__f_plus_2_f_0(
#line 66 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 66 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 66 "float.m"
{
#line 66 "float.m"
  {
#line 66 "float.m"
    MR_bool mercury__float__succeeded;
#line 66 "float.m"
    MR_Float mercury__float__HeadVar__3_3 = (mercury__float__HeadVar__1_1 + mercury__float__HeadVar__2_2);

#line 66 "float.m"
    return mercury__float__HeadVar__3_3;
#line 66 "float.m"
  }
#line 66 "float.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module float. */
