/*
** Automatically generated from `uint8.m'
** by the Mercury compiler,
** version rotd-2024-04-27
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


// :- module uint8.
// :- implementation.

/*
INIT mercury__uint8__init
ENDINIT
*/

#include "uint8.mih"


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
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
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





static /* final */ const MR_Box mercury__uint8_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint8_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint8_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__uint8_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint8_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint8_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint8_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint8_scalar_common_2[0])),
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
#line 694 "uint8.m"

const uint8_t ML_uint8_num_ones_table[256] = {
    0,1,1,2,1,2,2,3,
    1,2,2,3,2,3,3,4,
    1,2,2,3,2,3,3,4,
    2,3,3,4,3,4,4,5,
    1,2,2,3,2,3,3,4,
    2,3,3,4,3,4,4,5,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    1,2,2,3,2,3,3,4,
    2,3,3,4,3,4,4,5,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    3,4,4,5,4,5,5,6,
    4,5,5,6,5,6,6,7,
    1,2,2,3,2,3,3,4,
    2,3,3,4,3,4,4,5,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    3,4,4,5,4,5,5,6,
    4,5,5,6,5,6,6,7,
    2,3,3,4,3,4,4,5,
    3,4,4,5,4,5,5,6,
    3,4,4,5,4,5,5,6,
    4,5,5,6,5,6,6,7,
    3,4,4,5,4,5,5,6,
    4,5,5,6,5,6,6,7,
    4,5,5,6,5,6,6,7,
    5,6,6,7,6,7,7,8
};

#line 796 "uint8.m"

const uint8_t ML_uint8_nlz_table[256] = {
  8,7,6,6,5,5,5,5,
  4,4,4,4,4,4,4,4,
  3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,
  2,2,2,2,2,2,2,2,
  2,2,2,2,2,2,2,2,
  2,2,2,2,2,2,2,2,
  2,2,2,2,2,2,2,2,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0
};




MR_Word MR_CALL 
mercury__uint8__uint8_to_doc_1_f_0(
  uint8_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__uint8__uint8_to_doc_1_f_0

	uint8_t U8;
	MR_String S;

	U8 = U_3 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_4  = S;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

uint8_t MR_CALL 
mercury__uint8__max_uint8_0_f_0(void)
{
  return UINT8_C(255);
}

MR_bool MR_CALL 
mercury__uint8__unchecked_bit_is_clear_2_p_0(
  uint8_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded;
  uint8_t Var_5;
  uint8_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_bit_is_clear_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT8_C(1) << Var_8);
  Var_5 = (U_3 & Var_6);
  succeeded = (Var_5 == UINT8_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__bit_is_clear_2_p_0(
  uint8_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded = (I_4 < (MR_Unsigned) 8U);

  if (succeeded)
  {
    uint8_t Var_8;
    uint8_t Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__uint8__bit_is_clear_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
    Var_9 = (UINT8_C(1) << Var_11);
    Var_8 = (U_3 & Var_9);
    succeeded = (Var_8 == UINT8_C(0));
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140uint8.bit_is_clear\'/2", (MR_String) "bit index exceeds 7 bits");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__unchecked_bit_is_set_2_p_0(
  uint8_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded;
  uint8_t Var_5;
  uint8_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_bit_is_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT8_C(1) << Var_8);
  Var_5 = (U_3 & Var_6);
  succeeded = (Var_5 != UINT8_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__bit_is_set_2_p_0(
  uint8_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded = (I_4 < (MR_Unsigned) 8U);

  if (succeeded)
  {
    uint8_t Var_8;
    uint8_t Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__uint8__bit_is_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
    Var_9 = (UINT8_C(1) << Var_11);
    Var_8 = (U_3 & Var_9);
    succeeded = (Var_8 != UINT8_C(0));
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140uint8.bit_is_set\'/2", (MR_String) "bit index exceeds 7 bits");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_flip_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  uint8_t HeadVar__3_3;
  uint8_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_flip_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT8_C(1) << Var_8);
  HeadVar__3_3 = (U_4 ^ Var_6);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__flip_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 8U);
  uint8_t HeadVar__3_3;

  if (succeeded)
  {
    uint8_t Var_10;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__uint8__flip_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
    Var_10 = (UINT8_C(1) << Var_12);
    HeadVar__3_3 = (U_4 ^ Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), (MR_String) "function \140uint8.flip_bit\'/2", (MR_String) "bit index exceeds 7 bits");
    HeadVar__3_3 = ((uint8_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_clear_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  uint8_t HeadVar__3_3;
  uint8_t Var_6;
  uint8_t Var_7;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_clear_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_9  = I;
}
  Var_7 = (UINT8_C(1) << Var_9);
  Var_6 = ~(Var_7);
  HeadVar__3_3 = (U_4 & Var_6);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__clear_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 8U);
  uint8_t HeadVar__3_3;

  if (succeeded)
  {
    uint8_t Var_10;
    uint8_t Var_11;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__uint8__clear_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_13  = I;
}
    Var_11 = (UINT8_C(1) << Var_13);
    Var_10 = ~(Var_11);
    HeadVar__3_3 = (U_4 & Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), (MR_String) "function \140uint8.clear_bit\'/2", (MR_String) "bit index exceeds 7 bits");
    HeadVar__3_3 = ((uint8_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_set_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  uint8_t HeadVar__3_3;
  uint8_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_set_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT8_C(1) << Var_8);
  HeadVar__3_3 = (U_4 | Var_6);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__set_bit_2_f_0(
  uint8_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 8U);
  uint8_t HeadVar__3_3;

  if (succeeded)
  {
    uint8_t Var_10;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__uint8__set_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
    Var_10 = (UINT8_C(1) << Var_12);
    HeadVar__3_3 = (U_4 | Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), (MR_String) "function \140uint8.set_bit\'/2", (MR_String) "bit index exceeds 7 bits");
    HeadVar__3_3 = ((uint8_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_rotate_right_2_f_0(
  uint8_t X_1,
  MR_Unsigned N_2)
{
  uint8_t Result_3;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_rotate_right_2_f_0

	uint8_t X;
	MR_Unsigned N;
	uint8_t Result;

	X = X_1 ;
	N = N_2 ;
		{

    N &= 7;
    Result = (X >> N) | (X << (-N & 7));


		;}
#undef MR_PROC_LABEL
	Result_3  = Result;
}
  return Result_3;
}

uint8_t MR_CALL 
mercury__uint8__rotate_right_2_f_0(
  uint8_t X_4,
  MR_Unsigned N_5)
{
  MR_bool succeeded = (N_5 < (MR_Unsigned) 8U);
  uint8_t HeadVar__3_3;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint8__rotate_right_2_f_0

	uint8_t X;
	MR_Unsigned N;
	uint8_t Result;

	X = X_4 ;
	N = N_5 ;
		{

    N &= 7;
    Result = (X >> N) | (X << (-N & 7));


		;}
#undef MR_PROC_LABEL
	HeadVar__3_3  = Result;
}
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), (MR_String) "function \140uint8.rotate_right\'/2", (MR_String) "rotate amount exceeds 7 bits");
    HeadVar__3_3 = ((uint8_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_rotate_left_2_f_0(
  uint8_t X_1,
  MR_Unsigned N_2)
{
  uint8_t Result_3;

{
#define MR_PROC_LABEL mercury__uint8__unchecked_rotate_left_2_f_0

	uint8_t X;
	MR_Unsigned N;
	uint8_t Result;

	X = X_1 ;
	N = N_2 ;
		{

    N &= 7;
    // XXX clang has intrinsics for rotation -- we should use those instead.
    Result = (X << N) | (X >> (-N & 7));


		;}
#undef MR_PROC_LABEL
	Result_3  = Result;
}
  return Result_3;
}

uint8_t MR_CALL 
mercury__uint8__rotate_left_2_f_0(
  uint8_t X_4,
  MR_Unsigned N_5)
{
  MR_bool succeeded = (N_5 < (MR_Unsigned) 8U);
  uint8_t HeadVar__3_3;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint8__rotate_left_2_f_0

	uint8_t X;
	MR_Unsigned N;
	uint8_t Result;

	X = X_4 ;
	N = N_5 ;
		{

    N &= 7;
    // XXX clang has intrinsics for rotation -- we should use those instead.
    Result = (X << N) | (X >> (-N & 7));


		;}
#undef MR_PROC_LABEL
	HeadVar__3_3  = Result;
}
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), (MR_String) "function \140uint8.rotate_left\'/2", (MR_String) "rotate amount exceeds 7 bits");
    HeadVar__3_3 = ((uint8_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__reverse_bits_1_f_0(
  uint8_t STATE_VARIABLE_A_0_5)
{
  uint8_t B_4;
  uint8_t STATE_VARIABLE_A_6_6;
  uint8_t Var_7;
  uint8_t Var_8 = (STATE_VARIABLE_A_0_5 & UINT8_C(240));
  uint8_t Var_11;
  uint8_t Var_12;
  uint8_t STATE_VARIABLE_A_15_15;
  uint8_t Var_16;
  uint8_t Var_17;
  uint8_t Var_20;
  uint8_t Var_21;
  uint8_t Var_25;
  uint8_t Var_26;
  uint8_t Var_29;
  uint8_t Var_30;

  Var_7 = mercury__uint8__f_62_62_2_f_0(Var_8, (MR_Integer) 4);
  Var_12 = (STATE_VARIABLE_A_0_5 & UINT8_C(15));
  Var_11 = mercury__uint8__f_60_60_2_f_0(Var_12, (MR_Integer) 4);
  STATE_VARIABLE_A_6_6 = (Var_7 | Var_11);
  Var_17 = (STATE_VARIABLE_A_6_6 & UINT8_C(204));
  Var_16 = mercury__uint8__f_62_62_2_f_0(Var_17, (MR_Integer) 2);
  Var_21 = (STATE_VARIABLE_A_6_6 & UINT8_C(51));
  Var_20 = mercury__uint8__f_60_60_2_f_0(Var_21, (MR_Integer) 2);
  STATE_VARIABLE_A_15_15 = (Var_16 | Var_20);
  Var_26 = (STATE_VARIABLE_A_15_15 & UINT8_C(170));
  Var_25 = mercury__uint8__f_62_62_2_f_0(Var_26, (MR_Integer) 1);
  Var_30 = (STATE_VARIABLE_A_15_15 & UINT8_C(85));
  Var_29 = mercury__uint8__f_60_60_2_f_0(Var_30, (MR_Integer) 1);
  B_4 = (Var_25 | Var_29);
  return B_4;
}

MR_Integer MR_CALL 
mercury__uint8__num_trailing_zeros_1_f_0(
  uint8_t U_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  uint8_t Var_6;
  uint8_t Var_7 = ~(U_3);
  uint8_t Var_8 = (U_3 - UINT8_C(1));

  Var_6 = (Var_7 & Var_8);
{
#define MR_PROC_LABEL mercury__uint8__num_trailing_zeros_1_f_0

	uint8_t I;
	MR_Integer N;

	I = Var_6 ;
		{

    N = ML_uint8_nlz_table[I];


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__uint8__num_leading_zeros_1_f_0(
  uint8_t I_1)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint8__num_leading_zeros_1_f_0

	uint8_t I;
	MR_Integer N;

	I = I_1 ;
		{

    N = ML_uint8_nlz_table[I];


		;}
#undef MR_PROC_LABEL
	N_2  = N;
}
  return N_2;
}

MR_Integer MR_CALL 
mercury__uint8__num_ones_1_f_0(
  uint8_t U_1)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint8__num_ones_1_f_0

	uint8_t U;
	MR_Integer N;

	U = U_1 ;
		{

    N = ML_uint8_num_ones_table[U];


		;}
#undef MR_PROC_LABEL
	N_2  = N;
}
  return N_2;
}

MR_Integer MR_CALL 
mercury__uint8__num_zeros_1_f_0(
  uint8_t U_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__uint8__num_zeros_1_f_0

	uint8_t U;
	MR_Integer N;

	U = U_3 ;
		{

    N = ML_uint8_num_ones_table[U];


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

uint8_t MR_CALL 
mercury__uint8__f_92_1_f_0(
  uint8_t HeadVar__1_1)
{
  uint8_t HeadVar__2_2 = ~(HeadVar__1_1);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__uint8__xor_2_f_2(
  uint8_t * HeadVar__1_1,
  uint8_t HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__uint8__xor_2_f_1(
  uint8_t HeadVar__1_1,
  uint8_t * HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

uint8_t MR_CALL 
mercury__uint8__xor_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_92_47_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_47_92_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_right_ushift_2_f_0(
  uint8_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 >> (int) HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_right_shift_2_f_0(
  uint8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_62_62_117_2_f_0(
  uint8_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 8U);
  uint8_t Result_6;

  if (succeeded)
    Result_6 = (X_4 >> (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.(>>u): second operand is out of range")))));
  return Result_6;
}

uint8_t MR_CALL 
mercury__uint8__f_62_62_2_f_0(
  uint8_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  uint8_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint8__f_62_62_2_f_0

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
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.(>>): second operand is out of range")))));
  return Result_6;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_left_ushift_2_f_0(
  uint8_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 << (int) HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_left_shift_2_f_0(
  uint8_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_60_60_117_2_f_0(
  uint8_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 8U);
  uint8_t Result_6;

  if (succeeded)
    Result_6 = (X_4 << (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.(<<u): second operand is out of range")))));
  return Result_6;
}

uint8_t MR_CALL 
mercury__uint8__f_60_60_2_f_0(
  uint8_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  uint8_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint8__f_60_60_2_f_0

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
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.(<<): second operand is out of range")))));
  return Result_6;
}

MR_bool MR_CALL 
mercury__uint8__odd_1_p_0(
  uint8_t X_2)
{
  MR_bool succeeded;
  uint8_t Var_3 = (X_2 & UINT8_C(1));

  succeeded = (Var_3 != UINT8_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__even_1_p_0(
  uint8_t X_2)
{
  MR_bool succeeded;
  uint8_t Var_3 = (X_2 & UINT8_C(1));

  succeeded = (Var_3 == UINT8_C(0));
  return succeeded;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_rem_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__rem_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT8_C(0));
  uint8_t Rem_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.rem: division by zero")))));
  else
    Rem_6 = (X_4 % Y_5);
  return Rem_6;
}

uint8_t MR_CALL 
mercury__uint8__mod_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT8_C(0));
  uint8_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.rem: division by zero")))));
  else
    HeadVar__3_3 = (X_4 % Y_5);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__unchecked_quotient_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_slash_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT8_C(0));
  uint8_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_47_47_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT8_C(0));
  uint8_t Div_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.\'//\': division by zero")))));
  else
    Div_6 = (X_4 / Y_5);
  return Div_6;
}

uint8_t MR_CALL 
mercury__uint8__div_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT8_C(0));
  uint8_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint8.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__times_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__f_times_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__minus_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__uint8__f_minus_2_f_2(
  uint8_t HeadVar__1_1,
  uint8_t * HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__uint8__f_minus_2_f_1(
  uint8_t * HeadVar__1_1,
  uint8_t HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

uint8_t MR_CALL 
mercury__uint8__f_minus_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__plus_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__uint8__f_plus_2_f_2(
  uint8_t HeadVar__1_1,
  uint8_t * HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__uint8__f_plus_2_f_1(
  uint8_t * HeadVar__1_1,
  uint8_t HeadVar__2_2,
  uint8_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

uint8_t MR_CALL 
mercury__uint8__f_plus_2_f_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  uint8_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__min_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (X_4 < Y_5);
  uint8_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

uint8_t MR_CALL 
mercury__uint8__max_2_f_0(
  uint8_t X_4,
  uint8_t Y_5)
{
  MR_bool succeeded = (X_4 > Y_5);
  uint8_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__uint8__f_greater_or_equal_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__f_less_or_equal_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__f_greater_than_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint8__f_less_than_2_p_0(
  uint8_t HeadVar__1_1,
  uint8_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

uint8_t MR_CALL 
mercury__uint8__cast_from_int8_1_f_0(
  int8_t I8_1)
{
  uint8_t U8_2;

{
#define MR_PROC_LABEL mercury__uint8__cast_from_int8_1_f_0

	int8_t I8;
	uint8_t U8;

	I8 = I8_1 ;
		{

    U8 = (uint8_t) I8;


		;}
#undef MR_PROC_LABEL
	U8_2  = U8;
}
  return U8_2;
}

MR_Unsigned MR_CALL 
mercury__uint8__cast_to_uint_1_f_0(
  uint8_t U8_1)
{
  MR_Unsigned U_2;

{
#define MR_PROC_LABEL mercury__uint8__cast_to_uint_1_f_0

	uint8_t U8;
	MR_Unsigned U;

	U8 = U8_1 ;
		{

    U = (MR_Unsigned) U8;


		;}
#undef MR_PROC_LABEL
	U_2  = U;
}
  return U_2;
}

MR_Integer MR_CALL 
mercury__uint8__cast_to_int_1_f_0(
  uint8_t U8_1)
{
  MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint8__cast_to_int_1_f_0

	uint8_t U8;
	MR_Integer I;

	U8 = U8_1 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	I_2  = I;
}
  return I_2;
}

MR_Integer MR_CALL 
mercury__uint8__to_int_1_f_0(
  uint8_t U8_1)
{
  MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint8__to_int_1_f_0

	uint8_t U8;
	MR_Integer I;

	U8 = U8_1 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	I_2  = I;
}
  return I_2;
}

uint8_t MR_CALL 
mercury__uint8__cast_from_uint_1_f_0(
  MR_Unsigned U_1)
{
  uint8_t U8_2;

{
#define MR_PROC_LABEL mercury__uint8__cast_from_uint_1_f_0

	MR_Unsigned U;
	uint8_t U8;

	U = U_1 ;
		{

    U8 = (uint8_t) U;


		;}
#undef MR_PROC_LABEL
	U8_2  = U8;
}
  return U8_2;
}

uint8_t MR_CALL 
mercury__uint8__det_from_uint_1_f_0(
  MR_Unsigned U_3)
{
  MR_bool succeeded = (U_3 <= (MR_Unsigned) 255U);
  uint8_t U8_4;
  uint8_t U8Prime_5;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint8__det_from_uint_1_f_0

	MR_Unsigned U;
	uint8_t U8;

	U = U_3 ;
		{

    U8 = (uint8_t) U;


		;}
#undef MR_PROC_LABEL
	U8Prime_5  = U8;
}
    succeeded = MR_TRUE;
  }
  if (succeeded)
    U8_4 = U8Prime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140uint8.det_from_uint\'/1", (MR_String) "cannot convert uint to uint8");
  return U8_4;
}

MR_bool MR_CALL 
mercury__uint8__from_uint_2_p_0(
  MR_Unsigned U_3,
  uint8_t * U8_4)
{
  MR_bool succeeded = (U_3 <= (MR_Unsigned) 255U);

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint8__from_uint_2_p_0

	MR_Unsigned U;
	uint8_t U8;

	U = U_3 ;
		{

    U8 = (uint8_t) U;


		;}
#undef MR_PROC_LABEL
	*U8_4  = U8;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

uint8_t MR_CALL 
mercury__uint8__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  uint8_t U8_2;

{
#define MR_PROC_LABEL mercury__uint8__cast_from_int_1_f_0

	MR_Integer I;
	uint8_t U8;

	I = I_1 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	U8_2  = U8;
}
  return U8_2;
}

uint8_t MR_CALL 
mercury__uint8__det_from_int_1_f_0(
  MR_Integer I_3)
{
  MR_bool succeeded = (I_3 >= (MR_Integer) 0);
  uint8_t U8_4;
  uint8_t U8Prime_5;
  MR_Integer Var_9;

  if (succeeded)
  {
    Var_9 = (MR_Integer) 255;
    succeeded = (I_3 <= Var_9);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__uint8__det_from_int_1_f_0

	MR_Integer I;
	uint8_t U8;

	I = I_3 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	U8Prime_5  = U8;
}
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    U8_4 = U8Prime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140uint8.det_from_int\'/1", (MR_String) "cannot convert int to uint8");
  return U8_4;
}

MR_bool MR_CALL 
mercury__uint8__from_int_2_p_0(
  MR_Integer I_3,
  uint8_t * U8_4)
{
  MR_bool succeeded = (I_3 >= (MR_Integer) 0);
  MR_Integer Var_6;

  if (succeeded)
  {
    Var_6 = (MR_Integer) 255;
    succeeded = (I_3 <= Var_6);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__uint8__from_int_2_p_0

	MR_Integer I;
	uint8_t U8;

	I = I_3 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*U8_4  = U8;
}
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void mercury__uint8__init(void)
{
}

void mercury__uint8__init_type_tables(void)
{
}

void mercury__uint8__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint8__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module uint8.
