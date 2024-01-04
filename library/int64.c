/*
** Automatically generated from `int64.m'
** by the Mercury compiler,
** version rotd-2024-01-04
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


// :- module int64.
// :- implementation.

/*
INIT mercury__int64__init
ENDINIT
*/

#include "int64.mih"


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





static /* final */ const MR_Box mercury__int64_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int64_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int64_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__int64_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int64_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int64_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int64_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int64_scalar_common_2[0])),
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
mercury__int64__int64_to_doc_1_f_0(
  int64_t I_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__int64__int64_to_doc_1_f_0

	int64_t I64;
	MR_String S;

	I64 = I_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
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

int64_t MR_CALL 
mercury__int64__max_int64_0_f_0(void)
{
  return INT64_C(9223372036854775807);
}

int64_t MR_CALL 
mercury__int64__min_int64_0_f_0(void)
{
  return INT64_MIN;
}

int64_t MR_CALL 
mercury__int64__reverse_bits_1_f_0(
  int64_t I64_3)
{
  int64_t RevI64_4;
  uint64_t U64_5;
  uint64_t RevU64_6;

{
#define MR_PROC_LABEL mercury__int64__reverse_bits_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = I64_3 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	U64_5  = U64;
}
  RevU64_6 = mercury__uint64__reverse_bits_1_f_0(U64_5);
{
#define MR_PROC_LABEL mercury__int64__reverse_bits_1_f_0

	uint64_t U64;
	int64_t I64;

	U64 = RevU64_6 ;
		{

    I64 = (int64_t) U64;


		;}
#undef MR_PROC_LABEL
	RevI64_4  = I64;
}
  return RevI64_4;
}

int64_t MR_CALL 
mercury__int64__reverse_bytes_1_f_0(
  int64_t A_1)
{
  int64_t B_2;

{
#define MR_PROC_LABEL mercury__int64__reverse_bytes_1_f_0

	int64_t A;
	int64_t B;

	A = A_1 ;
		{

    B = (int64_t) MR_uint64_reverse_bytes((uint64_t) A);


		;}
#undef MR_PROC_LABEL
	B_2  = B;
}
  return B_2;
}

MR_Integer MR_CALL 
mercury__int64__num_trailing_zeros_1_f_0(
  int64_t I64_3)
{
  MR_Integer N_4;
  uint64_t U64_5;

{
#define MR_PROC_LABEL mercury__int64__num_trailing_zeros_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = I64_3 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	U64_5  = U64;
}
{
#define MR_PROC_LABEL mercury__int64__num_trailing_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U64_5 ;
		{

    if (U == 0) {
        N = 64;
    } else {
        uint32_t x, y;
        int n = 63;
        y = (int32_t) U;
        if (y != 0) {
            n -=  32; x = y;
        } else {
            x = (uint32_t) (U >> 32);
        }
        y = x << 16; if (y != 0) { n -= 16; x = y; }
        y = x <<  8; if (y != 0) { n -=  8; x = y; }
        y = x <<  4; if (y != 0) { n -=  4; x = y; }
        y = x <<  2; if (y != 0) { n -=  2; x = y; }
        N = n - (int) ((x << 1) >> 31);
    }


		;}
#undef MR_PROC_LABEL
	N_4  = N;
}
  return N_4;
}

MR_Integer MR_CALL 
mercury__int64__num_leading_zeros_1_f_0(
  int64_t I64_3)
{
  MR_Integer N_4;
  uint64_t U64_5;

{
#define MR_PROC_LABEL mercury__int64__num_leading_zeros_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = I64_3 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	U64_5  = U64;
}
{
#define MR_PROC_LABEL mercury__int64__num_leading_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U64_5 ;
		{

    if (U == 0) {
        N = 64;
    } else {
        int32_t n = 1;
        uint32_t x = (uint32_t) (U >> 32);
        if (x == 0) { n += 32; x = (uint32_t) U; }
        if (x >> 16 == 0) { n += 16; x <<= 16; }
        if (x >> 24 == 0) { n +=  8; x <<=  8; }
        if (x >> 28 == 0) { n +=  4; x <<=  4; }
        if (x >> 30 == 0) { n +=  2; x <<=  2; }
        N = n - (x >> 31);
    }


		;}
#undef MR_PROC_LABEL
	N_4  = N;
}
  return N_4;
}

MR_Integer MR_CALL 
mercury__int64__num_ones_1_f_0(
  int64_t I64_3)
{
  MR_Integer N_4;
  uint64_t U64_5;

{
#define MR_PROC_LABEL mercury__int64__num_ones_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = I64_3 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	U64_5  = U64;
}
{
#define MR_PROC_LABEL mercury__int64__num_ones_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U64_5 ;
		{

#if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_LONG_IS_64_BIT)
    N = __builtin_popcountl(U);
#else
    U = U - ((U >> 1) & UINT64_C(0x5555555555555555));
    U = (U & UINT64_C(0x3333333333333333)) +
        ((U >> 2) & UINT64_C(0x3333333333333333));
    U = (U + (U >> 4)) & UINT64_C(0x0f0f0f0f0f0f0f0f);
    U = U + (U >> 8);
    U = U + (U >> 16);
    U = U + (U >> 32);
    N = U & UINT64_C(0x7f);
#endif


		;}
#undef MR_PROC_LABEL
	N_4  = N;
}
  return N_4;
}

MR_Integer MR_CALL 
mercury__int64__num_zeros_1_f_0(
  int64_t U_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  uint64_t U64_6;

{
#define MR_PROC_LABEL mercury__int64__num_zeros_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = U_3 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	U64_6  = U64;
}
{
#define MR_PROC_LABEL mercury__int64__num_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U64_6 ;
		{

#if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_LONG_IS_64_BIT)
    N = __builtin_popcountl(U);
#else
    U = U - ((U >> 1) & UINT64_C(0x5555555555555555));
    U = (U & UINT64_C(0x3333333333333333)) +
        ((U >> 2) & UINT64_C(0x3333333333333333));
    U = (U + (U >> 4)) & UINT64_C(0x0f0f0f0f0f0f0f0f);
    U = U + (U >> 8);
    U = U + (U >> 16);
    U = U + (U >> 32);
    N = U & UINT64_C(0x7f);
#endif


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 64 - (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

int64_t MR_CALL 
mercury__int64__f_92_1_f_0(
  int64_t HeadVar__1_1)
{
  int64_t HeadVar__2_2 = ~(HeadVar__1_1);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__int64__xor_2_f_2(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__int64__xor_2_f_1(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

int64_t MR_CALL 
mercury__int64__xor_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_92_47_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_47_92_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__unchecked_right_ushift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 >> (int) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__unchecked_right_shift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_62_62_117_2_f_0(
  int64_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 64U);
  int64_t Result_6;

  if (succeeded)
    Result_6 = (X_4 >> (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.(>>u): second operand is out of range")))));
  return Result_6;
}

int64_t MR_CALL 
mercury__int64__f_62_62_2_f_0(
  int64_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  int64_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int64__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_8  = U;
}
  succeeded = (Var_8 < (MR_Unsigned) 64U);
  if (succeeded)
    Result_6 = (X_4 >> Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.(>>): second operand is out of range")))));
  return Result_6;
}

int64_t MR_CALL 
mercury__int64__unchecked_left_ushift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 << (int) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__unchecked_left_shift_2_f_0(
  int64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_60_60_117_2_f_0(
  int64_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 64U);
  int64_t Result_6;

  if (succeeded)
    Result_6 = (X_4 << (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.(<<u): second operand is out of range")))));
  return Result_6;
}

int64_t MR_CALL 
mercury__int64__f_60_60_2_f_0(
  int64_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  int64_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int64__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_8  = U;
}
  succeeded = (Var_8 < (MR_Unsigned) 64U);
  if (succeeded)
    Result_6 = (X_4 << Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.(<<): second operand is out of range")))));
  return Result_6;
}

MR_bool MR_CALL 
mercury__int64__odd_1_p_0(
  int64_t X_2)
{
  MR_bool succeeded;
  int64_t Var_3 = (X_2 & INT64_C(1));

  succeeded = (Var_3 != INT64_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__int64__even_1_p_0(
  int64_t X_2)
{
  MR_bool succeeded;
  int64_t Var_3 = (X_2 & INT64_C(1));

  succeeded = (Var_3 == INT64_C(0));
  return succeeded;
}

int64_t MR_CALL 
mercury__int64__unchecked_rem_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__rem_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT64_C(0));
  int64_t Rem_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.rem: division by zero")))));
  else
    Rem_6 = (X_4 % Y_5);
  return Rem_6;
}

int64_t MR_CALL 
mercury__int64__mod_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  int64_t HeadVar__3_3;
  int64_t Var_6;
  int64_t Var_7;

  Var_7 = mercury__int64__div_2_f_0(X_4, Y_5);
  Var_6 = (int64_t) ((uint64_t) Var_7 * (uint64_t) Y_5);
  HeadVar__3_3 = (int64_t) ((uint64_t) X_4 - (uint64_t) Var_6);
  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__unchecked_quotient_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_slash_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT64_C(0));
  int64_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_47_47_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT64_C(0));
  int64_t Div_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.\'//\': division by zero")))));
  else
    Div_6 = (X_4 / Y_5);
  return Div_6;
}

int64_t MR_CALL 
mercury__int64__div_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (Y_5 == INT64_C(0));
  int64_t Div_6;
  int64_t Trunc_7;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.\'//\': division by zero")))));
  else
    Trunc_7 = (X_4 / Y_5);
  {
    int64_t Var_9;

    succeeded = (X_4 >= INT64_C(0));
    if (succeeded)
    {
      Var_9 = INT64_C(0);
      succeeded = (Y_5 >= Var_9);
    }
  }
  if (!(succeeded))
  {
    {
      int64_t Var_11;

      succeeded = (X_4 < INT64_C(0));
      if (succeeded)
      {
        Var_11 = INT64_C(0);
        succeeded = (Y_5 < Var_11);
      }
    }
    if (!(succeeded))
    {
      int64_t Var_12;

      succeeded = (Y_5 == INT64_C(0));
      if (succeeded)
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int64.rem: division by zero")))));
      else
        Var_12 = (X_4 % Y_5);
      succeeded = (Var_12 == INT64_C(0));
    }
  }
  if (succeeded)
    Div_6 = Trunc_7;
  else
    Div_6 = (int64_t) ((uint64_t) Trunc_7 - (uint64_t) INT64_C(1));
  return Div_6;
}

int64_t MR_CALL 
mercury__int64__times_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 * (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_times_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 * (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__minus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 - (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__int64__f_minus_2_f_2(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int64_t) ((uint64_t) HeadVar__1_1 - (uint64_t) HeadVar__3_3);
}

void MR_CALL 
mercury__int64__f_minus_2_f_1(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int64_t) ((uint64_t) HeadVar__2_2 + (uint64_t) HeadVar__3_3);
}

int64_t MR_CALL 
mercury__int64__f_minus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 - (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__plus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 + (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__int64__f_plus_2_f_2(
  int64_t HeadVar__1_1,
  int64_t * HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int64_t) ((uint64_t) HeadVar__3_3 - (uint64_t) HeadVar__1_1);
}

void MR_CALL 
mercury__int64__f_plus_2_f_1(
  int64_t * HeadVar__1_1,
  int64_t HeadVar__2_2,
  int64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int64_t) ((uint64_t) HeadVar__3_3 - (uint64_t) HeadVar__2_2);
}

int64_t MR_CALL 
mercury__int64__f_plus_2_f_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  int64_t HeadVar__3_3 = (int64_t) ((uint64_t) HeadVar__1_1 + (uint64_t) HeadVar__2_2);

  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__f_minus_1_f_0(
  int64_t HeadVar__1_1)
{
  int64_t HeadVar__2_2 = (int64_t) ((uint64_t) INT64_C(0) - (uint64_t) HeadVar__1_1);

  return HeadVar__2_2;
}

int64_t MR_CALL 
mercury__int64__f_plus_1_f_0(
  int64_t HeadVar__1_1)
{
  int64_t HeadVar__2_2 = HeadVar__1_1;

  return HeadVar__2_2;
}

int64_t MR_CALL 
mercury__int64__nabs_1_f_0(
  int64_t Num_3)
{
  MR_bool succeeded = (Num_3 > INT64_C(0));
  int64_t HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (int64_t) ((uint64_t) INT64_C(0) - (uint64_t) Num_3);
  else
    HeadVar__2_2 = Num_3;
  return HeadVar__2_2;
}

int64_t MR_CALL 
mercury__int64__unchecked_abs_1_f_0(
  int64_t Num_3)
{
  MR_bool succeeded = (Num_3 < INT64_C(0));
  int64_t HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (int64_t) ((uint64_t) INT64_C(0) - (uint64_t) Num_3);
  else
    HeadVar__2_2 = Num_3;
  return HeadVar__2_2;
}

int64_t MR_CALL 
mercury__int64__abs_1_f_0(
  int64_t Num_3)
{
  MR_bool succeeded = (Num_3 == INT64_MIN);
  int64_t Abs_4;

  if (succeeded)
    mercury__require__error_2_p_0((MR_String) "function \140int64.abs\'/1", (MR_String) "abs(min_int64) would overflow");
  else
  {
    succeeded = (Num_3 < INT64_C(0));
    if (succeeded)
      Abs_4 = (int64_t) ((uint64_t) INT64_C(0) - (uint64_t) Num_3);
    else
      Abs_4 = Num_3;
  }
  return Abs_4;
}

int64_t MR_CALL 
mercury__int64__min_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (X_4 < Y_5);
  int64_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

int64_t MR_CALL 
mercury__int64__max_2_f_0(
  int64_t X_4,
  int64_t Y_5)
{
  MR_bool succeeded = (X_4 > Y_5);
  int64_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__int64__f_greater_or_equal_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int64__f_less_or_equal_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int64__f_greater_than_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__int64__f_less_than_2_p_0(
  int64_t HeadVar__1_1,
  int64_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

int64_t MR_CALL 
mercury__int64__from_bytes_be_8_f_0(
  uint8_t Byte7_10,
  uint8_t Byte6_11,
  uint8_t Byte5_12,
  uint8_t Byte4_13,
  uint8_t Byte3_14,
  uint8_t Byte2_15,
  uint8_t Byte1_16,
  uint8_t Byte0_17)
{
  int64_t HeadVar__9_9;

{
#define MR_PROC_LABEL mercury__int64__from_bytes_be_8_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint8_t Byte4;
	uint8_t Byte5;
	uint8_t Byte6;
	uint8_t Byte7;
	int64_t I64;

	Byte0 = Byte0_17 ;
	Byte1 = Byte1_16 ;
	Byte2 = Byte2_15 ;
	Byte3 = Byte3_14 ;
	Byte4 = Byte4_13 ;
	Byte5 = Byte5_12 ;
	Byte6 = Byte6_11 ;
	Byte7 = Byte7_10 ;
		{

    unsigned char *int64_bytes = (unsigned char *) &I64;
#if defined(MR_BIG_ENDIAN)
    int64_bytes[0] = Byte7;
    int64_bytes[1] = Byte6;
    int64_bytes[2] = Byte5;
    int64_bytes[3] = Byte4;
    int64_bytes[4] = Byte3;
    int64_bytes[5] = Byte2;
    int64_bytes[6] = Byte1;
    int64_bytes[7] = Byte0;
#else
    int64_bytes[0] = Byte0;
    int64_bytes[1] = Byte1;
    int64_bytes[2] = Byte2;
    int64_bytes[3] = Byte3;
    int64_bytes[4] = Byte4;
    int64_bytes[5] = Byte5;
    int64_bytes[6] = Byte6;
    int64_bytes[7] = Byte7;
#endif


		;}
#undef MR_PROC_LABEL
	HeadVar__9_9  = I64;
}
  return HeadVar__9_9;
}

int64_t MR_CALL 
mercury__int64__from_bytes_le_8_f_0(
  uint8_t Byte0_1,
  uint8_t Byte1_2,
  uint8_t Byte2_3,
  uint8_t Byte3_4,
  uint8_t Byte4_5,
  uint8_t Byte5_6,
  uint8_t Byte6_7,
  uint8_t Byte7_8)
{
  int64_t I64_9;

{
#define MR_PROC_LABEL mercury__int64__from_bytes_le_8_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint8_t Byte4;
	uint8_t Byte5;
	uint8_t Byte6;
	uint8_t Byte7;
	int64_t I64;

	Byte0 = Byte0_1 ;
	Byte1 = Byte1_2 ;
	Byte2 = Byte2_3 ;
	Byte3 = Byte3_4 ;
	Byte4 = Byte4_5 ;
	Byte5 = Byte5_6 ;
	Byte6 = Byte6_7 ;
	Byte7 = Byte7_8 ;
		{

    unsigned char *int64_bytes = (unsigned char *) &I64;
#if defined(MR_BIG_ENDIAN)
    int64_bytes[0] = Byte7;
    int64_bytes[1] = Byte6;
    int64_bytes[2] = Byte5;
    int64_bytes[3] = Byte4;
    int64_bytes[4] = Byte3;
    int64_bytes[5] = Byte2;
    int64_bytes[6] = Byte1;
    int64_bytes[7] = Byte0;
#else
    int64_bytes[0] = Byte0;
    int64_bytes[1] = Byte1;
    int64_bytes[2] = Byte2;
    int64_bytes[3] = Byte3;
    int64_bytes[4] = Byte4;
    int64_bytes[5] = Byte5;
    int64_bytes[6] = Byte6;
    int64_bytes[7] = Byte7;
#endif


		;}
#undef MR_PROC_LABEL
	I64_9  = I64;
}
  return I64_9;
}

int64_t MR_CALL 
mercury__int64__cast_from_uint64_1_f_0(
  uint64_t U64_1)
{
  int64_t I64_2;

{
#define MR_PROC_LABEL mercury__int64__cast_from_uint64_1_f_0

	uint64_t U64;
	int64_t I64;

	U64 = U64_1 ;
		{

    I64 = (int64_t) U64;


		;}
#undef MR_PROC_LABEL
	I64_2  = I64;
}
  return I64_2;
}

MR_Integer MR_CALL 
mercury__int64__cast_to_int_1_f_0(
  int64_t I64_1)
{
  MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int64__cast_to_int_1_f_0

	int64_t I64;
	MR_Integer I;

	I64 = I64_1 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	I_2  = I;
}
  return I_2;
}

MR_Integer MR_CALL 
mercury__int64__det_to_int_1_f_0(
  int64_t I64_3)
{
  MR_bool succeeded;
  MR_Integer I_4;
  MR_Integer IPrime_5;
  int64_t Var_8;
  MR_Integer Var_9;
  int64_t Var_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__int64__det_to_int_1_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_9  = Max;
}
{
#define MR_PROC_LABEL mercury__int64__det_to_int_1_f_0

	MR_Integer I;
	int64_t I64;

	I = Var_9 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_8  = I64;
}
  succeeded = (I64_3 <= Var_8);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__int64__det_to_int_1_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_11  = Min;
}
{
#define MR_PROC_LABEL mercury__int64__det_to_int_1_f_0

	MR_Integer I;
	int64_t I64;

	I = Var_11 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_10  = I64;
}
    succeeded = (I64_3 >= Var_10);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__int64__det_to_int_1_f_0

	int64_t I64;
	MR_Integer I;

	I64 = I64_3 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	IPrime_5  = I;
}
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    I_4 = IPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140int64.det_to_int\'/1", (MR_String) "cannot convert int64 to int");
  return I_4;
}

MR_bool MR_CALL 
mercury__int64__to_int_2_p_0(
  int64_t I64_3,
  MR_Integer * I_4)
{
  MR_bool succeeded;
  int64_t Var_5;
  MR_Integer Var_6;
  int64_t Var_7;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__int64__to_int_2_p_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_6  = Max;
}
{
#define MR_PROC_LABEL mercury__int64__to_int_2_p_0

	MR_Integer I;
	int64_t I64;

	I = Var_6 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_5  = I64;
}
  succeeded = (I64_3 <= Var_5);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__int64__to_int_2_p_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_8  = Min;
}
{
#define MR_PROC_LABEL mercury__int64__to_int_2_p_0

	MR_Integer I;
	int64_t I64;

	I = Var_8 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	Var_7  = I64;
}
    succeeded = (I64_3 >= Var_7);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__int64__to_int_2_p_0

	int64_t I64;
	MR_Integer I;

	I64 = I64_3 ;
		{

    I = (MR_Integer) I64;


		;}
#undef MR_PROC_LABEL
	*I_4  = I;
}
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

int64_t MR_CALL 
mercury__int64__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  int64_t I64_2;

{
#define MR_PROC_LABEL mercury__int64__cast_from_int_1_f_0

	MR_Integer I;
	int64_t I64;

	I = I_1 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	I64_2  = I64;
}
  return I64_2;
}

int64_t MR_CALL 
mercury__int64__from_int_1_f_0(
  MR_Integer I_3)
{
  int64_t HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__int64__from_int_1_f_0

	MR_Integer I;
	int64_t I64;

	I = I_3 ;
		{

    I64 = (int64_t) I;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = I64;
}
  return HeadVar__2_2;
}

void mercury__int64__init(void)
{
}

void mercury__int64__init_type_tables(void)
{
}

void mercury__int64__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__int64__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module int64.
