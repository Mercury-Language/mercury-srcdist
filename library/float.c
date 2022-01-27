/*
** Automatically generated from `float.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"





#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 555 "float.m"
static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
#line 555 "float.m"
  MR_Float mercury__float__Scale0_5,
#line 555 "float.m"
  MR_Float mercury__float__Base_6,
#line 555 "float.m"
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



#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__float__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__float__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 555 "float.m"
static MR_Float MR_CALL 
mercury__float__multiply_by_pow_3_f_0(
#line 555 "float.m"
  MR_Float mercury__float__Scale0_5,
#line 555 "float.m"
  MR_Float mercury__float__Base_6,
#line 555 "float.m"
  MR_Integer mercury__float__Exp_7)
#line 555 "float.m"
{
#line 560 "float.m"
  while (MR_TRUE)
#line 560 "float.m"
    {
#line 560 "float.m"
      /* tailcall optimized into a loop */
#line 560 "float.m"
      {
#line 560 "float.m"
        MR_bool mercury__float__succeeded = (mercury__float__Exp_7 == (MR_Integer) 0);
#line 560 "float.m"
        MR_Float mercury__float__Result_8;

#line 560 "float.m"
        if (mercury__float__succeeded)
#line 559 "float.m"
          mercury__float__Result_8 = mercury__float__Scale0_5;
#line 560 "float.m"
        else
#line 565 "float.m"
          {
#line 565 "float.m"
            MR_Float mercury__float__Scale1_9;
#line 565 "float.m"
            MR_Float mercury__float__V_10_10;
#line 565 "float.m"
            MR_Integer mercury__float__V_12_12;
#line 134 "int.opt"
            MR_Integer mercury__float__V_3_15 = (mercury__float__Exp_7 & (MR_Integer) 1);

#line 136 "int.opt"
            mercury__float__succeeded = (mercury__float__V_3_15 == (MR_Integer) 0);
#line 133 "int.opt"
            mercury__float__succeeded = !(mercury__float__succeeded);
#line 563 "float.m"
            if (mercury__float__succeeded)
#line 562 "float.m"
              mercury__float__Scale1_9 = (mercury__float__Scale0_5 * mercury__float__Base_6);
#line 563 "float.m"
            else
#line 564 "float.m"
              mercury__float__Scale1_9 = mercury__float__Scale0_5;
#line 566 "float.m"
            mercury__float__V_10_10 = (mercury__float__Base_6 * mercury__float__Base_6);
#line 566 "float.m"
            {
#line 566 "float.m"
              mercury__float__V_12_12 = mercury__int__div_2_f_0(mercury__float__Exp_7, (MR_Integer) 2);
            }
#line 566 "float.m"
            /* direct tailcall eliminated */
#line 566 "float.m"
            {
#line 566 "float.m"
              MR_Float mercury__float__Scale0__tmp_copy_5 = mercury__float__Scale1_9;
#line 566 "float.m"
              MR_Float mercury__float__Base__tmp_copy_6 = mercury__float__V_10_10;
#line 566 "float.m"
              MR_Integer mercury__float__Exp__tmp_copy_7 = mercury__float__V_12_12;

#line 566 "float.m"
              mercury__float__Exp_7 = mercury__float__Exp__tmp_copy_7;
#line 566 "float.m"
              mercury__float__Base_6 = mercury__float__Base__tmp_copy_6;
#line 566 "float.m"
              mercury__float__Scale0_5 = mercury__float__Scale0__tmp_copy_5;
#line 566 "float.m"
            }
#line 566 "float.m"
            continue;
#line 565 "float.m"
          }
#line 560 "float.m"
        return mercury__float__Result_8;
#line 560 "float.m"
      }
#line 560 "float.m"
      break;
#line 560 "float.m"
    }
#line 555 "float.m"
}

#line 289 "float.m"
MR_bool MR_CALL 
mercury__float__float_domain_checks_0_p_0(void)
#line 289 "float.m"
{
#line 292 "float.m"
  {
#line 292 "float.m"
    MR_bool mercury__float__succeeded;

#line 296 "float.m"
{
#define MR_PROC_LABEL mercury__float__float_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 296 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 588 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 296 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 292 "float.m"
    return mercury__float__succeeded;
#line 292 "float.m"
  }
#line 289 "float.m"
}

#line 249 "float.m"
MR_String MR_CALL 
mercury__float__float64_bits_string_1_f_0(
#line 249 "float.m"
  MR_Float mercury__float__Flt_1)
#line 249 "float.m"
{
#line 933 "float.m"
  {
#line 933 "float.m"
    MR_bool mercury__float__succeeded;
#line 933 "float.m"
    MR_String mercury__float__Str_2;

#line 936 "float.m"
{
#define MR_PROC_LABEL mercury__float__float64_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{
#line 936 "float.m"

    #if defined(MR_INT_LEAST64_TYPE)
    
        union {
            double f;
            MR_int_least64_t i;
        } u;
        char buf[64];

        u.f = (double) Flt;
        #if defined(MR_MINGW64) || defined(MR_CYGWIN)
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

#line 657 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
#line 936 "float.m"
}
#line 933 "float.m"
    return mercury__float__Str_2;
#line 933 "float.m"
  }
#line 249 "float.m"
}

#line 243 "float.m"
MR_String MR_CALL 
mercury__float__float32_bits_string_1_f_0(
#line 243 "float.m"
  MR_Float mercury__float__Flt_1)
#line 243 "float.m"
{
#line 892 "float.m"
  {
#line 892 "float.m"
    MR_bool mercury__float__succeeded;
#line 892 "float.m"
    MR_String mercury__float__Str_2;

#line 895 "float.m"
{
#define MR_PROC_LABEL mercury__float__float32_bits_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__Flt_1 ;
		{
#line 895 "float.m"

    union {
        float f;
        MR_int_least32_t i;
    } u;
    char buf[64];

    u.f = (float) Flt;
    sprintf(buf, "%d", u.i);
    MR_make_aligned_string_copy(Str, buf);

#line 706 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Str_2  = Str;
#line 895 "float.m"
}
#line 892 "float.m"
    return mercury__float__Str_2;
#line 892 "float.m"
  }
#line 243 "float.m"
}

#line 226 "float.m"
MR_Word MR_CALL 
mercury__float__float_to_doc_1_f_0(
#line 226 "float.m"
  MR_Float mercury__float__X_3)
#line 226 "float.m"
{
#line 888 "float.m"
  {
#line 888 "float.m"
    MR_bool mercury__float__succeeded;
#line 888 "float.m"
    MR_Word mercury__float__HeadVar__2_2;
#line 888 "float.m"
    MR_String mercury__float__V_4_4;

#line 296 "string.opt"
{
#define MR_PROC_LABEL mercury__float__float_to_doc_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__float__X_3 ;
		{
#line 296 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 753 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__V_4_4  = Str;
#line 296 "string.opt"
}
#line 888 "float.m"
    {
#line 888 "float.m"
      mercury__float__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 888 "float.m"
      MR_hl_field(MR_mktag(1), mercury__float__HeadVar__2_2, 0) = ((MR_Box) (mercury__float__V_4_4));
#line 888 "float.m"
    }
#line 888 "float.m"
    return mercury__float__HeadVar__2_2;
#line 888 "float.m"
  }
#line 226 "float.m"
}

#line 222 "float.m"
MR_Integer MR_CALL 
mercury__float__max_exponent_0_f_0(void)
#line 222 "float.m"
{
#line 869 "float.m"
  {
#line 869 "float.m"
    MR_bool mercury__float__succeeded;
#line 869 "float.m"
    MR_Integer mercury__float__MaxExp_1;

#line 873 "float.m"
{
#define MR_PROC_LABEL mercury__float__max_exponent_0_f_0

	MR_Integer MaxExp;

		{
#line 873 "float.m"

	MaxExp = ML_FLOAT_MAX_EXP;

#line 798 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MaxExp_1  = MaxExp;
#line 873 "float.m"
}
#line 869 "float.m"
    return mercury__float__MaxExp_1;
#line 869 "float.m"
  }
#line 222 "float.m"
}

#line 215 "float.m"
MR_Integer MR_CALL 
mercury__float__min_exponent_0_f_0(void)
#line 215 "float.m"
{
#line 852 "float.m"
  {
#line 852 "float.m"
    MR_bool mercury__float__succeeded;
#line 852 "float.m"
    MR_Integer mercury__float__MinExp_1;

#line 856 "float.m"
{
#define MR_PROC_LABEL mercury__float__min_exponent_0_f_0

	MR_Integer MinExp;

		{
#line 856 "float.m"

	MinExp = ML_FLOAT_MIN_EXP;

#line 835 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MinExp_1  = MinExp;
#line 856 "float.m"
}
#line 852 "float.m"
    return mercury__float__MinExp_1;
#line 852 "float.m"
  }
#line 215 "float.m"
}

#line 208 "float.m"
MR_Integer MR_CALL 
mercury__float__mantissa_digits_0_f_0(void)
#line 208 "float.m"
{
#line 835 "float.m"
  {
#line 835 "float.m"
    MR_bool mercury__float__succeeded;
#line 835 "float.m"
    MR_Integer mercury__float__MantDig_1;

#line 839 "float.m"
{
#define MR_PROC_LABEL mercury__float__mantissa_digits_0_f_0

	MR_Integer MantDig;

		{
#line 839 "float.m"

	MantDig = ML_FLOAT_MANT_DIG;

#line 872 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__MantDig_1  = MantDig;
#line 839 "float.m"
}
#line 835 "float.m"
    return mercury__float__MantDig_1;
#line 835 "float.m"
  }
#line 208 "float.m"
}

#line 203 "float.m"
MR_Integer MR_CALL 
mercury__float__radix_0_f_0(void)
#line 203 "float.m"
{
#line 816 "float.m"
  {
#line 816 "float.m"
    MR_bool mercury__float__succeeded;
#line 816 "float.m"
    MR_Integer mercury__float__Radix_1;

#line 820 "float.m"
{
#define MR_PROC_LABEL mercury__float__radix_0_f_0

	MR_Integer Radix;

		{
#line 820 "float.m"

	Radix = ML_FLOAT_RADIX;

#line 909 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Radix_1  = Radix;
#line 820 "float.m"
}
#line 816 "float.m"
    return mercury__float__Radix_1;
#line 816 "float.m"
  }
#line 203 "float.m"
}

#line 198 "float.m"
MR_Float MR_CALL 
mercury__float__epsilon_0_f_0(void)
#line 198 "float.m"
{
#line 793 "float.m"
  {
#line 793 "float.m"
    MR_bool mercury__float__succeeded;
#line 793 "float.m"
    MR_Float mercury__float__Eps_1;

#line 797 "float.m"
{
#define MR_PROC_LABEL mercury__float__epsilon_0_f_0

	MR_Float Eps;

		{
#line 797 "float.m"

	Eps = ML_FLOAT_EPSILON;

#line 946 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Eps_1  = Eps;
#line 797 "float.m"
}
#line 793 "float.m"
    return mercury__float__Eps_1;
#line 793 "float.m"
  }
#line 198 "float.m"
}

#line 190 "float.m"
MR_Float MR_CALL 
mercury__float__min_0_f_0(void)
#line 190 "float.m"
{
#line 771 "float.m"
  {
#line 771 "float.m"
    MR_bool mercury__float__succeeded;
#line 771 "float.m"
    MR_Float mercury__float__Min_1;

#line 775 "float.m"
{
#define MR_PROC_LABEL mercury__float__min_0_f_0

	MR_Float Min;

		{
#line 775 "float.m"

	Min = ML_FLOAT_MIN;

#line 983 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Min_1  = Min;
#line 775 "float.m"
}
#line 771 "float.m"
    return mercury__float__Min_1;
#line 771 "float.m"
  }
#line 190 "float.m"
}

#line 184 "float.m"
MR_Float MR_CALL 
mercury__float__max_0_f_0(void)
#line 184 "float.m"
{
#line 745 "float.m"
  {
#line 745 "float.m"
    MR_bool mercury__float__succeeded;
#line 745 "float.m"
    MR_Float mercury__float__Max_1;

#line 749 "float.m"
{
#define MR_PROC_LABEL mercury__float__max_0_f_0

	MR_Float Max;

		{
#line 749 "float.m"

	Max = ML_FLOAT_MAX;

#line 1020 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Max_1  = Max;
#line 749 "float.m"
}
#line 745 "float.m"
    return mercury__float__Max_1;
#line 745 "float.m"
  }
#line 184 "float.m"
}

#line 173 "float.m"
MR_bool MR_CALL 
mercury__float__is_inf_1_p_0(
#line 173 "float.m"
  MR_Float mercury__float__Flt_1)
#line 173 "float.m"
{
#line 672 "float.m"
  {
#line 672 "float.m"
    MR_bool mercury__float__succeeded;

#line 676 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{
#line 676 "float.m"

	SUCCESS_INDICATOR = MR_is_inf(Flt);

#line 1059 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 676 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 672 "float.m"
    return mercury__float__succeeded;
#line 672 "float.m"
  }
#line 173 "float.m"
}

#line 169 "float.m"
MR_bool MR_CALL 
mercury__float__is_nan_1_p_0(
#line 169 "float.m"
  MR_Float mercury__float__Flt_1)
#line 169 "float.m"
{
#line 636 "float.m"
  {
#line 636 "float.m"
    MR_bool mercury__float__succeeded;

#line 640 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Flt_1 ;
		{
#line 640 "float.m"

	SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 1100 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 640 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 636 "float.m"
    return mercury__float__succeeded;
#line 636 "float.m"
  }
#line 169 "float.m"
}

#line 165 "float.m"
MR_bool MR_CALL 
mercury__float__is_nan_or_inf_1_p_0(
#line 165 "float.m"
  MR_Float mercury__float__Float_2)
#line 165 "float.m"
{
#line 632 "float.m"
  {
#line 632 "float.m"
    MR_bool mercury__float__succeeded;

#line 640 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 640 "float.m"

	SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 1141 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 640 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 632 "float.m"
    if (!(mercury__float__succeeded))
#line 672 "float.m"
      {
#line 676 "float.m"
{
#define MR_PROC_LABEL mercury__float__is_nan_or_inf_1_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__float__Float_2 ;
		{
#line 676 "float.m"

	SUCCESS_INDICATOR = MR_is_inf(Flt);

#line 1167 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 676 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 672 "float.m"
      }
#line 632 "float.m"
    return mercury__float__succeeded;
#line 632 "float.m"
  }
#line 165 "float.m"
}

#line 161 "float.m"
MR_Integer MR_CALL 
mercury__float__hash_1_f_0(
#line 161 "float.m"
  MR_Float mercury__float__F_1)
#line 161 "float.m"
{
#line 593 "float.m"
  {
#line 593 "float.m"
    MR_bool mercury__float__succeeded;
#line 593 "float.m"
    MR_Integer mercury__float__H_2;

#line 597 "float.m"
{
#define MR_PROC_LABEL mercury__float__hash_1_f_0

	MR_Float F;
	MR_Integer H;

	F =  mercury__float__F_1 ;
		{
#line 597 "float.m"

	H = MR_hash_float(F);

#line 1212 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__H_2  = H;
#line 597 "float.m"
}
#line 593 "float.m"
    return mercury__float__H_2;
#line 593 "float.m"
  }
#line 161 "float.m"
}

#line 157 "float.m"
MR_Float MR_CALL 
mercury__float__pow_2_f_0(
#line 157 "float.m"
  MR_Float mercury__float__Base_4,
#line 157 "float.m"
  MR_Integer mercury__float__Exp_5)
#line 157 "float.m"
{
#line 541 "float.m"
  {
#line 541 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__Exp_5 >= (MR_Integer) 0);
#line 541 "float.m"
    MR_Float mercury__float__Ans_6;

#line 541 "float.m"
    if (mercury__float__succeeded)
#line 540 "float.m"
      {
#line 540 "float.m"
        {
#line 540 "float.m"
          return mercury__float__Ans_6 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__Exp_5);
        }
#line 540 "float.m"
      }
#line 541 "float.m"
    else
#line 544 "float.m"
      {
#line 296 "float.m"
{
#define MR_PROC_LABEL mercury__float__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 296 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1272 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 296 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 542 "float.m"
        if (mercury__float__succeeded)
#line 542 "float.m"
          mercury__float__succeeded = (mercury__float__Base_4 == ((MR_Float) 0.0000000000000000));
#line 544 "float.m"
        if (mercury__float__succeeded)
#line 543 "float.m"
          {
#line 543 "float.m"
            MR_Word mercury__float__TypeCtorInfo_15_15 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 543 "float.m"
            MR_Word mercury__float__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "float.pow: zero base"));

#line 543 "float.m"
            {
#line 543 "float.m"
              mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_15_15, ((MR_Box) (mercury__float__V_9_9)));
            }
#line 543 "float.m"
          }
#line 544 "float.m"
        else
#line 545 "float.m"
          {
#line 545 "float.m"
            MR_Float mercury__float__V_12_12;
#line 545 "float.m"
            MR_Integer mercury__float__V_14_14 = ((MR_Integer) 0 - mercury__float__Exp_5);

#line 545 "float.m"
            {
#line 545 "float.m"
              mercury__float__V_12_12 = mercury__float__multiply_by_pow_3_f_0((MR_Float) 1.0000000000000000, mercury__float__Base_4, mercury__float__V_14_14);
            }
#line 545 "float.m"
            mercury__float__Ans_6 = (((MR_Float) 1.0000000000000000) / mercury__float__V_12_12);
#line 545 "float.m"
          }
#line 544 "float.m"
      }
#line 541 "float.m"
    return mercury__float__Ans_6;
#line 541 "float.m"
  }
#line 157 "float.m"
}

#line 150 "float.m"
MR_Float MR_CALL 
mercury__float__min_2_f_0(
#line 150 "float.m"
  MR_Float mercury__float__X_4,
#line 150 "float.m"
  MR_Float mercury__float__Y_5)
#line 150 "float.m"
{
#line 534 "float.m"
  {
#line 534 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__X_4 <= mercury__float__Y_5);
#line 534 "float.m"
    MR_Float mercury__float__Min_6;

#line 534 "float.m"
    if (mercury__float__succeeded)
#line 533 "float.m"
      mercury__float__Min_6 = mercury__float__X_4;
#line 534 "float.m"
    else
#line 535 "float.m"
      mercury__float__Min_6 = mercury__float__Y_5;
#line 534 "float.m"
    return mercury__float__Min_6;
#line 534 "float.m"
  }
#line 150 "float.m"
}

#line 146 "float.m"
MR_Float MR_CALL 
mercury__float__max_2_f_0(
#line 146 "float.m"
  MR_Float mercury__float__X_4,
#line 146 "float.m"
  MR_Float mercury__float__Y_5)
#line 146 "float.m"
{
#line 527 "float.m"
  {
#line 527 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__X_4 >= mercury__float__Y_5);
#line 527 "float.m"
    MR_Float mercury__float__Max_6;

#line 527 "float.m"
    if (mercury__float__succeeded)
#line 526 "float.m"
      mercury__float__Max_6 = mercury__float__X_4;
#line 527 "float.m"
    else
#line 528 "float.m"
      mercury__float__Max_6 = mercury__float__Y_5;
#line 527 "float.m"
    return mercury__float__Max_6;
#line 527 "float.m"
  }
#line 146 "float.m"
}

#line 142 "float.m"
MR_Float MR_CALL 
mercury__float__abs_1_f_0(
#line 142 "float.m"
  MR_Float mercury__float__Num_3)
#line 142 "float.m"
{
#line 520 "float.m"
  {
#line 520 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__Num_3 <= ((MR_Float) 0.0000000000000000));
#line 520 "float.m"
    MR_Float mercury__float__Abs_4;

#line 520 "float.m"
    if (mercury__float__succeeded)
#line 519 "float.m"
      mercury__float__Abs_4 = (((MR_Float) 0.0000000000000000) - mercury__float__Num_3);
#line 520 "float.m"
    else
#line 521 "float.m"
      mercury__float__Abs_4 = mercury__float__Num_3;
#line 520 "float.m"
    return mercury__float__Abs_4;
#line 520 "float.m"
  }
#line 142 "float.m"
}

#line 133 "float.m"
MR_Integer MR_CALL 
mercury__float__truncate_to_int_1_f_0(
#line 133 "float.m"
  MR_Float mercury__float__X_1)
#line 133 "float.m"
{
#line 479 "float.m"
  {
#line 479 "float.m"
    MR_bool mercury__float__succeeded;
#line 479 "float.m"
    MR_Integer mercury__float__Trunc_2;

#line 483 "float.m"
{
#define MR_PROC_LABEL mercury__float__truncate_to_int_1_f_0

	MR_Float X;
	MR_Integer Trunc;

	X =  mercury__float__X_1 ;
		{
#line 483 "float.m"

	Trunc = (MR_Integer) X;

#line 1446 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Trunc_2  = Trunc;
#line 483 "float.m"
}
#line 479 "float.m"
    return mercury__float__Trunc_2;
#line 479 "float.m"
  }
#line 133 "float.m"
}

#line 128 "float.m"
MR_Integer MR_CALL 
mercury__float__round_to_int_1_f_0(
#line 128 "float.m"
  MR_Float mercury__float__X_1)
#line 128 "float.m"
{
#line 444 "float.m"
  {
#line 444 "float.m"
    MR_bool mercury__float__succeeded;
#line 444 "float.m"
    MR_Integer mercury__float__Round_2;

#line 448 "float.m"
{
#define MR_PROC_LABEL mercury__float__round_to_int_1_f_0

	MR_Float X;
	MR_Integer Round;

	X =  mercury__float__X_1 ;
		{
#line 448 "float.m"

	Round = (MR_Integer) floor(X + 0.5);

#line 1487 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Round_2  = Round;
#line 448 "float.m"
}
#line 444 "float.m"
    return mercury__float__Round_2;
#line 444 "float.m"
  }
#line 128 "float.m"
}

#line 123 "float.m"
MR_Integer MR_CALL 
mercury__float__floor_to_int_1_f_0(
#line 123 "float.m"
  MR_Float mercury__float__X_1)
#line 123 "float.m"
{
#line 405 "float.m"
  {
#line 405 "float.m"
    MR_bool mercury__float__succeeded;
#line 405 "float.m"
    MR_Integer mercury__float__Floor_2;

#line 409 "float.m"
{
#define MR_PROC_LABEL mercury__float__floor_to_int_1_f_0

	MR_Float X;
	MR_Integer Floor;

	X =  mercury__float__X_1 ;
		{
#line 409 "float.m"

	Floor = (MR_Integer) floor(X);

#line 1528 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Floor_2  = Floor;
#line 409 "float.m"
}
#line 405 "float.m"
    return mercury__float__Floor_2;
#line 405 "float.m"
  }
#line 123 "float.m"
}

#line 119 "float.m"
MR_Integer MR_CALL 
mercury__float__ceiling_to_int_1_f_0(
#line 119 "float.m"
  MR_Float mercury__float__X_1)
#line 119 "float.m"
{
#line 366 "float.m"
  {
#line 366 "float.m"
    MR_bool mercury__float__succeeded;
#line 366 "float.m"
    MR_Integer mercury__float__Ceil_2;

#line 370 "float.m"
{
#define MR_PROC_LABEL mercury__float__ceiling_to_int_1_f_0

	MR_Float X;
	MR_Integer Ceil;

	X =  mercury__float__X_1 ;
		{
#line 370 "float.m"

	Ceil = (MR_Integer) ceil(X);

#line 1569 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__Ceil_2  = Ceil;
#line 370 "float.m"
}
#line 366 "float.m"
    return mercury__float__Ceil_2;
#line 366 "float.m"
  }
#line 119 "float.m"
}

#line 115 "float.m"
MR_Float MR_CALL 
mercury__float__float_1_f_0(
#line 115 "float.m"
  MR_Integer mercury__float__IntVal_1)
#line 115 "float.m"
{
#line 337 "float.m"
  {
#line 337 "float.m"
    MR_bool mercury__float__succeeded;
#line 337 "float.m"
    MR_Float mercury__float__FloatVal_2;

#line 341 "float.m"
{
#define MR_PROC_LABEL mercury__float__float_1_f_0

	MR_Integer IntVal;
	MR_Float FloatVal;

	IntVal =  mercury__float__IntVal_1 ;
		{
#line 341 "float.m"

	FloatVal = IntVal;

#line 1610 "float.c"

		;}
#undef MR_PROC_LABEL
	 mercury__float__FloatVal_2  = FloatVal;
#line 341 "float.m"
}
#line 337 "float.m"
    return mercury__float__FloatVal_2;
#line 337 "float.m"
  }
#line 115 "float.m"
}

#line 106 "float.m"
MR_bool MR_CALL 
mercury__float__f_greater_than_2_p_0(
#line 106 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 106 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 106 "float.m"
{
#line 106 "float.m"
  {
#line 106 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 > mercury__float__HeadVar__2_2);

#line 106 "float.m"
    return mercury__float__succeeded;
#line 106 "float.m"
  }
#line 106 "float.m"
}

#line 105 "float.m"
MR_bool MR_CALL 
mercury__float__f_greater_or_equal_2_p_0(
#line 105 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 105 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 105 "float.m"
{
#line 105 "float.m"
  {
#line 105 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 >= mercury__float__HeadVar__2_2);

#line 105 "float.m"
    return mercury__float__succeeded;
#line 105 "float.m"
  }
#line 105 "float.m"
}

#line 104 "float.m"
MR_bool MR_CALL 
mercury__float__f_less_or_equal_2_p_0(
#line 104 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 104 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 104 "float.m"
{
#line 104 "float.m"
  {
#line 104 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 <= mercury__float__HeadVar__2_2);

#line 104 "float.m"
    return mercury__float__succeeded;
#line 104 "float.m"
  }
#line 104 "float.m"
}

#line 103 "float.m"
MR_bool MR_CALL 
mercury__float__f_less_than_2_p_0(
#line 103 "float.m"
  MR_Float mercury__float__HeadVar__1_1,
#line 103 "float.m"
  MR_Float mercury__float__HeadVar__2_2)
#line 103 "float.m"
{
#line 103 "float.m"
  {
#line 103 "float.m"
    MR_bool mercury__float__succeeded = (mercury__float__HeadVar__1_1 < mercury__float__HeadVar__2_2);

#line 103 "float.m"
    return mercury__float__succeeded;
#line 103 "float.m"
  }
#line 103 "float.m"
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
#line 280 "float.m"
  {
#line 280 "float.m"
    MR_bool mercury__float__succeeded;
#line 280 "float.m"
    MR_Float mercury__float__Z_6;

#line 296 "float.m"
{
#define MR_PROC_LABEL mercury__float__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 296 "float.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
	SUCCESS_INDICATOR = MR_FALSE;
#else
	SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1804 "float.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 296 "float.m"
	}
mercury__float__succeeded  = SUCCESS_INDICATOR;
}
#line 278 "float.m"
    if (mercury__float__succeeded)
#line 278 "float.m"
      mercury__float__succeeded = (mercury__float__Y_5 == ((MR_Float) 0.0000000000000000));
#line 280 "float.m"
    if (mercury__float__succeeded)
#line 279 "float.m"
      {
#line 279 "float.m"
        MR_Word mercury__float__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 279 "float.m"
        MR_Word mercury__float__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 279 "float.m"
        {
#line 279 "float.m"
          mercury__exception__throw_1_p_0(mercury__float__TypeCtorInfo_9_9, ((MR_Box) (mercury__float__V_7_7)));
        }
#line 279 "float.m"
      }
#line 280 "float.m"
    else
#line 281 "float.m"
      mercury__float__Z_6 = (mercury__float__X_4 / mercury__float__Y_5);
#line 280 "float.m"
    return mercury__float__Z_6;
#line 280 "float.m"
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
