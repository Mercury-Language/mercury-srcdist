/*
** Automatically generated from `string.format.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module string.format. */
/* :- implementation. */

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
  MR_Float mercury__string__format__FloatVal_1,
  MR_String * mercury__string__format__FloatString_2);

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_String mercury__string__format__Val_2);

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_Float mercury__string__format__Val_2);

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String mercury__string__format__Str_1);

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word mercury__string__format__HeadVar__1_1,
  MR_Word * mercury__string__format__HeadVar__2_2);

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Kind_10,
  MR_Float mercury__string__format__Float_11);

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String mercury__string__format__Float_6,
  MR_Integer mercury__string__format__Prec_7,
  MR_String mercury__string__format__E_8,
  MR_Word mercury__string__format__Flags_9);

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String mercury__string__format__Str_4,
  MR_String * mercury__string__format__Float_5,
  MR_String * mercury__string__format__Exponent_6);

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String mercury__string__format__Float_3);

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word mercury__string__format__CharNum_3);

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String mercury__string__format__Float_5,
  MR_Integer mercury__string__format__Prec_6,
  MR_String mercury__string__format__E_7);

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String mercury__string__format__Float_4,
  MR_Integer mercury__string__format__Prec_5);

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String mercury__string__format__OldFloat_4,
  MR_Integer mercury__string__format__Prec_5);

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word mercury__string__format__L_4,
  MR_Integer mercury__string__format__CurrentPos_5);

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float mercury__string__format__Float_3);

static void MR_CALL 
mercury__string__format__words_loop__ho3_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Word * mercury__string__format__V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8);

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String mercury__string__format__Str_4,
  MR_String * mercury__string__format__Mantissa_5,
  MR_String * mercury__string__format__Fraction_6);

static void MR_CALL 
mercury__string__format__words_loop__ho5_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Word * mercury__string__format__V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8);

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8);

static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Base_10,
  MR_Integer mercury__string__format__Int_11);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
  MR_Word mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
  MR_Integer mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
  MR_Word mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
  MR_Integer mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
  MR_Word mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
  MR_Word mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
  MR_Integer mercury__string__format__Num_3);

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer mercury__string__format__Num_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
#include "string.format.mh"



static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__string__format__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
  MR_Float mercury__string__format__FloatVal_1,
  MR_String * mercury__string__format__FloatString_2)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__float_to_string_first_pass_2_p_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__FloatVal_1 ;
		{
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__FloatString_2  = FloatString;
}
  }
}

MR_String MR_CALL 
mercury__string__format__format_char_3_f_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Word mercury__string__format__MaybeWidth_6,
  MR_Char mercury__string__format__Char_7)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_8;
    MR_String mercury__string__format__CharStr_9;
    MR_Word mercury__string__format__V_5_14;
    MR_Word mercury__string__format__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__V_5_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_14, 0) = ((MR_Box) (MR_Word) (mercury__string__format__Char_7));
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_14, 1) = ((MR_Box) (mercury__string__format__V_6_15));
    }
    {
      mercury__string__to_char_list_2_p_1(&mercury__string__format__CharStr_9, mercury__string__format__V_5_14);
    }
    {
      mercury__string__format__String_8 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__CharStr_9);
    }
    return mercury__string__format__String_8;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_Char mercury__string__format__Val_2)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_char_2_f_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
}
    return mercury__string__format__Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_String mercury__string__format__Val_2)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_string_2_f_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
}
    return mercury__string__format__Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_Integer mercury__string__format__Val_2)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_int_2_f_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
}
    return mercury__string__format__Str_3;
  }
}

static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
  MR_String mercury__string__format__FormatStr_1,
  MR_Float mercury__string__format__Val_2)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__Str_3;

{
#define MR_PROC_LABEL mercury__string__format__native_format_float_2_f_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
}
    return mercury__string__format__Str_3;
  }
}

MR_String MR_CALL 
mercury__string__format__int_length_modifer_0_f_0(void)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__LengthModifier_1;

{
#define MR_PROC_LABEL mercury__string__format__int_length_modifer_0_f_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__LengthModifier_1  = LengthModifier;
}
    return mercury__string__format__LengthModifier_1;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_dotnet_5_f_0(
  MR_Word mercury__string__format___Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_String mercury__string__format___LengthMod_10,
  MR_String mercury__string__format__Spec0_11)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_12;

    {
      mercury__string__format__String_12 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Spec0_11);
    }
    return mercury__string__format__String_12;
  }
}

static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
  MR_String mercury__string__format__Str_1)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_string_1_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_1 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        /*
         * sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
         * if there is a field width or precision specified.
         */
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__format__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
  MR_Char mercury__string__format__Char_1)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_char_1_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_1 ;
		{

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__format__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__format__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_String mercury__string__format__LengthMod_10,
  MR_String mercury__string__format__Spec_11)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__HeadVar__6_6;

{
#define MR_PROC_LABEL mercury__string__format__make_format_5_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__HeadVar__6_6 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__LengthMod_10, mercury__string__format__Spec_11);
      }
    else
      {
        mercury__string__format__HeadVar__6_6 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Spec_11);
      }
    return mercury__string__format__HeadVar__6_6;
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_prec_6_p_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Integer mercury__string__format__Width_8,
  MR_Integer mercury__string__format__Prec_9,
  MR_Word mercury__string__format__Kind_10,
  MR_Float mercury__string__format__Float_11,
  MR_String * mercury__string__format__String_12)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_13;
    MR_Word mercury__string__format__MaybePrec_14;

    {
      mercury__string__format__MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_13, 0) = ((MR_Box) (mercury__string__format__Width_8));
    }
    {
      mercury__string__format__MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_14, 0) = ((MR_Box) (mercury__string__format__Prec_9));
    }
    {
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__Kind_10, mercury__string__format__Float_11, mercury__string__format__String_12);
    }
  }
}

void MR_CALL 
mercury__string__format__format_float_component_width_noprec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Width_7,
  MR_Word mercury__string__format__Kind_8,
  MR_Float mercury__string__format__Float_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11;
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
    }
    mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Kind_8, mercury__string__format__Float_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_prec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Prec_7,
  MR_Word mercury__string__format__Kind_8,
  MR_Float mercury__string__format__Float_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_7));
    }
    {
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Kind_8, mercury__string__format__Float_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_float_component_nowidth_noprec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Word mercury__string__format__Kind_6,
  MR_Float mercury__string__format__Float_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Kind_6, mercury__string__format__Float_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_prec_6_p_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Integer mercury__string__format__Width_8,
  MR_Integer mercury__string__format__Prec_9,
  MR_Word mercury__string__format__Base_10,
  MR_Integer mercury__string__format__Int_11,
  MR_String * mercury__string__format__String_12)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_13;
    MR_Word mercury__string__format__MaybePrec_14;

    {
      mercury__string__format__MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_13, 0) = ((MR_Box) (mercury__string__format__Width_8));
    }
    {
      mercury__string__format__MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_14, 0) = ((MR_Box) (mercury__string__format__Prec_9));
    }
    {
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__Base_10, mercury__string__format__Int_11, mercury__string__format__String_12);
    }
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Width_7,
  MR_Word mercury__string__format__Base_8,
  MR_Integer mercury__string__format__Int_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11;
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
    }
    mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Base_8, mercury__string__format__Int_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_prec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Prec_7,
  MR_Word mercury__string__format__Base_8,
  MR_Integer mercury__string__format__Int_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_7));
    }
    {
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Base_8, mercury__string__format__Int_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Word mercury__string__format__Base_6,
  MR_Integer mercury__string__format__Int_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Base_6, mercury__string__format__Int_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_prec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Width_7,
  MR_Integer mercury__string__format__Prec_8,
  MR_Integer mercury__string__format__Int_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11;
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
    }
    {
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_8));
    }
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Int_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_width_noprec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Integer mercury__string__format__Width_6,
  MR_Integer mercury__string__format__Int_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9;
    MR_Word mercury__string__format__MaybePrec_10;

    {
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
    }
    mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Int_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Integer mercury__string__format__Prec_6,
  MR_Integer mercury__string__format__Int_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_10;

    {
      mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_10, 0) = ((MR_Box) (mercury__string__format__Prec_6));
    }
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Int_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(
  MR_Word mercury__string__format__Flags_4,
  MR_Integer mercury__string__format__Int_5,
  MR_String * mercury__string__format__String_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Int_5, mercury__string__format__String_6);
    }
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_prec_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Integer mercury__string__format__Width_7,
  MR_Integer mercury__string__format__Prec_8,
  MR_String mercury__string__format__Str_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_11;
    MR_Word mercury__string__format__MaybePrec_12;

    {
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
    }
    {
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_8));
    }
    {
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Str_9, mercury__string__format__String_10);
    }
  }
}

void MR_CALL 
mercury__string__format__format_string_component_width_noprec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Integer mercury__string__format__Width_6,
  MR_String mercury__string__format__Str_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9;
    MR_Word mercury__string__format__MaybePrec_10;

    {
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
    }
    mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Str_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_prec_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Integer mercury__string__format__Prec_6,
  MR_String mercury__string__format__Str_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_10;

    {
      mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_10, 0) = ((MR_Box) (mercury__string__format__Prec_6));
    }
    {
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Str_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_string_component_nowidth_noprec_3_p_0(
  MR_Word mercury__string__format__Flags_4,
  MR_String mercury__string__format__Str_5,
  MR_String * mercury__string__format__String_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__format__MaybePrec_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Str_5, mercury__string__format__String_6);
    }
  }
}

void MR_CALL 
mercury__string__format__format_char_component_width_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Integer mercury__string__format__Width_6,
  MR_Char mercury__string__format__Char_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_9;

    {
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
    }
    {
      mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__Char_7, mercury__string__format__String_8);
    }
  }
}

void MR_CALL 
mercury__string__format__format_char_component_nowidth_3_p_0(
  MR_Word mercury__string__format__Flags_4,
  MR_Char mercury__string__format__Char_5,
  MR_String * mercury__string__format__String_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__Char_5, mercury__string__format__String_6);
    }
  }
}

void MR_CALL 
mercury__string__format__format_impl_3_p_0(
  MR_String mercury__string__format__FormatString_4,
  MR_Word mercury__string__format__PolyList_5,
  MR_String * mercury__string__format__String_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__Chars_7;
    MR_Word mercury__string__format__Specs_8;
    MR_Word mercury__string__format__Errors_9;

    {
      mercury__string__to_char_list_2_p_0(mercury__string__format__FormatString_4, &mercury__string__format__Chars_7);
    }
    {
      mercury__string__parse_runtime__parse_format_string_5_p_0(mercury__string__format__Chars_7, mercury__string__format__PolyList_5, (MR_Integer) 1, &mercury__string__format__Specs_8, &mercury__string__format__Errors_9);
    }
    if ((mercury__string__format__Errors_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__string__format__SpecStrs_10;

        {
          mercury__string__format__specs_to_strings_2_p_0(mercury__string__format__Specs_8, &mercury__string__format__SpecStrs_10);
        }
        {
          *mercury__string__format__String_6 = mercury__string__append_list_1_f_0(mercury__string__format__SpecStrs_10);
        }
      }
    else
      {
        MR_Word mercury__string__format__HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 0)));
        MR_String mercury__string__format__Msg_13;
        MR_Word mercury__string__format__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 1)));

        {
          mercury__string__format__Msg_13 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(mercury__string__format__HeadError_11);
        }
        {
          mercury__require__error_2_p_0((MR_String) "string.format", mercury__string__format__Msg_13);
          return;
        }
      }
  }
}

static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
  MR_Word mercury__string__format__HeadVar__1_1,
  MR_Word * mercury__string__format__HeadVar__2_2)
{
  {
    MR_bool mercury__string__format__succeeded;

    if ((mercury__string__format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__format__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__string__format__Spec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__string__format__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__string__format__String_5;
        MR_Word mercury__string__format__Strings_6;

        switch (MR_tag((MR_Word) mercury__string__format__Spec_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__string__format__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__Spec_3, (MR_Integer) 0)));
            break;
          case (MR_Integer) 1:
            {
              MR_Char mercury__string__format__Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 2)));
              MR_Word mercury__string__format__Flags_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 0)));
              MR_Word mercury__string__format__MaybeWidth_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 1)));

              {
                mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_25, mercury__string__format__MaybeWidth_26, mercury__string__format__Char_16, &mercury__string__format__String_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__string__format__Str_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 3)));
              MR_Word mercury__string__format__Flags_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 0)));
              MR_Word mercury__string__format__MaybeWidth_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 1)));
              MR_Word mercury__string__format__MaybePrec_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 2)));

              {
                mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_27, mercury__string__format__MaybeWidth_28, mercury__string__format__MaybePrec_29, mercury__string__format__Str_17, &mercury__string__format__String_5);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mercury__string__format__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
                  MR_Word mercury__string__format__MaybeWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
                  MR_Word mercury__string__format__MaybePrec_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));
                  MR_Integer mercury__string__format__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));

                  {
                    mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_9, mercury__string__format__MaybeWidth_10, mercury__string__format__MaybePrec_11, mercury__string__format__Int_12, &mercury__string__format__String_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__string__format__Base_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));
                  MR_Word mercury__string__format__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
                  MR_Word mercury__string__format__MaybeWidth_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
                  MR_Word mercury__string__format__MaybePrec_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));
                  MR_Integer mercury__string__format__Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 5)));

                  {
                    mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_18, mercury__string__format__MaybeWidth_19, mercury__string__format__MaybePrec_20, mercury__string__format__Base_13, mercury__string__format__Int_21, &mercury__string__format__String_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__string__format__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));
                  MR_Float mercury__string__format__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 5)));
                  MR_Word mercury__string__format__Flags_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
                  MR_Word mercury__string__format__MaybeWidth_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
                  MR_Word mercury__string__format__MaybePrec_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));

                  {
                    mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_22, mercury__string__format__MaybeWidth_23, mercury__string__format__MaybePrec_24, mercury__string__format__Kind_14, mercury__string__format__Float_15, &mercury__string__format__String_5);
                  }
                }
                break;
            }
            break;
        }
        {
          mercury__string__format__specs_to_strings_2_p_0(mercury__string__format__Specs_4, &mercury__string__format__Strings_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__format__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__String_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Strings_6));
        }
      }
  }
}

void MR_CALL 
mercury__string__format__format_float_component_6_p_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Kind_10,
  MR_Float mercury__string__format__Float_11,
  MR_String * mercury__string__format__String_12)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_finite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
      }
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__SpecChar_13 = ((&mercury__string__format_vector_common_5[121 + mercury__string__format__Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        MR_String mercury__string__format__FormatStr_14;

{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, (MR_String) "", mercury__string__format__SpecChar_13);
          }
        else
          {
            mercury__string__format__FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__SpecChar_13);
          }
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_14 ;
	Val =  mercury__string__format__Float_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_12  = Str;
}
      }
    else
      {
        *mercury__string__format__String_12 = mercury__string__format__format_float_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Kind_10, mercury__string__format__Float_11);
      }
  }
}

static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Kind_10,
  MR_Float mercury__string__format__Float_11)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_12;
    MR_String mercury__string__format__SignedStr_13;

{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_nan(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__SignedStr_13 = ((&mercury__string__format_vector_common_5[115 + mercury__string__format__Kind_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
      }
    else
      {
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{

    SUCCESS_INDICATOR = MR_is_infinite(Flt);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          switch (mercury__string__format__Kind_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
              {
                mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
                if (mercury__string__format__succeeded)
                  mercury__string__format__SignedStr_13 = (MR_String) "-infinity";
                else
                  mercury__string__format__SignedStr_13 = (MR_String) "infinity";
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
              {
                mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
                if (mercury__string__format__succeeded)
                  mercury__string__format__SignedStr_13 = (MR_String) "-INFINITY";
                else
                  mercury__string__format__SignedStr_13 = (MR_String) "INFINITY";
              }
              break;
          }
        else
          {
            MR_Float mercury__string__format__AbsFloat_14;
            MR_String mercury__string__format__AbsStr_15;
            MR_String mercury__string__format__PrecModStr_21;
            MR_String mercury__string__format__FieldStr_24;
            MR_Word mercury__string__format__ZeroPadded_25;
            MR_Integer mercury__string__format__Width_23;
            MR_Integer mercury__string__format__Var_35;
            MR_Word mercury__string__format__Var_36;
            MR_Word mercury__string__format__Var_56;
            MR_Word mercury__string__format__Var_54;
            MR_Word mercury__string__format__Var_55;
            MR_Word mercury__string__format__Var_57;

            {
              mercury__string__format__AbsFloat_14 = mercury__float__abs_1_f_0(mercury__string__format__Float_11);
            }
            {
              mercury__string__format__AbsStr_15 = mercury__string__format__convert_float_to_string_1_f_0(mercury__string__format__AbsFloat_14);
            }
            switch (mercury__string__format__Kind_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mercury__string__format__Prec_17;
                  MR_String mercury__string__format__PrecStr_18;
                  MR_Word mercury__string__format__Var_33;
                  MR_Integer mercury__string__format__Var_34;
                  MR_Word mercury__string__format__Var_46;
                  MR_Word mercury__string__format__Var_47;
                  MR_Word mercury__string__format__Var_48;
                  MR_Word mercury__string__format__Var_49;

                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__string__format__Prec_17 = (MR_Integer) 6;
                  else
                    mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                  {
                    mercury__string__format__PrecStr_18 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_17, (MR_String) "e");
                  }
                  mercury__string__format__Var_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                  mercury__string__format__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  mercury__string__format__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  mercury__string__format__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  mercury__string__format__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  mercury__string__format__succeeded = (mercury__string__format__Var_33 == (MR_Integer) 0);
                  if (mercury__string__format__succeeded)
                    {
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__string__format__succeeded)
                        {
                          mercury__string__format__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                          mercury__string__format__succeeded = (mercury__string__format__Var_34 == (MR_Integer) 0);
                        }
                    }
                  if (mercury__string__format__succeeded)
                    {
                      MR_String mercury__string__format__BaseStr_19;
                      MR_String mercury__string__format__ExponentStr_20;

                      {
                        mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_18, &mercury__string__format__BaseStr_19, &mercury__string__format__ExponentStr_20);
                      }
                      {
                        mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_19, mercury__string__format__ExponentStr_20);
                      }
                    }
                  else
                    mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_18;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__string__format__Prec_83;
                  MR_String mercury__string__format__PrecStr_84;
                  MR_Word mercury__string__format__Var_66;
                  MR_Integer mercury__string__format__Var_67;
                  MR_Word mercury__string__format__Var_62;
                  MR_Word mercury__string__format__Var_63;
                  MR_Word mercury__string__format__Var_64;
                  MR_Word mercury__string__format__Var_65;

                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__string__format__Prec_83 = (MR_Integer) 6;
                  else
                    mercury__string__format__Prec_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                  {
                    mercury__string__format__PrecStr_84 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_83, (MR_String) "E");
                  }
                  mercury__string__format__Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                  mercury__string__format__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  mercury__string__format__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  mercury__string__format__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  mercury__string__format__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  mercury__string__format__succeeded = (mercury__string__format__Var_66 == (MR_Integer) 0);
                  if (mercury__string__format__succeeded)
                    {
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__string__format__succeeded)
                        {
                          mercury__string__format__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                          mercury__string__format__succeeded = (mercury__string__format__Var_67 == (MR_Integer) 0);
                        }
                    }
                  if (mercury__string__format__succeeded)
                    {
                      MR_String mercury__string__format__BaseStr_72;
                      MR_String mercury__string__format__ExponentStr_73;

                      {
                        mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_84, &mercury__string__format__BaseStr_72, &mercury__string__format__ExponentStr_73);
                      }
                      {
                        mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_72, mercury__string__format__ExponentStr_73);
                      }
                    }
                  else
                    mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_84;
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Integer mercury__string__format__Prec_41;
                  MR_String mercury__string__format__PrecStr_42;
                  MR_Word mercury__string__format__Var_28;
                  MR_Integer mercury__string__format__Var_29;
                  MR_Word mercury__string__format__Var_50;
                  MR_Word mercury__string__format__Var_51;
                  MR_Word mercury__string__format__Var_52;
                  MR_Word mercury__string__format__Var_53;

                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__string__format__Prec_41 = (MR_Integer) 6;
                  else
                    mercury__string__format__Prec_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                  {
                    mercury__string__format__PrecStr_42 = mercury__string__format__change_precision_2_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_41);
                  }
                  mercury__string__format__Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                  mercury__string__format__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  mercury__string__format__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  mercury__string__format__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  mercury__string__format__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  mercury__string__format__succeeded = (mercury__string__format__Var_28 == (MR_Integer) 0);
                  if (mercury__string__format__succeeded)
                    {
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__string__format__succeeded)
                        {
                          mercury__string__format__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
                          mercury__string__format__succeeded = (mercury__string__format__Var_29 == (MR_Integer) 0);
                        }
                    }
                  if (mercury__string__format__succeeded)
                    {
                      MR_Integer mercury__string__format__PrecStrLen_22;
                      MR_Integer mercury__string__format__Var_31;

                      {
                        mercury__string__format__PrecStrLen_22 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecStr_42);
                      }
                      mercury__string__format__Var_31 = (mercury__string__format__PrecStrLen_22 - (MR_Integer) 1);
                      {
                        mercury__string__format__PrecModStr_21 = mercury__string__between_3_f_0(mercury__string__format__PrecStr_42, (MR_Integer) 0, mercury__string__format__Var_31);
                      }
                    }
                  else
                    mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_42;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer mercury__string__format__Prec_44;

                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__string__format__Prec_44 = (MR_Integer) 6;
                  else
                    {
                      MR_Integer mercury__string__format__Prec0_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

                      mercury__string__format__succeeded = (mercury__string__format__Prec0_105 == (MR_Integer) 0);
                      if (mercury__string__format__succeeded)
                        mercury__string__format__Prec_44 = (MR_Integer) 1;
                      else
                        mercury__string__format__Prec_44 = mercury__string__format__Prec0_105;
                    }
                  {
                    mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_44, (MR_String) "e", mercury__string__format__Flags_7);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer mercury__string__format__Prec_94;

                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__string__format__Prec_94 = (MR_Integer) 6;
                  else
                    {
                      MR_Integer mercury__string__format__Prec0_108 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

                      mercury__string__format__succeeded = (mercury__string__format__Prec0_108 == (MR_Integer) 0);
                      if (mercury__string__format__succeeded)
                        mercury__string__format__Prec_94 = (MR_Integer) 1;
                      else
                        mercury__string__format__Prec_94 = mercury__string__format__Prec0_108;
                    }
                  {
                    mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_94, (MR_String) "E", mercury__string__format__Flags_7);
                  }
                }
                break;
            }
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__format__succeeded)
              {
                mercury__string__format__Width_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
                {
                  mercury__string__format__Var_35 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecModStr_21);
                }
                mercury__string__format__succeeded = (mercury__string__format__Width_23 > mercury__string__format__Var_35);
                if (mercury__string__format__succeeded)
                  {
                    mercury__string__format__Var_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                    mercury__string__format__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    mercury__string__format__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    mercury__string__format__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    mercury__string__format__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    mercury__string__format__succeeded = (mercury__string__format__Var_36 == (MR_Integer) 1);
                    if (mercury__string__format__succeeded)
                      mercury__string__format__succeeded = (mercury__string__format__Var_56 == (MR_Integer) 0);
                  }
              }
            if (mercury__string__format__succeeded)
              {
                MR_Integer mercury__string__format__Var_39 = (mercury__string__format__Width_23 - (MR_Integer) 1);

                {
                  mercury__string__format__FieldStr_24 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_21, (MR_Char) 48, mercury__string__format__Var_39);
                }
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 1;
              }
            else
              {
                mercury__string__format__FieldStr_24 = mercury__string__format__PrecModStr_21;
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 0;
              }
            mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
            if (mercury__string__format__succeeded)
              {
                {
                  mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                }
              }
            else
              {
                MR_Word mercury__string__format__Var_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                MR_Word mercury__string__format__Var_121 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                MR_Word mercury__string__format__Var_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word mercury__string__format__Var_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word mercury__string__format__Var_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                mercury__string__format__succeeded = (mercury__string__format__Var_116 == (MR_Integer) 1);
                if (mercury__string__format__succeeded)
                  {
                    {
                      mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                    }
                  }
                else
                  {
                    MR_Word mercury__string__format__Var_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word mercury__string__format__Var_125 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
                    MR_Word mercury__string__format__Var_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word mercury__string__format__Var_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word mercury__string__format__Var_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    mercury__string__format__succeeded = (mercury__string__format__Var_118 == (MR_Integer) 1);
                    if (mercury__string__format__succeeded)
                      {
                        {
                          mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                        }
                      }
                    else
                      switch (mercury__string__format__ZeroPadded_25) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          mercury__string__format__SignedStr_13 = mercury__string__format__FieldStr_24;
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                            }
                          }
                          break;
                      }
                  }
              }
          }
      }
    {
      mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__SignedStr_13);
    }
    return mercury__string__format__String_12;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
  MR_String mercury__string__format__Float_6,
  MR_Integer mercury__string__format__Prec_7,
  MR_String mercury__string__format__E_8,
  MR_Word mercury__string__format__Flags_9)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__FormattedFloat_10;
    MR_Integer mercury__string__format__Exponent_11;
    MR_Integer mercury__string__format__UnsafeExponent_61;
    MR_String mercury__string__format__UnsafeBase_62;
    MR_String mercury__string__format__MantissaStr_63;
    MR_String mercury__string__format__MantissaStr_70;
    MR_Integer mercury__string__format__NumZeros_72;
    MR_Integer mercury__string__format__Var_73;
    MR_Word mercury__string__format__Var_75;
    MR_String mercury__string__format___FractionStr_71;
    MR_String mercury__string__format___FractionStr_64;
    MR_Integer mercury__string__format__Var_65;

    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_70, &mercury__string__format___FractionStr_71);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_70, &mercury__string__format__Var_73);
    }
    mercury__string__format__NumZeros_72 = (mercury__string__format__Var_73 - (MR_Integer) 1);
    {
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__Var_75);
    }
    {
      mercury__string__format__UnsafeExponent_61 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__Var_75, mercury__string__format__NumZeros_72);
    }
    {
      mercury__string__format__UnsafeBase_62 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_6, mercury__string__format__Prec_7);
    }
    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_62, &mercury__string__format__MantissaStr_63, &mercury__string__format___FractionStr_64);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_63, &mercury__string__format__Var_65);
    }
    mercury__string__format__succeeded = (mercury__string__format__Var_65 > (MR_Integer) 1);
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Exponent_11 = (mercury__string__format__UnsafeExponent_61 + (MR_Integer) 1);
      }
    else
      mercury__string__format__Exponent_11 = mercury__string__format__UnsafeExponent_61;
    mercury__string__format__succeeded = (mercury__string__format__Exponent_11 >= (MR_Integer) -4);
    if (mercury__string__format__succeeded)
      mercury__string__format__succeeded = (mercury__string__format__Exponent_11 < mercury__string__format__Prec_7);
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FormattedFloat0_13;
        MR_Word mercury__string__format__Var_39;
        MR_Word mercury__string__format__Var_50;
        MR_Word mercury__string__format__Var_51;
        MR_Word mercury__string__format__Var_52;
        MR_Word mercury__string__format__Var_53;

        mercury__string__format__succeeded = (mercury__string__format__Exponent_11 <= (MR_Integer) 0);
        if (mercury__string__format__succeeded)
          {
            MR_Integer mercury__string__format__DecimalPos_12;
            MR_Integer mercury__string__format__Var_26;
            MR_Integer mercury__string__format__Var_27;
            MR_Integer mercury__string__format__Var_28;
            MR_String mercury__string__format__MantissaStr_84;
            MR_Integer mercury__string__format__NumZeros_86;
            MR_Integer mercury__string__format__Var_87;
            MR_Word mercury__string__format__Var_89;
            MR_String mercury__string__format___FractionStr_85;

            {
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_84, &mercury__string__format___FractionStr_85);
            }
            {
              mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_84, &mercury__string__format__Var_87);
            }
            mercury__string__format__NumZeros_86 = (mercury__string__format__Var_87 - (MR_Integer) 1);
            {
              mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__Var_89);
            }
            {
              mercury__string__format__DecimalPos_12 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__Var_89, mercury__string__format__NumZeros_86);
            }
            {
              mercury__int__abs_2_p_0(mercury__string__format__DecimalPos_12, &mercury__string__format__Var_28);
            }
            mercury__string__format__Var_27 = (mercury__string__format__Var_28 - (MR_Integer) 1);
            mercury__string__format__Var_26 = (mercury__string__format__Var_27 + mercury__string__format__Prec_7);
            {
              mercury__string__format__FormattedFloat0_13 = mercury__string__format__change_precision_2_f_0(mercury__string__format__Float_6, mercury__string__format__Var_26);
            }
          }
        else
          {
            MR_String mercury__string__format__ScientificFloat_14;
            MR_String mercury__string__format__BaseStr_15;
            MR_String mercury__string__format__ExponentStr_16;
            MR_Integer mercury__string__format__Exp_17;
            MR_String mercury__string__format__MantissaStr_18;
            MR_String mercury__string__format__FractionStr_19;
            MR_String mercury__string__format__RestMantissaStr_20;
            MR_String mercury__string__format__NewFraction_21;
            MR_Integer mercury__string__format__Var_30 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
            MR_Integer mercury__string__format__Var_34;
            MR_String mercury__string__format__Var_36;
            MR_String mercury__string__format__Var_37;

            {
              mercury__string__format__ScientificFloat_14 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__Var_30, (MR_String) "e");
            }
            {
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__ScientificFloat_14, &mercury__string__format__BaseStr_15, &mercury__string__format__ExponentStr_16);
            }
            {
              mercury__string__format__Exp_17 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExponentStr_16);
            }
            {
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__BaseStr_15, &mercury__string__format__MantissaStr_18, &mercury__string__format__FractionStr_19);
            }
            {
              mercury__string__format__RestMantissaStr_20 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, (MR_Integer) 0, mercury__string__format__Exp_17);
            }
            mercury__string__format__Var_34 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
            {
              mercury__string__format__NewFraction_21 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, mercury__string__format__Exp_17, mercury__string__format__Var_34);
            }
            {
              mercury__string__format__Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__string__format__NewFraction_21);
            }
            {
              mercury__string__format__Var_36 = mercury__string__f_43_43_2_f_0(mercury__string__format__RestMantissaStr_20, mercury__string__format__Var_37);
            }
            {
              mercury__string__format__FormattedFloat0_13 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantissaStr_18, mercury__string__format__Var_36);
            }
          }
        mercury__string__format__Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
        mercury__string__format__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        mercury__string__format__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        mercury__string__format__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        mercury__string__format__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        mercury__string__format__succeeded = (mercury__string__format__Var_39 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          mercury__string__format__FormattedFloat_10 = mercury__string__format__FormattedFloat0_13;
        else
          {
            mercury__string__format__FormattedFloat_10 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__FormattedFloat0_13);
          }
      }
    else
      {
        MR_String mercury__string__format__UncheckedFloat_22;
        MR_Integer mercury__string__format__Var_40 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
        MR_Word mercury__string__format__Var_42;
        MR_Word mercury__string__format__Var_54;
        MR_Word mercury__string__format__Var_55;
        MR_Word mercury__string__format__Var_56;
        MR_Word mercury__string__format__Var_57;

        {
          mercury__string__format__UncheckedFloat_22 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__Var_40, mercury__string__format__E_8);
        }
        mercury__string__format__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
        mercury__string__format__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        mercury__string__format__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        mercury__string__format__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        mercury__string__format__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        mercury__string__format__succeeded = (mercury__string__format__Var_42 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          mercury__string__format__FormattedFloat_10 = mercury__string__format__UncheckedFloat_22;
        else
          {
            MR_String mercury__string__format__NewBaseStr_23;
            MR_String mercury__string__format__Var_43;
            MR_String mercury__string__format__BaseStr_44;
            MR_String mercury__string__format__ExponentStr_45;

            {
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__UncheckedFloat_22, &mercury__string__format__BaseStr_44, &mercury__string__format__ExponentStr_45);
            }
            {
              mercury__string__format__NewBaseStr_23 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__BaseStr_44);
            }
            {
              mercury__string__format__Var_43 = mercury__string__f_43_43_2_f_0(mercury__string__format__E_8, mercury__string__format__ExponentStr_45);
            }
            {
              mercury__string__format__FormattedFloat_10 = mercury__string__f_43_43_2_f_0(mercury__string__format__NewBaseStr_23, mercury__string__format__Var_43);
            }
          }
      }
    return mercury__string__format__FormattedFloat_10;
  }
}

static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
  MR_String mercury__string__format__Str_4,
  MR_String * mercury__string__format__Float_5,
  MR_String * mercury__string__format__Exponent_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__TypeCtorInfo_12_12;
    MR_Word mercury__string__format__FloatAndExponent_7;
    MR_Integer mercury__string__format__V_7_18;
    MR_Box mercury__string__format__conv0_Float_5;
    MR_Box mercury__string__format__conv1_Exponent_6;

    {
      mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__V_7_18);
    }
    {
      mercury__string__format__words_loop__ho3_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__V_7_18, &mercury__string__format__FloatAndExponent_7);
    }
    mercury__string__format__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 0, &mercury__string__format__conv0_Float_5);
    }
    *mercury__string__format__Float_5 = ((MR_String) mercury__string__format__conv0_Float_5);
    {
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 1, &mercury__string__format__conv1_Exponent_6);
    }
    *mercury__string__format__Exponent_6 = ((MR_String) mercury__string__format__conv1_Exponent_6);
  }
}

static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
  MR_String mercury__string__format__Float_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__TrimmedFloat_4;
    MR_Word mercury__string__format__TypeCtorInfo_9_9;
    MR_Word mercury__string__format__FloatCharList_5;
    MR_Word mercury__string__format__FloatCharListRev_6;
    MR_Word mercury__string__format__TrimmedFloatRevCharList_7;
    MR_Word mercury__string__format__TrimmedFloatCharList_8;

    {
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_3, &mercury__string__format__FloatCharList_5);
    }
    mercury__string__format__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    {
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__FloatCharList_5, &mercury__string__format__FloatCharListRev_6);
    }
    {
      mercury__string__format__TrimmedFloatRevCharList_7 = mercury__string__format__remove_zeros_1_f_0(mercury__string__format__FloatCharListRev_6);
    }
    {
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__TrimmedFloatRevCharList_7, &mercury__string__format__TrimmedFloatCharList_8);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__string__format__TrimmedFloatCharList_8, &mercury__string__format__TrimmedFloat_4);
    }
    return mercury__string__format__TrimmedFloat_4;
  }
}

static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
  MR_Word mercury__string__format__CharNum_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__string__format__TrimmedNum_4;
        MR_Word mercury__string__format__Rest_5;
        MR_Char mercury__string__format__Var_6;

        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
            mercury__string__format__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
            mercury__string__format__succeeded = (mercury__string__format__Var_6 == (MR_Char) 48);
          }
        if (mercury__string__format__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__format__next_value_of_CharNum_3 = mercury__string__format__Rest_5;

              mercury__string__format__CharNum_3 = mercury__string__format__next_value_of_CharNum_3;
            }
            continue;
          }
        else
          {
            MR_Word mercury__string__format__Rest_8;
            MR_Char mercury__string__format__Var_7;

            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__format__succeeded)
              {
                mercury__string__format__Var_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
                mercury__string__format__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
                mercury__string__format__succeeded = (mercury__string__format__Var_7 == (MR_Char) 46);
              }
            if (mercury__string__format__succeeded)
              mercury__string__format__TrimmedNum_4 = mercury__string__format__Rest_8;
            else
              mercury__string__format__TrimmedNum_4 = mercury__string__format__CharNum_3;
          }
        return mercury__string__format__TrimmedNum_4;
      }
      break;
    }
}

static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
  MR_String mercury__string__format__Float_5,
  MR_Integer mercury__string__format__Prec_6,
  MR_String mercury__string__format__E_7)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__ScientificFloat_8;
    MR_Integer mercury__string__format__UnsafeExponent_9;
    MR_String mercury__string__format__UnsafeBase_10;
    MR_String mercury__string__format__MantissaStr_11;
    MR_String mercury__string__format__SafeBase_13;
    MR_Integer mercury__string__format__SafeExponent_14;
    MR_String mercury__string__format__ExponentStr_15;
    MR_String mercury__string__format__MantissaStr_46;
    MR_Integer mercury__string__format__NumZeros_48;
    MR_Integer mercury__string__format__Var_49;
    MR_Word mercury__string__format__Var_51;
    MR_String mercury__string__format___FractionStr_47;
    MR_String mercury__string__format___FractionStr_12;
    MR_Integer mercury__string__format__Var_16;

    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_5, &mercury__string__format__MantissaStr_46, &mercury__string__format___FractionStr_47);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_46, &mercury__string__format__Var_49);
    }
    mercury__string__format__NumZeros_48 = (mercury__string__format__Var_49 - (MR_Integer) 1);
    {
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_5, &mercury__string__format__Var_51);
    }
    {
      mercury__string__format__UnsafeExponent_9 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__Var_51, mercury__string__format__NumZeros_48);
    }
    {
      mercury__string__format__UnsafeBase_10 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_5, mercury__string__format__Prec_6);
    }
    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_10, &mercury__string__format__MantissaStr_11, &mercury__string__format___FractionStr_12);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_11, &mercury__string__format__Var_16);
    }
    mercury__string__format__succeeded = (mercury__string__format__Var_16 > (MR_Integer) 1);
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__Var_18;

        {
          mercury__string__append_3_p_2(mercury__string__format__UnsafeBase_10, (MR_String) "0", &mercury__string__format__Var_18);
        }
        {
          mercury__string__format__SafeBase_13 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Var_18, mercury__string__format__Prec_6);
        }
        mercury__string__format__SafeExponent_14 = (mercury__string__format__UnsafeExponent_9 + (MR_Integer) 1);
      }
    else
      {
        mercury__string__format__SafeBase_13 = mercury__string__format__UnsafeBase_10;
        mercury__string__format__SafeExponent_14 = mercury__string__format__UnsafeExponent_9;
      }
    mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 >= (MR_Integer) 0);
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 < (MR_Integer) 10);
        if (mercury__string__format__succeeded)
          {
            MR_Word mercury__string__format__Var_23;
            MR_Word mercury__string__format__Var_24;
            MR_Word mercury__string__format__Var_26;
            MR_String mercury__string__format__Var_27;
            MR_Word mercury__string__format__Var_28;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__Var_27);
            }
            mercury__string__format__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__string__format__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_26, 0) = ((MR_Box) (mercury__string__format__Var_27));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_26, 1) = ((MR_Box) (mercury__string__format__Var_28));
            }
            {
              mercury__string__format__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_24, 0) = ((MR_Box) ((MR_String) "+0"));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_24, 1) = ((MR_Box) (mercury__string__format__Var_26));
            }
            {
              mercury__string__format__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_23, 0) = ((MR_Box) (mercury__string__format__E_7));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_23, 1) = ((MR_Box) (mercury__string__format__Var_24));
            }
            {
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__Var_23);
            }
          }
        else
          {
            MR_Word mercury__string__format__Var_29;
            MR_Word mercury__string__format__Var_30;
            MR_Word mercury__string__format__Var_32;
            MR_String mercury__string__format__Var_33;
            MR_Word mercury__string__format__Var_34;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__Var_33);
            }
            mercury__string__format__Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__string__format__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_32, 0) = ((MR_Box) (mercury__string__format__Var_33));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_32, 1) = ((MR_Box) (mercury__string__format__Var_34));
            }
            {
              mercury__string__format__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_30, 0) = ((MR_Box) ((MR_String) "+"));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_30, 1) = ((MR_Box) (mercury__string__format__Var_32));
            }
            {
              mercury__string__format__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_29, 0) = ((MR_Box) (mercury__string__format__E_7));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_29, 1) = ((MR_Box) (mercury__string__format__Var_30));
            }
            {
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__Var_29);
            }
          }
      }
    else
      {
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 > (MR_Integer) -10);
        if (mercury__string__format__succeeded)
          {
            MR_Word mercury__string__format__Var_36;
            MR_Word mercury__string__format__Var_37;
            MR_Word mercury__string__format__Var_39;
            MR_String mercury__string__format__Var_40;
            MR_Integer mercury__string__format__Var_41;
            MR_Word mercury__string__format__Var_42;

            {
              mercury__int__abs_2_p_0(mercury__string__format__SafeExponent_14, &mercury__string__format__Var_41);
            }
            {
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__Var_41, (MR_Integer) 10, &mercury__string__format__Var_40);
            }
            mercury__string__format__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__string__format__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_39, 0) = ((MR_Box) (mercury__string__format__Var_40));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_39, 1) = ((MR_Box) (mercury__string__format__Var_42));
            }
            {
              mercury__string__format__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_37, 0) = ((MR_Box) ((MR_String) "-0"));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_37, 1) = ((MR_Box) (mercury__string__format__Var_39));
            }
            {
              mercury__string__format__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_36, 0) = ((MR_Box) (mercury__string__format__E_7));
              MR_hl_field(MR_mktag(1), mercury__string__format__Var_36, 1) = ((MR_Box) (mercury__string__format__Var_37));
            }
            {
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__Var_36);
            }
          }
        else
          {
            MR_String mercury__string__format__Var_43;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__Var_43);
            }
            {
              mercury__string__append_3_p_2(mercury__string__format__E_7, mercury__string__format__Var_43, &mercury__string__format__ExponentStr_15);
            }
          }
      }
    {
      mercury__string__append_3_p_2(mercury__string__format__SafeBase_13, mercury__string__format__ExponentStr_15, &mercury__string__format__ScientificFloat_8);
    }
    return mercury__string__format__ScientificFloat_8;
  }
}

static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
  MR_String mercury__string__format__Float_4,
  MR_Integer mercury__string__format__Prec_5)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__Exp_6;
    MR_Integer mercury__string__format__Place_7;
    MR_String mercury__string__format__MantissaStr_8;
    MR_String mercury__string__format__FractionStr_9;
    MR_String mercury__string__format__ExpMantissaStr_13;
    MR_String mercury__string__format__ExpFractionStr_15;
    MR_String mercury__string__format__MantissaAndPoint_17;
    MR_String mercury__string__format__UnroundedExpStr_18;
    MR_String mercury__string__format__MantissaStr_36;
    MR_Integer mercury__string__format__NumZeros_38;
    MR_Integer mercury__string__format__Var_39;
    MR_Word mercury__string__format__Var_41;
    MR_String mercury__string__format___FractionStr_37;

    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_36, &mercury__string__format___FractionStr_37);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_36, &mercury__string__format__Var_39);
    }
    mercury__string__format__NumZeros_38 = (mercury__string__format__Var_39 - (MR_Integer) 1);
    {
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_4, &mercury__string__format__Var_41);
    }
    {
      mercury__string__format__Place_7 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__Var_41, mercury__string__format__NumZeros_38);
    }
    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
    }
    mercury__string__format__succeeded = (mercury__string__format__Place_7 < (MR_Integer) 0);
    if (mercury__string__format__succeeded)
      {
        MR_Integer mercury__string__format__DecimalPos_10;
        MR_String mercury__string__format__PaddedMantissaStr_11;
        MR_Integer mercury__string__format__MantissaInt_12;
        MR_String mercury__string__format__PaddedFractionStr_14;
        MR_Integer mercury__string__format__Var_22;
        MR_Integer mercury__string__format__Var_24;
        MR_Integer mercury__string__format__Var_25;

        {
          mercury__int__abs_2_p_0(mercury__string__format__Place_7, &mercury__string__format__DecimalPos_10);
        }
        {
          mercury__string__between_4_p_0(mercury__string__format__FractionStr_9, (MR_Integer) 0, mercury__string__format__DecimalPos_10, &mercury__string__format__PaddedMantissaStr_11);
        }
        {
          mercury__string__format__MantissaInt_12 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__PaddedMantissaStr_11);
        }
        {
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__MantissaInt_12, (MR_Integer) 10, &mercury__string__format__ExpMantissaStr_13);
        }
        mercury__string__format__Var_22 = (mercury__string__format__Prec_5 + (MR_Integer) 1);
        {
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__Var_22, &mercury__string__format__PaddedFractionStr_14);
        }
        mercury__string__format__Var_25 = (mercury__string__format__DecimalPos_10 + mercury__string__format__Prec_5);
        mercury__string__format__Var_24 = (mercury__string__format__Var_25 + (MR_Integer) 1);
        {
          mercury__string__between_4_p_0(mercury__string__format__PaddedFractionStr_14, mercury__string__format__DecimalPos_10, mercury__string__format__Var_24, &mercury__string__format__ExpFractionStr_15);
        }
      }
    else
      {
        mercury__string__format__succeeded = (mercury__string__format__Place_7 > (MR_Integer) 0);
        if (mercury__string__format__succeeded)
          {
            MR_String mercury__string__format__FirstHalfOfFractionStr_16;
            MR_Integer mercury__string__format__Var_31;

            {
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 0, (MR_Integer) 1, &mercury__string__format__ExpMantissaStr_13);
            }
            mercury__string__format__Var_31 = (mercury__string__format__Place_7 + (MR_Integer) 1);
            {
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 1, mercury__string__format__Var_31, &mercury__string__format__FirstHalfOfFractionStr_16);
            }
            {
              mercury__string__append_3_p_2(mercury__string__format__FirstHalfOfFractionStr_16, mercury__string__format__FractionStr_9, &mercury__string__format__ExpFractionStr_15);
            }
          }
        else
          {
            mercury__string__format__ExpMantissaStr_13 = mercury__string__format__MantissaStr_8;
            mercury__string__format__ExpFractionStr_15 = mercury__string__format__FractionStr_9;
          }
      }
    {
      mercury__string__append_3_p_2(mercury__string__format__ExpMantissaStr_13, (MR_String) ".", &mercury__string__format__MantissaAndPoint_17);
    }
    {
      mercury__string__append_3_p_2(mercury__string__format__MantissaAndPoint_17, mercury__string__format__ExpFractionStr_15, &mercury__string__format__UnroundedExpStr_18);
    }
    {
      mercury__string__format__Exp_6 = mercury__string__format__change_precision_2_f_0(mercury__string__format__UnroundedExpStr_18, mercury__string__format__Prec_5);
    }
    return mercury__string__format__Exp_6;
  }
}

static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
  MR_String mercury__string__format__OldFloat_4,
  MR_Integer mercury__string__format__Prec_5)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__NewFloat_6;
    MR_String mercury__string__format__MantissaStr_7;
    MR_String mercury__string__format__FractionStr_8;
    MR_Integer mercury__string__format__FracStrLen_9;
    MR_String mercury__string__format__PrecFracStr_10;
    MR_String mercury__string__format__PrecMantissaStr_11;
    MR_String mercury__string__format__HalfNewFloat_18;

    {
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__OldFloat_4, &mercury__string__format__MantissaStr_7, &mercury__string__format__FractionStr_8);
    }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__FractionStr_8, &mercury__string__format__FracStrLen_9);
    }
    mercury__string__format__succeeded = (mercury__string__format__Prec_5 > mercury__string__format__FracStrLen_9);
    if (mercury__string__format__succeeded)
      {
        {
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_8, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__PrecFracStr_10);
        }
        mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
      }
    else
      {
        mercury__string__format__succeeded = (mercury__string__format__Prec_5 < mercury__string__format__FracStrLen_9);
        if (mercury__string__format__succeeded)
          {
            MR_String mercury__string__format__UnroundedFrac_12;
            MR_Char mercury__string__format__NextDigit_13;
            MR_Char mercury__string__format__V_7_62;
            MR_Integer mercury__string__format__V_7_68;
            MR_Integer mercury__string__format__Var_21;
            MR_Integer mercury__string__format__Var_22;
            MR_Integer mercury__string__format__Var_23;
            MR_Integer mercury__string__format__Var_24;
            MR_Char mercury__string__format__Var_25;

            {
              mercury__string__between_4_p_0(mercury__string__format__FractionStr_8, (MR_Integer) 0, mercury__string__format__Prec_5, &mercury__string__format__UnroundedFrac_12);
            }
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__FractionStr_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_7_68  = Length;
}
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__format__Prec_5 ;
	Length =  mercury__string__format__V_7_68 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__string__format__succeeded)
              {
                {
                  mercury__string__unsafe_index_3_p_0(mercury__string__format__FractionStr_8, mercury__string__format__Prec_5, &mercury__string__format__V_7_62);
                }
                mercury__string__format__succeeded = MR_TRUE;
              }
            if (mercury__string__format__succeeded)
              mercury__string__format__NextDigit_13 = mercury__string__format__V_7_62;
            else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
                }
              }
            mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
            if (mercury__string__format__succeeded)
              {
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__NextDigit_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_23  = Int;
}
                mercury__string__format__Var_25 = (MR_Char) 48;
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__Var_25 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_24  = Int;
}
                mercury__string__format__Var_21 = (mercury__string__format__Var_23 - mercury__string__format__Var_24);
                mercury__string__format__Var_22 = (MR_Integer) 5;
                mercury__string__format__succeeded = (mercury__string__format__Var_21 >= mercury__string__format__Var_22);
              }
            if (mercury__string__format__succeeded)
              {
                MR_Integer mercury__string__format__NewPrecFrac_14;
                MR_String mercury__string__format__NewPrecFracStrNotOK_15;
                MR_String mercury__string__format__NewPrecFracStr_16;
                MR_Integer mercury__string__format__Var_26;
                MR_Integer mercury__string__format__Var_29;
                MR_Integer mercury__string__format__Var_30;

                {
                  mercury__string__format__Var_26 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__UnroundedFrac_12);
                }
                mercury__string__format__NewPrecFrac_14 = (mercury__string__format__Var_26 + (MR_Integer) 1);
                {
                  mercury__string__int_to_base_string_3_p_0(mercury__string__format__NewPrecFrac_14, (MR_Integer) 10, &mercury__string__format__NewPrecFracStrNotOK_15);
                }
                {
                  mercury__string__pad_left_4_p_0(mercury__string__format__NewPrecFracStrNotOK_15, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__NewPrecFracStr_16);
                }
                {
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__NewPrecFracStr_16, &mercury__string__format__Var_29);
                }
                {
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__UnroundedFrac_12, &mercury__string__format__Var_30);
                }
                mercury__string__format__succeeded = (mercury__string__format__Var_29 > mercury__string__format__Var_30);
                if (mercury__string__format__succeeded)
                  {
                    MR_Integer mercury__string__format__PrecMantissaInt_17;
                    MR_Integer mercury__string__format__Var_32 = ((MR_Integer) 1 + mercury__string__format__Prec_5);
                    MR_Integer mercury__string__format__Var_34;

                    {
                      mercury__string__between_4_p_0(mercury__string__format__NewPrecFracStr_16, (MR_Integer) 1, mercury__string__format__Var_32, &mercury__string__format__PrecFracStr_10);
                    }
                    {
                      mercury__string__format__Var_34 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__MantissaStr_7);
                    }
                    mercury__string__format__PrecMantissaInt_17 = (mercury__string__format__Var_34 + (MR_Integer) 1);
                    {
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_17);
                    }
                  }
                else
                  {
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__NewPrecFracStr_16;
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
                  }
              }
            else
              {
                MR_Integer mercury__string__format__Var_36;
                MR_Integer mercury__string__format__Var_37;
                MR_Integer mercury__string__format__Var_38;
                MR_Integer mercury__string__format__Var_39;
                MR_Char mercury__string__format__Var_40;

                mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
                if (mercury__string__format__succeeded)
                  {
                    {
                      mercury__string__format__Var_38 = mercury__char__to_int_1_f_0(mercury__string__format__NextDigit_13);
                    }
                    mercury__string__format__Var_40 = (MR_Char) 48;
                    {
                      mercury__string__format__Var_39 = mercury__char__to_int_1_f_0(mercury__string__format__Var_40);
                    }
                    mercury__string__format__Var_36 = (mercury__string__format__Var_38 - mercury__string__format__Var_39);
                    mercury__string__format__Var_37 = (MR_Integer) 5;
                    mercury__string__format__succeeded = (mercury__string__format__Var_36 >= mercury__string__format__Var_37);
                  }
                if (mercury__string__format__succeeded)
                  {
                    MR_Integer mercury__string__format__Var_41;
                    MR_Integer mercury__string__format__PrecMantissaInt_44;

                    {
                      mercury__string__format__Var_41 = mercury__string__det_to_int_1_f_0(mercury__string__format__MantissaStr_7);
                    }
                    mercury__string__format__PrecMantissaInt_44 = (mercury__string__format__Var_41 + (MR_Integer) 1);
                    {
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_44);
                    }
                    mercury__string__format__PrecFracStr_10 = (MR_String) "";
                  }
                else
                  {
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__UnroundedFrac_12;
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
                  }
              }
          }
        else
          {
            mercury__string__format__PrecFracStr_10 = mercury__string__format__FractionStr_8;
            mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
          }
      }
    {
      mercury__string__format__HalfNewFloat_18 = mercury__string__f_43_43_2_f_0(mercury__string__format__PrecMantissaStr_11, (MR_String) ".");
    }
    {
      mercury__string__format__NewFloat_6 = mercury__string__f_43_43_2_f_0(mercury__string__format__HalfNewFloat_18, mercury__string__format__PrecFracStr_10);
    }
    return mercury__string__format__NewFloat_6;
  }
}

static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
  MR_Word mercury__string__format__L_4,
  MR_Integer mercury__string__format__CurrentPos_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded;
        MR_Integer mercury__string__format__ActualPos_6;

        if ((mercury__string__format__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__string__format__ActualPos_6 = (MR_Integer) 0;
        else
          {
            MR_Char mercury__string__format__H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 0)));
            MR_Word mercury__string__format__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 1)));

            mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 46);
            if (mercury__string__format__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__string__format__next_value_of_L_4 = mercury__string__format__T_8;

                  mercury__string__format__L_4 = mercury__string__format__next_value_of_L_4;
                }
                continue;
              }
            else
              {
                mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 48);
                if (mercury__string__format__succeeded)
                  {
                    MR_Integer mercury__string__format__Var_9 = (mercury__string__format__CurrentPos_5 - (MR_Integer) 1);

                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__string__format__next_value_of_L_4 = mercury__string__format__T_8;
                      MR_Integer mercury__string__format__next_value_of_CurrentPos_5 = mercury__string__format__Var_9;

                      mercury__string__format__CurrentPos_5 = mercury__string__format__next_value_of_CurrentPos_5;
                      mercury__string__format__L_4 = mercury__string__format__next_value_of_L_4;
                    }
                    continue;
                  }
                else
                  mercury__string__format__ActualPos_6 = mercury__string__format__CurrentPos_5;
              }
          }
        return mercury__string__format__ActualPos_6;
      }
      break;
    }
}

static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
  MR_Float mercury__string__format__Float_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_4;
    MR_String mercury__string__format__FloatStr_5;

{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__Float_3 ;
		{
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__FloatStr_5  = FloatString;
}
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 101 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (!(mercury__string__format__succeeded))
      {
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 69 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
      }
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__TypeCtorInfo_12_41;
        MR_String mercury__string__format__FloatPtStr_6;
        MR_String mercury__string__format__ExpStr_7;
        MR_String mercury__string__format__MantissaStr_8;
        MR_String mercury__string__format__FractionStr_9;
        MR_Integer mercury__string__format__ExpInt_10;
        MR_Word mercury__string__format__FloatAndExponent_36;
        MR_Integer mercury__string__format__V_7_47;
        MR_Box mercury__string__format__conv0_FloatPtStr_6;
        MR_Box mercury__string__format__conv1_ExpStr_7;

        {
          mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(mercury__string__format__FloatStr_5, (MR_Integer) 0, &mercury__string__format__V_7_47);
        }
        {
          mercury__string__format__words_loop__ho3_4_p_in__string_0(mercury__string__format__FloatStr_5, mercury__string__format__V_7_47, &mercury__string__format__FloatAndExponent_36);
        }
        mercury__string__format__TypeCtorInfo_12_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 0, &mercury__string__format__conv0_FloatPtStr_6);
        }
        mercury__string__format__FloatPtStr_6 = ((MR_String) mercury__string__format__conv0_FloatPtStr_6);
        {
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 1, &mercury__string__format__conv1_ExpStr_7);
        }
        mercury__string__format__ExpStr_7 = ((MR_String) mercury__string__format__conv1_ExpStr_7);
        {
          mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__FloatPtStr_6, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
        }
        {
          mercury__string__format__ExpInt_10 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExpStr_7);
        }
        mercury__string__format__succeeded = (mercury__string__format__ExpInt_10 >= (MR_Integer) 0);
        if (mercury__string__format__succeeded)
          {
            MR_String mercury__string__format__PaddedFracStr_12;
            MR_String mercury__string__format__MantissaRest_13;
            MR_String mercury__string__format__NewFraction_14;
            MR_String mercury__string__format__NewMantissa_15;
            MR_String mercury__string__format__MantAndPoint_16;

            {
              mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__ExpInt_10, &mercury__string__format__PaddedFracStr_12);
            }
            {
              mercury__string__split_4_p_0(mercury__string__format__PaddedFracStr_12, mercury__string__format__ExpInt_10, &mercury__string__format__MantissaRest_13, &mercury__string__format__NewFraction_14);
            }
            {
              mercury__string__append_3_p_2(mercury__string__format__MantissaStr_8, mercury__string__format__MantissaRest_13, &mercury__string__format__NewMantissa_15);
            }
            {
              mercury__string__append_3_p_2(mercury__string__format__NewMantissa_15, (MR_String) ".", &mercury__string__format__MantAndPoint_16);
            }
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewFraction_14, (MR_String) "") == 0);
            if (mercury__string__format__succeeded)
              {
                {
                  mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, (MR_String) "0", &mercury__string__format__String_4);
                }
              }
            else
              {
                mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, mercury__string__format__NewFraction_14, &mercury__string__format__String_4);
              }
          }
        else
          {
            MR_String mercury__string__format__PaddedMantissaStr_17;
            MR_String mercury__string__format__FractionRest_18;
            MR_Integer mercury__string__format__Var_26;
            MR_Integer mercury__string__format__Var_27;
            MR_String mercury__string__format__Var_29;
            MR_Integer mercury__string__format__ExtraDigits_30;
            MR_String mercury__string__format__NewMantissa_31;
            MR_String mercury__string__format__MantAndPoint_32;

            {
              mercury__int__abs_2_p_0(mercury__string__format__ExpInt_10, &mercury__string__format__ExtraDigits_30);
            }
            {
              mercury__string__pad_left_4_p_0(mercury__string__format__MantissaStr_8, (MR_Char) 48, mercury__string__format__ExtraDigits_30, &mercury__string__format__PaddedMantissaStr_17);
            }
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__PaddedMantissaStr_17 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_27  = Length;
}
            mercury__string__format__Var_26 = (mercury__string__format__Var_27 - mercury__string__format__ExtraDigits_30);
            {
              mercury__string__split_4_p_0(mercury__string__format__PaddedMantissaStr_17, mercury__string__format__Var_26, &mercury__string__format__NewMantissa_31, &mercury__string__format__FractionRest_18);
            }
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewMantissa_31, (MR_String) "") == 0);
            if (mercury__string__format__succeeded)
              mercury__string__format__MantAndPoint_32 = (MR_String) "0.";
            else
              {
                {
                  mercury__string__append_3_p_2(mercury__string__format__NewMantissa_31, (MR_String) ".", &mercury__string__format__MantAndPoint_32);
                }
              }
            {
              mercury__string__format__Var_29 = mercury__string__f_43_43_2_f_0(mercury__string__format__FractionRest_18, mercury__string__format__FractionStr_9);
            }
            {
              mercury__string__format__String_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantAndPoint_32, mercury__string__format__Var_29);
            }
          }
      }
    else
      mercury__string__format__String_4 = mercury__string__format__FloatStr_5;
    return mercury__string__format__String_4;
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho3_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Word * mercury__string__format__V_8_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Integer mercury__string__format__V_9_9;

    {
      mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_7_7, &mercury__string__format__V_9_9);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_9_9 == mercury__string__format__V_7_7);
    if (mercury__string__format__succeeded)
      *mercury__string__format__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__string__format__V_10_10;
        MR_Integer mercury__string__format__V_11_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho3_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__V_6_6 ;
	Start =  mercury__string__format__V_7_7 ;
	End =  mercury__string__format__V_9_9 ;
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
	 mercury__string__format__V_10_10  = SubString;
}
        {
          mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_9_9, &mercury__string__format__V_11_11);
        }
        mercury__string__format__succeeded = (mercury__string__format__V_9_9 == mercury__string__format__V_11_11);
        if (mercury__string__format__succeeded)
          {
            MR_Word mercury__string__format__V_13_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__format__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_13_12));
            }
          }
        else
          {
            MR_Word mercury__string__format__V_12_13;

            {
              mercury__string__format__words_loop__ho3_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_11_11, &mercury__string__format__V_12_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__format__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_12_13));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded;
        MR_Integer mercury__string__format__V_9_9;
        MR_Char mercury__string__format__V_10_10;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho8_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__V_6_6 ;
	Index =  mercury__string__format__V_7_7 ;
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
	 mercury__string__format__V_9_9  = NextIndex;
	 mercury__string__format__V_10_10  = Ch;
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            switch (mercury__string__format__V_10_10) {
              default:
                mercury__string__format__succeeded = MR_FALSE;
                break;
              case (MR_Char) 69:
                mercury__string__format__succeeded = MR_TRUE;
                break;
              case (MR_Char) 101:
                mercury__string__format__succeeded = MR_TRUE;
                break;
            }
            if (mercury__string__format__succeeded)
              *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__string__format__next_value_of_V_7_7 = mercury__string__format__V_9_9;

                  mercury__string__format__V_7_7 = mercury__string__format__next_value_of_V_7_7;
                }
                continue;
              }
          }
        else
          *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded;
        MR_Integer mercury__string__format__V_9_9;
        MR_Char mercury__string__format__V_10_10;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho4_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__V_6_6 ;
	Index =  mercury__string__format__V_7_7 ;
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
	 mercury__string__format__V_9_9  = NextIndex;
	 mercury__string__format__V_10_10  = Ch;
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          switch (mercury__string__format__V_10_10) {
            default:
              mercury__string__format__succeeded = MR_FALSE;
              break;
            case (MR_Char) 69:
              mercury__string__format__succeeded = MR_TRUE;
              break;
            case (MR_Char) 101:
              mercury__string__format__succeeded = MR_TRUE;
              break;
          }
        if (mercury__string__format__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__string__format__next_value_of_V_7_7 = mercury__string__format__V_9_9;

              mercury__string__format__V_7_7 = mercury__string__format__next_value_of_V_7_7;
            }
            continue;
          }
        else
          *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
  MR_String mercury__string__format__Str_4,
  MR_String * mercury__string__format__Mantissa_5,
  MR_String * mercury__string__format__Fraction_6)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Word mercury__string__format__TypeCtorInfo_13_13;
    MR_Word mercury__string__format__MantAndFrac_7;
    MR_Integer mercury__string__format__V_7_19;
    MR_Box mercury__string__format__conv0_Mantissa_5;
    MR_String mercury__string__format__Fraction0_8;
    MR_Box mercury__string__format__conv1_Fraction0_8;

    {
      mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__V_7_19);
    }
    {
      mercury__string__format__words_loop__ho5_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__V_7_19, &mercury__string__format__MantAndFrac_7);
    }
    mercury__string__format__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 0, &mercury__string__format__conv0_Mantissa_5);
    }
    *mercury__string__format__Mantissa_5 = ((MR_String) mercury__string__format__conv0_Mantissa_5);
    {
      mercury__string__format__succeeded = mercury__list__index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 1, &mercury__string__format__conv1_Fraction0_8);
    }
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Fraction0_8 = ((MR_String) mercury__string__format__conv1_Fraction0_8);
        mercury__string__format__succeeded = MR_TRUE;
      }
    if (mercury__string__format__succeeded)
      *mercury__string__format__Fraction_6 = mercury__string__format__Fraction0_8;
    else
      *mercury__string__format__Fraction_6 = (MR_String) "";
  }
}

static void MR_CALL 
mercury__string__format__words_loop__ho5_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Word * mercury__string__format__V_8_8)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_Integer mercury__string__format__V_9_9;

    {
      mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_7_7, &mercury__string__format__V_9_9);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_9_9 == mercury__string__format__V_7_7);
    if (mercury__string__format__succeeded)
      *mercury__string__format__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__string__format__V_10_10;
        MR_Integer mercury__string__format__V_11_11;

{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho5_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__V_6_6 ;
	Start =  mercury__string__format__V_7_7 ;
	End =  mercury__string__format__V_9_9 ;
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
	 mercury__string__format__V_10_10  = SubString;
}
        {
          mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_9_9, &mercury__string__format__V_11_11);
        }
        mercury__string__format__succeeded = (mercury__string__format__V_9_9 == mercury__string__format__V_11_11);
        if (mercury__string__format__succeeded)
          {
            MR_Word mercury__string__format__V_13_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__format__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_13_12));
            }
          }
        else
          {
            MR_Word mercury__string__format__V_12_13;

            {
              mercury__string__format__words_loop__ho5_4_p_in__string_0(mercury__string__format__V_6_6, mercury__string__format__V_11_11, &mercury__string__format__V_12_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__format__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_12_13));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded;
        MR_Integer mercury__string__format__V_9_9;
        MR_Char mercury__string__format__V_10_10;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_word_end__ho7_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__V_6_6 ;
	Index =  mercury__string__format__V_7_7 ;
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
	 mercury__string__format__V_9_9  = NextIndex;
	 mercury__string__format__V_10_10  = Ch;
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__succeeded = (mercury__string__format__V_10_10 == (MR_Char) 46);
            if (mercury__string__format__succeeded)
              *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__string__format__next_value_of_V_7_7 = mercury__string__format__V_9_9;

                  mercury__string__format__V_7_7 = mercury__string__format__next_value_of_V_7_7;
                }
                continue;
              }
          }
        else
          *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0(
  MR_String mercury__string__format__V_6_6,
  MR_Integer mercury__string__format__V_7_7,
  MR_Integer * mercury__string__format__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__format__succeeded;
        MR_Integer mercury__string__format__V_9_9;
        MR_Char mercury__string__format__V_10_10;

{
#define MR_PROC_LABEL mercury__string__format__skip_to_next_word_start__ho6_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__V_6_6 ;
	Index =  mercury__string__format__V_7_7 ;
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
	 mercury__string__format__V_9_9  = NextIndex;
	 mercury__string__format__V_10_10  = Ch;
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          mercury__string__format__succeeded = (mercury__string__format__V_10_10 == (MR_Char) 46);
        if (mercury__string__format__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__string__format__next_value_of_V_7_7 = mercury__string__format__V_9_9;

              mercury__string__format__V_7_7 = mercury__string__format__next_value_of_V_7_7;
            }
            continue;
          }
        else
          *mercury__string__format__V_8_8 = mercury__string__format__V_7_7;
      }
      break;
    }
}

void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Base_10,
  MR_Integer mercury__string__format__Int_11,
  MR_String * mercury__string__format__String_12)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__SpecChar_13 = ((&mercury__string__format_vector_common_5[110 + mercury__string__format__Base_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
        MR_String mercury__string__format__FormatStr_14;
        MR_String mercury__string__format__Var_15;

{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_15  = LengthModifier;
}
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Var_15, mercury__string__format__SpecChar_13);
          }
        else
          {
            mercury__string__format__FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__SpecChar_13);
          }
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_14 ;
	Val =  mercury__string__format__Int_11 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_12  = Str;
}
      }
    else
      {
        *mercury__string__format__String_12 = mercury__string__format__format_unsigned_int_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Base_10, mercury__string__format__Int_11);
      }
  }
}

static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_Word mercury__string__format__Base_10,
  MR_Integer mercury__string__format__Int_11)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
    MR_String mercury__string__format__String_12;
    MR_String mercury__string__format__AbsIntStr_13;
    MR_Integer mercury__string__format__AbsIntStrLength_16;
    MR_String mercury__string__format__PrecStr_18;
    MR_String mercury__string__format__PrecModStr_19;
    MR_String mercury__string__format__FieldModStr_23;
    MR_Integer mercury__string__format__Prec_17;
    MR_Word mercury__string__format__Var_33;
    MR_Word mercury__string__format__Var_49;
    MR_Word mercury__string__format__Var_50;
    MR_Word mercury__string__format__Var_51;
    MR_Word mercury__string__format__Var_52;
    MR_String mercury__string__format__Var_34;
    MR_Integer mercury__string__format__Width_20;
    MR_Integer mercury__string__format__Var_36;
    MR_Word mercury__string__format__Var_37;
    MR_Word mercury__string__format__Var_55;
    MR_Word mercury__string__format__Var_53;
    MR_Word mercury__string__format__Var_54;
    MR_Word mercury__string__format__Var_56;

    if (mercury__string__format__succeeded)
      {
        MR_Integer mercury__string__format__Var_24;

        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
            mercury__string__format__succeeded = (mercury__string__format__Var_24 == (MR_Integer) 0);
          }
        if (mercury__string__format__succeeded)
          mercury__string__format__AbsIntStr_13 = (MR_String) "";
        else
          mercury__string__format__AbsIntStr_13 = (MR_String) "0";
      }
    else
      {
        MR_Integer mercury__string__format__Var_26;

        mercury__string__format__succeeded = ((MR_Integer) 0 <= mercury__string__format__Int_11);
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_26 = (MR_Integer) 32767;
            mercury__string__format__succeeded = (mercury__string__format__Int_11 <= mercury__string__format__Var_26);
          }
        if (mercury__string__format__succeeded)
          switch (mercury__string__format__Base_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Int_11);
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 4:
              {
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__Int_11);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__Int_11);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__Int_11);
              }
              break;
          }
        else
          {
            MR_Word mercury__string__format__Div_14;
            MR_Word mercury__string__format__UnsignedInteger_15;
            MR_Word mercury__string__format__Var_27;
            MR_Word mercury__string__format__Var_29;
            MR_Integer mercury__string__format__Var_30;
            MR_Word mercury__string__format__Var_31;

            {
              mercury__string__format__Var_27 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 2);
            }
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_5_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_30  = Bits;
}
            {
              mercury__string__format__Var_29 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Var_30);
            }
            {
              mercury__string__format__Div_14 = mercury__integer__pow_2_f_0(mercury__string__format__Var_27, mercury__string__format__Var_29);
            }
            {
              mercury__string__format__Var_31 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_11);
            }
            {
              mercury__string__format__UnsignedInteger_15 = mercury__integer__big_mod_2_f_0(mercury__string__format__Var_31, mercury__string__format__Div_14);
            }
            switch (mercury__string__format__Base_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_decimal_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 4:
                {
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_lc_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_uc_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_octal_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
                break;
            }
          }
      }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_13, &mercury__string__format__AbsIntStrLength_16);
    }
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
        mercury__string__format__succeeded = (mercury__string__format__Prec_17 > mercury__string__format__AbsIntStrLength_16);
      }
    if (mercury__string__format__succeeded)
      {
        {
          mercury__string__pad_left_4_p_0(mercury__string__format__AbsIntStr_13, (MR_Char) 48, mercury__string__format__Prec_17, &mercury__string__format__PrecStr_18);
        }
      }
    else
      mercury__string__format__PrecStr_18 = mercury__string__format__AbsIntStr_13;
    mercury__string__format__succeeded = (mercury__string__format__Base_10 == (MR_Integer) 0);
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Var_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
        mercury__string__format__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        mercury__string__format__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        mercury__string__format__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        mercury__string__format__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        mercury__string__format__succeeded = (mercury__string__format__Var_33 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_34 = (MR_String) "0";
            {
              mercury__string__format__succeeded = mercury__string__prefix_2_p_0(mercury__string__format__PrecStr_18, mercury__string__format__Var_34);
            }
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
          }
      }
    if (mercury__string__format__succeeded)
      {
        {
          mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__PrecStr_18, &mercury__string__format__PrecModStr_19);
        }
      }
    else
      mercury__string__format__PrecModStr_19 = mercury__string__format__PrecStr_18;
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Width_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
        {
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecModStr_19, &mercury__string__format__Var_36);
        }
        mercury__string__format__succeeded = (mercury__string__format__Width_20 > mercury__string__format__Var_36);
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
            mercury__string__format__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            mercury__string__format__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            mercury__string__format__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            mercury__string__format__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            mercury__string__format__succeeded = (mercury__string__format__Var_37 == (MR_Integer) 1);
            if (mercury__string__format__succeeded)
              {
                mercury__string__format__succeeded = (mercury__string__format__Var_55 == (MR_Integer) 0);
                if (mercury__string__format__succeeded)
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__Prefix_21;
        MR_Word mercury__string__format__Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        mercury__string__format__succeeded = (mercury__string__format__Var_39 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          switch (mercury__string__format__Base_10) {
            default:
              mercury__string__format__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
                if (mercury__string__format__succeeded)
                  {
                    mercury__string__format__Prefix_21 = (MR_String) "0x";
                    mercury__string__format__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__string__format__Prefix_21 = (MR_String) "0x";
                mercury__string__format__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
                if (mercury__string__format__succeeded)
                  {
                    mercury__string__format__Prefix_21 = (MR_String) "0X";
                    mercury__string__format__succeeded = MR_TRUE;
                  }
              }
              break;
          }
        if (mercury__string__format__succeeded)
          {
            MR_String mercury__string__format__FieldStr_22;
            MR_Integer mercury__string__format__Var_41 = (mercury__string__format__Width_20 - (MR_Integer) 2);

            {
              mercury__string__pad_left_4_p_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__Var_41, &mercury__string__format__FieldStr_22);
            }
            {
              mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_21, mercury__string__format__FieldStr_22);
            }
          }
        else
          {
            {
              mercury__string__format__FieldModStr_23 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__Width_20);
            }
          }
      }
    else
      {
        MR_String mercury__string__format__Prefix_46;
        MR_Word mercury__string__format__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        mercury__string__format__succeeded = (mercury__string__format__Var_44 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          switch (mercury__string__format__Base_10) {
            default:
              mercury__string__format__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
                if (mercury__string__format__succeeded)
                  {
                    mercury__string__format__Prefix_46 = (MR_String) "0x";
                    mercury__string__format__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__string__format__Prefix_46 = (MR_String) "0x";
                mercury__string__format__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
                if (mercury__string__format__succeeded)
                  {
                    mercury__string__format__Prefix_46 = (MR_String) "0X";
                    mercury__string__format__succeeded = MR_TRUE;
                  }
              }
              break;
          }
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_46, mercury__string__format__PrecModStr_19);
          }
        else
          mercury__string__format__FieldModStr_23 = mercury__string__format__PrecModStr_19;
      }
    {
      mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__FieldModStr_23);
    }
    return mercury__string__format__String_12;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
  MR_Word mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__NumStr_4;
    MR_Word mercury__string__format__Var_8;
    MR_Word mercury__string__format__V_5_19;

    {
      mercury__string__format__Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
    {
      mercury__integer____Compare____integer_0_0(&mercury__string__format__V_5_19, mercury__string__format__Num_3, mercury__string__format__Var_8);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_5_19 == (MR_Integer) 2);
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__Integer16_5;
        MR_String mercury__string__format__FrontDigitsStr_6;
        MR_String mercury__string__format__LastDigitStr_7;
        MR_Integer mercury__string__format__Var_11;
        MR_Word mercury__string__format__Var_12;
        MR_Integer mercury__string__format__Var_13;
        MR_Word mercury__string__format__Var_14;
        MR_Word mercury__string__format__V_7_32;
        MR_Word mercury__string__format__V_7_39;
        MR_String mercury__string__format__HexUCPrime_43;

        {
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__Var_12, &mercury__string__format__V_7_32);
        }
        {
          mercury__string__format__Var_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_12);
        }
        {
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__Var_11);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_7_39, &mercury__string__format__Var_14);
        }
        {
          mercury__string__format__Var_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_14);
        }
        if ((((MR_Unsigned) mercury__string__format__Var_13) <= ((MR_Unsigned) (MR_Integer) 15)))
          {
            mercury__string__format__HexUCPrime_43 = ((&mercury__string__format_vector_common_5[94 + mercury__string__format__Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexUCPrime_43;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
  MR_Integer mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
    MR_String mercury__string__format__NumStr_4;

    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FrontDigitsStr_5;
        MR_String mercury__string__format__LastDigitStr_6;
        MR_Integer mercury__string__format__Var_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
        MR_Integer mercury__string__format__Var_10;
        MR_String mercury__string__format__HexUCPrime_27;

        {
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__Var_8);
        }
        mercury__string__format__Var_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
        if ((((MR_Unsigned) mercury__string__format__Var_10) <= ((MR_Unsigned) (MR_Integer) 15)))
          {
            mercury__string__format__HexUCPrime_27 = ((&mercury__string__format_vector_common_5[78 + mercury__string__format__Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexUCPrime_27;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
  MR_Word mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__NumStr_4;
    MR_Word mercury__string__format__Var_8;
    MR_Word mercury__string__format__V_5_19;

    {
      mercury__string__format__Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
    {
      mercury__integer____Compare____integer_0_0(&mercury__string__format__V_5_19, mercury__string__format__Num_3, mercury__string__format__Var_8);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_5_19 == (MR_Integer) 2);
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__Integer16_5;
        MR_String mercury__string__format__FrontDigitsStr_6;
        MR_String mercury__string__format__LastDigitStr_7;
        MR_Integer mercury__string__format__Var_11;
        MR_Word mercury__string__format__Var_12;
        MR_Integer mercury__string__format__Var_13;
        MR_Word mercury__string__format__Var_14;
        MR_Word mercury__string__format__V_7_32;
        MR_Word mercury__string__format__V_7_39;
        MR_String mercury__string__format__HexLCPrime_42;

        {
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__Var_12, &mercury__string__format__V_7_32);
        }
        {
          mercury__string__format__Var_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_12);
        }
        {
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__Var_11);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_7_39, &mercury__string__format__Var_14);
        }
        {
          mercury__string__format__Var_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_14);
        }
        if ((((MR_Unsigned) mercury__string__format__Var_13) <= ((MR_Unsigned) (MR_Integer) 15)))
          {
            mercury__string__format__HexLCPrime_42 = ((&mercury__string__format_vector_common_5[62 + mercury__string__format__Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexLCPrime_42;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
  MR_Integer mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
    MR_String mercury__string__format__NumStr_4;

    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FrontDigitsStr_5;
        MR_String mercury__string__format__LastDigitStr_6;
        MR_Integer mercury__string__format__Var_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
        MR_Integer mercury__string__format__Var_10;
        MR_String mercury__string__format__HexLCPrime_26;

        {
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__Var_8);
        }
        mercury__string__format__Var_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
        if ((((MR_Unsigned) mercury__string__format__Var_10) <= ((MR_Unsigned) (MR_Integer) 15)))
          {
            mercury__string__format__HexLCPrime_26 = ((&mercury__string__format_vector_common_5[46 + mercury__string__format__Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexLCPrime_26;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
  MR_Word mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__NumStr_4;
    MR_Word mercury__string__format__Var_8;
    MR_Word mercury__string__format__V_5_19;

    {
      mercury__string__format__Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
    {
      mercury__integer____Compare____integer_0_0(&mercury__string__format__V_5_19, mercury__string__format__Num_3, mercury__string__format__Var_8);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_5_19 == (MR_Integer) 2);
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__Integer10_5;
        MR_String mercury__string__format__FrontDigitsStr_6;
        MR_String mercury__string__format__LastDigitStr_7;
        MR_Integer mercury__string__format__Var_11;
        MR_Word mercury__string__format__Var_12;
        MR_Integer mercury__string__format__Var_13;
        MR_Word mercury__string__format__Var_14;
        MR_Word mercury__string__format__V_7_32;
        MR_Word mercury__string__format__V_7_39;
        MR_String mercury__string__format__DecimalPrime_42;

        {
          mercury__string__format__Integer10_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format__Var_12, &mercury__string__format__V_7_32);
        }
        {
          mercury__string__format__Var_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_12);
        }
        {
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Var_11);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format__V_7_39, &mercury__string__format__Var_14);
        }
        {
          mercury__string__format__Var_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_14);
        }
        if ((((MR_Unsigned) mercury__string__format__Var_13) <= ((MR_Unsigned) (MR_Integer) 9)))
          {
            mercury__string__format__DecimalPrime_42 = ((&mercury__string__format_vector_common_5[36 + mercury__string__format__Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_7 = mercury__string__format__DecimalPrime_42;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
  MR_Word mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__NumStr_4;
    MR_Word mercury__string__format__Var_8;
    MR_Word mercury__string__format__V_5_19;

    {
      mercury__string__format__Var_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
    {
      mercury__integer____Compare____integer_0_0(&mercury__string__format__V_5_19, mercury__string__format__Num_3, mercury__string__format__Var_8);
    }
    mercury__string__format__succeeded = (mercury__string__format__V_5_19 == (MR_Integer) 2);
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__Integer8_5;
        MR_String mercury__string__format__FrontDigitsStr_6;
        MR_String mercury__string__format__LastDigitStr_7;
        MR_Integer mercury__string__format__Var_11;
        MR_Word mercury__string__format__Var_12;
        MR_Integer mercury__string__format__Var_13;
        MR_Word mercury__string__format__Var_14;
        MR_Word mercury__string__format__V_7_32;
        MR_Word mercury__string__format__V_7_39;
        MR_String mercury__string__format__OctalPrime_42;

        {
          mercury__string__format__Integer8_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 8);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format__Var_12, &mercury__string__format__V_7_32);
        }
        {
          mercury__string__format__Var_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_12);
        }
        {
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__Var_11);
        }
        {
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format__V_7_39, &mercury__string__format__Var_14);
        }
        {
          mercury__string__format__Var_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_14);
        }
        if ((((MR_Unsigned) mercury__string__format__Var_13) <= ((MR_Unsigned) (MR_Integer) 7)))
          {
            mercury__string__format__OctalPrime_42 = ((&mercury__string__format_vector_common_5[28 + mercury__string__format__Var_13]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_7 = mercury__string__format__OctalPrime_42;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
  MR_Integer mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
    MR_String mercury__string__format__NumStr_4;

    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FrontDigitsStr_5;
        MR_String mercury__string__format__LastDigitStr_6;
        MR_Integer mercury__string__format__Var_8 = (mercury__string__format__Num_3 / (MR_Integer) 8);
        MR_Integer mercury__string__format__Var_10;
        MR_String mercury__string__format__OctalPrime_26;

        {
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__Var_8);
        }
        mercury__string__format__Var_10 = (mercury__string__format__Num_3 % (MR_Integer) 8);
        if ((((MR_Unsigned) mercury__string__format__Var_10) <= ((MR_Unsigned) (MR_Integer) 7)))
          {
            mercury__string__format__OctalPrime_26 = ((&mercury__string__format_vector_common_5[20 + mercury__string__format__Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_6 = mercury__string__format__OctalPrime_26;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

void MR_CALL 
mercury__string__format__format_signed_int_component_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Word mercury__string__format__MaybeWidth_7,
  MR_Word mercury__string__format__MaybePrec_8,
  MR_Integer mercury__string__format__Int_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FormatStr_11;
        MR_String mercury__string__format__Var_12;

{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String LengthModifier;

		{
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Var_12  = LengthModifier;
}
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Var_12, (MR_String) "d");
          }
        else
          {
            mercury__string__format__FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "d");
          }
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_11 ;
	Val =  mercury__string__format__Int_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_10  = Str;
}
      }
    else
      {
        *mercury__string__format__String_10 = mercury__string__format__format_signed_int_4_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Int_9);
      }
  }
}

MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Word mercury__string__format__MaybeWidth_7,
  MR_Word mercury__string__format__MaybePrec_8,
  MR_Integer mercury__string__format__Int_9)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_9 == (MR_Integer) 0);
    MR_String mercury__string__format__String_10;
    MR_String mercury__string__format__AbsIntStr_11;
    MR_Integer mercury__string__format__AbsIntStrLength_14;
    MR_String mercury__string__format__PrecStr_16;
    MR_String mercury__string__format__FieldStr_18;
    MR_Word mercury__string__format__ZeroPadded_19;
    MR_String mercury__string__format__SignedStr_20;
    MR_Integer mercury__string__format__Prec_15;
    MR_Integer mercury__string__format__Width_17;
    MR_Integer mercury__string__format__Var_26;
    MR_Word mercury__string__format__Var_27;
    MR_Word mercury__string__format__Var_34;
    MR_Word mercury__string__format__Var_32;
    MR_Word mercury__string__format__Var_33;
    MR_Word mercury__string__format__Var_35;

    if (mercury__string__format__succeeded)
      {
        MR_Integer mercury__string__format__Var_21;

        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
            mercury__string__format__succeeded = (mercury__string__format__Var_21 == (MR_Integer) 0);
          }
        if (mercury__string__format__succeeded)
          mercury__string__format__AbsIntStr_11 = (MR_String) "";
        else
          mercury__string__format__AbsIntStr_11 = (MR_String) "0";
      }
    else
      {
        MR_Integer mercury__string__format__Var_23;

        mercury__string__format__succeeded = ((MR_Integer) -2147483647 <= mercury__string__format__Int_9);
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_23 = (MR_Integer) 2147483647;
            mercury__string__format__succeeded = (mercury__string__format__Int_9 <= mercury__string__format__Var_23);
          }
        if (mercury__string__format__succeeded)
          {
            MR_Integer mercury__string__format__AbsInt_12;

            {
              mercury__int__abs_2_p_0(mercury__string__format__Int_9, &mercury__string__format__AbsInt_12);
            }
            {
              mercury__string__format__AbsIntStr_11 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__AbsInt_12);
            }
          }
        else
          {
            MR_Word mercury__string__format__AbsInteger_13;
            MR_Word mercury__string__format__Var_24;
            MR_Word mercury__string__format__Var_51;
            MR_Word mercury__string__format__V_5_62;

            {
              mercury__string__format__Var_24 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_9);
            }
            {
              mercury__string__format__AbsInteger_13 = mercury__integer__big_abs_1_f_0(mercury__string__format__Var_24);
            }
            {
              mercury__string__format__Var_51 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
            }
            {
              mercury__integer____Compare____integer_0_0(&mercury__string__format__V_5_62, mercury__string__format__AbsInteger_13, mercury__string__format__Var_51);
            }
            mercury__string__format__succeeded = (mercury__string__format__V_5_62 == (MR_Integer) 2);
            if (mercury__string__format__succeeded)
              {
                MR_Word mercury__string__format__Integer10_48;
                MR_String mercury__string__format__FrontDigitsStr_49;
                MR_String mercury__string__format__LastDigitStr_50;
                MR_Integer mercury__string__format__Var_54;
                MR_Word mercury__string__format__Var_55;
                MR_Integer mercury__string__format__Var_56;
                MR_Word mercury__string__format__Var_57;
                MR_Word mercury__string__format__V_7_75;
                MR_Word mercury__string__format__V_7_82;
                MR_String mercury__string__format__DecimalPrime_85;

                {
                  mercury__string__format__Integer10_48 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
                }
                {
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format__Var_55, &mercury__string__format__V_7_75);
                }
                {
                  mercury__string__format__Var_54 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_55);
                }
                {
                  mercury__string__format__FrontDigitsStr_49 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Var_54);
                }
                {
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format__V_7_82, &mercury__string__format__Var_57);
                }
                {
                  mercury__string__format__Var_56 = mercury__integer__det_to_int_1_f_0(mercury__string__format__Var_57);
                }
                if ((((MR_Unsigned) mercury__string__format__Var_56) <= ((MR_Unsigned) (MR_Integer) 9)))
                  {
                    mercury__string__format__DecimalPrime_85 = ((&mercury__string__format_vector_common_5[10 + mercury__string__format__Var_56]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
                    mercury__string__format__succeeded = MR_TRUE;
                  }
                else
                  mercury__string__format__succeeded = MR_FALSE;
                if (mercury__string__format__succeeded)
                  mercury__string__format__LastDigitStr_50 = mercury__string__format__DecimalPrime_85;
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
                    }
                  }
                {
                  mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_49, mercury__string__format__LastDigitStr_50, &mercury__string__format__AbsIntStr_11);
                }
              }
            else
              mercury__string__format__AbsIntStr_11 = (MR_String) "";
          }
      }
    {
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_11, &mercury__string__format__AbsIntStrLength_14);
    }
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Prec_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
        mercury__string__format__succeeded = (mercury__string__format__Prec_15 > mercury__string__format__AbsIntStrLength_14);
      }
    if (mercury__string__format__succeeded)
      {
        {
          mercury__string__format__PrecStr_16 = mercury__string__pad_left_3_f_0(mercury__string__format__AbsIntStr_11, (MR_Char) 48, mercury__string__format__Prec_15);
        }
      }
    else
      mercury__string__format__PrecStr_16 = mercury__string__format__AbsIntStr_11;
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_7)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Width_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_7, (MR_Integer) 0)));
        {
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecStr_16, &mercury__string__format__Var_26);
        }
        mercury__string__format__succeeded = (mercury__string__format__Width_17 > mercury__string__format__Var_26);
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
            mercury__string__format__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            mercury__string__format__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            mercury__string__format__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            mercury__string__format__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            mercury__string__format__succeeded = (mercury__string__format__Var_27 == (MR_Integer) 1);
            if (mercury__string__format__succeeded)
              {
                mercury__string__format__succeeded = (mercury__string__format__Var_34 == (MR_Integer) 0);
                if (mercury__string__format__succeeded)
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__format__succeeded)
      {
        MR_Integer mercury__string__format__Var_30 = (mercury__string__format__Width_17 - (MR_Integer) 1);

        {
          mercury__string__format__FieldStr_18 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecStr_16, (MR_Char) 48, mercury__string__format__Var_30);
        }
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 1;
      }
    else
      {
        mercury__string__format__FieldStr_18 = mercury__string__format__PrecStr_16;
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 0;
      }
    mercury__string__format__succeeded = (mercury__string__format__Int_9 < (MR_Integer) 0);
    if (mercury__string__format__succeeded)
      {
        {
          mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
        }
      }
    else
      {
        MR_Word mercury__string__format__Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

        mercury__string__format__succeeded = (mercury__string__format__Var_103 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          {
            {
              mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
            }
          }
        else
          {
            MR_Word mercury__string__format__Var_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word mercury__string__format__Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
            MR_Word mercury__string__format__Var_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word mercury__string__format__Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word mercury__string__format__Var_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

            mercury__string__format__succeeded = (mercury__string__format__Var_105 == (MR_Integer) 1);
            if (mercury__string__format__succeeded)
              {
                {
                  mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                }
              }
            else
              switch (mercury__string__format__ZeroPadded_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__string__format__SignedStr_20 = mercury__string__format__FieldStr_18;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                    }
                  }
                  break;
              }
          }
      }
    {
      mercury__string__format__String_10 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__SignedStr_20);
    }
    return mercury__string__format__String_10;
  }
}

static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
  MR_Integer mercury__string__format__Num_3)
{
  {
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
    MR_String mercury__string__format__NumStr_4;

    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FrontDigitsStr_5;
        MR_String mercury__string__format__LastDigitStr_6;
        MR_Integer mercury__string__format__Var_8 = (mercury__string__format__Num_3 / (MR_Integer) 10);
        MR_Integer mercury__string__format__Var_10;
        MR_String mercury__string__format__DecimalPrime_26;

        {
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Var_8);
        }
        mercury__string__format__Var_10 = (mercury__string__format__Num_3 % (MR_Integer) 10);
        if ((((MR_Unsigned) mercury__string__format__Var_10) <= ((MR_Unsigned) (MR_Integer) 9)))
          {
            mercury__string__format__DecimalPrime_26 = ((&mercury__string__format_vector_common_5[0 + mercury__string__format__Var_10]))->mercury__string__format__vector_common_type_5_0__vct_5_f_0;
            mercury__string__format__succeeded = MR_TRUE;
          }
        else
          mercury__string__format__succeeded = MR_FALSE;
        if (mercury__string__format__succeeded)
          mercury__string__format__LastDigitStr_6 = mercury__string__format__DecimalPrime_26;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
          }
        {
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
      }
    else
      mercury__string__format__NumStr_4 = (MR_String) "";
    return mercury__string__format__NumStr_4;
  }
}

void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
  MR_Word mercury__string__format__Flags_6,
  MR_Word mercury__string__format__MaybeWidth_7,
  MR_Word mercury__string__format__MaybePrec_8,
  MR_String mercury__string__format__Str_9,
  MR_String * mercury__string__format__String_10)
{
  {
    MR_bool mercury__string__format__succeeded;

    {
      MR_Word mercury__string__format__Var_12;
      MR_Word mercury__string__format__Var_13;
      MR_Word mercury__string__format__Var_14;
      MR_Word mercury__string__format__Var_15;
      MR_Word mercury__string__format__Var_16;

{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__format__succeeded)
        {
          mercury__string__format__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
          mercury__string__format__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          mercury__string__format__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          mercury__string__format__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          mercury__string__format__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          mercury__string__format__succeeded = (mercury__string__format__Var_12 == (MR_Integer) 0);
          if (mercury__string__format__succeeded)
            {
              mercury__string__format__succeeded = (mercury__string__format__Var_13 == (MR_Integer) 0);
              if (mercury__string__format__succeeded)
                {
                  mercury__string__format__succeeded = (mercury__string__format__Var_14 == (MR_Integer) 0);
                  if (mercury__string__format__succeeded)
                    {
                      mercury__string__format__succeeded = (mercury__string__format__Var_15 == (MR_Integer) 0);
                      if (mercury__string__format__succeeded)
                        mercury__string__format__succeeded = (mercury__string__format__Var_16 == (MR_Integer) 0);
                    }
                }
            }
          if (mercury__string__format__succeeded)
            {
              mercury__string__format__succeeded = (mercury__string__format__MaybeWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (mercury__string__format__succeeded)
                mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
        }
    }
    if (!(mercury__string__format__succeeded))
      {
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_9 ;
		{

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        /*
         * sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
         * if there is a field width or precision specified.
         */
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
      }
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FormatStr_11;

{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "", (MR_String) "s");
          }
        else
          {
            mercury__string__format__FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "s");
          }
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_11 ;
	Val =  mercury__string__format__Str_9 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_10  = Str;
}
      }
    else
      {
        MR_String mercury__string__format__PrecStr_35;

        if ((mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__string__format__PrecStr_35 = mercury__string__format__Str_9;
        else
          {
            MR_Integer mercury__string__format__NumChars_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
            MR_String mercury__string__format__V_7_42;

            {
              mercury__string__split_by_codepoint_4_p_0(mercury__string__format__Str_9, mercury__string__format__NumChars_34, &mercury__string__format__PrecStr_35, &mercury__string__format__V_7_42);
            }
          }
        {
          *mercury__string__format__String_10 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__PrecStr_35);
        }
      }
  }
}

void MR_CALL 
mercury__string__format__format_char_component_4_p_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Word mercury__string__format__MaybeWidth_6,
  MR_Char mercury__string__format__Char_7,
  MR_String * mercury__string__format__String_8)
{
  {
    MR_bool mercury__string__format__succeeded;

{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_7 ;
		{

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__format__succeeded)
      {
        MR_String mercury__string__format__FormatStr_9;
        MR_Word mercury__string__format__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = ML_USE_SPRINTF;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__format__succeeded)
          {
            mercury__string__format__FormatStr_9 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__Var_10, (MR_String) "", (MR_String) "c");
          }
        else
          {
            mercury__string__format__FormatStr_9 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_6, mercury__string__format__Var_10, (MR_String) "c");
          }
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_9 ;
	Val =  mercury__string__format__Char_7 ;
		{
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_8  = Str;
}
      }
    else
      {
        MR_String mercury__string__format__CharStr_27;
        MR_Word mercury__string__format__V_5_32;
        MR_Word mercury__string__format__V_6_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__string__format__V_5_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__format__V_5_32, 0) = ((MR_Box) (MR_Word) (mercury__string__format__Char_7));
          MR_hl_field(MR_mktag(1), mercury__string__format__V_5_32, 1) = ((MR_Box) (mercury__string__format__V_6_33));
        }
        {
          mercury__string__to_char_list_2_p_1(&mercury__string__format__CharStr_27, mercury__string__format__V_5_32);
        }
        {
          *mercury__string__format__String_8 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__CharStr_27);
        }
      }
  }
}

MR_String MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_String mercury__string__format__Spec0_11)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_12;
    MR_String mercury__string__format__WidthPrefixStr_14;
    MR_String mercury__string__format__WidthStr_15;
    MR_String mercury__string__format__PrecStr_17;
    MR_String mercury__string__format__Spec_18;
    MR_Word mercury__string__format__Var_19;
    MR_Word mercury__string__format__Var_21;
    MR_Word mercury__string__format__Var_22;
    MR_Word mercury__string__format__Var_23;
    MR_Word mercury__string__format__Var_25;
    MR_Word mercury__string__format__Var_26;
    MR_Word mercury__string__format__Var_27;
    MR_Word mercury__string__format__Var_29;

    if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__string__format__WidthPrefixStr_14 = (MR_String) "";
        mercury__string__format__WidthStr_15 = (MR_String) "";
      }
    else
      {
        MR_Integer mercury__string__format__Width_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

        mercury__string__format__WidthPrefixStr_14 = (MR_String) ",";
        {
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_13, (MR_Integer) 10, &mercury__string__format__WidthStr_15);
        }
      }
    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__format__PrecStr_17 = (MR_String) "";
    else
      {
        MR_Integer mercury__string__format__Prec_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

        {
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_16, (MR_Integer) 10, &mercury__string__format__PrecStr_17);
        }
      }
    mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec0_11, (MR_String) "i") == 0);
    if (mercury__string__format__succeeded)
      mercury__string__format__Spec_18 = (MR_String) "d";
    else
      {
        mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec0_11, (MR_String) "f") == 0);
        if (mercury__string__format__succeeded)
          mercury__string__format__Spec_18 = (MR_String) "e";
        else
          mercury__string__format__Spec_18 = mercury__string__format__Spec0_11;
      }
    mercury__string__format__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__format__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string__format_scalar_common_4[0]);
    {
      mercury__string__format__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_26, 0) = ((MR_Box) (mercury__string__format__PrecStr_17));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_26, 1) = ((MR_Box) (mercury__string__format__Var_27));
    }
    {
      mercury__string__format__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_25, 0) = ((MR_Box) (mercury__string__format__Spec_18));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_25, 1) = ((MR_Box) (mercury__string__format__Var_26));
    }
    {
      mercury__string__format__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_23, 0) = ((MR_Box) ((MR_String) ":"));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_23, 1) = ((MR_Box) (mercury__string__format__Var_25));
    }
    {
      mercury__string__format__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_22, 0) = ((MR_Box) (mercury__string__format__WidthStr_15));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_22, 1) = ((MR_Box) (mercury__string__format__Var_23));
    }
    {
      mercury__string__format__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_21, 0) = ((MR_Box) (mercury__string__format__WidthPrefixStr_14));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_21, 1) = ((MR_Box) (mercury__string__format__Var_22));
    }
    {
      mercury__string__format__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_19, 0) = ((MR_Box) ((MR_String) "{0"));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_19, 1) = ((MR_Box) (mercury__string__format__Var_21));
    }
    {
      mercury__string__format__String_12 = mercury__string__append_list_1_f_0(mercury__string__format__Var_19);
    }
    return mercury__string__format__String_12;
  }
}

MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
  MR_Word mercury__string__format__Flags_5,
  MR_Word mercury__string__format__MaybeWidth_6,
  MR_String mercury__string__format__Str_7)
{
  {
    MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_6)) == (MR_mktag((MR_Integer) 1)));
    MR_String mercury__string__format__JustifiedStr_8;
    MR_Integer mercury__string__format__Width_9;
    MR_Integer mercury__string__format__Var_10;

    if (mercury__string__format__succeeded)
      {
        mercury__string__format__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_6, (MR_Integer) 0)));
        {
          mercury__string__count_codepoints_2_p_0(mercury__string__format__Str_7, &mercury__string__format__Var_10);
        }
        mercury__string__format__succeeded = (mercury__string__format__Width_9 > mercury__string__format__Var_10);
      }
    if (mercury__string__format__succeeded)
      {
        MR_Word mercury__string__format__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word mercury__string__format__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        mercury__string__format__succeeded = (mercury__string__format__Var_11 == (MR_Integer) 1);
        if (mercury__string__format__succeeded)
          {
            {
              mercury__string__pad_right_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
          }
        else
          {
            {
              mercury__string__pad_left_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
          }
      }
    else
      mercury__string__format__JustifiedStr_8 = mercury__string__format__Str_7;
    return mercury__string__format__JustifiedStr_8;
  }
}

MR_String MR_CALL 
mercury__string__format__make_format_sprintf_5_f_0(
  MR_Word mercury__string__format__Flags_7,
  MR_Word mercury__string__format__MaybeWidth_8,
  MR_Word mercury__string__format__MaybePrec_9,
  MR_String mercury__string__format__LengthMod_10,
  MR_String mercury__string__format__Spec_11)
{
  {
    MR_bool mercury__string__format__succeeded;
    MR_String mercury__string__format__String_12;
    MR_Word mercury__string__format__FlagHash_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word mercury__string__format__FlagSpace_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word mercury__string__format__FlagZero_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word mercury__string__format__FlagMinus_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word mercury__string__format__FlagPlus_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_String mercury__string__format__FlagHashStr_18;
    MR_String mercury__string__format__FlagSpaceStr_19;
    MR_String mercury__string__format__FlagZeroStr_20;
    MR_String mercury__string__format__FlagMinusStr_21;
    MR_String mercury__string__format__FlagPlusStr_22;
    MR_String mercury__string__format__WidthStr_24;
    MR_String mercury__string__format__PrecPrefixStr_26;
    MR_String mercury__string__format__PrecStr_27;
    MR_Word mercury__string__format__Var_28;
    MR_Word mercury__string__format__Var_30;
    MR_Word mercury__string__format__Var_31;
    MR_Word mercury__string__format__Var_32;
    MR_Word mercury__string__format__Var_33;
    MR_Word mercury__string__format__Var_34;
    MR_Word mercury__string__format__Var_35;
    MR_Word mercury__string__format__Var_36;
    MR_Word mercury__string__format__Var_37;
    MR_Word mercury__string__format__Var_38;
    MR_Word mercury__string__format__Var_39;
    MR_Word mercury__string__format__Var_40;

    switch (mercury__string__format__FlagHash_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__format__FlagHashStr_18 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        mercury__string__format__FlagHashStr_18 = (MR_String) "#";
        break;
    }
    switch (mercury__string__format__FlagSpace_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__format__FlagSpaceStr_19 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        mercury__string__format__FlagSpaceStr_19 = (MR_String) " ";
        break;
    }
    switch (mercury__string__format__FlagZero_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__format__FlagZeroStr_20 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        mercury__string__format__FlagZeroStr_20 = (MR_String) "0";
        break;
    }
    switch (mercury__string__format__FlagMinus_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__format__FlagMinusStr_21 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        mercury__string__format__FlagMinusStr_21 = (MR_String) "-";
        break;
    }
    switch (mercury__string__format__FlagPlus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__format__FlagPlusStr_22 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        mercury__string__format__FlagPlusStr_22 = (MR_String) "+";
        break;
    }
    if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__format__WidthStr_24 = (MR_String) "";
    else
      {
        MR_Integer mercury__string__format__Width_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

        {
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_23, (MR_Integer) 10, &mercury__string__format__WidthStr_24);
        }
      }
    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__string__format__PrecPrefixStr_26 = (MR_String) "";
        mercury__string__format__PrecStr_27 = (MR_String) "";
      }
    else
      {
        MR_Integer mercury__string__format__Prec_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

        mercury__string__format__PrecPrefixStr_26 = (MR_String) ".";
        {
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_25, (MR_Integer) 10, &mercury__string__format__PrecStr_27);
        }
      }
    mercury__string__format__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_39, 0) = ((MR_Box) (mercury__string__format__Spec_11));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_39, 1) = ((MR_Box) (mercury__string__format__Var_40));
    }
    {
      mercury__string__format__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_38, 0) = ((MR_Box) (mercury__string__format__LengthMod_10));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_38, 1) = ((MR_Box) (mercury__string__format__Var_39));
    }
    {
      mercury__string__format__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_37, 0) = ((MR_Box) (mercury__string__format__PrecStr_27));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_37, 1) = ((MR_Box) (mercury__string__format__Var_38));
    }
    {
      mercury__string__format__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_36, 0) = ((MR_Box) (mercury__string__format__PrecPrefixStr_26));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_36, 1) = ((MR_Box) (mercury__string__format__Var_37));
    }
    {
      mercury__string__format__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_35, 0) = ((MR_Box) (mercury__string__format__WidthStr_24));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_35, 1) = ((MR_Box) (mercury__string__format__Var_36));
    }
    {
      mercury__string__format__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_34, 0) = ((MR_Box) (mercury__string__format__FlagPlusStr_22));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_34, 1) = ((MR_Box) (mercury__string__format__Var_35));
    }
    {
      mercury__string__format__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_33, 0) = ((MR_Box) (mercury__string__format__FlagMinusStr_21));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_33, 1) = ((MR_Box) (mercury__string__format__Var_34));
    }
    {
      mercury__string__format__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_32, 0) = ((MR_Box) (mercury__string__format__FlagZeroStr_20));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_32, 1) = ((MR_Box) (mercury__string__format__Var_33));
    }
    {
      mercury__string__format__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_31, 0) = ((MR_Box) (mercury__string__format__FlagSpaceStr_19));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_31, 1) = ((MR_Box) (mercury__string__format__Var_32));
    }
    {
      mercury__string__format__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_30, 0) = ((MR_Box) (mercury__string__format__FlagHashStr_18));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_30, 1) = ((MR_Box) (mercury__string__format__Var_31));
    }
    {
      mercury__string__format__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_28, 0) = ((MR_Box) ((MR_String) "%"));
      MR_hl_field(MR_mktag(1), mercury__string__format__Var_28, 1) = ((MR_Box) (mercury__string__format__Var_30));
    }
    {
      mercury__string__format__String_12 = mercury__string__append_list_1_f_0(mercury__string__format__Var_28);
    }
    return mercury__string__format__String_12;
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

/* :- end_module string.format. */
