/*
** Automatically generated from `uint64.m'
** by the Mercury compiler,
** version rotd-2020-08-21
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


// :- module uint64.
// :- implementation.

/*
INIT mercury__uint64__init
ENDINIT
*/

#include "uint64.mih"


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
mercury__uint64__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__uint64_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__uint64_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__uint64_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__uint64_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint64_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint64_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__uint64_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint64_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__uint64_scalar_common_2[0])),
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
mercury__uint64__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

MR_Word MR_CALL 
mercury__uint64__uint64_to_doc_1_f_0(
  uint64_t X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

{
#define MR_PROC_LABEL mercury__uint64__uint64_to_doc_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = X_3 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
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

uint64_t MR_CALL 
mercury__uint64__max_uint64_0_f_0(void)
{
  return UINT64_C(18446744073709551615);
}

uint64_t MR_CALL 
mercury__uint64__reverse_bits_1_f_0(
  uint64_t STATE_VARIABLE_A_0_5)
{
  {
    uint64_t B_4;
    uint64_t STATE_VARIABLE_A_6_6;
    uint64_t Var_7;
    uint64_t Var_8 = (STATE_VARIABLE_A_0_5 & UINT64_C(6148914691236517205));
    uint64_t Var_11;
    uint64_t Var_12;
    uint64_t STATE_VARIABLE_A_15_15;
    uint64_t Var_16;
    uint64_t Var_17;
    uint64_t Var_20;
    uint64_t Var_21;
    uint64_t STATE_VARIABLE_A_24_24;
    uint64_t Var_25;
    uint64_t Var_26;
    uint64_t Var_29;
    uint64_t Var_30;
    uint64_t STATE_VARIABLE_A_33_33;
    uint64_t Var_34;
    uint64_t Var_35;
    uint64_t Var_38;
    uint64_t Var_39;
    uint64_t Var_43;
    uint64_t Var_44;
    uint64_t Var_45;
    uint64_t Var_47;
    uint64_t Var_48;
    uint64_t Var_51;
    uint64_t Var_52;
    uint64_t Var_55;

    Var_7 = mercury__uint64__f_60_60_2_f_0(Var_8, (MR_Integer) 1);
    Var_12 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_0_5, (MR_Integer) 1);
    Var_11 = (Var_12 & UINT64_C(6148914691236517205));
    STATE_VARIABLE_A_6_6 = (Var_7 | Var_11);
    Var_17 = (STATE_VARIABLE_A_6_6 & UINT64_C(3689348814741910323));
    Var_16 = mercury__uint64__f_60_60_2_f_0(Var_17, (MR_Integer) 2);
    Var_21 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_6_6, (MR_Integer) 2);
    Var_20 = (Var_21 & UINT64_C(3689348814741910323));
    STATE_VARIABLE_A_15_15 = (Var_16 | Var_20);
    Var_26 = (STATE_VARIABLE_A_15_15 & UINT64_C(1085102592571150095));
    Var_25 = mercury__uint64__f_60_60_2_f_0(Var_26, (MR_Integer) 4);
    Var_30 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_15_15, (MR_Integer) 4);
    Var_29 = (Var_30 & UINT64_C(1085102592571150095));
    STATE_VARIABLE_A_24_24 = (Var_25 | Var_29);
    Var_35 = (STATE_VARIABLE_A_24_24 & UINT64_C(71777214294589695));
    Var_34 = mercury__uint64__f_60_60_2_f_0(Var_35, (MR_Integer) 8);
    Var_39 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_24_24, (MR_Integer) 8);
    Var_38 = (Var_39 & UINT64_C(71777214294589695));
    STATE_VARIABLE_A_33_33 = (Var_34 | Var_38);
    Var_45 = mercury__uint64__f_60_60_2_f_0(STATE_VARIABLE_A_33_33, (MR_Integer) 48);
    Var_48 = (STATE_VARIABLE_A_33_33 & UINT64_C(4294901760));
    Var_47 = mercury__uint64__f_60_60_2_f_0(Var_48, (MR_Integer) 16);
    Var_44 = (Var_45 | Var_47);
    Var_52 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_33_33, (MR_Integer) 16);
    Var_51 = (Var_52 & UINT64_C(4294901760));
    Var_43 = (Var_44 | Var_51);
    Var_55 = mercury__uint64__f_62_62_2_f_0(STATE_VARIABLE_A_33_33, (MR_Integer) 48);
    B_4 = (Var_43 | Var_55);
    return B_4;
  }
}

uint64_t MR_CALL 
mercury__uint64__reverse_bytes_1_f_0(
  uint64_t A_1)
{
  {
    uint64_t B_2;

{
#define MR_PROC_LABEL mercury__uint64__reverse_bytes_1_f_0

	uint64_t A;
	uint64_t B;

	A = A_1 ;
		{

    B = MR_uint64_reverse_bytes(A);


		;}
#undef MR_PROC_LABEL
	 B_2  = B;
}
    return B_2;
  }
}

MR_Integer MR_CALL 
mercury__uint64__num_trailing_zeros_1_f_0(
  uint64_t U_1)
{
  {
    MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint64__num_trailing_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U_1 ;
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
	 N_2  = N;
}
    return N_2;
  }
}

MR_Integer MR_CALL 
mercury__uint64__num_leading_zeros_1_f_0(
  uint64_t U_1)
{
  {
    MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint64__num_leading_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U_1 ;
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
	 N_2  = N;
}
    return N_2;
  }
}

MR_Integer MR_CALL 
mercury__uint64__num_ones_1_f_0(
  uint64_t U_1)
{
  {
    MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__uint64__num_ones_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U_1 ;
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
	 N_2  = N;
}
    return N_2;
  }
}

MR_Integer MR_CALL 
mercury__uint64__num_zeros_1_f_0(
  uint64_t U_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__uint64__num_zeros_1_f_0

	uint64_t U;
	MR_Integer N;

	U = U_3 ;
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
}

uint64_t MR_CALL 
mercury__uint64__f_92_1_f_0(
  uint64_t HeadVar__1_1)
{
  {
    uint64_t HeadVar__2_2 = ~(HeadVar__1_1);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__uint64__xor_2_f_2(
  uint64_t * HeadVar__1_1,
  uint64_t HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 ^ HeadVar__3_3);
}

void MR_CALL 
mercury__uint64__xor_2_f_1(
  uint64_t HeadVar__1_1,
  uint64_t * HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 ^ HeadVar__3_3);
}

uint64_t MR_CALL 
mercury__uint64__xor_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 ^ HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_92_47_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 | HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_47_92_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 & HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__unchecked_right_shift_2_f_0(
  uint64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 >> HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_62_62_2_f_0(
  uint64_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    uint64_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint64__f_62_62_2_f_0

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
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.(>>): second operand is out of range")))));
    return Result_6;
  }
}

uint64_t MR_CALL 
mercury__uint64__unchecked_left_shift_2_f_0(
  uint64_t HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 << HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_60_60_2_f_0(
  uint64_t X_4,
  MR_Integer Y_5)
{
  {
    MR_bool succeeded;
    uint64_t Result_6;
    MR_Unsigned Var_8;

{
#define MR_PROC_LABEL mercury__uint64__f_60_60_2_f_0

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
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.(<<): second operand is out of range")))));
    return Result_6;
  }
}

MR_bool MR_CALL 
mercury__uint64__odd_1_p_0(
  uint64_t X_2)
{
  {
    MR_bool succeeded;
    uint64_t Var_3 = (X_2 & UINT64_C(1));

    succeeded = (Var_3 != UINT64_C(0));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint64__even_1_p_0(
  uint64_t X_2)
{
  {
    MR_bool succeeded;
    uint64_t Var_3 = (X_2 & UINT64_C(1));

    succeeded = (Var_3 == UINT64_C(0));
    return succeeded;
  }
}

uint64_t MR_CALL 
mercury__uint64__unchecked_rem_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 % HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__rem_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT64_C(0));
    uint64_t Rem_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.rem: division by zero")))));
    else
      Rem_6 = (X_4 % Y_5);
    return Rem_6;
  }
}

uint64_t MR_CALL 
mercury__uint64__mod_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT64_C(0));
    uint64_t HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.rem: division by zero")))));
    else
      HeadVar__3_3 = (X_4 % Y_5);
    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__unchecked_quotient_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 / HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_slash_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT64_C(0));
    uint64_t HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.\'//\': division by zero")))));
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_47_47_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT64_C(0));
    uint64_t Div_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.\'//\': division by zero")))));
    else
      Div_6 = (X_4 / Y_5);
    return Div_6;
  }
}

uint64_t MR_CALL 
mercury__uint64__div_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (Y_5 == UINT64_C(0));
    uint64_t HeadVar__3_3;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "uint64.\'//\': division by zero")))));
    else
      HeadVar__3_3 = (X_4 / Y_5);
    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__times_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__f_times_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 * HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__minus_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint64__f_minus_2_f_2(
  uint64_t HeadVar__1_1,
  uint64_t * HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__1_1 - HeadVar__3_3);
}

void MR_CALL 
mercury__uint64__f_minus_2_f_1(
  uint64_t * HeadVar__1_1,
  uint64_t HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__2_2 + HeadVar__3_3);
}

uint64_t MR_CALL 
mercury__uint64__f_minus_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 - HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__plus_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__uint64__f_plus_2_f_2(
  uint64_t HeadVar__1_1,
  uint64_t * HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__2_2 = (HeadVar__3_3 - HeadVar__1_1);
}

void MR_CALL 
mercury__uint64__f_plus_2_f_1(
  uint64_t * HeadVar__1_1,
  uint64_t HeadVar__2_2,
  uint64_t HeadVar__3_3)
{
  *HeadVar__1_1 = (HeadVar__3_3 - HeadVar__2_2);
}

uint64_t MR_CALL 
mercury__uint64__f_plus_2_f_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    uint64_t HeadVar__3_3 = (HeadVar__1_1 + HeadVar__2_2);

    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__min_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (X_4 < Y_5);
    uint64_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

uint64_t MR_CALL 
mercury__uint64__max_2_f_0(
  uint64_t X_4,
  uint64_t Y_5)
{
  {
    MR_bool succeeded = (X_4 > Y_5);
    uint64_t HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = X_4;
    else
      HeadVar__3_3 = Y_5;
    return HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__uint64__f_greater_or_equal_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 >= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint64__f_less_or_equal_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 <= HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint64__f_greater_than_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 > HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__uint64__f_less_than_2_p_0(
  uint64_t HeadVar__1_1,
  uint64_t HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 < HeadVar__2_2);

    return succeeded;
  }
}

uint64_t MR_CALL 
mercury__uint64__from_bytes_be_8_f_0(
  uint8_t Byte7_10,
  uint8_t Byte6_11,
  uint8_t Byte5_12,
  uint8_t Byte4_13,
  uint8_t Byte3_14,
  uint8_t Byte2_15,
  uint8_t Byte1_16,
  uint8_t Byte0_17)
{
  {
    uint64_t HeadVar__9_9;

{
#define MR_PROC_LABEL mercury__uint64__from_bytes_be_8_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint8_t Byte4;
	uint8_t Byte5;
	uint8_t Byte6;
	uint8_t Byte7;
	uint64_t U64;

	Byte0 = Byte0_17 ;
	Byte1 = Byte1_16 ;
	Byte2 = Byte2_15 ;
	Byte3 = Byte3_14 ;
	Byte4 = Byte4_13 ;
	Byte5 = Byte5_12 ;
	Byte6 = Byte6_11 ;
	Byte7 = Byte7_10 ;
		{

    unsigned char *uint64_bytes = (unsigned char *) &U64;
#if defined(MR_BIG_ENDIAN)
    uint64_bytes[0] = Byte7;
    uint64_bytes[1] = Byte6;
    uint64_bytes[2] = Byte5;
    uint64_bytes[3] = Byte4;
    uint64_bytes[4] = Byte3;
    uint64_bytes[5] = Byte2;
    uint64_bytes[6] = Byte1;
    uint64_bytes[7] = Byte0;
#else
    uint64_bytes[0] = Byte0;
    uint64_bytes[1] = Byte1;
    uint64_bytes[2] = Byte2;
    uint64_bytes[3] = Byte3;
    uint64_bytes[4] = Byte4;
    uint64_bytes[5] = Byte5;
    uint64_bytes[6] = Byte6;
    uint64_bytes[7] = Byte7;
#endif


		;}
#undef MR_PROC_LABEL
	 HeadVar__9_9  = U64;
}
    return HeadVar__9_9;
  }
}

uint64_t MR_CALL 
mercury__uint64__from_bytes_le_8_f_0(
  uint8_t Byte0_1,
  uint8_t Byte1_2,
  uint8_t Byte2_3,
  uint8_t Byte3_4,
  uint8_t Byte4_5,
  uint8_t Byte5_6,
  uint8_t Byte6_7,
  uint8_t Byte7_8)
{
  {
    uint64_t U64_9;

{
#define MR_PROC_LABEL mercury__uint64__from_bytes_le_8_f_0

	uint8_t Byte0;
	uint8_t Byte1;
	uint8_t Byte2;
	uint8_t Byte3;
	uint8_t Byte4;
	uint8_t Byte5;
	uint8_t Byte6;
	uint8_t Byte7;
	uint64_t U64;

	Byte0 = Byte0_1 ;
	Byte1 = Byte1_2 ;
	Byte2 = Byte2_3 ;
	Byte3 = Byte3_4 ;
	Byte4 = Byte4_5 ;
	Byte5 = Byte5_6 ;
	Byte6 = Byte6_7 ;
	Byte7 = Byte7_8 ;
		{

    unsigned char *uint64_bytes = (unsigned char *) &U64;
#if defined(MR_BIG_ENDIAN)
    uint64_bytes[0] = Byte7;
    uint64_bytes[1] = Byte6;
    uint64_bytes[2] = Byte5;
    uint64_bytes[3] = Byte4;
    uint64_bytes[4] = Byte3;
    uint64_bytes[5] = Byte2;
    uint64_bytes[6] = Byte1;
    uint64_bytes[7] = Byte0;
#else
    uint64_bytes[0] = Byte0;
    uint64_bytes[1] = Byte1;
    uint64_bytes[2] = Byte2;
    uint64_bytes[3] = Byte3;
    uint64_bytes[4] = Byte4;
    uint64_bytes[5] = Byte5;
    uint64_bytes[6] = Byte6;
    uint64_bytes[7] = Byte7;
#endif


		;}
#undef MR_PROC_LABEL
	 U64_9  = U64;
}
    return U64_9;
  }
}

uint64_t MR_CALL 
mercury__uint64__cast_from_int64_1_f_0(
  int64_t I64_1)
{
  {
    uint64_t U64_2;

{
#define MR_PROC_LABEL mercury__uint64__cast_from_int64_1_f_0

	int64_t I64;
	uint64_t U64;

	I64 = I64_1 ;
		{

    U64 = (uint64_t) I64;


		;}
#undef MR_PROC_LABEL
	 U64_2  = U64;
}
    return U64_2;
  }
}

MR_Unsigned MR_CALL 
mercury__uint64__cast_to_uint_1_f_0(
  uint64_t U64_1)
{
  {
    MR_Unsigned U_2;

{
#define MR_PROC_LABEL mercury__uint64__cast_to_uint_1_f_0

	uint64_t U64;
	MR_Unsigned U;

	U64 = U64_1 ;
		{

    U = (MR_Unsigned) U64;


		;}
#undef MR_PROC_LABEL
	 U_2  = U;
}
    return U_2;
  }
}

MR_Integer MR_CALL 
mercury__uint64__cast_to_int_1_f_0(
  uint64_t U64_1)
{
  {
    MR_Integer I_2;

{
#define MR_PROC_LABEL mercury__uint64__cast_to_int_1_f_0

	uint64_t U64;
	MR_Integer I;

	U64 = U64_1 ;
		{

    I = (MR_Integer) U64;


		;}
#undef MR_PROC_LABEL
	 I_2  = I;
}
    return I_2;
  }
}

uint64_t MR_CALL 
mercury__uint64__cast_from_int_1_f_0(
  MR_Integer I_1)
{
  {
    uint64_t U64_2;

{
#define MR_PROC_LABEL mercury__uint64__cast_from_int_1_f_0

	MR_Integer I;
	uint64_t U64;

	I = I_1 ;
		{

    U64 = (uint64_t) I;


		;}
#undef MR_PROC_LABEL
	 U64_2  = U64;
}
    return U64_2;
  }
}

uint64_t MR_CALL 
mercury__uint64__det_from_int_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded;
    uint64_t U64_4;
    uint64_t U64Prime_5;

{
#define MR_PROC_LABEL mercury__uint64__det_from_int_1_f_0

	MR_Integer I;
	uint64_t U64;
	MR_bool SUCCESS_INDICATOR;

	I = I_3 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if ((uint64_t) I > (uint64_t) INT64_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U64 = (uint64_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 U64Prime_5  = U64;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      U64_4 = U64Prime_5;
    else
      mercury__require__error_2_p_0((MR_String) "function \140uint64.det_from_int\'/1", (MR_String) "cannot convert int to uint64");
    return U64_4;
  }
}

MR_bool MR_CALL 
mercury__uint64__from_int_2_p_0(
  MR_Integer I_1,
  uint64_t * U64_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__uint64__from_int_2_p_0

	MR_Integer I;
	uint64_t U64;
	MR_bool SUCCESS_INDICATOR;

	I = I_1 ;
		{

    if (I < 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if ((uint64_t) I > (uint64_t) INT64_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        U64 = (uint64_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *U64_2  = U64;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void mercury__uint64__init(void)
{
}

void mercury__uint64__init_type_tables(void)
{
}

void mercury__uint64__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__uint64__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module uint64.
