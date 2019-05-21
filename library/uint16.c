/*
** Automatically generated from `uint16.m'
** by the Mercury compiler,
** version rotd-2017-11-30
** configured for x86_64-pc-linux-gnu.
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


// :- module uint16.
// :- implementation.

/*
INIT mercury__uint16__init
ENDINIT
*/

#include "uint16.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
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
#include "uint32.mih"
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




static MR_Integer MR_CALL 
mercury__uint16__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__uint16_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint16_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint16_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__uint16_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint16_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint16_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint16_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint16_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint16_scalar_common_2[0])),
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
#include "int16.mh"
#include "int32.mh"
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
#include "uint8.mh"
#include "version_array.mh"



static MR_Integer MR_CALL 
mercury__uint16__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Word MR_CALL 
mercury__uint16__uint16_to_doc_1_f_0(
  uint16_t X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__uint16__uint16_to_doc_1_f_0

	uint16_t U16;
	MR_String S;

	U16 =  X_3 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_4  = S;
}
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

uint16_t MR_CALL 
mercury__uint16__max_uint16_0_f_0(void)
{
  {
    return UINT16_C(65535);
  }
}

uint16_t MR_CALL 
mercury__uint16__reverse_bytes_1_f_0(
  uint16_t A_1)
{
  {
    uint16_t B_2;

{
#define MR_PROC_LABEL mercury__uint16__reverse_bytes_1_f_0

	uint16_t A;
	uint16_t B;

	A =  A_1 ;
		{

    B = MR_uint16_reverse_bytes(A);


		;}
#undef MR_PROC_LABEL
	 B_2  = B;
}
    return B_2;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_92_1_f_0(
  uint16_t HeadVar__1_1)
{
  {
    uint16_t HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__uint16__xor_2_f_2(
  uint16_t * HeadVar__1_1,
  uint16_t HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__uint16__xor_2_f_1(
  uint16_t HeadVar__1_1,
  uint16_t * HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

uint16_t MR_CALL 
mercury__uint16__xor_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_92_47_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_47_92_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint16__odd_1_p_0(
  uint16_t X_2)
{
  {
    MR_bool succeeded;
    uint16_t Var_3 = (X_2 & UINT16_C(1));

    succeeded = (Var_3 == UINT16_C(0));
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint16__even_1_p_0(
  uint16_t X_2)
{
  {
    MR_bool succeeded;
    uint16_t Var_3 = (X_2 & UINT16_C(1));

    succeeded = (Var_3 == UINT16_C(0));
    return succeeded;
  }
}

uint16_t MR_CALL 
mercury__uint16__unchecked_right_shift_2_f_0(
  uint16_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_62_62_2_f_0(
  uint16_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    uint16_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint16__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < 16U);
    if (succeeded)
      Result_6 = (X_4 >> Y_5);
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_10 = (MR_Word) ((MR_Box) ((MR_String) "uint16.(>>): second operand is out of range"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Var_10)));
    }
    return Result_6;
  }
}

uint16_t MR_CALL 
mercury__uint16__unchecked_left_shift_2_f_0(
  uint16_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_60_60_2_f_0(
  uint16_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    uint16_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint16__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < 16U);
    if (succeeded)
      Result_6 = (X_4 << Y_5);
    else
    {
      MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_10 = (MR_Word) ((MR_Box) ((MR_String) "uint16.(<<): second operand is out of range"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_11_11, ((MR_Box) (Var_10)));
    }
    return Result_6;
  }
}

uint16_t MR_CALL 
mercury__uint16__unchecked_rem_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__rem_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT16_C(0));
    uint16_t Rem_6;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_String) "uint16.rem: division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_7)));
    }
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

uint16_t MR_CALL 
mercury__uint16__mod_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT16_C(0));
    uint16_t HeadVar__3_3;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint16.rem: division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_11, ((MR_Box) (Var_9)));
    }
    else
      HeadVar__3_3 = (X_4 % Y_5);
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__unchecked_quotient_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_slash_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT16_C(0));
    uint16_t HeadVar__3_3;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint16.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_11, ((MR_Box) (Var_9)));
    }
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_47_47_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT16_C(0));
    uint16_t Div_6;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_7 = (MR_Word) ((MR_Box) ((MR_String) "uint16.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_7)));
    }
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

uint16_t MR_CALL 
mercury__uint16__div_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT16_C(0));
    uint16_t HeadVar__3_3;

    if (succeeded)
    {
      MR_Word TypeCtorInfo_9_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
      MR_Word Var_9 = (MR_Word) ((MR_Box) ((MR_String) "uint16.\'//\': division by zero"));

      mercury__exception__throw_1_p_0(TypeCtorInfo_9_11, ((MR_Box) (Var_9)));
    }
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__min_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    uint16_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__max_2_f_0(
  uint16_t X_4,
  uint16_t Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    uint16_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__times_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__f_times_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__minus_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint16__f_minus_2_f_2(
  uint16_t HeadVar__1_1,
  uint16_t * HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__uint16__f_minus_2_f_1(
  uint16_t * HeadVar__1_1,
  uint16_t HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

uint16_t MR_CALL 
mercury__uint16__f_minus_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__plus_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint16__f_plus_2_f_2(
  uint16_t HeadVar__1_1,
  uint16_t * HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__uint16__f_plus_2_f_1(
  uint16_t * HeadVar__1_1,
  uint16_t HeadVar__2_2,
  uint16_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

uint16_t MR_CALL 
mercury__uint16__f_plus_2_f_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    uint16_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint16__f_greater_or_equal_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint16__f_less_or_equal_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint16__f_greater_than_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint16__f_less_than_2_p_0(
  uint16_t HeadVar__1_1,
  uint16_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

uint16_t MR_CALL 
mercury__uint16__from_bytes_be_2_f_0(
  uint8_t MSB_4,
  uint8_t LSB_5)
{
  {
    uint16_t HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__uint16__from_bytes_be_2_f_0

	uint8_t LSB;
	uint8_t MSB;
	uint16_t U16;

	LSB =  LSB_5 ;
	MSB =  MSB_4 ;
		{

    unsigned char *uint16_bytes = (unsigned char *) &U16;
#if defined(MR_BIG_ENDIAN)
    uint16_bytes[0] = MSB;
    uint16_bytes[1] = LSB;
#else
    uint16_bytes[0] = LSB;
    uint16_bytes[1] = MSB;
#endif


		;}
#undef MR_PROC_LABEL
	 HeadVar__3_3  = U16;
}
    return HeadVar__3_3;
  }
}

uint16_t MR_CALL 
mercury__uint16__from_bytes_le_2_f_0(
  uint8_t LSB_1,
  uint8_t MSB_2)
{
  {
    uint16_t U16_3;

{
#define MR_PROC_LABEL mercury__uint16__from_bytes_le_2_f_0

	uint8_t LSB;
	uint8_t MSB;
	uint16_t U16;

	LSB =  LSB_1 ;
	MSB =  MSB_2 ;
		{

    unsigned char *uint16_bytes = (unsigned char *) &U16;
#if defined(MR_BIG_ENDIAN)
    uint16_bytes[0] = MSB;
    uint16_bytes[1] = LSB;
#else
    uint16_bytes[0] = LSB;
    uint16_bytes[1] = MSB;
#endif


		;}
#undef MR_PROC_LABEL
	 U16_3  = U16;
}
    return U16_3;
  }
}

MR_Integer MR_CALL 
mercury__uint16__to_int_1_f_0(
  uint16_t U16_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint16__to_int_1_f_0

	uint16_t U16;
	MR_Integer I;

	U16 =  U16_1 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

uint16_t MR_CALL 
mercury__uint16__cast_from_int16_1_f_0(
  int16_t I16_1)
{
  {
    uint16_t U16_2;

{
#define MR_PROC_LABEL mercury__uint16__cast_from_int16_1_f_0

	int16_t I16;
	uint16_t U16;

	I16 =  I16_1 ;
		{

    U16 = (uint16_t) I16;


		;}
#undef MR_PROC_LABEL
	 U16_2  = U16;
}
    return U16_2;
  }
}

uint16_t MR_CALL 
mercury__uint16__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  {
    uint16_t U16_2;

{
#define MR_PROC_LABEL mercury__uint16__cast_from_int_1_f_0

	MR_Integer I;
	uint16_t U16;

	I =  I_1 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	 U16_2  = U16;
}
    return U16_2;
  }
}

uint16_t MR_CALL 
mercury__uint16__det_from_int_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded = (I_3 >= (MR_Integer) 0);
    uint16_t U16_4;
    uint16_t U16Prime_5;
    MR_Integer Var_10;

    if (succeeded)
    {
      Var_10 = (MR_Integer) 65535;
      succeeded = (I_3 <= Var_10);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__uint16__det_from_int_1_f_0

	MR_Integer I;
	uint16_t U16;

	I =  I_3 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	 U16Prime_5  = U16;
}
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      U16_4 = U16Prime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "uint16.det_from_int: cannot convert int to uint16");
    }
    return U16_4;
  }
}

MR_bool MR_CALL 
mercury__uint16__from_int_2_p_0(
  MR_Integer I_3,
  uint16_t * U8_4)
{
  {
    MR_bool succeeded = (I_3 >= (MR_Integer) 0);
    MR_Integer Var_6;

    if (succeeded)
    {
      Var_6 = (MR_Integer) 65535;
      succeeded = (I_3 <= Var_6);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__uint16__from_int_2_p_0

	MR_Integer I;
	uint16_t U16;

	I =  I_3 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	 *U8_4  = U16;
}
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void mercury__uint16__init(void)
{
}

void mercury__uint16__init_type_tables(void)
{
}

void mercury__uint16__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint16__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module uint16.
