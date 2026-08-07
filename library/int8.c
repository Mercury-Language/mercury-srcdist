/*
** Automatically generated from `int8.m'
** by the Mercury compiler,
** version rotd-2026-08-07
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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__int8_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int8_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int8_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__int8_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int8_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int8_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int8_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int8_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


MR_Word MR_CALL 
mercury__int8__int8_to_doc_1_f_0(
  int8_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__string__int8_to_string_1_f_0(I_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
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

MR_Integer MR_CALL 
mercury__int8__num_trailing_zeros_1_f_0(
  int8_t I8_3)
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

MR_Integer MR_CALL 
mercury__int8__num_leading_zeros_1_f_0(
  int8_t I8_3)
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

MR_Integer MR_CALL 
mercury__int8__num_ones_1_f_0(
  int8_t I8_3)
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

MR_Integer MR_CALL 
mercury__int8__num_zeros_1_f_0(
  int8_t I8_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  uint8_t U8_6;

{
#define MR_PROC_LABEL mercury__int8__num_zeros_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_3 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	U8_6  = U8;
}
{
#define MR_PROC_LABEL mercury__int8__num_zeros_1_f_0

	uint8_t U;
	MR_Integer N;

	U = U8_6 ;
		{

    N = ML_uint8_num_ones_table[U];


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

int8_t MR_CALL 
mercury__int8__f_92_1_f_0(
  int8_t HeadVar__1_1)
{
  int8_t HeadVar__2_2 = ~(HeadVar__1_1);

  return HeadVar__2_2;
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
  int8_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_92_47_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_47_92_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__unchecked_right_ushift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 >> (int) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__unchecked_right_shift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_62_62_117_2_f_0(
  int8_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 8U);
  int8_t Result_6;

  if (succeeded)
    Result_6 = (X_4 >> (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.(>>u): second operand is out of range")))));
  return Result_6;
}

int8_t MR_CALL 
mercury__int8__f_62_62_2_f_0(
  int8_t X_4,
  MR_Integer Y_5)
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

int8_t MR_CALL 
mercury__int8__unchecked_left_ushift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 << (int) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__unchecked_left_shift_2_f_0(
  int8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_60_60_117_2_f_0(
  int8_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 8U);
  int8_t Result_6;

  if (succeeded)
    Result_6 = (X_4 << (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.(<<u): second operand is out of range")))));
  return Result_6;
}

int8_t MR_CALL 
mercury__int8__f_60_60_2_f_0(
  int8_t X_4,
  MR_Integer Y_5)
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

MR_bool MR_CALL 
mercury__int8__odd_1_p_0(
  int8_t X_2)
{
  MR_bool succeeded;
  int8_t Var_3 = (X_2 & INT8_C(1));

  succeeded = (Var_3 != INT8_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__int8__even_1_p_0(
  int8_t X_2)
{
  MR_bool succeeded;
  int8_t Var_3 = (X_2 & INT8_C(1));

  succeeded = (Var_3 == INT8_C(0));
  return succeeded;
}

int8_t MR_CALL 
mercury__int8__unchecked_rem_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__rem_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT8_C(0));
  int8_t Rem_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.rem: division by zero")))));
  else
    Rem_6 = (X_4 % Y_5);
  return Rem_6;
}

int8_t MR_CALL 
mercury__int8__mod_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  int8_t HeadVar__3_3;
  int8_t Var_6;
  int8_t Var_7;

  Var_7 = mercury__int8__div_2_f_0(X_4, Y_5);
  Var_6 = (int8_t) ((uint8_t) Var_7 * (uint8_t) Y_5);
  HeadVar__3_3 = (int8_t) ((uint8_t) X_4 - (uint8_t) Var_6);
  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__unchecked_quotient_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_slash_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT8_C(0));
  int8_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_47_47_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT8_C(0));
  int8_t Div_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
  else
    Div_6 = (X_4 / Y_5);
  return Div_6;
}

int8_t MR_CALL 
mercury__int8__div_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT8_C(0));
  int8_t Div_6;
  int8_t Trunc_7;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.\'//\': division by zero")))));
  else
    Trunc_7 = (X_4 / Y_5);
  {
    int8_t Var_9;

    succeeded = (X_4 >= INT8_C(0));
    if (succeeded)
    {
      Var_9 = INT8_C(0);
      succeeded = (Y_5 >= Var_9);
    }
  }
  if (!(succeeded))
  {
    {
      int8_t Var_11;

      succeeded = (X_4 < INT8_C(0));
      if (succeeded)
      {
        Var_11 = INT8_C(0);
        succeeded = (Y_5 < Var_11);
      }
    }
    if (!(succeeded))
    {
      int8_t Var_12;

      succeeded = (Y_5 == INT8_C(0));
      if (succeeded)
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int8.rem: division by zero")))));
      else
        Var_12 = (X_4 % Y_5);
      succeeded = (Var_12 == INT8_C(0));
    }
  }
  if (succeeded)
    Div_6 = Trunc_7;
  else
    Div_6 = (int8_t) ((uint8_t) Trunc_7 - (uint8_t) 1);
  return Div_6;
}

int8_t MR_CALL 
mercury__int8__times_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 * (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_times_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 * (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__minus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 - (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
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
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 - (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__plus_2_f_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 + (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
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
  int8_t HeadVar__3_3 = (int8_t) ((uint8_t) HeadVar__1_1 + (uint8_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__f_minus_1_f_0(
  int8_t HeadVar__1_1)
{
  int8_t HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) HeadVar__1_1);

  return HeadVar__2_2;
}

int8_t MR_CALL 
mercury__int8__f_plus_1_f_0(
  int8_t HeadVar__1_1)
{
  int8_t HeadVar__2_2 = HeadVar__1_1;

  return HeadVar__2_2;
}

int8_t MR_CALL 
mercury__int8__nabs_1_f_0(
  int8_t Num_3)
{
  MR_bool succeeded = (Num_3 > INT8_C(0));
  int8_t HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) Num_3);
  else
    HeadVar__2_2 = Num_3;
  return HeadVar__2_2;
}

int8_t MR_CALL 
mercury__int8__unchecked_abs_1_f_0(
  int8_t Num_3)
{
  MR_bool succeeded = (Num_3 < INT8_C(0));
  int8_t HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (int8_t) ((uint8_t) 0 - (uint8_t) Num_3);
  else
    HeadVar__2_2 = Num_3;
  return HeadVar__2_2;
}

int8_t MR_CALL 
mercury__int8__abs_1_f_0(
  int8_t Num_3)
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

int8_t MR_CALL 
mercury__int8__clamp_3_f_0(
  int8_t Min_5,
  int8_t Max_6,
  int8_t N_7)
{
  MR_bool succeeded = (Max_6 >= Min_5);
  int8_t HeadVar__4_4;

  if (succeeded)
  {
    succeeded = (N_7 < Min_5);
    if (succeeded)
      HeadVar__4_4 = Min_5;
    else
    {
      succeeded = (N_7 > Max_6);
      if (succeeded)
        HeadVar__4_4 = Max_6;
      else
        HeadVar__4_4 = N_7;
    }
  }
  else
  {
    MR_Box conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), (MR_String) "function \140int8.clamp\'/3", (MR_String) "Max < Min");
    HeadVar__4_4 = ((int8_t) (MR_Word) conv0_HeadVar__4_4);
  }
  return HeadVar__4_4;
}

int8_t MR_CALL 
mercury__int8__min_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (X_4 < Y_5);
  int8_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

int8_t MR_CALL 
mercury__int8__max_2_f_0(
  int8_t X_4,
  int8_t Y_5)
{
  MR_bool succeeded = (X_4 > Y_5);
  int8_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__int8__f_greater_or_equal_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int8__f_less_or_equal_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int8__f_greater_than_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int8__f_less_than_2_p_0(
  int8_t HeadVar__1_1,
  int8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

int8_t MR_CALL 
mercury__int8__cast_from_uint8_1_f_0(
  uint8_t U8_1)
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

MR_Integer MR_CALL 
mercury__int8__cast_to_int_1_f_0(
  int8_t I8_1)
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

MR_Integer MR_CALL 
mercury__int8__to_int_1_f_0(
  int8_t I8_1)
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

int8_t MR_CALL 
mercury__int8__cast_from_int_1_f_0(
  MR_Integer I_1)
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

int8_t MR_CALL 
mercury__int8__det_from_int_1_f_0(
  MR_Integer I_3)
{
  MR_bool succeeded = (I_3 >= (MR_Integer) -128);
  int8_t I8_4;
  int8_t I8Prime_5;
  MR_Integer Var_9;

  if (succeeded)
  {
    Var_9 = (MR_Integer) 127;
    succeeded = (I_3 <= Var_9);
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

MR_bool MR_CALL 
mercury__int8__from_int_2_p_0(
  MR_Integer I_3,
  int8_t * I8_4)
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
