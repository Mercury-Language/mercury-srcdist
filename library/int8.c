/*
** Automatically generated from `int8.m'
** by the Mercury compiler,
** version rotd-2021-01-24
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


// :- module int8.
// :- implementation.

/*
INIT mercury__int8__init
ENDINIT
*/

#include "int8.mih"


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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
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




static MR_Integer MR_CALL 
mercury__int8__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__int8_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int8_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int8_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__int8_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int8_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int8_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int8_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int8_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int8_scalar_common_2[0])),
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



static MR_Integer MR_CALL 
mercury__int8__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

MR_Word MR_CALL 
mercury__int8__int8_to_doc_1_f_0(
  int8_t X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__int8__int8_to_doc_1_f_0

	int8_t I8;
	MR_String S;

	I8 = X_3 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_4  = S;
}
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__max_int8_0_f_0(void)
{
  return INT8_C(127);
}

int8_t MR_CALL 
mercury__int8__min_int8_0_f_0(void)
{
  return INT8_C(-128);
}

int8_t MR_CALL 
mercury__int8__reverse_bits_1_f_0(
  int8_t I8_3)
{
  {
    int8_t RevI8_4;
    uint8_t U8_5;
    uint8_t RevU8_6;

{
#define MR_PROC_LABEL mercury__int8__reverse_bits_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 U8_5  = U8;
}
    RevU8_6 = mercury__uint8__reverse_bits_1_f_0(U8_5);
{
#define MR_PROC_LABEL mercury__int8__reverse_bits_1_f_0

	uint8_t U8;
	int8_t I8;

	U8 = RevU8_6 ;
		{

    I8 = U8;


		;}
#undef MR_PROC_LABEL
	 RevI8_4  = I8;
}
    return RevI8_4;
  }
}

MR_Integer MR_CALL 
mercury__int8__num_trailing_zeros_1_f_0(
  int8_t I8_3)
{
  {
    MR_Integer N_4;
    uint8_t U8_5;

{
#define MR_PROC_LABEL mercury__int8__num_trailing_zeros_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 U8_5  = U8;
}
    N_4 = mercury__uint8__num_trailing_zeros_1_f_0(U8_5);
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int8__num_leading_zeros_1_f_0(
  int8_t I8_3)
{
  {
    MR_Integer N_4;
    uint8_t U8_5;

{
#define MR_PROC_LABEL mercury__int8__num_leading_zeros_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 U8_5  = U8;
}
{
#define MR_PROC_LABEL mercury__int8__num_leading_zeros_1_f_0

	uint8_t I;
	MR_Integer N;

	I = U8_5 ;
		{

    N = ML_uint8_nlz_table[I];


		;}
#undef MR_PROC_LABEL
	 N_4  = N;
}
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int8__num_ones_1_f_0(
  int8_t I8_3)
{
  {
    MR_Integer N_4;
    uint8_t U8_5;

{
#define MR_PROC_LABEL mercury__int8__num_ones_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 U8_5  = U8;
}
{
#define MR_PROC_LABEL mercury__int8__num_ones_1_f_0

	uint8_t U;
	MR_Integer N;

	U = U8_5 ;
		{

    N = ML_uint8_num_ones_table[U];


		;}
#undef MR_PROC_LABEL
	 N_4  = N;
}
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int8__num_zeros_1_f_0(
  int8_t I_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5;
    uint8_t U8_8;

{
#define MR_PROC_LABEL mercury__int8__num_zeros_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	 U8_8  = U8;
}
{
#define MR_PROC_LABEL mercury__int8__num_zeros_1_f_0

	uint8_t U;
	MR_Integer N;

	U = U8_8 ;
		{

    N = ML_uint8_num_ones_table[U];


		;}
#undef MR_PROC_LABEL
	 Var_5  = N;
}
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) Var_5);
    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__f_92_1_f_0(
  int8_t HeadVar__1_1)
{
  {
    int8_t HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__int8__xor_2_f_2(
  int8_t * HeadVar__1_1,
  int8_t HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__int8__xor_2_f_1(
  int8_t HeadVar__1_1,
  int8_t * HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

int8_t MR_CALL 
mercury__int8__xor_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_92_47_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_47_92_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__unchecked_right_shift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_62_62_2_f_0(
  int8_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int8_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int8__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < (MR_Unsigned) 8U);
    if (succeeded)
      Result_6 = (X_4 >> Y_5);
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.(>>): second operand is out of range")))));
    return Result_6;
  }
}

int8_t MR_CALL 
mercury__int8__unchecked_left_shift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_60_60_2_f_0(
  int8_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int8_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int8__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	 Var_8  = U;
}
    succeeded = (Var_8 < (MR_Unsigned) 8U);
    if (succeeded)
      Result_6 = (X_4 << Y_5);
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.(<<): second operand is out of range")))));
    return Result_6;
  }
}

MR_bool MR_CALL 
mercury__int8__odd_1_p_0(
  int8_t X_2)
{
  {
    MR_bool succeeded;
    int8_t Var_3 = (X_2 & INT8_C(1));

    succeeded = (Var_3 != INT8_C(0));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int8__even_1_p_0(
  int8_t X_2)
{
  {
    MR_bool succeeded;
    int8_t Var_3 = (X_2 & INT8_C(1));

    succeeded = (Var_3 == INT8_C(0));
    return succeeded;
  }
}

int8_t MR_CALL 
mercury__int8__unchecked_rem_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__rem_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT8_C(0));
    int8_t Rem_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.rem: division by zero")))));
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

int8_t MR_CALL 
mercury__int8__mod_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    int8_t HeadVar__3_3;
    int8_t Var_6;
    int8_t Var_7;

    Var_7 = mercury__int8__div_2_f_0(X_4, Y_5);
    Var_6 = (int8_t) ((uint8_t) Var_7 * (uint8_t) Y_5);
    HeadVar__3_3 = (int8_t) ((uint8_t) X_4 - (uint8_t) Var_6);
    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__unchecked_quotient_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_slash_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT8_C(0));
    int8_t HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_47_47_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT8_C(0));
    int8_t Div_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

int8_t MR_CALL 
mercury__int8__div_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT8_C(0));
    int8_t Div_6;
    int8_t Trunc_7;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
    else
      Trunc_7 = (X_4 / Y_5);
    {
      int8_t Var_12;

      succeeded = (X_4 >= INT8_C(0));
      if (succeeded)
      {
        Var_12 = INT8_C(0);
        succeeded = (Y_5 >= Var_12);
      }
    }
    if (!(succeeded))
    {
      {
        int8_t Var_10;

        succeeded = (X_4 < INT8_C(0));
        if (succeeded)
        {
          Var_10 = INT8_C(0);
          succeeded = (Y_5 < Var_10);
        }
      }
      if (!(succeeded))
      {
        int8_t Var_8;

        succeeded = (Y_5 == INT8_C(0));
        if (succeeded)
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.rem: division by zero")))));
        else
          Var_8 = (X_4 % Y_5);
        succeeded = (Var_8 == INT8_C(0));
      }
    }
    if (succeeded)
      Div_6 = Trunc_7;
    else
      Div_6 = (int8_t) ((uint8_t) Trunc_7 - (uint8_t) 1);
    return Div_6;
  }
}

int8_t MR_CALL 
mercury__int8__times_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 * (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_times_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 * (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__minus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 - (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int8__f_minus_2_f_2(
  int8_t HeadVar__1_1,
  int8_t * HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int8_t) ((uint8_t) HeadVar__1_1 - (uint8_t) HeadVar__3_3);
}

void MR_CALL 
mercury__int8__f_minus_2_f_1(
  int8_t * HeadVar__1_1,
  int8_t HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int8_t) ((uint8_t) HeadVar__2_2 + (uint8_t) HeadVar__3_3);
}

int8_t MR_CALL 
mercury__int8__f_minus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 - (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__plus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 + (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int8__f_plus_2_f_2(
  int8_t HeadVar__1_1,
  int8_t * HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int8_t) ((uint8_t) HeadVar__3_3 - (uint8_t) HeadVar__1_1);
}

void MR_CALL 
mercury__int8__f_plus_2_f_1(
  int8_t * HeadVar__1_1,
  int8_t HeadVar__2_2,
  int8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int8_t) ((uint8_t) HeadVar__3_3 - (uint8_t) HeadVar__2_2);
}

int8_t MR_CALL 
mercury__int8__f_plus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 + (uint8_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__f_minus_1_f_0(
  int8_t HeadVar__1_1)
{
  {
    int8_t HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) HeadVar__1_1);

    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__f_plus_1_f_0(
  int8_t HeadVar__1_1)
{
  {
    int8_t HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__nabs_1_f_0(
  int8_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 > INT8_C(0));
    int8_t HeadVar__2_2;

    if (succeeded)
      HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) Num_3);
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__unchecked_abs_1_f_0(
  int8_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 < INT8_C(0));
    int8_t HeadVar__2_2;

    if (succeeded)
      HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) Num_3);
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__abs_1_f_0(
  int8_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 == INT8_C(-128));
    int8_t HeadVar__2_2;

    if (succeeded)
    {
      MR_Box conv0_HeadVar__2_2;

      conv0_HeadVar__2_2 = mercury__exception__throw_1_f_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.abs: abs(min_int8) would overflow")))));
      HeadVar__2_2 = ((int8_t) (MR_Word) conv0_HeadVar__2_2);
    }
    else
    {
      succeeded = (Num_3 < INT8_C(0));
      if (succeeded)
        HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) Num_3);
      else
        HeadVar__2_2 = Num_3;
    }
    return HeadVar__2_2;
  }
}

int8_t MR_CALL 
mercury__int8__min_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    int8_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

int8_t MR_CALL 
mercury__int8__max_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    int8_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__int8__f_greater_or_equal_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int8__f_less_or_equal_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int8__f_greater_than_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int8__f_less_than_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

int8_t MR_CALL 
mercury__int8__cast_from_uint8_1_f_0(
  uint8_t U8_1)
{
  {
    int8_t I8_2;

{
#define MR_PROC_LABEL mercury__int8__cast_from_uint8_1_f_0

	uint8_t U8;
	int8_t I8;

	U8 = U8_1 ;
		{

    I8 = U8;


		;}
#undef MR_PROC_LABEL
	 I8_2  = I8;
}
    return I8_2;
  }
}

MR_Integer MR_CALL 
mercury__int8__cast_to_int_1_f_0(
  int8_t I8_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int8__cast_to_int_1_f_0

	int8_t I8;
	MR_Integer I;

	I8 = I8_1 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

MR_Integer MR_CALL 
mercury__int8__to_int_1_f_0(
  int8_t I8_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int8__to_int_1_f_0

	int8_t I8;
	MR_Integer I;

	I8 = I8_1 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

int8_t MR_CALL 
mercury__int8__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  {
    int8_t I8_2;

{
#define MR_PROC_LABEL mercury__int8__cast_from_int_1_f_0

	MR_Integer I;
	int8_t I8;

	I = I_1 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	 I8_2  = I8;
}
    return I8_2;
  }
}

int8_t MR_CALL 
mercury__int8__det_from_int_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded = (I_3 >= (MR_Integer) -128);
    int8_t I8_4;
    int8_t I8Prime_5;
    MR_Integer Var_11;

    if (succeeded)
    {
      Var_11 = (MR_Integer) 127;
      succeeded = (I_3 <= Var_11);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__int8__det_from_int_1_f_0

	MR_Integer I;
	int8_t I8;

	I = I_3 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	 I8Prime_5  = I8;
}
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      I8_4 = I8Prime_5;
    else
      mercury__require__error_2_p_0((MR_String) "function \140int8.det_from_int\'/1", (MR_String) "cannot convert int to int8");
    return I8_4;
  }
}

MR_bool MR_CALL 
mercury__int8__from_int_2_p_0(
  MR_Integer I_3,
  int8_t * I8_4)
{
  {
    MR_bool succeeded = (I_3 >= (MR_Integer) -128);
    MR_Integer Var_6;

    if (succeeded)
    {
      Var_6 = (MR_Integer) 127;
      succeeded = (I_3 <= Var_6);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__int8__from_int_2_p_0

	MR_Integer I;
	int8_t I8;

	I = I_3 ;
		{

    I8 = (int8_t) I;


		;}
#undef MR_PROC_LABEL
	 *I8_4  = I8;
}
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void mercury__int8__init(void)
{
}

void mercury__int8__init_type_tables(void)
{
}

void mercury__int8__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__int8__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module int8.
