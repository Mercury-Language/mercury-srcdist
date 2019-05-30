/*
** Automatically generated from `string.format.m'
** by the Mercury compiler,
** version rotd-2019-05-30
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


// :- module string.format.
// :- implementation.

/*
INIT mercury__string__format__init
ENDINIT
*/

#include "string.format.mih"


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
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
  MR_Float FloatVal_1,
  MR_String * FloatString_2);

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String FormatStr_1,
  MR_String Val_2);

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String FormatStr_1,
  MR_Float Val_2);

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String Str_1);

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11);

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String Float_6,
  MR_Integer Prec_7,
  MR_String E_8,
  MR_Word Flags_9);

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String Str_4,
  MR_String * Float_5,
  MR_String * Exponent_6);

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String Float_3);

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word CharNum_3);

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String Float_5,
  MR_Integer Prec_6,
  MR_String E_7);

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String Float_4,
  MR_Integer Prec_5);

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String OldFloat_4,
  MR_Integer Prec_5);

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word L_4,
  MR_Integer CurrentPos_5);

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float Float_3);

static void MR_CALL 
mercury__string__format__words_loop__ho3_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String Str_4,
  MR_String * Mantissa_5,
  MR_String * Fraction_6);

static void MR_CALL 
mercury__string__format__words_loop__ho5_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Integer Int_11);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
  MR_Word Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
  MR_Integer Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
  MR_Word Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
  MR_Integer Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
  MR_Word Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
  MR_Word Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
  MR_Integer Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer Num_3);


static /* final */ const MR_Box mercury__string__format_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__string__format_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__string__format_scalar_common_4[1][2];


/* sealed */ struct mercury__string__format__vector_common_type_5_0_s {
  const MR_String mercury__string__format__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__string__format__vector_common_type_5_0_s mercury__string__format_vector_common_5[127];



static /* final */ const MR_Box mercury__string__format_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct mercury__string__format__vector_common_type_5_0_s mercury__string__format_vector_common_5[127] = {
  /* row 0 */   {     (MR_String) "0" },
  /* row 1 */   {     (MR_String) "1" },
  /* row 2 */   {     (MR_String) "2" },
  /* row 3 */   {     (MR_String) "3" },
  /* row 4 */   {     (MR_String) "4" },
  /* row 5 */   {     (MR_String) "5" },
  /* row 6 */   {     (MR_String) "6" },
  /* row 7 */   {     (MR_String) "7" },
  /* row 8 */   {     (MR_String) "8" },
  /* row 9 */   {     (MR_String) "9" },
  /* row 10 */   {     (MR_String) "0" },
  /* row 11 */   {     (MR_String) "1" },
  /* row 12 */   {     (MR_String) "2" },
  /* row 13 */   {     (MR_String) "3" },
  /* row 14 */   {     (MR_String) "4" },
  /* row 15 */   {     (MR_String) "5" },
  /* row 16 */   {     (MR_String) "6" },
  /* row 17 */   {     (MR_String) "7" },
  /* row 18 */   {     (MR_String) "8" },
  /* row 19 */   {     (MR_String) "9" },
  /* row 20 */   {     (MR_String) "0" },
  /* row 21 */   {     (MR_String) "1" },
  /* row 22 */   {     (MR_String) "2" },
  /* row 23 */   {     (MR_String) "3" },
  /* row 24 */   {     (MR_String) "4" },
  /* row 25 */   {     (MR_String) "5" },
  /* row 26 */   {     (MR_String) "6" },
  /* row 27 */   {     (MR_String) "7" },
  /* row 28 */   {     (MR_String) "0" },
  /* row 29 */   {     (MR_String) "1" },
  /* row 30 */   {     (MR_String) "2" },
  /* row 31 */   {     (MR_String) "3" },
  /* row 32 */   {     (MR_String) "4" },
  /* row 33 */   {     (MR_String) "5" },
  /* row 34 */   {     (MR_String) "6" },
  /* row 35 */   {     (MR_String) "7" },
  /* row 36 */   {     (MR_String) "0" },
  /* row 37 */   {     (MR_String) "1" },
  /* row 38 */   {     (MR_String) "2" },
  /* row 39 */   {     (MR_String) "3" },
  /* row 40 */   {     (MR_String) "4" },
  /* row 41 */   {     (MR_String) "5" },
  /* row 42 */   {     (MR_String) "6" },
  /* row 43 */   {     (MR_String) "7" },
  /* row 44 */   {     (MR_String) "8" },
  /* row 45 */   {     (MR_String) "9" },
  /* row 46 */   {     (MR_String) "0" },
  /* row 47 */   {     (MR_String) "1" },
  /* row 48 */   {     (MR_String) "2" },
  /* row 49 */   {     (MR_String) "3" },
  /* row 50 */   {     (MR_String) "4" },
  /* row 51 */   {     (MR_String) "5" },
  /* row 52 */   {     (MR_String) "6" },
  /* row 53 */   {     (MR_String) "7" },
  /* row 54 */   {     (MR_String) "8" },
  /* row 55 */   {     (MR_String) "9" },
  /* row 56 */   {     (MR_String) "a" },
  /* row 57 */   {     (MR_String) "b" },
  /* row 58 */   {     (MR_String) "c" },
  /* row 59 */   {     (MR_String) "d" },
  /* row 60 */   {     (MR_String) "e" },
  /* row 61 */   {     (MR_String) "f" },
  /* row 62 */   {     (MR_String) "0" },
  /* row 63 */   {     (MR_String) "1" },
  /* row 64 */   {     (MR_String) "2" },
  /* row 65 */   {     (MR_String) "3" },
  /* row 66 */   {     (MR_String) "4" },
  /* row 67 */   {     (MR_String) "5" },
  /* row 68 */   {     (MR_String) "6" },
  /* row 69 */   {     (MR_String) "7" },
  /* row 70 */   {     (MR_String) "8" },
  /* row 71 */   {     (MR_String) "9" },
  /* row 72 */   {     (MR_String) "a" },
  /* row 73 */   {     (MR_String) "b" },
  /* row 74 */   {     (MR_String) "c" },
  /* row 75 */   {     (MR_String) "d" },
  /* row 76 */   {     (MR_String) "e" },
  /* row 77 */   {     (MR_String) "f" },
  /* row 78 */   {     (MR_String) "0" },
  /* row 79 */   {     (MR_String) "1" },
  /* row 80 */   {     (MR_String) "2" },
  /* row 81 */   {     (MR_String) "3" },
  /* row 82 */   {     (MR_String) "4" },
  /* row 83 */   {     (MR_String) "5" },
  /* row 84 */   {     (MR_String) "6" },
  /* row 85 */   {     (MR_String) "7" },
  /* row 86 */   {     (MR_String) "8" },
  /* row 87 */   {     (MR_String) "9" },
  /* row 88 */   {     (MR_String) "A" },
  /* row 89 */   {     (MR_String) "B" },
  /* row 90 */   {     (MR_String) "C" },
  /* row 91 */   {     (MR_String) "D" },
  /* row 92 */   {     (MR_String) "E" },
  /* row 93 */   {     (MR_String) "F" },
  /* row 94 */   {     (MR_String) "0" },
  /* row 95 */   {     (MR_String) "1" },
  /* row 96 */   {     (MR_String) "2" },
  /* row 97 */   {     (MR_String) "3" },
  /* row 98 */   {     (MR_String) "4" },
  /* row 99 */   {     (MR_String) "5" },
  /* row 100 */   {     (MR_String) "6" },
  /* row 101 */   {     (MR_String) "7" },
  /* row 102 */   {     (MR_String) "8" },
  /* row 103 */   {     (MR_String) "9" },
  /* row 104 */   {     (MR_String) "A" },
  /* row 105 */   {     (MR_String) "B" },
  /* row 106 */   {     (MR_String) "C" },
  /* row 107 */   {     (MR_String) "D" },
  /* row 108 */   {     (MR_String) "E" },
  /* row 109 */   {     (MR_String) "F" },
  /* row 110 */   {     (MR_String) "o" },
  /* row 111 */   {     (MR_String) "u" },
  /* row 112 */   {     (MR_String) "x" },
  /* row 113 */   {     (MR_String) "X" },
  /* row 114 */   {     (MR_String) "p" },
  /* row 115 */   {     (MR_String) "nan" },
  /* row 116 */   {     (MR_String) "NAN" },
  /* row 117 */   {     (MR_String) "nan" },
  /* row 118 */   {     (MR_String) "NAN" },
  /* row 119 */   {     (MR_String) "nan" },
  /* row 120 */   {     (MR_String) "NAN" },
  /* row 121 */   {     (MR_String) "e" },
  /* row 122 */   {     (MR_String) "E" },
  /* row 123 */   {     (MR_String) "f" },
  /* row 124 */   {     (MR_String) "F" },
  /* row 125 */   {     (MR_String) "g" },
  /* row 126 */   {     (MR_String) "G" },
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
#include "string.format.mh"



static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
  MR_Float FloatVal_1,
  MR_String * FloatString_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__format__float_to_string_first_pass_2_p_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  FloatVal_1 ;
		{
{
    // Note any changes here will require the same changes in
    // string.float_to_string.
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *FloatString_2  = FloatString;
}
  }
}

MR_String MR_CALL 
mercury__string__format__format_char_3_f_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_Char Char_7)
{
  {
    MR_String String_8;
    MR_String CharStr_9;
    MR_Word V_5_14;

    {
      V_5_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_14, 0) = ((MR_Box) (MR_Word) (Char_7));
      MR_hl_field(MR_mktag(1), V_5_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__string__to_char_list_2_p_1(&CharStr_9, V_5_14);
    String_8 = mercury__string__format__justify_string_3_f_0(Flags_5, MaybeWidth_6, CharStr_9);
    return String_8;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
  MR_String FormatStr_1,
  MR_Char Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_char_2_f_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  FormatStr_1 ;
	Val =  Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String FormatStr_1,
  MR_String Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_string_2_f_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  FormatStr_1 ;
	Val =  Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
  MR_String FormatStr_1,
  MR_Integer Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_int_2_f_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  FormatStr_1 ;
	Val =  Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String FormatStr_1,
  MR_Float Val_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_float_2_f_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  FormatStr_1 ;
	Val =  Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 Str_3  = Str;
}
    return Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__int_length_modifier_0_f_0(void)
{
  {
    MR_String LengthModifier_1;

{
#define MR_PROC_LABEL mercury__string__format__int_length_modifier_0_f_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 LengthModifier_1  = LengthModifier;
}
    return LengthModifier_1;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_dotnet_5_f_0(
  MR_Word _Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_String _LengthMod_10,
  MR_String Spec0_11)
{
  {
    MR_String String_12;

    String_12 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_8, MaybePrec_9, Spec0_11);
    return String_12;
  }
}

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String Str_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_string_1_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        // sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
        // if there is a field width or precision specified.
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
  MR_Char Char_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_char_1_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  Char_1 ;
		{

    // sprintf %c specifier is inadequate for multi-byte UTF-8 characters.
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_String LengthMod_10,
  MR_String Spec_11)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__6_6;

{
#define MR_PROC_LABEL mercury__string__format__make_format_5_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      HeadVar__6_6 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, LengthMod_10, Spec_11);
    else
      HeadVar__6_6 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_8, MaybePrec_9, Spec_11);
    return HeadVar__6_6;
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Kind_10,
  MR_Float Float_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Kind_10, Float_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Kind_8,
  MR_Float Float_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Kind_8, Float_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Kind_8,
  MR_Float Float_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_float_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Kind_8, Float_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Kind_6,
  MR_Float Float_7,
  MR_String * String_8)
{
  {
    mercury__string__format__format_float_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Kind_6, Float_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_prec_6_p_0(
  MR_Word Flags_7,
  MR_Integer Width_8,
  MR_Integer Prec_9,
  MR_Word Base_10,
  MR_Integer Int_11,
  MR_String * String_12)
{
  {
    MR_Word MaybeWidth_13;
    MR_Word MaybePrec_14;

    {
      MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_13, 0) = ((MR_Box) (Width_8));
    }
    {
      MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_14, 0) = ((MR_Box) (Prec_9));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_7, MaybeWidth_13, MaybePrec_14, Base_10, Int_11, String_12);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Word Base_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_6, MaybeWidth_11, (MR_Word) ((MR_Unsigned) 0U), Base_8, Int_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Prec_7,
  MR_Word Base_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_Word MaybePrec_12;

    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_7));
    }
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_6, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_12, Base_8, Int_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Word Base_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  {
    mercury__string__format__format_unsigned_int_component_6_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Base_6, Int_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Integer Prec_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;
    MR_Word MaybePrec_12;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_8));
    }
    mercury__string__format__format_signed_int_component_5_p_0(Flags_6, MaybeWidth_11, MaybePrec_12, Int_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  {
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
    mercury__string__format__format_signed_int_component_5_p_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Int_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Prec_6,
  MR_Integer Int_7,
  MR_String * String_8)
{
  {
    MR_Word MaybePrec_10;

    {
      MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_10, 0) = ((MR_Box) (Prec_6));
    }
    mercury__string__format__format_signed_int_component_5_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Int_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(
  MR_Word Flags_4,
  MR_Integer Int_5,
  MR_String * String_6)
{
  {
    mercury__string__format__format_signed_int_component_5_p_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Int_5, String_6);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_prec_5_p_0(
  MR_Word Flags_6,
  MR_Integer Width_7,
  MR_Integer Prec_8,
  MR_String Str_9,
  MR_String * String_10)
{
  {
    MR_Word MaybeWidth_11;
    MR_Word MaybePrec_12;

    {
      MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_11, 0) = ((MR_Box) (Width_7));
    }
    {
      MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_12, 0) = ((MR_Box) (Prec_8));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_6, MaybeWidth_11, MaybePrec_12, Str_9, String_10);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_noprec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_String Str_7,
  MR_String * String_8)
{
  {
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_5, MaybeWidth_9, (MR_Word) ((MR_Unsigned) 0U), Str_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_prec_4_p_0(
  MR_Word Flags_5,
  MR_Integer Prec_6,
  MR_String Str_7,
  MR_String * String_8)
{
  {
    MR_Word MaybePrec_10;

    {
      MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePrec_10, 0) = ((MR_Box) (Prec_6));
    }
    mercury__string__format__format_string_component_5_p_0(Flags_5, (MR_Word) ((MR_Unsigned) 0U), MaybePrec_10, Str_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_noprec_3_p_0(
  MR_Word Flags_4,
  MR_String Str_5,
  MR_String * String_6)
{
  {
    mercury__string__format__format_string_component_5_p_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Str_5, String_6);
  }
}

void MR_CALL 
mercury__string__format__format_char_component_width_4_p_0(
  MR_Word Flags_5,
  MR_Integer Width_6,
  MR_Char Char_7,
  MR_String * String_8)
{
  {
    MR_Word MaybeWidth_9;

    {
      MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeWidth_9, 0) = ((MR_Box) (Width_6));
    }
    mercury__string__format__format_char_component_4_p_0(Flags_5, MaybeWidth_9, Char_7, String_8);
  }
}

void MR_CALL 
mercury__string__format__format_char_component_nowidth_3_p_0(
  MR_Word Flags_4,
  MR_Char Char_5,
  MR_String * String_6)
{
  {
    mercury__string__format__format_char_component_4_p_0(Flags_4, (MR_Word) ((MR_Unsigned) 0U), Char_5, String_6);
  }
}

void MR_CALL 
mercury__string__format__format_impl_3_p_0(
  MR_String FormatString_4,
  MR_Word PolyList_5,
  MR_String * String_6)
{
  {
    MR_Word Chars_7;
    MR_Word Specs_8;
    MR_Word Errors_9;

    mercury__string__to_char_list_2_p_0(FormatString_4, &Chars_7);
    mercury__string__parse_runtime__parse_format_string_5_p_0(Chars_7, PolyList_5, (MR_Integer) 1, &Specs_8, &Errors_9);
    if ((Errors_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SpecStrs_10;

      mercury__string__format__specs_to_strings_2_p_0(Specs_8, &SpecStrs_10);
      *String_6 = mercury__string__append_list_1_f_0(SpecStrs_10);
    }
    else
    {
      MR_Word HeadError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_9, (MR_Integer) 0))));
      MR_String Msg_13;

      Msg_13 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(HeadError_11);
      {
        mercury__require__error_2_p_0((MR_String) "string.format", Msg_13);
        return;
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Spec_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Specs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String String_5;
    MR_Word Strings_6;

    switch (MR_tag((MR_Word) Spec_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 2)));
          MR_Word Flags_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 0))));
          MR_Word MaybeWidth_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_3, (MR_Integer) 1))));

          mercury__string__format__format_char_component_4_p_0(Flags_25, MaybeWidth_26, Char_16, &String_5);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Str_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 3))));
          MR_Word Flags_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 0))));
          MR_Word MaybeWidth_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 1))));
          MR_Word MaybePrec_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_3, (MR_Integer) 2))));

          mercury__string__format__format_string_component_5_p_0(Flags_27, MaybeWidth_28, MaybePrec_29, Str_17, &String_5);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Flags_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));
              MR_Integer Int_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))));

              mercury__string__format__format_signed_int_component_5_p_0(Flags_9, MaybeWidth_10, MaybePrec_11, Int_12, &String_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Base_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));
              MR_Integer Int_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 5))));

              mercury__string__format__format_unsigned_int_component_6_p_0(Flags_18, MaybeWidth_19, MaybePrec_20, Base_13, Int_21, &String_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Kind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Float Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 5)));
              MR_Word Flags_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 1))));
              MR_Word MaybeWidth_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 2))));
              MR_Word MaybePrec_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_3, (MR_Integer) 3))));

              mercury__string__format__format_float_component_6_p_0(Flags_22, MaybeWidth_23, MaybePrec_24, Kind_14, Float_15, &String_5);
            }
            break;
        }
        break;
    }
    mercury__string__format__specs_to_strings_2_p_0(Specs_4, &Strings_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Strings_6));
    }
  }
}

void MR_CALL 
mercury__string__format__format_float_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_finite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String SpecChar_13 = ((&mercury__string__format_vector_common_5[121 + Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      MR_String FormatStr_14;

{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, (MR_String) "", SpecChar_13);
      else
        FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_8, MaybePrec_9, SpecChar_13);
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  FormatStr_14 ;
	Val =  Float_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
      *String_12 = mercury__string__format__format_float_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Kind_10, Float_11);
  }
}

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Kind_10,
  MR_Float Float_11)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_String SignedStr_13;

{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      SignedStr_13 = ((&mercury__string__format_vector_common_5[115 + Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
    else
    {
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        switch (Kind_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            {
              succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
              if (succeeded)
                SignedStr_13 = (MR_String) "-infinity";
              else
                SignedStr_13 = (MR_String) "infinity";
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            {
              succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
              if (succeeded)
                SignedStr_13 = (MR_String) "-INFINITY";
              else
                SignedStr_13 = (MR_String) "INFINITY";
            }
            break;
        }
      else
      {
        MR_Float AbsFloat_14;
        MR_String AbsStr_15;
        MR_String PrecModStr_21;
        MR_String FieldStr_24;
        MR_Word ZeroPadded_25;
        MR_Integer Width_23;
        MR_Integer Var_35;
        MR_Word Var_36;
        MR_Word Var_56;

        AbsFloat_14 = mercury__float__abs_1_f_0(Float_11);
        AbsStr_15 = mercury__string__format__convert_float_to_string_1_f_0(AbsFloat_14);
        switch (Kind_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Prec_17;
              MR_String PrecStr_18;
              MR_Word Var_33;
              MR_Integer Var_34;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_17 = (MR_Integer) 6;
              else
                Prec_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_18 = mercury__string__format__change_to_e_notation_3_f_0(AbsStr_15, Prec_17, (MR_String) "e");
              Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_33 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_34 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_String BaseStr_19;
                MR_String ExponentStr_20;

                mercury__string__format__split_at_decimal_point_3_p_0(PrecStr_18, &BaseStr_19, &ExponentStr_20);
                PrecModStr_21 = mercury__string__f_43_43_2_f_0(BaseStr_19, ExponentStr_20);
              }
              else
                PrecModStr_21 = PrecStr_18;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Prec_83;
              MR_String PrecStr_84;
              MR_Word Var_66;
              MR_Integer Var_67;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_83 = (MR_Integer) 6;
              else
                Prec_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_84 = mercury__string__format__change_to_e_notation_3_f_0(AbsStr_15, Prec_83, (MR_String) "E");
              Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_66 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_67 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_String BaseStr_72;
                MR_String ExponentStr_73;

                mercury__string__format__split_at_decimal_point_3_p_0(PrecStr_84, &BaseStr_72, &ExponentStr_73);
                PrecModStr_21 = mercury__string__f_43_43_2_f_0(BaseStr_72, ExponentStr_73);
              }
              else
                PrecModStr_21 = PrecStr_84;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Integer Prec_41;
              MR_String PrecStr_42;
              MR_Word Var_28;
              MR_Integer Var_29;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_41 = (MR_Integer) 6;
              else
                Prec_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
              PrecStr_42 = mercury__string__format__change_precision_2_f_0(AbsStr_15, Prec_41);
              Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
              succeeded = (Var_28 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
                  succeeded = (Var_29 == (MR_Integer) 0);
                }
              }
              if (succeeded)
              {
                MR_Integer PrecStrLen_22;
                MR_Integer Var_31;

                PrecStrLen_22 = mercury__string__count_codepoints_1_f_0(PrecStr_42);
                Var_31 = (MR_Integer) ((MR_Unsigned) PrecStrLen_22 - (MR_Unsigned) (MR_Integer) 1);
                PrecModStr_21 = mercury__string__between_3_f_0(PrecStr_42, (MR_Integer) 0, Var_31);
              }
              else
                PrecModStr_21 = PrecStr_42;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Prec_44;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_44 = (MR_Integer) 6;
              else
              {
                MR_Integer Prec0_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

                succeeded = (Prec0_105 == (MR_Integer) 0);
                if (succeeded)
                  Prec_44 = (MR_Integer) 1;
                else
                  Prec_44 = Prec0_105;
              }
              PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(AbsStr_15, Prec_44, (MR_String) "e", Flags_7);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Prec_94;

              if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
                Prec_94 = (MR_Integer) 6;
              else
              {
                MR_Integer Prec0_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

                succeeded = (Prec0_108 == (MR_Integer) 0);
                if (succeeded)
                  Prec_94 = (MR_Integer) 1;
                else
                  Prec_94 = Prec0_108;
              }
              PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(AbsStr_15, Prec_94, (MR_String) "E", Flags_7);
            }
            break;
        }
        succeeded = (MaybeWidth_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Width_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));
          Var_35 = mercury__string__count_codepoints_1_f_0(PrecModStr_21);
          succeeded = (Width_23 > Var_35);
          if (succeeded)
          {
            Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            succeeded = (Var_36 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (Var_56 == (MR_Integer) 0);
          }
        }
        if (succeeded)
        {
          MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) Width_23 - (MR_Unsigned) (MR_Integer) 1);

          FieldStr_24 = mercury__string__pad_left_3_f_0(PrecModStr_21, (MR_Char) 48, Var_39);
          ZeroPadded_25 = (MR_Integer) 1;
        }
        else
        {
          FieldStr_24 = PrecModStr_21;
          ZeroPadded_25 = (MR_Integer) 0;
        }
        succeeded = (Float_11 < ((MR_Float) 0.0000000000000000));
        if (succeeded)
        {
          mercury__string__append_3_p_2((MR_String) "-", FieldStr_24, &SignedStr_13);
        }
        else
        {
          MR_Word Var_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (Var_116 == (MR_Integer) 1);
          if (succeeded)
          {
            mercury__string__append_3_p_2((MR_String) "+", FieldStr_24, &SignedStr_13);
          }
          else
          {
            MR_Word Var_118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

            succeeded = (Var_118 == (MR_Integer) 1);
            if (succeeded)
            {
              mercury__string__append_3_p_2((MR_String) " ", FieldStr_24, &SignedStr_13);
            }
            else
              switch (ZeroPadded_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  SignedStr_13 = FieldStr_24;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__string__append_3_p_2((MR_String) "0", FieldStr_24, &SignedStr_13);
                  }
                  break;
              }
          }
        }
      }
    }
    String_12 = mercury__string__format__justify_string_3_f_0(Flags_7, MaybeWidth_8, SignedStr_13);
    return String_12;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String Float_6,
  MR_Integer Prec_7,
  MR_String E_8,
  MR_Word Flags_9)
{
  {
    MR_bool succeeded;
    MR_String FormattedFloat_10;
    MR_Integer Exponent_11;
    MR_Integer UnsafeExponent_61;
    MR_String UnsafeBase_62;
    MR_String MantissaStr_63;
    MR_String MantissaStr_70;
    MR_Integer NumZeros_72;
    MR_Integer Var_73;
    MR_Word Var_75;
    MR_String _FractionStr_71;
    MR_String _FractionStr_64;
    MR_Integer Var_65;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_6, &MantissaStr_70, &_FractionStr_71);
    mercury__string__count_codepoints_2_p_0(MantissaStr_70, &Var_73);
    NumZeros_72 = (MR_Integer) ((MR_Unsigned) Var_73 - (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_char_list_2_p_0(Float_6, &Var_75);
    UnsafeExponent_61 = mercury__string__format__find_non_zero_pos_2_f_0(Var_75, NumZeros_72);
    UnsafeBase_62 = mercury__string__format__calculate_base_unsafe_2_f_0(Float_6, Prec_7);
    mercury__string__format__split_at_decimal_point_3_p_0(UnsafeBase_62, &MantissaStr_63, &_FractionStr_64);
    mercury__string__count_codepoints_2_p_0(MantissaStr_63, &Var_65);
    succeeded = (Var_65 > (MR_Integer) 1);
    if (succeeded)
    {
      Exponent_11 = (MR_Integer) ((MR_Unsigned) UnsafeExponent_61 + (MR_Unsigned) (MR_Integer) 1);
    }
    else
      Exponent_11 = UnsafeExponent_61;
    succeeded = (Exponent_11 >= (MR_Integer) -4);
    if (succeeded)
      succeeded = (Exponent_11 < Prec_7);
    if (succeeded)
    {
      MR_String FormattedFloat0_13;
      MR_Word Var_39;

      succeeded = (Exponent_11 <= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer DecimalPos_12;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_Integer Var_28;
        MR_String MantissaStr_84;
        MR_Integer NumZeros_86;
        MR_Integer Var_87;
        MR_Word Var_89;
        MR_String _FractionStr_85;

        mercury__string__format__split_at_decimal_point_3_p_0(Float_6, &MantissaStr_84, &_FractionStr_85);
        mercury__string__count_codepoints_2_p_0(MantissaStr_84, &Var_87);
        NumZeros_86 = (MR_Integer) ((MR_Unsigned) Var_87 - (MR_Unsigned) (MR_Integer) 1);
        mercury__string__to_char_list_2_p_0(Float_6, &Var_89);
        DecimalPos_12 = mercury__string__format__find_non_zero_pos_2_f_0(Var_89, NumZeros_86);
        mercury__int__abs_2_p_0(DecimalPos_12, &Var_28);
        Var_27 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) (MR_Integer) 1);
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) Prec_7);
        FormattedFloat0_13 = mercury__string__format__change_precision_2_f_0(Float_6, Var_26);
      }
      else
      {
        MR_String ScientificFloat_14;
        MR_String BaseStr_15;
        MR_String ExponentStr_16;
        MR_Integer Exp_17;
        MR_String MantissaStr_18;
        MR_String FractionStr_19;
        MR_String RestMantissaStr_20;
        MR_String NewFraction_21;
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) (MR_Integer) 1);
        MR_Integer Var_34;
        MR_String Var_36;
        MR_String Var_37;

        ScientificFloat_14 = mercury__string__format__change_to_e_notation_3_f_0(Float_6, Var_30, (MR_String) "e");
        mercury__string__format__split_at_exponent_3_p_0(ScientificFloat_14, &BaseStr_15, &ExponentStr_16);
        Exp_17 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, ExponentStr_16);
        mercury__string__format__split_at_decimal_point_3_p_0(BaseStr_15, &MantissaStr_18, &FractionStr_19);
        RestMantissaStr_20 = mercury__string__between_3_f_0(FractionStr_19, (MR_Integer) 0, Exp_17);
        Var_34 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) (MR_Integer) 1);
        NewFraction_21 = mercury__string__between_3_f_0(FractionStr_19, Exp_17, Var_34);
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", NewFraction_21);
        Var_36 = mercury__string__f_43_43_2_f_0(RestMantissaStr_20, Var_37);
        FormattedFloat0_13 = mercury__string__f_43_43_2_f_0(MantissaStr_18, Var_36);
      }
      Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_39 == (MR_Integer) 1);
      if (succeeded)
        FormattedFloat_10 = FormattedFloat0_13;
      else
        FormattedFloat_10 = mercury__string__format__remove_trailing_zeros_1_f_0(FormattedFloat0_13);
    }
    else
    {
      MR_String UncheckedFloat_22;
      MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) Prec_7 - (MR_Unsigned) (MR_Integer) 1);
      MR_Word Var_42;

      UncheckedFloat_22 = mercury__string__format__change_to_e_notation_3_f_0(Float_6, Var_40, E_8);
      Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_9, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_42 == (MR_Integer) 1);
      if (succeeded)
        FormattedFloat_10 = UncheckedFloat_22;
      else
      {
        MR_String NewBaseStr_23;
        MR_String Var_43;
        MR_String BaseStr_44;
        MR_String ExponentStr_45;

        mercury__string__format__split_at_exponent_3_p_0(UncheckedFloat_22, &BaseStr_44, &ExponentStr_45);
        NewBaseStr_23 = mercury__string__format__remove_trailing_zeros_1_f_0(BaseStr_44);
        Var_43 = mercury__string__f_43_43_2_f_0(E_8, ExponentStr_45);
        FormattedFloat_10 = mercury__string__f_43_43_2_f_0(NewBaseStr_23, Var_43);
      }
    }
    return FormattedFloat_10;
  }
}

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String Str_4,
  MR_String * Float_5,
  MR_String * Exponent_6)
{
  {
    MR_Word FloatAndExponent_7;
    MR_Integer V_7_18;
    MR_Box conv0_Float_5;
    MR_Box conv1_Exponent_6;

    mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(Str_4, (MR_Integer) 0, &V_7_18);
    mercury__string__format__words_loop__ho3_4_p_in__string_0(Str_4, V_7_18, &FloatAndExponent_7);
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_7, (MR_Integer) 0, &conv0_Float_5);
    *Float_5 = ((MR_String) (conv0_Float_5));
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_7, (MR_Integer) 1, &conv1_Exponent_6);
    *Exponent_6 = ((MR_String) (conv1_Exponent_6));
  }
}

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String Float_3)
{
  {
    MR_String TrimmedFloat_4;
    MR_Word FloatCharList_5;
    MR_Word FloatCharListRev_6;
    MR_Word TrimmedFloatRevCharList_7;
    MR_Word TrimmedFloatCharList_8;

    mercury__string__to_char_list_2_p_0(Float_3, &FloatCharList_5);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FloatCharList_5, &FloatCharListRev_6);
    TrimmedFloatRevCharList_7 = mercury__string__format__remove_zeros_1_f_0(FloatCharListRev_6);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), TrimmedFloatRevCharList_7, &TrimmedFloatCharList_8);
    mercury__string__from_char_list_2_p_0(TrimmedFloatCharList_8, &TrimmedFloat_4);
    return TrimmedFloat_4;
  }
}

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word CharNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CharNum_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TrimmedNum_4;
    MR_Word Rest_5;
    MR_Char Var_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 0)));
      Rest_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 1))));
      succeeded = (Var_6 == (MR_Char) 48);
    }
    if (succeeded)
    {
      MR_Word next_value_of_CharNum_3 = Rest_5;

      // direct tailcall eliminated
      ;
      CharNum_3 = next_value_of_CharNum_3;
      continue;
    }
    else
    {
      MR_Word Rest_8;
      MR_Char Var_7;

      succeeded = (CharNum_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 0)));
        Rest_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CharNum_3, (MR_Integer) 1))));
        succeeded = (Var_7 == (MR_Char) 46);
      }
      if (succeeded)
        TrimmedNum_4 = Rest_8;
      else
        TrimmedNum_4 = CharNum_3;
    }
    return TrimmedNum_4;
    break;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String Float_5,
  MR_Integer Prec_6,
  MR_String E_7)
{
  {
    MR_bool succeeded;
    MR_String ScientificFloat_8;
    MR_Integer UnsafeExponent_9;
    MR_String UnsafeBase_10;
    MR_String MantissaStr_11;
    MR_String SafeBase_13;
    MR_Integer SafeExponent_14;
    MR_String ExponentStr_15;
    MR_String MantissaStr_46;
    MR_Integer NumZeros_48;
    MR_Integer Var_49;
    MR_Word Var_51;
    MR_String _FractionStr_47;
    MR_String _FractionStr_12;
    MR_Integer Var_16;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_5, &MantissaStr_46, &_FractionStr_47);
    mercury__string__count_codepoints_2_p_0(MantissaStr_46, &Var_49);
    NumZeros_48 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_char_list_2_p_0(Float_5, &Var_51);
    UnsafeExponent_9 = mercury__string__format__find_non_zero_pos_2_f_0(Var_51, NumZeros_48);
    UnsafeBase_10 = mercury__string__format__calculate_base_unsafe_2_f_0(Float_5, Prec_6);
    mercury__string__format__split_at_decimal_point_3_p_0(UnsafeBase_10, &MantissaStr_11, &_FractionStr_12);
    mercury__string__count_codepoints_2_p_0(MantissaStr_11, &Var_16);
    succeeded = (Var_16 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_String Var_18;

      mercury__string__append_3_p_2(UnsafeBase_10, (MR_String) "0", &Var_18);
      SafeBase_13 = mercury__string__format__calculate_base_unsafe_2_f_0(Var_18, Prec_6);
      SafeExponent_14 = (MR_Integer) ((MR_Unsigned) UnsafeExponent_9 + (MR_Unsigned) (MR_Integer) 1);
    }
    else
    {
      SafeBase_13 = UnsafeBase_10;
      SafeExponent_14 = UnsafeExponent_9;
    }
    succeeded = (SafeExponent_14 >= (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (SafeExponent_14 < (MR_Integer) 10);
      if (succeeded)
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_String Var_27;

        mercury__string__int_to_base_string_3_p_0(SafeExponent_14, (MR_Integer) 10, &Var_27);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "+0"));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_23);
      }
      else
      {
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_String Var_33;

        mercury__string__int_to_base_string_3_p_0(SafeExponent_14, (MR_Integer) 10, &Var_33);
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "+"));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_29);
      }
    }
    else
    {
      succeeded = (SafeExponent_14 > (MR_Integer) -10);
      if (succeeded)
      {
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_String Var_40;
        MR_Integer Var_41;

        mercury__int__abs_2_p_0(SafeExponent_14, &Var_41);
        mercury__string__int_to_base_string_3_p_0(Var_41, (MR_Integer) 10, &Var_40);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "-0"));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (E_7));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
        }
        ExponentStr_15 = mercury__string__append_list_1_f_0(Var_36);
      }
      else
      {
        MR_String Var_43;

        mercury__string__int_to_base_string_3_p_0(SafeExponent_14, (MR_Integer) 10, &Var_43);
        mercury__string__append_3_p_2(E_7, Var_43, &ExponentStr_15);
      }
    }
    mercury__string__append_3_p_2(SafeBase_13, ExponentStr_15, &ScientificFloat_8);
    return ScientificFloat_8;
  }
}

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String Float_4,
  MR_Integer Prec_5)
{
  {
    MR_bool succeeded;
    MR_String Exp_6;
    MR_Integer Place_7;
    MR_String MantissaStr_8;
    MR_String FractionStr_9;
    MR_String ExpMantissaStr_13;
    MR_String ExpFractionStr_15;
    MR_String MantissaAndPoint_17;
    MR_String UnroundedExpStr_18;
    MR_String MantissaStr_36;
    MR_Integer NumZeros_38;
    MR_Integer Var_39;
    MR_Word Var_41;
    MR_String _FractionStr_37;

    mercury__string__format__split_at_decimal_point_3_p_0(Float_4, &MantissaStr_36, &_FractionStr_37);
    mercury__string__count_codepoints_2_p_0(MantissaStr_36, &Var_39);
    NumZeros_38 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_char_list_2_p_0(Float_4, &Var_41);
    Place_7 = mercury__string__format__find_non_zero_pos_2_f_0(Var_41, NumZeros_38);
    mercury__string__format__split_at_decimal_point_3_p_0(Float_4, &MantissaStr_8, &FractionStr_9);
    succeeded = (Place_7 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer DecimalPos_10;
      MR_String PaddedMantissaStr_11;
      MR_Integer MantissaInt_12;
      MR_String PaddedFractionStr_14;
      MR_Integer Var_22;
      MR_Integer Var_24;
      MR_Integer Var_25;

      mercury__int__abs_2_p_0(Place_7, &DecimalPos_10);
      mercury__string__between_4_p_0(FractionStr_9, (MR_Integer) 0, DecimalPos_10, &PaddedMantissaStr_11);
      MantissaInt_12 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, PaddedMantissaStr_11);
      mercury__string__int_to_base_string_3_p_0(MantissaInt_12, (MR_Integer) 10, &ExpMantissaStr_13);
      Var_22 = (MR_Integer) ((MR_Unsigned) Prec_5 + (MR_Unsigned) (MR_Integer) 1);
      mercury__string__pad_right_4_p_0(FractionStr_9, (MR_Char) 48, Var_22, &PaddedFractionStr_14);
      Var_25 = (MR_Integer) ((MR_Unsigned) DecimalPos_10 + (MR_Unsigned) Prec_5);
      Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) (MR_Integer) 1);
      mercury__string__between_4_p_0(PaddedFractionStr_14, DecimalPos_10, Var_24, &ExpFractionStr_15);
    }
    else
    {
      succeeded = (Place_7 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String FirstHalfOfFractionStr_16;
        MR_Integer Var_31;

        mercury__string__between_4_p_0(MantissaStr_8, (MR_Integer) 0, (MR_Integer) 1, &ExpMantissaStr_13);
        Var_31 = (MR_Integer) ((MR_Unsigned) Place_7 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__between_4_p_0(MantissaStr_8, (MR_Integer) 1, Var_31, &FirstHalfOfFractionStr_16);
        mercury__string__append_3_p_2(FirstHalfOfFractionStr_16, FractionStr_9, &ExpFractionStr_15);
      }
      else
      {
        ExpMantissaStr_13 = MantissaStr_8;
        ExpFractionStr_15 = FractionStr_9;
      }
    }
    mercury__string__append_3_p_2(ExpMantissaStr_13, (MR_String) ".", &MantissaAndPoint_17);
    mercury__string__append_3_p_2(MantissaAndPoint_17, ExpFractionStr_15, &UnroundedExpStr_18);
    Exp_6 = mercury__string__format__change_precision_2_f_0(UnroundedExpStr_18, Prec_5);
    return Exp_6;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String OldFloat_4,
  MR_Integer Prec_5)
{
  {
    MR_bool succeeded;
    MR_String NewFloat_6;
    MR_String MantissaStr_7;
    MR_String FractionStr_8;
    MR_Integer FracStrLen_9;
    MR_String PrecFracStr_10;
    MR_String PrecMantissaStr_11;
    MR_String HalfNewFloat_18;

    mercury__string__format__split_at_decimal_point_3_p_0(OldFloat_4, &MantissaStr_7, &FractionStr_8);
    mercury__string__count_codepoints_2_p_0(FractionStr_8, &FracStrLen_9);
    succeeded = (Prec_5 > FracStrLen_9);
    if (succeeded)
    {
      mercury__string__pad_right_4_p_0(FractionStr_8, (MR_Char) 48, Prec_5, &PrecFracStr_10);
      PrecMantissaStr_11 = MantissaStr_7;
    }
    else
    {
      succeeded = (Prec_5 < FracStrLen_9);
      if (succeeded)
      {
        MR_String UnroundedFrac_12;
        MR_Char NextDigit_13;
        MR_Char V_7_62;
        MR_Integer V_7_68;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Integer Var_23;
        MR_Integer Var_24;
        MR_Char Var_25;

        mercury__string__between_4_p_0(FractionStr_8, (MR_Integer) 0, Prec_5, &UnroundedFrac_12);
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  FractionStr_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_7_68  = Length;
}
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Prec_5 ;
	Length =  V_7_68 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          mercury__string__unsafe_index_3_p_0(FractionStr_8, Prec_5, &V_7_62);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          NextDigit_13 = V_7_62;
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
        }
        succeeded = (strcmp(UnroundedFrac_12, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  NextDigit_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_23  = Int;
}
          Var_25 = (MR_Char) 48;
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Var_25 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_24  = Int;
}
          Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) Var_24);
          Var_22 = (MR_Integer) 5;
          succeeded = (Var_21 >= Var_22);
        }
        if (succeeded)
        {
          MR_Integer NewPrecFrac_14;
          MR_String NewPrecFracStrNotOK_15;
          MR_String NewPrecFracStr_16;
          MR_Integer Var_26;
          MR_Integer Var_29;
          MR_Integer Var_30;

          Var_26 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, UnroundedFrac_12);
          NewPrecFrac_14 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) (MR_Integer) 1);
          mercury__string__int_to_base_string_3_p_0(NewPrecFrac_14, (MR_Integer) 10, &NewPrecFracStrNotOK_15);
          mercury__string__pad_left_4_p_0(NewPrecFracStrNotOK_15, (MR_Char) 48, Prec_5, &NewPrecFracStr_16);
          mercury__string__count_codepoints_2_p_0(NewPrecFracStr_16, &Var_29);
          mercury__string__count_codepoints_2_p_0(UnroundedFrac_12, &Var_30);
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            MR_Integer PrecMantissaInt_17;
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Prec_5);
            MR_Integer Var_34;

            mercury__string__between_4_p_0(NewPrecFracStr_16, (MR_Integer) 1, Var_32, &PrecFracStr_10);
            Var_34 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, MantissaStr_7);
            PrecMantissaInt_17 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) (MR_Integer) 1);
            PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(PrecMantissaInt_17);
          }
          else
          {
            PrecFracStr_10 = NewPrecFracStr_16;
            PrecMantissaStr_11 = MantissaStr_7;
          }
        }
        else
        {
          MR_Integer Var_36;
          MR_Integer Var_37;
          MR_Integer Var_38;
          MR_Integer Var_39;
          MR_Char Var_40;

          succeeded = (strcmp(UnroundedFrac_12, (MR_String) "") == 0);
          if (succeeded)
          {
            Var_38 = mercury__char__to_int_1_f_0(NextDigit_13);
            Var_40 = (MR_Char) 48;
            Var_39 = mercury__char__to_int_1_f_0(Var_40);
            Var_36 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) Var_39);
            Var_37 = (MR_Integer) 5;
            succeeded = (Var_36 >= Var_37);
          }
          if (succeeded)
          {
            MR_Integer Var_41;
            MR_Integer PrecMantissaInt_44;

            Var_41 = mercury__string__det_to_int_1_f_0(MantissaStr_7);
            PrecMantissaInt_44 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) (MR_Integer) 1);
            PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(PrecMantissaInt_44);
            PrecFracStr_10 = (MR_String) "";
          }
          else
          {
            PrecFracStr_10 = UnroundedFrac_12;
            PrecMantissaStr_11 = MantissaStr_7;
          }
        }
      }
      else
      {
        PrecFracStr_10 = FractionStr_8;
        PrecMantissaStr_11 = MantissaStr_7;
      }
    }
    HalfNewFloat_18 = mercury__string__f_43_43_2_f_0(PrecMantissaStr_11, (MR_String) ".");
    NewFloat_6 = mercury__string__f_43_43_2_f_0(HalfNewFloat_18, PrecFracStr_10);
    return NewFloat_6;
  }
}

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word L_4,
  MR_Integer CurrentPos_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer ActualPos_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((L_4 == (MR_Word) ((MR_Unsigned) 0U)))
      ActualPos_6 = (MR_Integer) 0;
    else
    {
      MR_Char H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 0)));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L_4, (MR_Integer) 1))));

      succeeded = (H_7 == (MR_Char) 46);
      if (succeeded)
      {
        MR_Word next_value_of_L_4 = T_8;

        // direct tailcall eliminated
        ;
        L_4 = next_value_of_L_4;
        continue;
      }
      else
      {
        succeeded = (H_7 == (MR_Char) 48);
        if (succeeded)
        {
          MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) CurrentPos_5 - (MR_Unsigned) (MR_Integer) 1);
          MR_Word next_value_of_L_4 = T_8;
          MR_Integer next_value_of_CurrentPos_5 = Var_9;

          // direct tailcall eliminated
          ;
          L_4 = next_value_of_L_4;
          CurrentPos_5 = next_value_of_CurrentPos_5;
          continue;
        }
        else
          ActualPos_6 = CurrentPos_5;
      }
    }
    return ActualPos_6;
    break;
  }
}

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float Float_3)
{
  {
    MR_bool succeeded;
    MR_String String_4;
    MR_String FloatStr_5;

{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  Float_3 ;
		{
{
    // Note any changes here will require the same changes in
    // string.float_to_string.
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 FloatStr_5  = FloatString;
}
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  FloatStr_5 ;
	Ch =  (MR_Char) 101 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  FloatStr_5 ;
	Ch =  (MR_Char) 69 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String FloatPtStr_6;
      MR_String ExpStr_7;
      MR_String MantissaStr_8;
      MR_String FractionStr_9;
      MR_Integer ExpInt_10;
      MR_Word FloatAndExponent_36;
      MR_Integer V_7_47;
      MR_Box conv0_FloatPtStr_6;
      MR_Box conv1_ExpStr_7;

      mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(FloatStr_5, (MR_Integer) 0, &V_7_47);
      mercury__string__format__words_loop__ho3_4_p_in__string_0(FloatStr_5, V_7_47, &FloatAndExponent_36);
      mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_36, (MR_Integer) 0, &conv0_FloatPtStr_6);
      FloatPtStr_6 = ((MR_String) (conv0_FloatPtStr_6));
      mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FloatAndExponent_36, (MR_Integer) 1, &conv1_ExpStr_7);
      ExpStr_7 = ((MR_String) (conv1_ExpStr_7));
      mercury__string__format__split_at_decimal_point_3_p_0(FloatPtStr_6, &MantissaStr_8, &FractionStr_9);
      ExpInt_10 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, ExpStr_7);
      succeeded = (ExpInt_10 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_String PaddedFracStr_12;
        MR_String MantissaRest_13;
        MR_String NewFraction_14;
        MR_String NewMantissa_15;
        MR_String MantAndPoint_16;

        mercury__string__pad_right_4_p_0(FractionStr_9, (MR_Char) 48, ExpInt_10, &PaddedFracStr_12);
        mercury__string__split_4_p_0(PaddedFracStr_12, ExpInt_10, &MantissaRest_13, &NewFraction_14);
        mercury__string__append_3_p_2(MantissaStr_8, MantissaRest_13, &NewMantissa_15);
        mercury__string__append_3_p_2(NewMantissa_15, (MR_String) ".", &MantAndPoint_16);
        succeeded = (strcmp(NewFraction_14, (MR_String) "") == 0);
        if (succeeded)
        {
          mercury__string__append_3_p_2(MantAndPoint_16, (MR_String) "0", &String_4);
        }
        else
          mercury__string__append_3_p_2(MantAndPoint_16, NewFraction_14, &String_4);
      }
      else
      {
        MR_String PaddedMantissaStr_17;
        MR_String FractionRest_18;
        MR_Integer Var_26;
        MR_Integer Var_27;
        MR_String Var_29;
        MR_Integer ExtraDigits_30;
        MR_String NewMantissa_31;
        MR_String MantAndPoint_32;

        mercury__int__abs_2_p_0(ExpInt_10, &ExtraDigits_30);
        mercury__string__pad_left_4_p_0(MantissaStr_8, (MR_Char) 48, ExtraDigits_30, &PaddedMantissaStr_17);
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  PaddedMantissaStr_17 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_27  = Length;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) ExtraDigits_30);
        mercury__string__split_4_p_0(PaddedMantissaStr_17, Var_26, &NewMantissa_31, &FractionRest_18);
        succeeded = (strcmp(NewMantissa_31, (MR_String) "") == 0);
        if (succeeded)
          MantAndPoint_32 = (MR_String) "0.";
        else
        {
          mercury__string__append_3_p_2(NewMantissa_31, (MR_String) ".", &MantAndPoint_32);
        }
        Var_29 = mercury__string__f_43_43_2_f_0(FractionRest_18, FractionStr_9);
        String_4 = mercury__string__f_43_43_2_f_0(MantAndPoint_32, Var_29);
      }
    }
    else
      String_4 = FloatStr_5;
    return String_4;
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho3_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8)
{
  {
    MR_bool succeeded;
    MR_Integer V_9_9;

    mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(V_6_6, V_7_7, &V_9_9);
    succeeded = (V_9_9 == V_7_7);
    if (succeeded)
      *V_8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_10_10;
      MR_Integer V_11_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho3_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  V_6_6 ;
	Start =  V_7_7 ;
	End =  V_9_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 V_10_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(V_6_6, V_9_9, &V_11_11);
      succeeded = (V_9_9 == V_11_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word V_12_13;

        mercury__string__format__words_loop__ho3_4_p_in__string_0(V_6_6, V_11_11, &V_12_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_12_13));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      switch (V_10_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 69:
          succeeded = MR_TRUE;
          break;
        case (MR_Char) 101:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
        *V_8_8 = V_7_7;
      else
      {
        MR_Integer next_value_of_V_7_7 = V_9_9;

        // direct tailcall eliminated
        ;
        V_7_7 = next_value_of_V_7_7;
        continue;
      }
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      switch (V_10_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 69:
          succeeded = MR_TRUE;
          break;
        case (MR_Char) 101:
          succeeded = MR_TRUE;
          break;
      }
    if (succeeded)
    {
      MR_Integer next_value_of_V_7_7 = V_9_9;

      // direct tailcall eliminated
      ;
      V_7_7 = next_value_of_V_7_7;
      continue;
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String Str_4,
  MR_String * Mantissa_5,
  MR_String * Fraction_6)
{
  {
    MR_bool succeeded;
    MR_Word MantAndFrac_7;
    MR_Integer V_7_19;
    MR_Box conv0_Mantissa_5;
    MR_String Fraction0_8;
    MR_Box conv1_Fraction0_8;

    mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(Str_4, (MR_Integer) 0, &V_7_19);
    mercury__string__format__words_loop__ho5_4_p_in__string_0(Str_4, V_7_19, &MantAndFrac_7);
    mercury__list__det_index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MantAndFrac_7, (MR_Integer) 0, &conv0_Mantissa_5);
    *Mantissa_5 = ((MR_String) (conv0_Mantissa_5));
    succeeded = mercury__list__index0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MantAndFrac_7, (MR_Integer) 1, &conv1_Fraction0_8);
    if (succeeded)
    {
      Fraction0_8 = ((MR_String) (conv1_Fraction0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Fraction_6 = Fraction0_8;
    else
      *Fraction_6 = (MR_String) "";
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho5_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8)
{
  {
    MR_bool succeeded;
    MR_Integer V_9_9;

    mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(V_6_6, V_7_7, &V_9_9);
    succeeded = (V_9_9 == V_7_7);
    if (succeeded)
      *V_8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_10_10;
      MR_Integer V_11_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho5_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  V_6_6 ;
	Start =  V_7_7 ;
	End =  V_9_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 V_10_10  = SubString;
}
      mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(V_6_6, V_9_9, &V_11_11);
      succeeded = (V_9_9 == V_11_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word V_12_13;

        mercury__string__format__words_loop__ho5_4_p_in__string_0(V_6_6, V_11_11, &V_12_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_12_13));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (V_10_10 == (MR_Char) 46);
      if (succeeded)
        *V_8_8 = V_7_7;
      else
      {
        MR_Integer next_value_of_V_7_7 = V_9_9;

        // direct tailcall eliminated
        ;
        V_7_7 = next_value_of_V_7_7;
        continue;
      }
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (V_10_10 == (MR_Char) 46);
    if (succeeded)
    {
      MR_Integer next_value_of_V_7_7 = V_9_9;

      // direct tailcall eliminated
      ;
      V_7_7 = next_value_of_V_7_7;
      continue;
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Integer Int_11,
  MR_String * String_12)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String SpecChar_13 = ((&mercury__string__format_vector_common_5[110 + Base_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      MR_String FormatStr_14;
      MR_String Var_15;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_15  = LengthModifier;
}
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Var_15, SpecChar_13);
      else
        FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_8, MaybePrec_9, SpecChar_13);
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  FormatStr_14 ;
	Val =  Int_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_12  = Str;
}
    }
    else
      *String_12 = mercury__string__format__format_unsigned_int_5_f_0(Flags_7, MaybeWidth_8, MaybePrec_9, Base_10, Int_11);
  }
}

static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_Word Base_10,
  MR_Integer Int_11)
{
  {
    MR_bool succeeded = (Int_11 == (MR_Integer) 0);
    MR_String String_12;
    MR_String AbsIntStr_13;
    MR_Integer AbsIntStrLength_16;
    MR_String PrecStr_18;
    MR_String PrecModStr_19;
    MR_String FieldModStr_23;
    MR_Integer Prec_17;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Integer Width_20;
    MR_Integer Var_36;
    MR_Word Var_37;
    MR_Word Var_55;

    if (succeeded)
    {
      MR_Integer Var_24;

      succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
        succeeded = (Var_24 == (MR_Integer) 0);
      }
      if (succeeded)
        AbsIntStr_13 = (MR_String) "";
      else
        AbsIntStr_13 = (MR_String) "0";
    }
    else
    {
      MR_Integer Var_26;

      succeeded = ((MR_Integer) 0 <= Int_11);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 32767;
        succeeded = (Int_11 <= Var_26);
      }
      if (succeeded)
        switch (Base_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            AbsIntStr_13 = mercury__string__format__abs_int_to_decimal_1_f_0(Int_11);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            AbsIntStr_13 = mercury__string__format__abs_int_to_hex_lc_1_f_0(Int_11);
            break;
          case (MR_Integer) 3:
            AbsIntStr_13 = mercury__string__format__abs_int_to_hex_uc_1_f_0(Int_11);
            break;
          case (MR_Integer) 0:
            AbsIntStr_13 = mercury__string__format__abs_int_to_octal_1_f_0(Int_11);
            break;
        }
      else
      {
        MR_Word Div_14;
        MR_Word UnsignedInteger_15;
        MR_Word Var_27;
        MR_Word Var_29;
        MR_Integer Var_30;
        MR_Word Var_31;

        Var_27 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 2);
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_5_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_30  = Bits;
}
        Var_29 = mercury__integer__int_to_integer_1_f_0(Var_30);
        Div_14 = mercury__integer__pow_2_f_0(Var_27, Var_29);
        Var_31 = mercury__integer__int_to_integer_1_f_0(Int_11);
        UnsignedInteger_15 = mercury__integer__big_mod_2_f_0(Var_31, Div_14);
        switch (Base_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            AbsIntStr_13 = mercury__string__format__abs_integer_to_decimal_1_f_0(UnsignedInteger_15);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_lc_1_f_0(UnsignedInteger_15);
            break;
          case (MR_Integer) 3:
            AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_uc_1_f_0(UnsignedInteger_15);
            break;
          case (MR_Integer) 0:
            AbsIntStr_13 = mercury__string__format__abs_integer_to_octal_1_f_0(UnsignedInteger_15);
            break;
        }
      }
    }
    mercury__string__count_codepoints_2_p_0(AbsIntStr_13, &AbsIntStrLength_16);
    succeeded = (MaybePrec_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
      succeeded = (Prec_17 > AbsIntStrLength_16);
    }
    if (succeeded)
    {
      mercury__string__pad_left_4_p_0(AbsIntStr_13, (MR_Char) 48, Prec_17, &PrecStr_18);
    }
    else
      PrecStr_18 = AbsIntStr_13;
    succeeded = (Base_10 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      succeeded = (Var_33 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_34 = (MR_String) "0";
        succeeded = mercury__string__prefix_2_p_0(PrecStr_18, Var_34);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      mercury__string__append_3_p_2((MR_String) "0", PrecStr_18, &PrecModStr_19);
    }
    else
      PrecModStr_19 = PrecStr_18;
    succeeded = (MaybeWidth_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));
      mercury__string__count_codepoints_2_p_0(PrecModStr_19, &Var_36);
      succeeded = (Width_20 > Var_36);
      if (succeeded)
      {
        Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_37 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_55 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_String Prefix_21;
      MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_39 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (Int_11 != (MR_Integer) 0);
              if (succeeded)
              {
                Prefix_21 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_21 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (Int_11 != (MR_Integer) 0);
              if (succeeded)
              {
                Prefix_21 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_String FieldStr_22;
        MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_20 - (MR_Unsigned) (MR_Integer) 2);

        mercury__string__pad_left_4_p_0(PrecModStr_19, (MR_Char) 48, Var_41, &FieldStr_22);
        FieldModStr_23 = mercury__string__f_43_43_2_f_0(Prefix_21, FieldStr_22);
      }
      else
      {
        FieldModStr_23 = mercury__string__pad_left_3_f_0(PrecModStr_19, (MR_Char) 48, Width_20);
      }
    }
    else
    {
      MR_String Prefix_46;
      MR_Word Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);

      succeeded = (Var_44 == (MR_Integer) 1);
      if (succeeded)
        switch (Base_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              succeeded = (Int_11 != (MR_Integer) 0);
              if (succeeded)
              {
                Prefix_46 = (MR_String) "0x";
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              Prefix_46 = (MR_String) "0x";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = (Int_11 != (MR_Integer) 0);
              if (succeeded)
              {
                Prefix_46 = (MR_String) "0X";
                succeeded = MR_TRUE;
              }
            }
            break;
        }
      if (succeeded)
        FieldModStr_23 = mercury__string__f_43_43_2_f_0(Prefix_46, PrecModStr_19);
      else
        FieldModStr_23 = PrecModStr_19;
    }
    String_12 = mercury__string__format__justify_string_3_f_0(Flags_7, MaybeWidth_8, FieldModStr_23);
    return String_12;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
  MR_Word Num_3)
{
  {
    MR_bool succeeded;
    MR_String NumStr_4;
    MR_Word Var_8;
    MR_Word V_5_19;

    Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    mercury__integer____Compare____integer_0_0(&V_5_19, Num_3, Var_8);
    succeeded = (V_5_19 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Integer16_5;
      MR_String FrontDigitsStr_6;
      MR_String LastDigitStr_7;
      MR_Integer Var_11;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Word V_7_32;
      MR_Word V_7_39;
      MR_String HexUCPrime_43;

      Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer16_5, &Var_12, &V_7_32);
      Var_11 = mercury__integer__det_to_int_1_f_0(Var_12);
      FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_uc_1_f_0(Var_11);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer16_5, &V_7_39, &Var_14);
      Var_13 = mercury__integer__det_to_int_1_f_0(Var_14);
      if ((((MR_Unsigned) Var_13) <= ((MR_Unsigned) (MR_Integer) 15)))
      {
        HexUCPrime_43 = ((&mercury__string__format_vector_common_5[94 + Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_7 = HexUCPrime_43;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_6, LastDigitStr_7, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 > (MR_Integer) 0);
    MR_String NumStr_4;

    if (succeeded)
    {
      MR_String FrontDigitsStr_5;
      MR_String LastDigitStr_6;
      MR_Integer Var_8 = (Num_3 / (MR_Integer) 16);
      MR_Integer Var_10;
      MR_String HexUCPrime_27;

      FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_uc_1_f_0(Var_8);
      Var_10 = (Num_3 % (MR_Integer) 16);
      if ((((MR_Unsigned) Var_10) <= ((MR_Unsigned) (MR_Integer) 15)))
      {
        HexUCPrime_27 = ((&mercury__string__format_vector_common_5[78 + Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_6 = HexUCPrime_27;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_5, LastDigitStr_6, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
  MR_Word Num_3)
{
  {
    MR_bool succeeded;
    MR_String NumStr_4;
    MR_Word Var_8;
    MR_Word V_5_19;

    Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    mercury__integer____Compare____integer_0_0(&V_5_19, Num_3, Var_8);
    succeeded = (V_5_19 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Integer16_5;
      MR_String FrontDigitsStr_6;
      MR_String LastDigitStr_7;
      MR_Integer Var_11;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Word V_7_32;
      MR_Word V_7_39;
      MR_String HexLCPrime_42;

      Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer16_5, &Var_12, &V_7_32);
      Var_11 = mercury__integer__det_to_int_1_f_0(Var_12);
      FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_lc_1_f_0(Var_11);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer16_5, &V_7_39, &Var_14);
      Var_13 = mercury__integer__det_to_int_1_f_0(Var_14);
      if ((((MR_Unsigned) Var_13) <= ((MR_Unsigned) (MR_Integer) 15)))
      {
        HexLCPrime_42 = ((&mercury__string__format_vector_common_5[62 + Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_7 = HexLCPrime_42;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_6, LastDigitStr_7, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 > (MR_Integer) 0);
    MR_String NumStr_4;

    if (succeeded)
    {
      MR_String FrontDigitsStr_5;
      MR_String LastDigitStr_6;
      MR_Integer Var_8 = (Num_3 / (MR_Integer) 16);
      MR_Integer Var_10;
      MR_String HexLCPrime_26;

      FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_lc_1_f_0(Var_8);
      Var_10 = (Num_3 % (MR_Integer) 16);
      if ((((MR_Unsigned) Var_10) <= ((MR_Unsigned) (MR_Integer) 15)))
      {
        HexLCPrime_26 = ((&mercury__string__format_vector_common_5[46 + Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_6 = HexLCPrime_26;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_5, LastDigitStr_6, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
  MR_Word Num_3)
{
  {
    MR_bool succeeded;
    MR_String NumStr_4;
    MR_Word Var_8;
    MR_Word V_5_19;

    Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    mercury__integer____Compare____integer_0_0(&V_5_19, Num_3, Var_8);
    succeeded = (V_5_19 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Integer10_5;
      MR_String FrontDigitsStr_6;
      MR_String LastDigitStr_7;
      MR_Integer Var_11;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Word V_7_32;
      MR_Word V_7_39;
      MR_String DecimalPrime_42;

      Integer10_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer10_5, &Var_12, &V_7_32);
      Var_11 = mercury__integer__det_to_int_1_f_0(Var_12);
      FrontDigitsStr_6 = mercury__string__format__abs_int_to_decimal_1_f_0(Var_11);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer10_5, &V_7_39, &Var_14);
      Var_13 = mercury__integer__det_to_int_1_f_0(Var_14);
      if ((((MR_Unsigned) Var_13) <= ((MR_Unsigned) (MR_Integer) 9)))
      {
        DecimalPrime_42 = ((&mercury__string__format_vector_common_5[36 + Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_7 = DecimalPrime_42;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_6, LastDigitStr_7, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
  MR_Word Num_3)
{
  {
    MR_bool succeeded;
    MR_String NumStr_4;
    MR_Word Var_8;
    MR_Word V_5_19;

    Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    mercury__integer____Compare____integer_0_0(&V_5_19, Num_3, Var_8);
    succeeded = (V_5_19 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word Integer8_5;
      MR_String FrontDigitsStr_6;
      MR_String LastDigitStr_7;
      MR_Integer Var_11;
      MR_Word Var_12;
      MR_Integer Var_13;
      MR_Word Var_14;
      MR_Word V_7_32;
      MR_Word V_7_39;
      MR_String OctalPrime_42;

      Integer8_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 8);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer8_5, &Var_12, &V_7_32);
      Var_11 = mercury__integer__det_to_int_1_f_0(Var_12);
      FrontDigitsStr_6 = mercury__string__format__abs_int_to_octal_1_f_0(Var_11);
      mercury__integer__big_quot_rem_4_p_0(Num_3, Integer8_5, &V_7_39, &Var_14);
      Var_13 = mercury__integer__det_to_int_1_f_0(Var_14);
      if ((((MR_Unsigned) Var_13) <= ((MR_Unsigned) (MR_Integer) 7)))
      {
        OctalPrime_42 = ((&mercury__string__format_vector_common_5[28 + Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_7 = OctalPrime_42;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_6, LastDigitStr_7, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 > (MR_Integer) 0);
    MR_String NumStr_4;

    if (succeeded)
    {
      MR_String FrontDigitsStr_5;
      MR_String LastDigitStr_6;
      MR_Integer Var_8 = (Num_3 / (MR_Integer) 8);
      MR_Integer Var_10;
      MR_String OctalPrime_26;

      FrontDigitsStr_5 = mercury__string__format__abs_int_to_octal_1_f_0(Var_8);
      Var_10 = (Num_3 % (MR_Integer) 8);
      if ((((MR_Unsigned) Var_10) <= ((MR_Unsigned) (MR_Integer) 7)))
      {
        OctalPrime_26 = ((&mercury__string__format_vector_common_5[20 + Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_6 = OctalPrime_26;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_5, LastDigitStr_6, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_5_p_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_Integer Int_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_11;
      MR_String Var_12;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 Var_12  = LengthModifier;
}
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, Var_12, (MR_String) "d");
      else
        FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_7, MaybePrec_8, (MR_String) "d");
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  FormatStr_11 ;
	Val =  Int_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
      *String_10 = mercury__string__format__format_signed_int_4_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, Int_9);
  }
}

MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_Integer Int_9)
{
  {
    MR_bool succeeded = (Int_9 == (MR_Integer) 0);
    MR_String String_10;
    MR_String AbsIntStr_11;
    MR_Integer AbsIntStrLength_14;
    MR_String PrecStr_16;
    MR_String FieldStr_18;
    MR_Word ZeroPadded_19;
    MR_String SignedStr_20;
    MR_Integer Prec_15;
    MR_Integer Width_17;
    MR_Integer Var_26;
    MR_Word Var_27;
    MR_Word Var_34;

    if (succeeded)
    {
      MR_Integer Var_21;

      succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
        succeeded = (Var_21 == (MR_Integer) 0);
      }
      if (succeeded)
        AbsIntStr_11 = (MR_String) "";
      else
        AbsIntStr_11 = (MR_String) "0";
    }
    else
    {
      MR_Integer Var_23;

      succeeded = ((MR_Integer) -2147483647 <= Int_9);
      if (succeeded)
      {
        Var_23 = (MR_Integer) 2147483647;
        succeeded = (Int_9 <= Var_23);
      }
      if (succeeded)
      {
        MR_Integer AbsInt_12;

        mercury__int__abs_2_p_0(Int_9, &AbsInt_12);
        AbsIntStr_11 = mercury__string__format__abs_int_to_decimal_1_f_0(AbsInt_12);
      }
      else
      {
        MR_Word AbsInteger_13;
        MR_Word Var_24;
        MR_Word Var_51;
        MR_Word V_5_62;

        Var_24 = mercury__integer__int_to_integer_1_f_0(Int_9);
        AbsInteger_13 = mercury__integer__big_abs_1_f_0(Var_24);
        Var_51 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
        mercury__integer____Compare____integer_0_0(&V_5_62, AbsInteger_13, Var_51);
        succeeded = (V_5_62 == (MR_Integer) 2);
        if (succeeded)
        {
          MR_Word Integer10_48;
          MR_String FrontDigitsStr_49;
          MR_String LastDigitStr_50;
          MR_Integer Var_54;
          MR_Word Var_55;
          MR_Integer Var_56;
          MR_Word Var_57;
          MR_Word V_7_75;
          MR_Word V_7_82;
          MR_String DecimalPrime_85;

          Integer10_48 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
          mercury__integer__big_quot_rem_4_p_0(AbsInteger_13, Integer10_48, &Var_55, &V_7_75);
          Var_54 = mercury__integer__det_to_int_1_f_0(Var_55);
          FrontDigitsStr_49 = mercury__string__format__abs_int_to_decimal_1_f_0(Var_54);
          mercury__integer__big_quot_rem_4_p_0(AbsInteger_13, Integer10_48, &V_7_82, &Var_57);
          Var_56 = mercury__integer__det_to_int_1_f_0(Var_57);
          if ((((MR_Unsigned) Var_56) <= ((MR_Unsigned) (MR_Integer) 9)))
          {
            DecimalPrime_85 = ((&mercury__string__format_vector_common_5[10 + Var_56]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
            LastDigitStr_50 = DecimalPrime_85;
          else
          {
            mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
          }
          mercury__string__append_3_p_2(FrontDigitsStr_49, LastDigitStr_50, &AbsIntStr_11);
        }
        else
          AbsIntStr_11 = (MR_String) "";
      }
    }
    mercury__string__count_codepoints_2_p_0(AbsIntStr_11, &AbsIntStrLength_14);
    succeeded = (MaybePrec_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Prec_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
      succeeded = (Prec_15 > AbsIntStrLength_14);
    }
    if (succeeded)
    {
      PrecStr_16 = mercury__string__pad_left_3_f_0(AbsIntStr_11, (MR_Char) 48, Prec_15);
    }
    else
      PrecStr_16 = AbsIntStr_11;
    succeeded = (MaybeWidth_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Width_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_7, (MR_Integer) 0))));
      mercury__string__count_codepoints_2_p_0(PrecStr_16, &Var_26);
      succeeded = (Width_17 > Var_26);
      if (succeeded)
      {
        Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        succeeded = (Var_27 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_34 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Width_17 - (MR_Unsigned) (MR_Integer) 1);

      FieldStr_18 = mercury__string__pad_left_3_f_0(PrecStr_16, (MR_Char) 48, Var_30);
      ZeroPadded_19 = (MR_Integer) 1;
    }
    else
    {
      FieldStr_18 = PrecStr_16;
      ZeroPadded_19 = (MR_Integer) 0;
    }
    succeeded = (Int_9 < (MR_Integer) 0);
    if (succeeded)
    {
      mercury__string__append_3_p_2((MR_String) "-", FieldStr_18, &SignedStr_20);
    }
    else
    {
      MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (Var_103 == (MR_Integer) 1);
      if (succeeded)
      {
        mercury__string__append_3_p_2((MR_String) "+", FieldStr_18, &SignedStr_20);
      }
      else
      {
        MR_Word Var_105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);

        succeeded = (Var_105 == (MR_Integer) 1);
        if (succeeded)
        {
          mercury__string__append_3_p_2((MR_String) " ", FieldStr_18, &SignedStr_20);
        }
        else
          switch (ZeroPadded_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SignedStr_20 = FieldStr_18;
              break;
            case (MR_Integer) 1:
              {
                mercury__string__append_3_p_2((MR_String) "0", FieldStr_18, &SignedStr_20);
              }
              break;
          }
      }
    }
    String_10 = mercury__string__format__justify_string_3_f_0(Flags_6, MaybeWidth_7, SignedStr_20);
    return String_10;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer Num_3)
{
  {
    MR_bool succeeded = (Num_3 > (MR_Integer) 0);
    MR_String NumStr_4;

    if (succeeded)
    {
      MR_String FrontDigitsStr_5;
      MR_String LastDigitStr_6;
      MR_Integer Var_8 = (Num_3 / (MR_Integer) 10);
      MR_Integer Var_10;
      MR_String DecimalPrime_26;

      FrontDigitsStr_5 = mercury__string__format__abs_int_to_decimal_1_f_0(Var_8);
      Var_10 = (Num_3 % (MR_Integer) 10);
      if ((((MR_Unsigned) Var_10) <= ((MR_Unsigned) (MR_Integer) 9)))
      {
        DecimalPrime_26 = ((&mercury__string__format_vector_common_5[0 + Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        LastDigitStr_6 = DecimalPrime_26;
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
      }
      mercury__string__append_3_p_2(FrontDigitsStr_5, LastDigitStr_6, &NumStr_4);
    }
    else
      NumStr_4 = (MR_String) "";
    return NumStr_4;
  }
}

void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
  MR_Word Flags_6,
  MR_Word MaybeWidth_7,
  MR_Word MaybePrec_8,
  MR_String Str_9,
  MR_String * String_10)
{
  {
    MR_bool succeeded;

    {
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;

{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
        Var_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
        Var_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_12 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_13 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_14 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_15 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_16 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          succeeded = (MaybeWidth_7 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_9 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        // sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
        // if there is a field width or precision specified.
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_String FormatStr_11;

{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(Flags_6, MaybeWidth_7, MaybePrec_8, (MR_String) "", (MR_String) "s");
      else
        FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_7, MaybePrec_8, (MR_String) "s");
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  FormatStr_11 ;
	Val =  Str_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_10  = Str;
}
    }
    else
    {
      MR_String PrecStr_35;

      if ((MaybePrec_8 == (MR_Word) ((MR_Unsigned) 0U)))
        PrecStr_35 = Str_9;
      else
      {
        MR_Integer NumChars_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_8, (MR_Integer) 0))));
        MR_String V_7_42;

        mercury__string__split_by_codepoint_4_p_0(Str_9, NumChars_34, &PrecStr_35, &V_7_42);
      }
      *String_10 = mercury__string__format__justify_string_3_f_0(Flags_6, MaybeWidth_7, PrecStr_35);
    }
  }
}

void MR_CALL 
mercury__string__format__format_char_component_4_p_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_Char Char_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  Char_7 ;
		{

    // sprintf %c specifier is inadequate for multi-byte UTF-8 characters.
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String FormatStr_9;

{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        FormatStr_9 = mercury__string__format__make_format_sprintf_5_f_0(Flags_5, MaybeWidth_6, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "", (MR_String) "c");
      else
        FormatStr_9 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(MaybeWidth_6, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "c");
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  FormatStr_9 ;
	Val =  Char_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *String_8  = Str;
}
    }
    else
    {
      MR_String CharStr_27;
      MR_Word V_5_32;

      {
        V_5_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_5_32, 0) = ((MR_Box) (MR_Word) (Char_7));
        MR_hl_field(MR_mktag(1), V_5_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__string__to_char_list_2_p_1(&CharStr_27, V_5_32);
      *String_8 = mercury__string__format__justify_string_3_f_0(Flags_5, MaybeWidth_6, CharStr_27);
    }
  }
}

MR_String MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_String Spec0_11)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_String WidthPrefixStr_14;
    MR_String WidthStr_15;
    MR_String PrecStr_17;
    MR_String Spec_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;

    if ((MaybeWidth_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      WidthPrefixStr_14 = (MR_String) "";
      WidthStr_15 = (MR_String) "";
    }
    else
    {
      MR_Integer Width_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));

      WidthPrefixStr_14 = (MR_String) ",";
      mercury__string__int_to_base_string_3_p_0(Width_13, (MR_Integer) 10, &WidthStr_15);
    }
    if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
      PrecStr_17 = (MR_String) "";
    else
    {
      MR_Integer Prec_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

      mercury__string__int_to_base_string_3_p_0(Prec_16, (MR_Integer) 10, &PrecStr_17);
    }
    succeeded = (strcmp(Spec0_11, (MR_String) "i") == 0);
    if (succeeded)
      Spec_18 = (MR_String) "d";
    else
    {
      succeeded = (strcmp(Spec0_11, (MR_String) "f") == 0);
      if (succeeded)
        Spec_18 = (MR_String) "e";
      else
        Spec_18 = Spec0_11;
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (PrecStr_17));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__string__format_scalar_common_4[0])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) ":"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (WidthStr_15));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (WidthPrefixStr_14));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) ((MR_String) "{0"));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    String_12 = mercury__string__append_list_1_f_0(Var_19);
    return String_12;
  }
}

MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
  MR_Word Flags_5,
  MR_Word MaybeWidth_6,
  MR_String Str_7)
{
  {
    MR_bool succeeded = (MaybeWidth_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_String JustifiedStr_8;
    MR_Integer Width_9;
    MR_Integer Var_10;

    if (succeeded)
    {
      Width_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_6, (MR_Integer) 0))));
      mercury__string__count_codepoints_2_p_0(Str_7, &Var_10);
      succeeded = (Width_9 > Var_10);
    }
    if (succeeded)
    {
      MR_Word Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

      succeeded = (Var_11 == (MR_Integer) 1);
      if (succeeded)
      {
        mercury__string__pad_right_4_p_0(Str_7, (MR_Char) 32, Width_9, &JustifiedStr_8);
      }
      else
      {
        mercury__string__pad_left_4_p_0(Str_7, (MR_Char) 32, Width_9, &JustifiedStr_8);
      }
    }
    else
      JustifiedStr_8 = Str_7;
    return JustifiedStr_8;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_sprintf_5_f_0(
  MR_Word Flags_7,
  MR_Word MaybeWidth_8,
  MR_Word MaybePrec_9,
  MR_String LengthMod_10,
  MR_String Spec_11)
{
  {
    MR_String String_12;
    MR_Word FlagHash_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word FlagSpace_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word FlagZero_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word FlagMinus_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word FlagPlus_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String FlagHashStr_18;
    MR_String FlagSpaceStr_19;
    MR_String FlagZeroStr_20;
    MR_String FlagMinusStr_21;
    MR_String FlagPlusStr_22;
    MR_String WidthStr_24;
    MR_String PrecPrefixStr_26;
    MR_String PrecStr_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    switch (FlagHash_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagHashStr_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagHashStr_18 = (MR_String) "#";
        break;
    }
    switch (FlagSpace_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagSpaceStr_19 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagSpaceStr_19 = (MR_String) " ";
        break;
    }
    switch (FlagZero_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagZeroStr_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagZeroStr_20 = (MR_String) "0";
        break;
    }
    switch (FlagMinus_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagMinusStr_21 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagMinusStr_21 = (MR_String) "-";
        break;
    }
    switch (FlagPlus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlagPlusStr_22 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        FlagPlusStr_22 = (MR_String) "+";
        break;
    }
    if ((MaybeWidth_8 == (MR_Word) ((MR_Unsigned) 0U)))
      WidthStr_24 = (MR_String) "";
    else
    {
      MR_Integer Width_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_8, (MR_Integer) 0))));

      mercury__string__int_to_base_string_3_p_0(Width_23, (MR_Integer) 10, &WidthStr_24);
    }
    if ((MaybePrec_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PrecPrefixStr_26 = (MR_String) "";
      PrecStr_27 = (MR_String) "";
    }
    else
    {
      MR_Integer Prec_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));

      PrecPrefixStr_26 = (MR_String) ".";
      mercury__string__int_to_base_string_3_p_0(Prec_25, (MR_Integer) 10, &PrecStr_27);
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LengthMod_10));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (PrecStr_27));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (PrecPrefixStr_26));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (WidthStr_24));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (FlagPlusStr_22));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (FlagMinusStr_21));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (FlagZeroStr_20));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (FlagSpaceStr_19));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (FlagHashStr_18));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) "%"));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    String_12 = mercury__string__append_list_1_f_0(Var_28);
    return String_12;
  }
}

void mercury__string__format__init(void)
{
}

void mercury__string__format__init_type_tables(void)
{
}

void mercury__string__format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__format__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module string.format.
