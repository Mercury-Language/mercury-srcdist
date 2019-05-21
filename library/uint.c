/*
** Automatically generated from `uint.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module uint. */
/* :- implementation. */

/*
INIT mercury__uint__init
ENDINIT
*/

#include "uint.mih"


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
#include "float.mih"
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




static MR_Integer MR_CALL 
mercury__uint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__uint_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__uint_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint_scalar_common_2[0])),
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
mercury__uint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Word MR_CALL 
mercury__uint__uint_to_doc_1_f_0(
  MR_Unsigned mercury__uint__X_3)
{
  {
    MR_Word mercury__uint__HeadVar__2_2;
    MR_String mercury__uint__Var_4;

{
#define MR_PROC_LABEL mercury__uint__uint_to_doc_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U =  mercury__uint__X_3 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_4  = Str;
}
    {
      mercury__uint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__uint__HeadVar__2_2, 0) = ((MR_Box) (mercury__uint__Var_4));
    }
    return mercury__uint__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__uint__bits_per_uint_0_f_0(void)
{
  {
    MR_Integer mercury__uint__Bits_1;

{
#define MR_PROC_LABEL mercury__uint__bits_per_uint_0_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Bits_1  = Bits;
}
    return mercury__uint__Bits_1;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__max_uint_0_f_0(void)
{
  {
    MR_Unsigned mercury__uint__Max_1;

{
#define MR_PROC_LABEL mercury__uint__max_uint_0_f_0

	MR_Unsigned Max;

		{

    if (sizeof(MR_Unsigned) == sizeof(unsigned int)) {
        Max = UINT_MAX;
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long)) {
        Max = (MR_Unsigned) ULONG_MAX;
    #if defined(ULLONG_MAX)
    } else if (sizeof(MR_Unsigned) == sizeof(unsigned long long)) {
        Max = (MR_Unsigned) ULLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max uint size");
    }


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Max_1  = Max;
}
    return mercury__uint__Max_1;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_92_1_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1)
{
  {
    MR_Unsigned mercury__uint__HeadVar__2_2 = ~(mercury__uint__HeadVar__1_1);

    return mercury__uint__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__uint__xor_2_f_2(
  MR_Unsigned * mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__1_1 = (mercury__uint__HeadVar__2_2 ^ mercury__uint__HeadVar__3_3);
}

void MR_CALL 
mercury__uint__xor_2_f_1(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned * mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__2_2 = (mercury__uint__HeadVar__1_1 ^ mercury__uint__HeadVar__3_3);
}

MR_Unsigned MR_CALL 
mercury__uint__xor_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 ^ mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_92_47_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 | mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_47_92_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 & mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint__odd_1_p_0(
  MR_Unsigned mercury__uint__X_2)
{
  {
    MR_bool mercury__uint__succeeded;
    MR_Unsigned mercury__uint__Var_3 = (mercury__uint__X_2 & 1U);

    mercury__uint__succeeded = (mercury__uint__Var_3 == 0U);
    mercury__uint__succeeded = !(mercury__uint__succeeded);
    return mercury__uint__succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__even_1_p_0(
  MR_Unsigned mercury__uint__X_2)
{
  {
    MR_bool mercury__uint__succeeded;
    MR_Unsigned mercury__uint__Var_3 = (mercury__uint__X_2 & 1U);

    mercury__uint__succeeded = (mercury__uint__Var_3 == 0U);
    return mercury__uint__succeeded;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_right_shift_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Integer mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 >> mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_62_62_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Integer mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded;
    MR_Unsigned mercury__uint__Result_6;
    MR_Unsigned mercury__uint__Var_8;
    MR_Unsigned mercury__uint__Var_9;
    MR_Integer mercury__uint__Var_10;

{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__uint__Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_8  = U;
}
{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_10  = Bits;
}
{
#define MR_PROC_LABEL mercury__uint__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__uint__Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_9  = U;
}
    mercury__uint__succeeded = (mercury__uint__Var_8 < mercury__uint__Var_9);
    if (mercury__uint__succeeded)
      mercury__uint__Result_6 = (mercury__uint__X_4 >> mercury__uint__Y_5);
    else
    {
      MR_Word mercury__uint__TypeCtorInfo_12_12 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_11 = (MR_Word) ((MR_Box) ((MR_String) "uint.(>>): second operand is out of range"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_12_12, ((MR_Box) (mercury__uint__Var_11)));
    }
    return mercury__uint__Result_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_left_shift_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Integer mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 << mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_60_60_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Integer mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded;
    MR_Unsigned mercury__uint__Result_6;
    MR_Unsigned mercury__uint__Var_8;
    MR_Unsigned mercury__uint__Var_9;
    MR_Integer mercury__uint__Var_10;

{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__uint__Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_8  = U;
}
{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_10  = Bits;
}
{
#define MR_PROC_LABEL mercury__uint__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__uint__Var_10 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__Var_9  = U;
}
    mercury__uint__succeeded = (mercury__uint__Var_8 < mercury__uint__Var_9);
    if (mercury__uint__succeeded)
      mercury__uint__Result_6 = (mercury__uint__X_4 << mercury__uint__Y_5);
    else
    {
      MR_Word mercury__uint__TypeCtorInfo_12_12 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_11 = (MR_Word) ((MR_Box) ((MR_String) "uint.(<<): second operand is out of range"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_12_12, ((MR_Box) (mercury__uint__Var_11)));
    }
    return mercury__uint__Result_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_rem_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 % mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__rem_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__Y_5 == 0U);
    MR_Unsigned mercury__uint__Rem_6;

    if (mercury__uint__succeeded)
    {
      MR_Word mercury__uint__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "uint.rem: division by zero"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_9_9, ((MR_Box) (mercury__uint__Var_7)));
    }
    else
      mercury__uint__Rem_6 = (mercury__uint__X_4 % mercury__uint__Y_5);
    return mercury__uint__Rem_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__mod_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__Y_5 == 0U);
    MR_Unsigned mercury__uint__HeadVar__3_3;

    if (mercury__uint__succeeded)
    {
      MR_Word mercury__uint__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint.rem: division by zero"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_9_11, ((MR_Box) (mercury__uint__Var_9)));
    }
    else
      mercury__uint__HeadVar__3_3 = (mercury__uint__X_4 % mercury__uint__Y_5);
    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__unchecked_quotient_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 / mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_slash_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__Y_5 == 0U);
    MR_Unsigned mercury__uint__HeadVar__3_3;

    if (mercury__uint__succeeded)
    {
      MR_Word mercury__uint__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_9_11, ((MR_Box) (mercury__uint__Var_9)));
    }
    else
      mercury__uint__HeadVar__3_3 = (mercury__uint__X_4 / mercury__uint__Y_5);
    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_47_47_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__Y_5 == 0U);
    MR_Unsigned mercury__uint__Div_6;

    if (mercury__uint__succeeded)
    {
      MR_Word mercury__uint__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "uint.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_9_9, ((MR_Box) (mercury__uint__Var_7)));
    }
    else
      mercury__uint__Div_6 = (mercury__uint__X_4 / mercury__uint__Y_5);
    return mercury__uint__Div_6;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__div_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__Y_5 == 0U);
    MR_Unsigned mercury__uint__HeadVar__3_3;

    if (mercury__uint__succeeded)
    {
      MR_Word mercury__uint__TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word mercury__uint__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(mercury__uint__TypeCtorInfo_9_11, ((MR_Box) (mercury__uint__Var_9)));
    }
    else
      mercury__uint__HeadVar__3_3 = (mercury__uint__X_4 / mercury__uint__Y_5);
    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__min_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__X_4 < mercury__uint__Y_5);
    MR_Unsigned mercury__uint__HeadVar__3_3;

    if (mercury__uint__succeeded)
      mercury__uint__HeadVar__3_3 = mercury__uint__X_4;
    else
      mercury__uint__HeadVar__3_3 = mercury__uint__Y_5;
    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__max_2_f_0(
  MR_Unsigned mercury__uint__X_4,
  MR_Unsigned mercury__uint__Y_5)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__X_4 > mercury__uint__Y_5);
    MR_Unsigned mercury__uint__HeadVar__3_3;

    if (mercury__uint__succeeded)
      mercury__uint__HeadVar__3_3 = mercury__uint__X_4;
    else
      mercury__uint__HeadVar__3_3 = mercury__uint__Y_5;
    return mercury__uint__HeadVar__3_3;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__f_times_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 * mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint__f_minus_2_f_2(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned * mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__2_2 = (mercury__uint__HeadVar__1_1 - mercury__uint__HeadVar__3_3);
}

void MR_CALL 
mercury__uint__f_minus_2_f_1(
  MR_Unsigned * mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__1_1 = (mercury__uint__HeadVar__2_2 + mercury__uint__HeadVar__3_3);
}

MR_Unsigned MR_CALL 
mercury__uint__f_minus_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 - mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint__f_plus_2_f_2(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned * mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__2_2 = (mercury__uint__HeadVar__3_3 - mercury__uint__HeadVar__1_1);
}

void MR_CALL 
mercury__uint__f_plus_2_f_1(
  MR_Unsigned * mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2,
  MR_Unsigned mercury__uint__HeadVar__3_3)
{
  *mercury__uint__HeadVar__1_1 = (mercury__uint__HeadVar__3_3 - mercury__uint__HeadVar__2_2);
}

MR_Unsigned MR_CALL 
mercury__uint__f_plus_2_f_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_Unsigned mercury__uint__HeadVar__3_3 = (mercury__uint__HeadVar__1_1 + mercury__uint__HeadVar__2_2);

    return mercury__uint__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint__f_greater_or_equal_2_p_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__HeadVar__1_1 >= mercury__uint__HeadVar__2_2);

    return mercury__uint__succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_less_or_equal_2_p_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__HeadVar__1_1 <= mercury__uint__HeadVar__2_2);

    return mercury__uint__succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_greater_than_2_p_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__HeadVar__1_1 > mercury__uint__HeadVar__2_2);

    return mercury__uint__succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint__f_less_than_2_p_0(
  MR_Unsigned mercury__uint__HeadVar__1_1,
  MR_Unsigned mercury__uint__HeadVar__2_2)
{
  {
    MR_bool mercury__uint__succeeded = (mercury__uint__HeadVar__1_1 < mercury__uint__HeadVar__2_2);

    return mercury__uint__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__uint__cast_to_int_1_f_0(
  MR_Unsigned mercury__uint__U_1)
{
  {
    MR_Integer mercury__uint__I_2;

{
#define MR_PROC_LABEL mercury__uint__cast_to_int_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U =  mercury__uint__U_1 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__I_2  = I;
}
    return mercury__uint__I_2;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__cast_from_int_1_f_0(
  MR_Integer mercury__uint__I_1)
{
  {
    MR_Unsigned mercury__uint__U_2;

{
#define MR_PROC_LABEL mercury__uint__cast_from_int_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  mercury__uint__I_1 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 mercury__uint__U_2  = U;
}
    return mercury__uint__U_2;
  }
}

MR_Unsigned MR_CALL 
mercury__uint__det_from_int_1_f_0(
  MR_Integer mercury__uint__I_3)
{
  {
    MR_bool mercury__uint__succeeded;
    MR_Unsigned mercury__uint__U_4;
    MR_Unsigned mercury__uint__UPrime_5;

{
#define MR_PROC_LABEL mercury__uint__det_from_int_1_f_0

	MR_Integer I;
	MR_Unsigned U;
	MR_bool SUCCESS_INDICATOR;

	I =  mercury__uint__I_3 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U = (MR_Unsigned) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__uint__UPrime_5  = U;
	}
mercury__uint__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__uint__succeeded)
      mercury__uint__U_4 = mercury__uint__UPrime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "uint.det_from_int: cannot convert int to uint");
    }
    return mercury__uint__U_4;
  }
}

MR_bool MR_CALL 
mercury__uint__from_int_2_p_0(
  MR_Integer mercury__uint__I_1,
  MR_Unsigned * mercury__uint__U_2)
{
  {
    MR_bool mercury__uint__succeeded;

{
#define MR_PROC_LABEL mercury__uint__from_int_2_p_0

	MR_Integer I;
	MR_Unsigned U;
	MR_bool SUCCESS_INDICATOR;

	I =  mercury__uint__I_1 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U = (MR_Unsigned) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__uint__U_2  = U;
	}
mercury__uint__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__uint__succeeded;
  }
}

void mercury__uint__init(void)
{
}

void mercury__uint__init_type_tables(void)
{
}

void mercury__uint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module uint. */
