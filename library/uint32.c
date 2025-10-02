/*
** Automatically generated from `uint32.m'
** by the Mercury compiler,
** version rotd-2025-10-02
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


// :- module uint32.
// :- implementation.

/*
INIT mercury__uint32__init
ENDINIT
*/

#include "uint32.mih"


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





static /* final */ const MR_Box mercury__uint32_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint32_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint32_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__uint32_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint32_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint32_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint32_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint32_scalar_common_2[0])),
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
mercury__uint32__uint32_to_doc_1_f_0(
  uint32_t U_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

{
#define MR_PROC_LABEL mercury__uint32__uint32_to_doc_1_f_0

	uint32_t U32;
	MR_String S;

	U32 = U_3 ;
		{

    int num_digits;
    if (U32 < 10) {
        num_digits = 1;
    } else if (U32 < 100) {
        num_digits = 2;
    } else if (U32 < 1000) {
        num_digits = 3;
    } else if (U32 < 10000) {
        num_digits = 4;
    } else if (U32 < 100000) {
        num_digits = 5;
    } else if (U32 < 1000000) {
        num_digits = 6;
    } else if (U32 < 10000000) {
        num_digits = 7;
    } else if (U32 < 100000000) {
        num_digits = 8;
    } else if (U32 < 1000000000) {
        num_digits = 9;
    } else {
        num_digits = 10;
    }

    MR_allocate_aligned_string_msg(S, num_digits, MR_ALLOC_ID);
    S[num_digits] = '\0';
    int i = num_digits - 1;
    do {
        S[i] = "0123456789"[U32 % 10];
        i--;
        U32 /= 10;
    } while(U32 > 0);


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

uint32_t MR_CALL 
mercury__uint32__max_uint32_0_f_0(void)
{
  return UINT32_C(4294967295);
}

MR_bool MR_CALL 
mercury__uint32__unchecked_bit_is_clear_2_p_0(
  uint32_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded;
  uint32_t Var_5;
  uint32_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_bit_is_clear_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT32_C(1) << Var_8);
  Var_5 = (U_3 & Var_6);
  succeeded = (Var_5 == UINT32_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__bit_is_clear_2_p_0(
  uint32_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded = (I_4 < (MR_Unsigned) 32U);

  if (succeeded)
  {
    uint32_t Var_8;
    uint32_t Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__uint32__bit_is_clear_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
    Var_9 = (UINT32_C(1) << Var_11);
    Var_8 = (U_3 & Var_9);
    succeeded = (Var_8 == UINT32_C(0));
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140uint32.bit_is_clear\'/2", (MR_String) "bit index exceeds 31 bits");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__unchecked_bit_is_set_2_p_0(
  uint32_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded;
  uint32_t Var_5;
  uint32_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_bit_is_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT32_C(1) << Var_8);
  Var_5 = (U_3 & Var_6);
  succeeded = (Var_5 != UINT32_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__bit_is_set_2_p_0(
  uint32_t U_3,
  MR_Unsigned I_4)
{
  MR_bool succeeded = (I_4 < (MR_Unsigned) 32U);

  if (succeeded)
  {
    uint32_t Var_8;
    uint32_t Var_9;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__uint32__bit_is_set_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_11  = I;
}
    Var_9 = (UINT32_C(1) << Var_11);
    Var_8 = (U_3 & Var_9);
    succeeded = (Var_8 != UINT32_C(0));
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140uint32.bit_is_set\'/2", (MR_String) "bit index exceeds 31 bits");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_flip_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  uint32_t HeadVar__3_3;
  uint32_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_flip_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT32_C(1) << Var_8);
  HeadVar__3_3 = (U_4 ^ Var_6);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__flip_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 32U);
  uint32_t HeadVar__3_3;

  if (succeeded)
  {
    uint32_t Var_10;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__uint32__flip_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
    Var_10 = (UINT32_C(1) << Var_12);
    HeadVar__3_3 = (U_4 ^ Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_String) "function \140uint32.flip_bit\'/2", (MR_String) "bit index exceeds 31 bits");
    HeadVar__3_3 = ((uint32_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_clear_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  uint32_t HeadVar__3_3;
  uint32_t Var_6;
  uint32_t Var_7;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_clear_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_9  = I;
}
  Var_7 = (UINT32_C(1) << Var_9);
  Var_6 = ~(Var_7);
  HeadVar__3_3 = (U_4 & Var_6);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__clear_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 32U);
  uint32_t HeadVar__3_3;

  if (succeeded)
  {
    uint32_t Var_10;
    uint32_t Var_11;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__uint32__clear_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_13  = I;
}
    Var_11 = (UINT32_C(1) << Var_13);
    Var_10 = ~(Var_11);
    HeadVar__3_3 = (U_4 & Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_String) "function \140uint32.clear_bit\'/2", (MR_String) "bit index exceeds 31 bits");
    HeadVar__3_3 = ((uint32_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_set_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  uint32_t HeadVar__3_3;
  uint32_t Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_set_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
  Var_6 = (UINT32_C(1) << Var_8);
  HeadVar__3_3 = (U_4 | Var_6);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__set_bit_2_f_0(
  uint32_t U_4,
  MR_Unsigned I_5)
{
  MR_bool succeeded = (I_5 < (MR_Unsigned) 32U);
  uint32_t HeadVar__3_3;

  if (succeeded)
  {
    uint32_t Var_10;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__uint32__set_bit_2_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = I_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
    Var_10 = (UINT32_C(1) << Var_12);
    HeadVar__3_3 = (U_4 | Var_10);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_String) "function \140uint32.set_bit\'/2", (MR_String) "bit index exceeds 31 bits");
    HeadVar__3_3 = ((uint32_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_rotate_right_2_f_0(
  uint32_t X_1,
  MR_Unsigned N_2)
{
  uint32_t Result_3;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_rotate_right_2_f_0

	uint32_t X;
	MR_Unsigned N;
	uint32_t Result;

	X = X_1 ;
	N = N_2 ;
		{

    N &= 31;
    Result = (X >> N) | (X << (-N & 31));


		;}
#undef MR_PROC_LABEL
	Result_3  = Result;
}
  return Result_3;
}

uint32_t MR_CALL 
mercury__uint32__rotate_right_2_f_0(
  uint32_t X_4,
  MR_Unsigned N_5)
{
  MR_bool succeeded = (N_5 < (MR_Unsigned) 32U);
  uint32_t HeadVar__3_3;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint32__rotate_right_2_f_0

	uint32_t X;
	MR_Unsigned N;
	uint32_t Result;

	X = X_4 ;
	N = N_5 ;
		{

    N &= 31;
    Result = (X >> N) | (X << (-N & 31));


		;}
#undef MR_PROC_LABEL
	HeadVar__3_3  = Result;
}
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_String) "function \140uint32.rotate_right\'/2", (MR_String) "rotate amount exceeds 31 bits");
    HeadVar__3_3 = ((uint32_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_rotate_left_2_f_0(
  uint32_t X_1,
  MR_Unsigned N_2)
{
  uint32_t Result_3;

{
#define MR_PROC_LABEL mercury__uint32__unchecked_rotate_left_2_f_0

	uint32_t X;
	MR_Unsigned N;
	uint32_t Result;

	X = X_1 ;
	N = N_2 ;
		{

    N &= 31;
    // This implementation is from https://blog.regehr.org/archives/1063.
    // It is intended to avoid undefined behaviour in C and be recognisable by
    // C compilers as a rotate operation. (On architectures that have a rotate
    // instruction, some C compilers can recognise this formulation and replace
    // it with the appropriate machine instruction.)
    // XXX clang has intrinsics for rotation -- we should use those instead.
    Result = (X << N) | (X >> (-N & 31));


		;}
#undef MR_PROC_LABEL
	Result_3  = Result;
}
  return Result_3;
}

uint32_t MR_CALL 
mercury__uint32__rotate_left_2_f_0(
  uint32_t X_4,
  MR_Unsigned N_5)
{
  MR_bool succeeded = (N_5 < (MR_Unsigned) 32U);
  uint32_t HeadVar__3_3;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__uint32__rotate_left_2_f_0

	uint32_t X;
	MR_Unsigned N;
	uint32_t Result;

	X = X_4 ;
	N = N_5 ;
		{

    N &= 31;
    // This implementation is from https://blog.regehr.org/archives/1063.
    // It is intended to avoid undefined behaviour in C and be recognisable by
    // C compilers as a rotate operation. (On architectures that have a rotate
    // instruction, some C compilers can recognise this formulation and replace
    // it with the appropriate machine instruction.)
    // XXX clang has intrinsics for rotation -- we should use those instead.
    Result = (X << N) | (X >> (-N & 31));


		;}
#undef MR_PROC_LABEL
	HeadVar__3_3  = Result;
}
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_String) "function \140uint32.rotate_left\'/2", (MR_String) "rotate amount exceeds 31 bits");
    HeadVar__3_3 = ((uint32_t) (MR_Word) conv0_HeadVar__3_3);
  }
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__reverse_bits_1_f_0(
  uint32_t A_1)
{
  uint32_t B_2;

{
#define MR_PROC_LABEL mercury__uint32__reverse_bits_1_f_0

	uint32_t A;
	uint32_t B;

	A = A_1 ;
		{

    A = ((A & UINT32_C(0x55555555)) << 1) | ((A >> 1) & UINT32_C(0x55555555));
    A = ((A & UINT32_C(0x33333333)) << 2) | ((A >> 2) & UINT32_C(0x33333333));
    A = ((A & UINT32_C(0x0f0f0f0f)) << 4) | ((A >> 4) & UINT32_C(0x0f0f0f0f));
    A = (A << 24) | ((A & UINT32_C(0xff00)) << 8) |
                    ((A >> 8) & UINT32_C(0xff00)) | (A >> 24);
    B = A;


		;}
#undef MR_PROC_LABEL
	B_2  = B;
}
  return B_2;
}

uint32_t MR_CALL 
mercury__uint32__reverse_bytes_1_f_0(
  uint32_t A_1)
{
  uint32_t B_2;

{
#define MR_PROC_LABEL mercury__uint32__reverse_bytes_1_f_0

	uint32_t A;
	uint32_t B;

	A = A_1 ;
		{

    B = MR_uint32_reverse_bytes(A);


		;}
#undef MR_PROC_LABEL
	B_2  = B;
}
  return B_2;
}

MR_Integer MR_CALL 
mercury__uint32__num_trailing_zeros_1_f_0(
  uint32_t U_1)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint32__num_trailing_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U = U_1 ;
		{

    if (U == 0) {
        N = 32;
    } else {
    #if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_INT_IS_32_BIT)
        N = __builtin_ctz(U);
    #else
        int32_t     n = 31;
        uint32_t    y;
        y = U << 16; if (y != 0) { n -= 16; U = y; }
        y = U <<  8; if (y != 0) { n -= 8;  U = y; }
        y = U <<  4; if (y != 0) { n -= 4;  U = y; }
        y = U <<  2; if (y != 0) { n -= 2;  U = y; }
        y = U <<  1; if (y != 0) { n -= 1; }
        N = n;
    #endif
    }


		;}
#undef MR_PROC_LABEL
	N_2  = N;
}
  return N_2;
}

MR_Integer MR_CALL 
mercury__uint32__num_leading_zeros_1_f_0(
  uint32_t U_1)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint32__num_leading_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U = U_1 ;
		{

    if (U == 0) {
        N = 32;
    } else {
    #if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_INT_IS_32_BIT)
        // Note that __builtin_clz(0) is undefined.
        N = __builtin_clz(U);
    #else
        int32_t n = 1;
        if ((U >> 16) == 0) { n += 16; U <<= 16; }
        if ((U >> 24) == 0) { n += 8;  U <<= 8;  }
        if ((U >> 28) == 0) { n += 4;  U <<= 4;  }
        if ((U >> 30) == 0) { n += 2;  U <<= 2;  }
        N = n - (U >> 31);
    #endif
    }


		;}
#undef MR_PROC_LABEL
	N_2  = N;
}
  return N_2;
}

MR_Integer MR_CALL 
mercury__uint32__num_ones_1_f_0(
  uint32_t U_1)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint32__num_ones_1_f_0

	uint32_t U;
	MR_Integer N;

	U = U_1 ;
		{

#if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_INT_IS_32_BIT)
    N = __builtin_popcount(U);
#else
    U = U - ((U >> 1) & UINT32_C(0x55555555));
    U = (U & UINT32_C(0x33333333)) + ((U >> 2) & UINT32_C(0x33333333));
    U = (U + (U >> 4)) & UINT32_C(0x0f0f0f0f);
    U = U + (U >> 8);
    U = U + (U >> 16);
    N = (MR_Integer) (U & UINT32_C(0x3f));
#endif


		;}
#undef MR_PROC_LABEL
	N_2  = N;
}
  return N_2;
}

MR_Integer MR_CALL 
mercury__uint32__num_zeros_1_f_0(
  uint32_t U_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__uint32__num_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U = U_3 ;
		{

#if (defined(MR_GNUC) || defined(MR_CLANG)) && defined(MR_INT_IS_32_BIT)
    N = __builtin_popcount(U);
#else
    U = U - ((U >> 1) & UINT32_C(0x55555555));
    U = (U & UINT32_C(0x33333333)) + ((U >> 2) & UINT32_C(0x33333333));
    U = (U + (U >> 4)) & UINT32_C(0x0f0f0f0f);
    U = U + (U >> 8);
    U = U + (U >> 16);
    N = (MR_Integer) (U & UINT32_C(0x3f));
#endif


		;}
#undef MR_PROC_LABEL
	Var_5  = N;
}
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 32 - (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

uint32_t MR_CALL 
mercury__uint32__f_92_1_f_0(
  uint32_t HeadVar__1_1)
{
  uint32_t HeadVar__2_2 = ~(HeadVar__1_1);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__uint32__xor_2_f_2(
  uint32_t * HeadVar__1_1,
  uint32_t HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__uint32__xor_2_f_1(
  uint32_t HeadVar__1_1,
  uint32_t * HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

uint32_t MR_CALL 
mercury__uint32__xor_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_92_47_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_47_92_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_right_ushift_2_f_0(
  uint32_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 >> (int) HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_right_shift_2_f_0(
  uint32_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_62_62_117_2_f_0(
  uint32_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 32U);
  uint32_t Result_6;

  if (succeeded)
    Result_6 = (X_4 >> (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.(>>u): second operand is out of range")))));
  return Result_6;
}

uint32_t MR_CALL 
mercury__uint32__f_62_62_2_f_0(
  uint32_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  uint32_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint32__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_8  = U;
}
  succeeded = (Var_8 < (MR_Unsigned) 32U);
  if (succeeded)
    Result_6 = (X_4 >> Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.(>>): second operand is out of range")))));
  return Result_6;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_left_ushift_2_f_0(
  uint32_t HeadVar__1_1,
  MR_Unsigned HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 << (int) HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_left_shift_2_f_0(
  uint32_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_60_60_117_2_f_0(
  uint32_t X_4,
  MR_Unsigned Y_5)
{
  MR_bool succeeded = (Y_5 < (MR_Unsigned) 32U);
  uint32_t Result_6;

  if (succeeded)
    Result_6 = (X_4 << (int) Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.(<<u): second operand is out of range")))));
  return Result_6;
}

uint32_t MR_CALL 
mercury__uint32__f_60_60_2_f_0(
  uint32_t X_4,
  MR_Integer Y_5)
{
  MR_bool succeeded;
  uint32_t Result_6;
  MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint32__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Y_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_8  = U;
}
  succeeded = (Var_8 < (MR_Unsigned) 32U);
  if (succeeded)
    Result_6 = (X_4 << Y_5);
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.(<<): second operand is out of range")))));
  return Result_6;
}

MR_bool MR_CALL 
mercury__uint32__odd_1_p_0(
  uint32_t X_2)
{
  MR_bool succeeded;
  uint32_t Var_3 = (X_2 & UINT32_C(1));

  succeeded = (Var_3 != UINT32_C(0));
  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__even_1_p_0(
  uint32_t X_2)
{
  MR_bool succeeded;
  uint32_t Var_3 = (X_2 & UINT32_C(1));

  succeeded = (Var_3 == UINT32_C(0));
  return succeeded;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_rem_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__rem_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT32_C(0));
  uint32_t Rem_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.rem: division by zero")))));
  else
    Rem_6 = (X_4 % Y_5);
  return Rem_6;
}

uint32_t MR_CALL 
mercury__uint32__mod_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT32_C(0));
  uint32_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.rem: division by zero")))));
  else
    HeadVar__3_3 = (X_4 % Y_5);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__unchecked_quotient_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_slash_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT32_C(0));
  uint32_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_47_47_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT32_C(0));
  uint32_t Div_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
  else
    Div_6 = (X_4 / Y_5);
  return Div_6;
}

uint32_t MR_CALL 
mercury__uint32__div_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (Y_5 == UINT32_C(0));
  uint32_t HeadVar__3_3;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint32.\'//\': division by zero")))));
  else
    HeadVar__3_3 = (X_4 / Y_5);
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__times_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__f_times_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__minus_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__uint32__f_minus_2_f_2(
  uint32_t HeadVar__1_1,
  uint32_t * HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__uint32__f_minus_2_f_1(
  uint32_t * HeadVar__1_1,
  uint32_t HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

uint32_t MR_CALL 
mercury__uint32__f_minus_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__plus_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

  return HeadVar__3_3;
}

void MR_CALL 
mercury__uint32__f_plus_2_f_2(
  uint32_t HeadVar__1_1,
  uint32_t * HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__uint32__f_plus_2_f_1(
  uint32_t * HeadVar__1_1,
  uint32_t HeadVar__2_2,
  uint32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

uint32_t MR_CALL 
mercury__uint32__f_plus_2_f_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  uint32_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__min_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (X_4 < Y_5);
  uint32_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

uint32_t MR_CALL 
mercury__uint32__max_2_f_0(
  uint32_t X_4,
  uint32_t Y_5)
{
  MR_bool succeeded = (X_4 > Y_5);
  uint32_t HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = X_4;
  else
    HeadVar__3_3 = Y_5;
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__uint32__f_greater_or_equal_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__f_less_or_equal_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__f_greater_than_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
mercury__uint32__f_less_than_2_p_0(
  uint32_t HeadVar__1_1,
  uint32_t HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

  return succeeded;
}

uint32_t MR_CALL 
mercury__uint32__from_bytes_be_4_f_0(
  uint8_t Byte3_6,
  uint8_t Byte2_7,
  uint8_t Byte1_8,
  uint8_t Byte0_9)
{
  uint32_t HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__uint32__from_bytes_be_4_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint32_t U32;

	Byte0 = Byte0_9 ;
	Byte1 = Byte1_8 ;
	Byte2 = Byte2_7 ;
	Byte3 = Byte3_6 ;
		{

    unsigned char *uint32_bytes = (unsigned char *) &U32;
#if defined(MR_BIG_ENDIAN)
    uint32_bytes[0] = Byte3;
    uint32_bytes[1] = Byte2;
    uint32_bytes[2] = Byte1;
    uint32_bytes[3] = Byte0;
#else
    uint32_bytes[0] = Byte0;
    uint32_bytes[1] = Byte1;
    uint32_bytes[2] = Byte2;
    uint32_bytes[3] = Byte3;
#endif


		;}
#undef MR_PROC_LABEL
	HeadVar__5_5  = U32;
}
  return HeadVar__5_5;
}

uint32_t MR_CALL 
mercury__uint32__from_bytes_le_4_f_0(
  uint8_t Byte0_1,
  uint8_t Byte1_2,
  uint8_t Byte2_3,
  uint8_t Byte3_4)
{
  uint32_t U32_5;

{
#define MR_PROC_LABEL mercury__uint32__from_bytes_le_4_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint32_t U32;

	Byte0 = Byte0_1 ;
	Byte1 = Byte1_2 ;
	Byte2 = Byte2_3 ;
	Byte3 = Byte3_4 ;
		{

    unsigned char *uint32_bytes = (unsigned char *) &U32;
#if defined(MR_BIG_ENDIAN)
    uint32_bytes[0] = Byte3;
    uint32_bytes[1] = Byte2;
    uint32_bytes[2] = Byte1;
    uint32_bytes[3] = Byte0;
#else
    uint32_bytes[0] = Byte0;
    uint32_bytes[1] = Byte1;
    uint32_bytes[2] = Byte2;
    uint32_bytes[3] = Byte3;
#endif


		;}
#undef MR_PROC_LABEL
	U32_5  = U32;
}
  return U32_5;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_int32_1_f_0(
  int32_t I32_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_int32_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 = I32_1 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_uint64_1_f_0(
  uint64_t U64_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_uint64_1_f_0

	uint64_t U64;
	uint32_t U32;

	U64 = U64_1 ;
		{

    U32 = (uint32_t) U64;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint64_t MR_CALL 
mercury__uint32__cast_to_uint64_1_f_0(
  uint32_t U32_1)
{
  uint64_t U64_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_to_uint64_1_f_0

	uint32_t U32;
	uint64_t U64;

	U32 = U32_1 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	U64_2  = U64;
}
  return U64_2;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_uint16_1_f_0(
  uint16_t U16_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_uint16_1_f_0

	uint16_t U16;
	uint32_t U32;

	U16 = U16_1 ;
		{

    U32 = (uint32_t) U16;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint16_t MR_CALL 
mercury__uint32__cast_to_uint16_1_f_0(
  uint32_t U32_1)
{
  uint16_t U16_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_to_uint16_1_f_0

	uint32_t U32;
	uint16_t U16;

	U32 = U32_1 ;
		{

    U16 = (uint16_t) U32;


		;}
#undef MR_PROC_LABEL
	U16_2  = U16;
}
  return U16_2;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_uint8_1_f_0(
  uint8_t U8_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_uint8_1_f_0

	uint8_t U8;
	uint32_t U32;

	U8 = U8_1 ;
		{

    U32 = (uint32_t) U8;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint8_t MR_CALL 
mercury__uint32__cast_to_uint8_1_f_0(
  uint32_t U32_1)
{
  uint8_t U8_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_to_uint8_1_f_0

	uint32_t U32;
	uint8_t U8;

	U32 = U32_1 ;
		{

    U8 = (uint8_t) U32;


		;}
#undef MR_PROC_LABEL
	U8_2  = U8;
}
  return U8_2;
}

MR_Unsigned MR_CALL 
mercury__uint32__cast_to_uint_1_f_0(
  uint32_t U32_1)
{
  MR_Unsigned U_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_to_uint_1_f_0

	uint32_t U32;
	MR_Unsigned U;

	U32 = U32_1 ;
		{

    U = (MR_Unsigned) U32;


		;}
#undef MR_PROC_LABEL
	U_2  = U;
}
  return U_2;
}

MR_Integer MR_CALL 
mercury__uint32__cast_to_int_1_f_0(
  uint32_t U32_1)
{
  MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_to_int_1_f_0

	uint32_t U32;
	MR_Integer I;

	U32 = U32_1 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	I_2  = I;
}
  return I_2;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_uint_1_f_0(
  MR_Unsigned U_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_uint_1_f_0

	MR_Unsigned U;
	uint32_t U32;

	U = U_1 ;
		{

    U32 = (uint32_t) U;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint32_t MR_CALL 
mercury__uint32__det_from_uint_1_f_0(
  MR_Unsigned U_3)
{
  MR_bool succeeded;
  uint32_t U32_4;
  uint32_t U32Prime_5;

{
#define MR_PROC_LABEL mercury__uint32__det_from_uint_1_f_0

	MR_Unsigned U;
	uint32_t U32;
	MR_bool SUCCESS_INDICATOR;

	U = U_3 ;
		{

    if ((uint64_t) U > (uint64_t) UINT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U32 = (uint32_t) U;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	U32Prime_5  = U32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    U32_4 = U32Prime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140uint32.det_from_uint\'/1", (MR_String) "cannot convert int to uint32");
  return U32_4;
}

MR_bool MR_CALL 
mercury__uint32__from_uint_2_p_0(
  MR_Unsigned U_1,
  uint32_t * U32_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__uint32__from_uint_2_p_0

	MR_Unsigned U;
	uint32_t U32;
	MR_bool SUCCESS_INDICATOR;

	U = U_1 ;
		{

    if ((uint64_t) U > (uint64_t) UINT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U32 = (uint32_t) U;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*U32_2  = U32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

uint32_t MR_CALL 
mercury__uint32__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  uint32_t U32_2;

{
#define MR_PROC_LABEL mercury__uint32__cast_from_int_1_f_0

	MR_Integer I;
	uint32_t U32;

	I = I_1 ;
		{

    U32 = (uint32_t) I;


		;}
#undef MR_PROC_LABEL
	U32_2  = U32;
}
  return U32_2;
}

uint32_t MR_CALL 
mercury__uint32__det_from_int_1_f_0(
  MR_Integer I_3)
{
  MR_bool succeeded;
  uint32_t U_4;
  uint32_t U0_5;

{
#define MR_PROC_LABEL mercury__uint32__det_from_int_1_f_0

	MR_Integer I;
	uint32_t U32;
	MR_bool SUCCESS_INDICATOR;

	I = I_3 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if ((uint64_t) I > (uint64_t) UINT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U32 = (uint32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	U0_5  = U32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    U_4 = U0_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140uint32.det_from_int\'/1", (MR_String) "cannot convert int to uint32");
  return U_4;
}

MR_bool MR_CALL 
mercury__uint32__from_int_2_p_0(
  MR_Integer I_1,
  uint32_t * U32_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__uint32__from_int_2_p_0

	MR_Integer I;
	uint32_t U32;
	MR_bool SUCCESS_INDICATOR;

	I = I_1 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if ((uint64_t) I > (uint64_t) UINT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U32 = (uint32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*U32_2  = U32;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void mercury__uint32__init(void)
{
}

void mercury__uint32__init_type_tables(void)
{
}

void mercury__uint32__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint32__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module uint32.
