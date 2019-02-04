/*
** Automatically generated from `int32.m'
** by the Mercury compiler,
** version rotd-2018-08-19
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


// :- module int32.
// :- implementation.

/*
INIT mercury__int32__init
ENDINIT
*/

#include "int32.mih"


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
#include "int64.mih"
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
mercury__int32__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__int32_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__int32_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__int32_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__int32_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int32_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int32_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__int32_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int32_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__int32_scalar_common_2[0])),
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
mercury__int32__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Word MR_CALL 
mercury__int32__int32_to_doc_1_f_0(
  int32_t X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__int32__int32_to_doc_1_f_0

	int32_t I32;
	MR_String S;

	I32 =  X_3 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
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

int32_t MR_CALL 
mercury__int32__max_int32_0_f_0(void)
{
  {
    return INT32_C(2147483647);
  }
}

int32_t MR_CALL 
mercury__int32__min_int32_0_f_0(void)
{
  {
    return INT32_C(-2147483648);
  }
}

int32_t MR_CALL 
mercury__int32__reverse_bits_1_f_0(
  int32_t I32_3)
{
  {
    int32_t RevI32_4;
    uint32_t U32_5;
    uint32_t RevU32_6;

{
#define MR_PROC_LABEL mercury__int32__reverse_bits_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 =  I32_3 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 U32_5  = U32;
}
{
#define MR_PROC_LABEL mercury__int32__reverse_bits_1_f_0

	uint32_t A;
	uint32_t B;

	A =  U32_5 ;
		{

    A = ((A & UINT32_C(0x55555555)) << 1) | ((A >> 1) & UINT32_C(0x55555555));
    A = ((A & UINT32_C(0x33333333)) << 2) | ((A >> 2) & UINT32_C(0x33333333));
    A = ((A & UINT32_C(0x0f0f0f0f)) << 4) | ((A >> 4) & UINT32_C(0x0f0f0f0f));
    A = (A << 24) | ((A & UINT32_C(0xff00)) << 8) |
                    ((A >> 8) & UINT32_C(0xff00)) | (A >> 24);
    B = A;


		;}
#undef MR_PROC_LABEL
	 RevU32_6  = B;
}
{
#define MR_PROC_LABEL mercury__int32__reverse_bits_1_f_0

	uint32_t U32;
	int32_t I32;

	U32 =  RevU32_6 ;
		{

    I32 = U32;


		;}
#undef MR_PROC_LABEL
	 RevI32_4  = I32;
}
    return RevI32_4;
  }
}

int32_t MR_CALL 
mercury__int32__reverse_bytes_1_f_0(
  int32_t A_1)
{
  {
    int32_t B_2;

{
#define MR_PROC_LABEL mercury__int32__reverse_bytes_1_f_0

	int32_t A;
	int32_t B;

	A =  A_1 ;
		{

    B = (int32_t) MR_uint32_reverse_bytes((uint32_t) A);


		;}
#undef MR_PROC_LABEL
	 B_2  = B;
}
    return B_2;
  }
}

MR_Integer MR_CALL 
mercury__int32__num_trailing_zeros_1_f_0(
  int32_t I32_3)
{
  {
    MR_Integer N_4;
    uint32_t U32_5;

{
#define MR_PROC_LABEL mercury__int32__num_trailing_zeros_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 =  I32_3 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 U32_5  = U32;
}
{
#define MR_PROC_LABEL mercury__int32__num_trailing_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U =  U32_5 ;
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
	 N_4  = N;
}
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int32__num_leading_zeros_1_f_0(
  int32_t I32_3)
{
  {
    MR_Integer N_4;
    uint32_t U32_5;

{
#define MR_PROC_LABEL mercury__int32__num_leading_zeros_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 =  I32_3 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 U32_5  = U32;
}
{
#define MR_PROC_LABEL mercury__int32__num_leading_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U =  U32_5 ;
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
	 N_4  = N;
}
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int32__num_ones_1_f_0(
  int32_t I32_3)
{
  {
    MR_Integer N_4;
    uint32_t U32_5;

{
#define MR_PROC_LABEL mercury__int32__num_ones_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 =  I32_3 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 U32_5  = U32;
}
{
#define MR_PROC_LABEL mercury__int32__num_ones_1_f_0

	uint32_t U;
	MR_Integer N;

	U =  U32_5 ;
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
	 N_4  = N;
}
    return N_4;
  }
}

MR_Integer MR_CALL 
mercury__int32__num_zeros_1_f_0(
  int32_t I_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5;
    uint32_t U32_8;

{
#define MR_PROC_LABEL mercury__int32__num_zeros_1_f_0

	int32_t I32;
	uint32_t U32;

	I32 =  I_3 ;
		{

    U32 = (uint32_t) I32;


		;}
#undef MR_PROC_LABEL
	 U32_8  = U32;
}
{
#define MR_PROC_LABEL mercury__int32__num_zeros_1_f_0

	uint32_t U;
	MR_Integer N;

	U =  U32_8 ;
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
    HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 32 - (MR_Unsigned) Var_5);
    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__f_92_1_f_0(
  int32_t HeadVar__1_1)
{
  {
    int32_t HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__int32__xor_2_f_2(
  int32_t * HeadVar__1_1,
  int32_t HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__int32__xor_2_f_1(
  int32_t HeadVar__1_1,
  int32_t * HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

int32_t MR_CALL 
mercury__int32__xor_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_92_47_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_47_92_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__unchecked_right_shift_2_f_0(
  int32_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_62_62_2_f_0(
  int32_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int32_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int32__f_62_62_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
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
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.(>>): second operand is out of range")))));
    }
    return Result_6;
  }
}

int32_t MR_CALL 
mercury__int32__unchecked_left_shift_2_f_0(
  int32_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_60_60_2_f_0(
  int32_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    int32_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__int32__f_60_60_2_f_0

	MR_Integer I;
	MR_Unsigned U;

	I =  Y_5 ;
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
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.(<<): second operand is out of range")))));
    }
    return Result_6;
  }
}

MR_bool MR_CALL 
mercury__int32__odd_1_p_0(
  int32_t X_2)
{
  {
    MR_bool succeeded;
    int32_t Var_3 = (X_2 & INT32_C(1));

    succeeded = (Var_3 == INT32_C(0));
    succeeded = !(succeeded);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int32__even_1_p_0(
  int32_t X_2)
{
  {
    MR_bool succeeded;
    int32_t Var_3 = (X_2 & INT32_C(1));

    succeeded = (Var_3 == INT32_C(0));
    return succeeded;
  }
}

int32_t MR_CALL 
mercury__int32__unchecked_rem_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__rem_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT32_C(0));
    int32_t Rem_6;

    if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.rem: division by zero")))));
    }
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

int32_t MR_CALL 
mercury__int32__mod_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    int32_t HeadVar__3_3;
    int32_t Var_6;
    int32_t Var_7;

    Var_7 = mercury__int32__div_2_f_0(X_4, Y_5);
    Var_6 = (int32_t) ((uint32_t) Var_7 * (uint32_t) Y_5);
    HeadVar__3_3 = (int32_t) ((uint32_t) X_4 - (uint32_t) Var_6);
    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__unchecked_quotient_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_slash_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT32_C(0));
    int32_t HeadVar__3_3;

    if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.\'//\': division by zero")))));
    }
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_47_47_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT32_C(0));
    int32_t Div_6;

    if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.\'//\': division by zero")))));
    }
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

int32_t MR_CALL 
mercury__int32__div_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == INT32_C(0));
    int32_t Div_6;
    int32_t Trunc_7;

    if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.\'//\': division by zero")))));
    }
    else
      Trunc_7 = (X_4 / Y_5);
    {
      int32_t Var_12;

      succeeded = (X_4 >= INT32_C(0));
      if (succeeded)
      {
        Var_12 = INT32_C(0);
        succeeded = (Y_5 >= Var_12);
      }
    }
    if (!(succeeded))
    {
      {
        int32_t Var_10;

        succeeded = (X_4 < INT32_C(0));
        if (succeeded)
        {
          Var_10 = INT32_C(0);
          succeeded = (Y_5 < Var_10);
        }
      }
      if (!(succeeded))
      {
        int32_t Var_8;

        succeeded = (Y_5 == INT32_C(0));
        if (succeeded)
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.rem: division by zero")))));
        }
        else
          Var_8 = (X_4 % Y_5);
        succeeded = (Var_8 == INT32_C(0));
      }
    }
    if (succeeded)
      Div_6 = Trunc_7;
    else
    {
      Div_6 = (int32_t) ((uint32_t) Trunc_7 - (uint32_t) INT32_C(1));
    }
    return Div_6;
  }
}

int32_t MR_CALL 
mercury__int32__times_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 * (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_times_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 * (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__minus_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 - (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int32__f_minus_2_f_2(
  int32_t HeadVar__1_1,
  int32_t * HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int32_t) ((uint32_t) HeadVar__1_1 - (uint32_t) HeadVar__3_3);
}

void MR_CALL 
mercury__int32__f_minus_2_f_1(
  int32_t * HeadVar__1_1,
  int32_t HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int32_t) ((uint32_t) HeadVar__2_2 + (uint32_t) HeadVar__3_3);
}

int32_t MR_CALL 
mercury__int32__f_minus_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 - (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__plus_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 + (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__int32__f_plus_2_f_2(
  int32_t HeadVar__1_1,
  int32_t * HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__2_2 = (int32_t) ((uint32_t) HeadVar__3_3 - (uint32_t) HeadVar__1_1);
}

void MR_CALL 
mercury__int32__f_plus_2_f_1(
  int32_t * HeadVar__1_1,
  int32_t HeadVar__2_2,
  int32_t HeadVar__3_3)
{
  *HeadVar__1_1 = (int32_t) ((uint32_t) HeadVar__3_3 - (uint32_t) HeadVar__2_2);
}

int32_t MR_CALL 
mercury__int32__f_plus_2_f_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    int32_t HeadVar__3_3 = (int32_t) ((uint32_t) HeadVar__1_1 + (uint32_t) HeadVar__2_2);

    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__f_minus_1_f_0(
  int32_t HeadVar__1_1)
{
  {
    int32_t HeadVar__2_2 = (int32_t) ((uint32_t) INT32_C(0) - (uint32_t) HeadVar__1_1);

    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__f_plus_1_f_0(
  int32_t HeadVar__1_1)
{
  {
    int32_t HeadVar__2_2 = HeadVar__1_1;

    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__nabs_1_f_0(
  int32_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 > INT32_C(0));
    int32_t HeadVar__2_2;

    if (succeeded)
      HeadVar__2_2 = (int32_t) ((uint32_t) INT32_C(0) - (uint32_t) Num_3);
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__unchecked_abs_1_f_0(
  int32_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 < INT32_C(0));
    int32_t HeadVar__2_2;

    if (succeeded)
    {
      HeadVar__2_2 = (int32_t) ((uint32_t) INT32_C(0) - (uint32_t) Num_3);
    }
    else
      HeadVar__2_2 = Num_3;
    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__abs_1_f_0(
  int32_t Num_3)
{
  {
    MR_bool succeeded = (Num_3 == INT32_C(-2147483648));
    int32_t HeadVar__2_2;

    if (succeeded)
    {
      MR_Box conv0_HeadVar__2_2;

      conv0_HeadVar__2_2 = mercury__exception__throw_1_f_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), ((MR_Box) (((MR_Box) ((MR_String) "int32.abs: abs(min_int32) would overflow")))));
      HeadVar__2_2 = ((int32_t) (MR_Word) conv0_HeadVar__2_2);
    }
    else
    {
      succeeded = (Num_3 < INT32_C(0));
      if (succeeded)
      {
        HeadVar__2_2 = (int32_t) ((uint32_t) INT32_C(0) - (uint32_t) Num_3);
      }
      else
        HeadVar__2_2 = Num_3;
    }
    return HeadVar__2_2;
  }
}

int32_t MR_CALL 
mercury__int32__min_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    int32_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

int32_t MR_CALL 
mercury__int32__max_2_f_0(
  int32_t X_4,
  int32_t Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    int32_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__int32__f_greater_or_equal_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int32__f_less_or_equal_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int32__f_greater_than_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__int32__f_less_than_2_p_0(
  int32_t HeadVar__1_1,
  int32_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

int32_t MR_CALL 
mercury__int32__from_bytes_be_4_f_0(
  uint8_t Byte3_6,
  uint8_t Byte2_7,
  uint8_t Byte1_8,
  uint8_t Byte0_9)
{
  {
    int32_t HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__int32__from_bytes_be_4_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	int32_t I32;

	Byte0 =  Byte0_9 ;
	Byte1 =  Byte1_8 ;
	Byte2 =  Byte2_7 ;
	Byte3 =  Byte3_6 ;
		{

    unsigned char *int32_bytes = (unsigned char *) &I32;
#if defined(MR_BIG_ENDIAN)
    int32_bytes[0] = Byte3;
    int32_bytes[1] = Byte2;
    int32_bytes[2] = Byte1;
    int32_bytes[3] = Byte2;
#else
    int32_bytes[0] = Byte0;
    int32_bytes[1] = Byte1;
    int32_bytes[2] = Byte2;
    int32_bytes[3] = Byte3;
#endif


		;}
#undef MR_PROC_LABEL
	 HeadVar__5_5  = I32;
}
    return HeadVar__5_5;
  }
}

int32_t MR_CALL 
mercury__int32__from_bytes_le_4_f_0(
  uint8_t Byte0_1,
  uint8_t Byte1_2,
  uint8_t Byte2_3,
  uint8_t Byte3_4)
{
  {
    int32_t I32_5;

{
#define MR_PROC_LABEL mercury__int32__from_bytes_le_4_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	int32_t I32;

	Byte0 =  Byte0_1 ;
	Byte1 =  Byte1_2 ;
	Byte2 =  Byte2_3 ;
	Byte3 =  Byte3_4 ;
		{

    unsigned char *int32_bytes = (unsigned char *) &I32;
#if defined(MR_BIG_ENDIAN)
    int32_bytes[0] = Byte3;
    int32_bytes[1] = Byte2;
    int32_bytes[2] = Byte1;
    int32_bytes[3] = Byte2;
#else
    int32_bytes[0] = Byte0;
    int32_bytes[1] = Byte1;
    int32_bytes[2] = Byte2;
    int32_bytes[3] = Byte3;
#endif


		;}
#undef MR_PROC_LABEL
	 I32_5  = I32;
}
    return I32_5;
  }
}

int32_t MR_CALL 
mercury__int32__cast_from_uint32_1_f_0(
  uint32_t U32_1)
{
  {
    int32_t I32_2;

{
#define MR_PROC_LABEL mercury__int32__cast_from_uint32_1_f_0

	uint32_t U32;
	int32_t I32;

	U32 =  U32_1 ;
		{

    I32 = U32;


		;}
#undef MR_PROC_LABEL
	 I32_2  = I32;
}
    return I32_2;
  }
}

MR_Integer MR_CALL 
mercury__int32__cast_to_int_1_f_0(
  int32_t I32_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int32__cast_to_int_1_f_0

	int32_t I32;
	MR_Integer I;

	I32 =  I32_1 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

MR_Integer MR_CALL 
mercury__int32__to_int_1_f_0(
  int32_t I32_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__int32__to_int_1_f_0

	int32_t I32;
	MR_Integer I;

	I32 =  I32_1 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

int32_t MR_CALL 
mercury__int32__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  {
    int32_t I32_2;

{
#define MR_PROC_LABEL mercury__int32__cast_from_int_1_f_0

	MR_Integer I;
	int32_t I32;

	I =  I_1 ;
		{

    I32 = (int32_t) I;


		;}
#undef MR_PROC_LABEL
	 I32_2  = I32;
}
    return I32_2;
  }
}

int32_t MR_CALL 
mercury__int32__det_from_int_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded;
    int32_t I32_4;
    int32_t I32Prime_5;

{
#define MR_PROC_LABEL mercury__int32__det_from_int_1_f_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I =  I_3 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 I32Prime_5  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      I32_4 = I32Prime_5;
    else
    {
      mercury__require__error_1_p_0((MR_String) "int32.det_from_int: cannot convert int to int32");
    }
    return I32_4;
  }
}

MR_bool MR_CALL 
mercury__int32__from_int_2_p_0(
  MR_Integer I_1,
  int32_t * I32_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__int32__from_int_2_p_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I =  I_1 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *I32_2  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void mercury__int32__init(void)
{
}

void mercury__int32__init_type_tables(void)
{
}

void mercury__int32__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__int32__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module int32.
