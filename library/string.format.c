/*
** Automatically generated from `string.format.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho7_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 543 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
#line 543 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 543 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 543 "string.int0"
  MR_Word * mercury__string__format__Words_8_8);

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho5_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 543 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
#line 543 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 543 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 543 "string.int0"
  MR_Word * mercury__string__format__Words_8_8);

#line 1664 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
#line 1664 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 1664 "string.format.m"
  MR_String * mercury__string__format__Mantissa_5,
#line 1664 "string.format.m"
  MR_String * mercury__string__format__Fraction_6);

#line 1657 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
#line 1657 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 1657 "string.format.m"
  MR_String * mercury__string__format__Float_5,
#line 1657 "string.format.m"
  MR_String * mercury__string__format__Exponent_6);

#line 1610 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
#line 1610 "string.format.m"
  MR_String mercury__string__format__OldFloat_4,
#line 1610 "string.format.m"
  MR_Integer mercury__string__format__Prec_5);

#line 1577 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
#line 1577 "string.format.m"
  MR_String mercury__string__format__Float_4,
#line 1577 "string.format.m"
  MR_Integer mercury__string__format__Prec_5);

#line 1554 "string.format.m"
static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
#line 1554 "string.format.m"
  MR_Word mercury__string__format__L_4,
#line 1554 "string.format.m"
  MR_Integer mercury__string__format__CurrentPos_5);

#line 1528 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
#line 1528 "string.format.m"
  MR_Word mercury__string__format__CharNum_3);

#line 1516 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
#line 1516 "string.format.m"
  MR_String mercury__string__format__Float_3);

#line 1457 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
#line 1457 "string.format.m"
  MR_String mercury__string__format__Float_5,
#line 1457 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 1457 "string.format.m"
  MR_String mercury__string__format__E_7);

#line 1400 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
#line 1400 "string.format.m"
  MR_String mercury__string__format__Float_6,
#line 1400 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 1400 "string.format.m"
  MR_String mercury__string__format__E_8,
#line 1400 "string.format.m"
  MR_Word mercury__string__format__Flags_9);

#line 1354 "string.format.m"
static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
#line 1354 "string.format.m"
  MR_Float mercury__string__format__FloatVal_1,
#line 1354 "string.format.m"
  MR_String * mercury__string__format__FloatString_2);

#line 1291 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
#line 1291 "string.format.m"
  MR_Float mercury__string__format__Float_3);

#line 1151 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
#line 1151 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1150 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
#line 1150 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1149 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
#line 1149 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1148 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
#line 1148 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1124 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
#line 1124 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1123 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
#line 1123 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1100 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
#line 1100 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1099 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
#line 1099 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 878 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
#line 878 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 878 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 878 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 878 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 878 "string.format.m"
  MR_Float mercury__string__format__Float_11);

#line 736 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
#line 736 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 736 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 736 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 736 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 736 "string.format.m"
  MR_Integer mercury__string__format__Int_11);

#line 606 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
#line 606 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 606 "string.format.m"
  MR_String mercury__string__format__Val_2);

#line 566 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
#line 566 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 566 "string.format.m"
  MR_Float mercury__string__format__Val_2);

#line 435 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
#line 435 "string.format.m"
  MR_String mercury__string__format__Str_1);

#line 139 "string.format.m"
static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
#line 139 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 139 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__2_2);


static /* final */ const MR_Box mercury__string__format_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__string__format_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__string__format_scalar_common_4[1][2];




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



#include "string.format.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__format__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 508 "string.format.m"
MR_String MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(
#line 508 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 508 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 508 "string.format.m"
  MR_String mercury__string__format__Spec0_11)
#line 508 "string.format.m"
{
#line 512 "string.format.m"
  {
#line 512 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 512 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 512 "string.format.m"
    MR_String mercury__string__format__WidthPrefixStr_14;
#line 512 "string.format.m"
    MR_String mercury__string__format__WidthStr_15;
#line 512 "string.format.m"
    MR_String mercury__string__format__PrecStr_17;
#line 512 "string.format.m"
    MR_String mercury__string__format__Spec_18;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_19_19;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_21_21;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_22_22;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_23_23;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_25_25;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_26_26;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_27_27;
#line 512 "string.format.m"
    MR_Word mercury__string__format__V_29_29;

#line 517 "string.format.m"
    if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "string.format.m"
      {
#line 519 "string.format.m"
        mercury__string__format__WidthPrefixStr_14 = (MR_String) "";
#line 520 "string.format.m"
        mercury__string__format__WidthStr_15 = (MR_String) "";
#line 518 "string.format.m"
      }
#line 517 "string.format.m"
    else
#line 514 "string.format.m"
      {
#line 514 "string.format.m"
        MR_Integer mercury__string__format__Width_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

#line 515 "string.format.m"
        mercury__string__format__WidthPrefixStr_14 = (MR_String) ",";
#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_13, (MR_Integer) 10, &mercury__string__format__WidthStr_15);
        }
#line 514 "string.format.m"
      }
#line 525 "string.format.m"
    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "string.format.m"
      mercury__string__format__PrecStr_17 = (MR_String) "";
#line 525 "string.format.m"
    else
#line 523 "string.format.m"
      {
#line 523 "string.format.m"
        MR_Integer mercury__string__format__Prec_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_16, (MR_Integer) 10, &mercury__string__format__PrecStr_17);
        }
#line 523 "string.format.m"
      }
#line 529 "string.format.m"
    mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec0_11, (MR_String) "i") == 0);
#line 531 "string.format.m"
    if (mercury__string__format__succeeded)
#line 530 "string.format.m"
      mercury__string__format__Spec_18 = (MR_String) "d";
#line 531 "string.format.m"
    else
#line 533 "string.format.m"
      {
#line 531 "string.format.m"
        mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec0_11, (MR_String) "f") == 0);
#line 533 "string.format.m"
        if (mercury__string__format__succeeded)
#line 532 "string.format.m"
          mercury__string__format__Spec_18 = (MR_String) "e";
#line 533 "string.format.m"
        else
#line 534 "string.format.m"
          mercury__string__format__Spec_18 = mercury__string__format__Spec0_11;
#line 533 "string.format.m"
      }
#line 545 "string.format.m"
    mercury__string__format__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "string.format.m"
    mercury__string__format__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string__format_scalar_common_4[0]);
#line 542 "string.format.m"
    {
#line 542 "string.format.m"
      mercury__string__format__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 0) = ((MR_Box) (mercury__string__format__PrecStr_17));
#line 542 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 1) = ((MR_Box) (mercury__string__format__V_27_27));
#line 542 "string.format.m"
    }
#line 541 "string.format.m"
    {
#line 541 "string.format.m"
      mercury__string__format__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_25_25, 0) = ((MR_Box) (mercury__string__format__Spec_18));
#line 541 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_25_25, 1) = ((MR_Box) (mercury__string__format__V_26_26));
#line 541 "string.format.m"
    }
#line 540 "string.format.m"
    {
#line 540 "string.format.m"
      mercury__string__format__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 0) = ((MR_Box) ((MR_String) ":"));
#line 540 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 1) = ((MR_Box) (mercury__string__format__V_25_25));
#line 540 "string.format.m"
    }
#line 539 "string.format.m"
    {
#line 539 "string.format.m"
      mercury__string__format__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_22_22, 0) = ((MR_Box) (mercury__string__format__WidthStr_15));
#line 539 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_22_22, 1) = ((MR_Box) (mercury__string__format__V_23_23));
#line 539 "string.format.m"
    }
#line 538 "string.format.m"
    {
#line 538 "string.format.m"
      mercury__string__format__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_21_21, 0) = ((MR_Box) (mercury__string__format__WidthPrefixStr_14));
#line 538 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_21_21, 1) = ((MR_Box) (mercury__string__format__V_22_22));
#line 538 "string.format.m"
    }
#line 537 "string.format.m"
    {
#line 537 "string.format.m"
      mercury__string__format__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_19_19, 0) = ((MR_Box) ((MR_String) "{0"));
#line 537 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_19_19, 1) = ((MR_Box) (mercury__string__format__V_21_21));
#line 537 "string.format.m"
    }
#line 536 "string.format.m"
    {
#line 536 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__append_list_1_f_0(mercury__string__format__V_19_19);
    }
#line 512 "string.format.m"
    return mercury__string__format__String_12;
#line 512 "string.format.m"
  }
#line 508 "string.format.m"
}

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 505 "string.int0"
{
#line 920 "string.opt"
  while (MR_TRUE)
#line 920 "string.opt"
    {
#line 920 "string.opt"
      /* tailcall optimized into a loop */
#line 920 "string.opt"
      {
#line 920 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 920 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 916 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 979 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 195 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 916 "string.opt"
        if (mercury__string__format__succeeded)
#line 916 "string.opt"
          {
#line 1681 "string.format.m"
            if ((mercury__string__format__Char_10_10 == (MR_Char) 69))
#line 1682 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1681 "string.format.m"
            else
#line 1681 "string.format.m"
              if ((mercury__string__format__Char_10_10 == (MR_Char) 101))
#line 1681 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1681 "string.format.m"
              else
#line 1681 "string.format.m"
                mercury__string__format__succeeded = MR_FALSE;
#line 37 "std_util.opt"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 916 "string.opt"
          }
#line 920 "string.opt"
        if (mercury__string__format__succeeded)
#line 919 "string.opt"
          {
#line 919 "string.opt"
            /* direct tailcall eliminated */
#line 919 "string.opt"
            {
#line 919 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 919 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 919 "string.opt"
            }
#line 919 "string.opt"
            continue;
#line 919 "string.opt"
          }
#line 920 "string.opt"
        else
#line 921 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 920 "string.opt"
      }
#line 920 "string.opt"
      break;
#line 920 "string.opt"
    }
#line 505 "string.int0"
}

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 505 "string.int0"
{
#line 920 "string.opt"
  while (MR_TRUE)
#line 920 "string.opt"
    {
#line 920 "string.opt"
      /* tailcall optimized into a loop */
#line 920 "string.opt"
      {
#line 920 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 920 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 916 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1095 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 195 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 916 "string.opt"
        if (mercury__string__format__succeeded)
#line 916 "string.opt"
          {
#line 1677 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Char_10_10 == (MR_Char) 46);
#line 37 "std_util.opt"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 916 "string.opt"
          }
#line 920 "string.opt"
        if (mercury__string__format__succeeded)
#line 919 "string.opt"
          {
#line 919 "string.opt"
            /* direct tailcall eliminated */
#line 919 "string.opt"
            {
#line 919 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 919 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 919 "string.opt"
            }
#line 919 "string.opt"
            continue;
#line 919 "string.opt"
          }
#line 920 "string.opt"
        else
#line 921 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 920 "string.opt"
      }
#line 920 "string.opt"
      break;
#line 920 "string.opt"
    }
#line 505 "string.int0"
}

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho7_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 505 "string.int0"
{
#line 920 "string.opt"
  while (MR_TRUE)
#line 920 "string.opt"
    {
#line 920 "string.opt"
      /* tailcall optimized into a loop */
#line 920 "string.opt"
      {
#line 920 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 920 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 916 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho7_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1199 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 195 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 916 "string.opt"
        if (mercury__string__format__succeeded)
#line 1677 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__Char_10_10 == (MR_Char) 46);
#line 920 "string.opt"
        if (mercury__string__format__succeeded)
#line 919 "string.opt"
          {
#line 919 "string.opt"
            /* direct tailcall eliminated */
#line 919 "string.opt"
            {
#line 919 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 919 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 919 "string.opt"
            }
#line 919 "string.opt"
            continue;
#line 919 "string.opt"
          }
#line 920 "string.opt"
        else
#line 921 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 920 "string.opt"
      }
#line 920 "string.opt"
      break;
#line 920 "string.opt"
    }
#line 505 "string.int0"
}

#line 543 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
#line 543 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 543 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 543 "string.int0"
  MR_Word * mercury__string__format__Words_8_8)
#line 543 "string.int0"
{
#line 894 "string.opt"
  {
#line 894 "string.opt"
    MR_bool mercury__string__format__succeeded;
#line 894 "string.opt"
    MR_Integer mercury__string__format__WordEnd_9_10;

#line 896 "string.opt"
    {
#line 896 "string.opt"
      mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordStart_7_7, &mercury__string__format__WordEnd_9_10);
    }
#line 898 "string.opt"
    mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__WordStart_7_7);
#line 901 "string.opt"
    if (mercury__string__format__succeeded)
#line 900 "string.opt"
      *mercury__string__format__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "string.opt"
    else
#line 902 "string.opt"
      {
#line 902 "string.opt"
        MR_String mercury__string__format__Word_10_11;
#line 902 "string.opt"
        MR_Integer mercury__string__format__NextWordStart_11_12;

#line 498 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho6_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__String_6_6 ;
	Start =  mercury__string__format__WordStart_7_7 ;
	End =  mercury__string__format__WordEnd_9_10 ;
		{
#line 498 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 1306 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Word_10_11  = SubString;
#line 498 "string.opt"
}
#line 903 "string.opt"
        {
#line 903 "string.opt"
          mercury__string__format__next_boundary__ho7_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordEnd_9_10, &mercury__string__format__NextWordStart_11_12);
        }
#line 905 "string.opt"
        mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__NextWordStart_11_12);
#line 909 "string.opt"
        if (mercury__string__format__succeeded)
#line 907 "string.opt"
          {
#line 907 "string.opt"
            MR_Word mercury__string__format__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 907 "string.opt"
            {
#line 907 "string.opt"
              MR_Word base;
#line 907 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 907 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 907 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_14_13));
#line 907 "string.opt"
            }
#line 907 "string.opt"
          }
#line 909 "string.opt"
        else
#line 910 "string.opt"
          {
#line 910 "string.opt"
            MR_Word mercury__string__format__Words0_12_14;

#line 910 "string.opt"
            {
#line 910 "string.opt"
              mercury__string__format__words_loop__ho6_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__NextWordStart_11_12, &mercury__string__format__Words0_12_14);
            }
#line 911 "string.opt"
            {
#line 911 "string.opt"
              MR_Word base;
#line 911 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 911 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 911 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Words0_12_14));
#line 911 "string.opt"
            }
#line 910 "string.opt"
          }
#line 902 "string.opt"
      }
#line 894 "string.opt"
  }
#line 543 "string.int0"
}

#line 505 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho5_4_p_in__string_0(
#line 505 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 505 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 505 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 505 "string.int0"
{
#line 920 "string.opt"
  while (MR_TRUE)
#line 920 "string.opt"
    {
#line 920 "string.opt"
      /* tailcall optimized into a loop */
#line 920 "string.opt"
      {
#line 920 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 920 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 916 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 195 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho5_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 195 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1429 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 195 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 916 "string.opt"
        if (mercury__string__format__succeeded)
#line 1681 "string.format.m"
          {
#line 1681 "string.format.m"
            if ((mercury__string__format__Char_10_10 == (MR_Char) 69))
#line 1682 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1681 "string.format.m"
            else
#line 1681 "string.format.m"
              if ((mercury__string__format__Char_10_10 == (MR_Char) 101))
#line 1681 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1681 "string.format.m"
              else
#line 1681 "string.format.m"
                mercury__string__format__succeeded = MR_FALSE;
#line 1681 "string.format.m"
          }
#line 920 "string.opt"
        if (mercury__string__format__succeeded)
#line 919 "string.opt"
          {
#line 919 "string.opt"
            /* direct tailcall eliminated */
#line 919 "string.opt"
            {
#line 919 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 919 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 919 "string.opt"
            }
#line 919 "string.opt"
            continue;
#line 919 "string.opt"
          }
#line 920 "string.opt"
        else
#line 921 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 920 "string.opt"
      }
#line 920 "string.opt"
      break;
#line 920 "string.opt"
    }
#line 505 "string.int0"
}

#line 543 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
#line 543 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 543 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 543 "string.int0"
  MR_Word * mercury__string__format__Words_8_8)
#line 543 "string.int0"
{
#line 894 "string.opt"
  {
#line 894 "string.opt"
    MR_bool mercury__string__format__succeeded;
#line 894 "string.opt"
    MR_Integer mercury__string__format__WordEnd_9_10;

#line 896 "string.opt"
    {
#line 896 "string.opt"
      mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordStart_7_7, &mercury__string__format__WordEnd_9_10);
    }
#line 898 "string.opt"
    mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__WordStart_7_7);
#line 901 "string.opt"
    if (mercury__string__format__succeeded)
#line 900 "string.opt"
      *mercury__string__format__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "string.opt"
    else
#line 902 "string.opt"
      {
#line 902 "string.opt"
        MR_String mercury__string__format__Word_10_11;
#line 902 "string.opt"
        MR_Integer mercury__string__format__NextWordStart_11_12;

#line 498 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho4_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__String_6_6 ;
	Start =  mercury__string__format__WordStart_7_7 ;
	End =  mercury__string__format__WordEnd_9_10 ;
		{
#line 498 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 1552 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Word_10_11  = SubString;
#line 498 "string.opt"
}
#line 903 "string.opt"
        {
#line 903 "string.opt"
          mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordEnd_9_10, &mercury__string__format__NextWordStart_11_12);
        }
#line 905 "string.opt"
        mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__NextWordStart_11_12);
#line 909 "string.opt"
        if (mercury__string__format__succeeded)
#line 907 "string.opt"
          {
#line 907 "string.opt"
            MR_Word mercury__string__format__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 907 "string.opt"
            {
#line 907 "string.opt"
              MR_Word base;
#line 907 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 907 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 907 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_14_13));
#line 907 "string.opt"
            }
#line 907 "string.opt"
          }
#line 909 "string.opt"
        else
#line 910 "string.opt"
          {
#line 910 "string.opt"
            MR_Word mercury__string__format__Words0_12_14;

#line 910 "string.opt"
            {
#line 910 "string.opt"
              mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__NextWordStart_11_12, &mercury__string__format__Words0_12_14);
            }
#line 911 "string.opt"
            {
#line 911 "string.opt"
              MR_Word base;
#line 911 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 911 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 911 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Words0_12_14));
#line 911 "string.opt"
            }
#line 910 "string.opt"
          }
#line 902 "string.opt"
      }
#line 894 "string.opt"
  }
#line 543 "string.int0"
}

#line 1664 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
#line 1664 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 1664 "string.format.m"
  MR_String * mercury__string__format__Mantissa_5,
#line 1664 "string.format.m"
  MR_String * mercury__string__format__Fraction_6)
#line 1664 "string.format.m"
{
#line 1666 "string.format.m"
  {
#line 1666 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1666 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_13_13;
#line 1666 "string.format.m"
    MR_Word mercury__string__format__MantAndFrac_7;
#line 1666 "string.format.m"
    MR_Integer mercury__string__format__WordStart_7_19;
#line 1668 "string.format.m"
    MR_Box mercury__string__format__conv0_Mantissa_5;
#line 1671 "string.format.m"
    MR_String mercury__string__format__Fraction0_8;
#line 1669 "string.format.m"
    MR_Box mercury__string__format__conv1_Fraction0_8;

#line 514 "string.opt"
    {
#line 514 "string.opt"
      mercury__string__format__next_boundary__ho7_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__WordStart_7_19);
    }
#line 515 "string.opt"
    {
#line 515 "string.opt"
      mercury__string__format__words_loop__ho6_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__WordStart_7_19, &mercury__string__format__MantAndFrac_7);
    }
#line 1662 "string.format.c"
    mercury__string__format__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1668 "string.format.m"
    {
#line 1668 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 0, &mercury__string__format__conv0_Mantissa_5);
    }
#line 1668 "string.format.m"
    *mercury__string__format__Mantissa_5 = ((MR_String) mercury__string__format__conv0_Mantissa_5);
#line 1669 "string.format.m"
    {
#line 1669 "string.format.m"
      mercury__string__format__succeeded = mercury__list__index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 1, &mercury__string__format__conv1_Fraction0_8);
    }
#line 1669 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1669 "string.format.m"
      {
#line 1669 "string.format.m"
        mercury__string__format__Fraction0_8 = ((MR_String) mercury__string__format__conv1_Fraction0_8);
#line 1669 "string.format.m"
        mercury__string__format__succeeded = MR_TRUE;
#line 1669 "string.format.m"
      }
#line 1671 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1670 "string.format.m"
      *mercury__string__format__Fraction_6 = mercury__string__format__Fraction0_8;
#line 1671 "string.format.m"
    else
#line 1672 "string.format.m"
      *mercury__string__format__Fraction_6 = (MR_String) "";
#line 1666 "string.format.m"
  }
#line 1664 "string.format.m"
}

#line 1657 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
#line 1657 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 1657 "string.format.m"
  MR_String * mercury__string__format__Float_5,
#line 1657 "string.format.m"
  MR_String * mercury__string__format__Exponent_6)
#line 1657 "string.format.m"
{
#line 1659 "string.format.m"
  {
#line 1659 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1659 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_12_12;
#line 1659 "string.format.m"
    MR_Word mercury__string__format__FloatAndExponent_7;
#line 1659 "string.format.m"
    MR_Integer mercury__string__format__WordStart_7_18;
#line 1661 "string.format.m"
    MR_Box mercury__string__format__conv0_Float_5;
#line 1662 "string.format.m"
    MR_Box mercury__string__format__conv1_Exponent_6;

#line 514 "string.opt"
    {
#line 514 "string.opt"
      mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__WordStart_7_18);
    }
#line 515 "string.opt"
    {
#line 515 "string.opt"
      mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__WordStart_7_18, &mercury__string__format__FloatAndExponent_7);
    }
#line 1735 "string.format.c"
    mercury__string__format__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1661 "string.format.m"
    {
#line 1661 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 0, &mercury__string__format__conv0_Float_5);
    }
#line 1661 "string.format.m"
    *mercury__string__format__Float_5 = ((MR_String) mercury__string__format__conv0_Float_5);
#line 1662 "string.format.m"
    {
#line 1662 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 1, &mercury__string__format__conv1_Exponent_6);
    }
#line 1662 "string.format.m"
    *mercury__string__format__Exponent_6 = ((MR_String) mercury__string__format__conv1_Exponent_6);
#line 1659 "string.format.m"
  }
#line 1657 "string.format.m"
}

#line 1610 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
#line 1610 "string.format.m"
  MR_String mercury__string__format__OldFloat_4,
#line 1610 "string.format.m"
  MR_Integer mercury__string__format__Prec_5)
#line 1610 "string.format.m"
{
#line 1612 "string.format.m"
  {
#line 1612 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1612 "string.format.m"
    MR_String mercury__string__format__NewFloat_6;
#line 1612 "string.format.m"
    MR_String mercury__string__format__MantissaStr_7;
#line 1612 "string.format.m"
    MR_String mercury__string__format__FractionStr_8;
#line 1612 "string.format.m"
    MR_Integer mercury__string__format__FracStrLen_9;
#line 1612 "string.format.m"
    MR_String mercury__string__format__PrecFracStr_10;
#line 1612 "string.format.m"
    MR_String mercury__string__format__PrecMantissaStr_11;
#line 1612 "string.format.m"
    MR_String mercury__string__format__HalfNewFloat_18;

#line 1613 "string.format.m"
    {
#line 1613 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__OldFloat_4, &mercury__string__format__MantissaStr_7, &mercury__string__format__FractionStr_8);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__FractionStr_8, &mercury__string__format__FracStrLen_9);
    }
#line 1615 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Prec_5 > mercury__string__format__FracStrLen_9);
#line 1618 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1616 "string.format.m"
      {
#line 560 "string.opt"
        {
#line 560 "string.opt"
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_8, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__PrecFracStr_10);
        }
#line 1617 "string.format.m"
        mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 1616 "string.format.m"
      }
#line 1618 "string.format.m"
    else
#line 1650 "string.format.m"
      {
#line 1618 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_5 < mercury__string__format__FracStrLen_9);
#line 1650 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1619 "string.format.m"
          {
#line 1619 "string.format.m"
            MR_String mercury__string__format__UnroundedFrac_12;
#line 1619 "string.format.m"
            MR_Char mercury__string__format__NextDigit_13;
#line 175 "string.opt"
            MR_Char mercury__string__format__Char0_7_62;
#line 158 "string.opt"
            MR_Integer mercury__string__format__Len_7_67;
#line 1622 "string.format.m"
            MR_Integer mercury__string__format__V_21_21;
#line 1622 "string.format.m"
            MR_Integer mercury__string__format__V_22_22;
#line 1622 "string.format.m"
            MR_Integer mercury__string__format__V_23_23;
#line 1622 "string.format.m"
            MR_Integer mercury__string__format__V_24_24;
#line 1622 "string.format.m"
            MR_Char mercury__string__format__V_25_25;

#line 488 "string.opt"
            {
#line 488 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__FractionStr_8, (MR_Integer) 0, mercury__string__format__Prec_5, &mercury__string__format__UnroundedFrac_12);
            }
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__FractionStr_8 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 1856 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Len_7_67  = Length;
#line 246 "string.opt"
}
#line 767 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__format__Prec_5 ;
	Length =  mercury__string__format__Len_7_67 ;
		{
#line 767 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 1885 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 767 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 158 "string.opt"
            if (mercury__string__format__succeeded)
#line 158 "string.opt"
              {
#line 163 "string.opt"
                {
#line 163 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__string__format__FractionStr_8, mercury__string__format__Prec_5, &mercury__string__format__Char0_7_62);
                }
#line 163 "string.opt"
                mercury__string__format__succeeded = MR_TRUE;
#line 158 "string.opt"
              }
#line 175 "string.opt"
            if (mercury__string__format__succeeded)
#line 174 "string.opt"
              mercury__string__format__NextDigit_13 = mercury__string__format__Char0_7_62;
#line 175 "string.opt"
            else
#line 176 "string.opt"
              {
#line 177 "string.opt"
                {
#line 177 "string.opt"
                  mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
                }
#line 176 "string.opt"
              }
#line 1622 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
#line 1622 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1622 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1622 "string.format.m"
              {
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__NextDigit_13 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1943 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_23_23  = Int;
#line 66 "char.opt"
}
#line 1623 "string.format.m"
                mercury__string__format__V_25_25 = (MR_Char) 48;
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_25_25 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1965 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_24_24  = Int;
#line 66 "char.opt"
}
#line 1623 "string.format.m"
                mercury__string__format__V_21_21 = (mercury__string__format__V_23_23 - mercury__string__format__V_24_24);
#line 1623 "string.format.m"
                mercury__string__format__V_22_22 = (MR_Integer) 5;
#line 1623 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_21_21 >= mercury__string__format__V_22_22);
#line 1622 "string.format.m"
              }
#line 1639 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1625 "string.format.m"
              {
#line 1625 "string.format.m"
                MR_Integer mercury__string__format__NewPrecFrac_14;
#line 1625 "string.format.m"
                MR_String mercury__string__format__NewPrecFracStrNotOK_15;
#line 1625 "string.format.m"
                MR_String mercury__string__format__NewPrecFracStr_16;
#line 1625 "string.format.m"
                MR_Integer mercury__string__format__V_26_26;
#line 1629 "string.format.m"
                MR_Integer mercury__string__format__V_29_29;
#line 1629 "string.format.m"
                MR_Integer mercury__string__format__V_30_30;

#line 685 "string.opt"
                {
#line 685 "string.opt"
                  mercury__string__format__V_26_26 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__UnroundedFrac_12);
                }
#line 1625 "string.format.m"
                mercury__string__format__NewPrecFrac_14 = (mercury__string__format__V_26_26 + (MR_Integer) 1);
#line 710 "string.opt"
                {
#line 710 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__string__format__NewPrecFrac_14, (MR_Integer) 10, &mercury__string__format__NewPrecFracStrNotOK_15);
                }
#line 558 "string.opt"
                {
#line 558 "string.opt"
                  mercury__string__pad_left_4_p_0(mercury__string__format__NewPrecFracStrNotOK_15, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__NewPrecFracStr_16);
                }
#line 254 "string.opt"
                {
#line 254 "string.opt"
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__NewPrecFracStr_16, &mercury__string__format__V_29_29);
                }
#line 254 "string.opt"
                {
#line 254 "string.opt"
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__UnroundedFrac_12, &mercury__string__format__V_30_30);
                }
#line 1629 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_29_29 > mercury__string__format__V_30_30);
#line 1635 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1632 "string.format.m"
                  {
#line 1632 "string.format.m"
                    MR_Integer mercury__string__format__PrecMantissaInt_17;
#line 1632 "string.format.m"
                    MR_Integer mercury__string__format__V_32_32 = ((MR_Integer) 1 + mercury__string__format__Prec_5);
#line 1632 "string.format.m"
                    MR_Integer mercury__string__format__V_34_34;

#line 488 "string.opt"
                    {
#line 488 "string.opt"
                      mercury__string__between_4_p_0(mercury__string__format__NewPrecFracStr_16, (MR_Integer) 1, mercury__string__format__V_32_32, &mercury__string__format__PrecFracStr_10);
                    }
#line 685 "string.opt"
                    {
#line 685 "string.opt"
                      mercury__string__format__V_34_34 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__MantissaStr_7);
                    }
#line 1633 "string.format.m"
                    mercury__string__format__PrecMantissaInt_17 = (mercury__string__format__V_34_34 + (MR_Integer) 1);
#line 1634 "string.format.m"
                    {
#line 1634 "string.format.m"
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_17);
                    }
#line 1632 "string.format.m"
                  }
#line 1635 "string.format.m"
                else
#line 1636 "string.format.m"
                  {
#line 1636 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__NewPrecFracStr_16;
#line 1637 "string.format.m"
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 1636 "string.format.m"
                  }
#line 1625 "string.format.m"
              }
#line 1639 "string.format.m"
            else
#line 1646 "string.format.m"
              {
#line 1640 "string.format.m"
                MR_Integer mercury__string__format__V_36_36;
#line 1640 "string.format.m"
                MR_Integer mercury__string__format__V_37_37;
#line 1640 "string.format.m"
                MR_Integer mercury__string__format__V_38_38;
#line 1640 "string.format.m"
                MR_Integer mercury__string__format__V_39_39;
#line 1640 "string.format.m"
                MR_Char mercury__string__format__V_40_40;

#line 1640 "string.format.m"
                mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
#line 1640 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1640 "string.format.m"
                  {
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__NextDigit_13 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 2102 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_38_38  = Int;
#line 66 "char.opt"
}
#line 1641 "string.format.m"
                    mercury__string__format__V_40_40 = (MR_Char) 48;
#line 1641 "string.format.m"
                    {
#line 1641 "string.format.m"
                      mercury__string__format__V_39_39 = mercury__char__to_int_1_f_0(mercury__string__format__V_40_40);
                    }
#line 1641 "string.format.m"
                    mercury__string__format__V_36_36 = (mercury__string__format__V_38_38 - mercury__string__format__V_39_39);
#line 1641 "string.format.m"
                    mercury__string__format__V_37_37 = (MR_Integer) 5;
#line 1641 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_36_36 >= mercury__string__format__V_37_37);
#line 1640 "string.format.m"
                  }
#line 1646 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1643 "string.format.m"
                  {
#line 1643 "string.format.m"
                    MR_Integer mercury__string__format__V_41_41;
#line 1643 "string.format.m"
                    MR_Integer mercury__string__format__PrecMantissaInt_44;

#line 1643 "string.format.m"
                    {
#line 1643 "string.format.m"
                      mercury__string__format__V_41_41 = mercury__string__det_to_int_1_f_0(mercury__string__format__MantissaStr_7);
                    }
#line 1643 "string.format.m"
                    mercury__string__format__PrecMantissaInt_44 = (mercury__string__format__V_41_41 + (MR_Integer) 1);
#line 1644 "string.format.m"
                    {
#line 1644 "string.format.m"
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_44);
                    }
#line 1645 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = (MR_String) "";
#line 1643 "string.format.m"
                  }
#line 1646 "string.format.m"
                else
#line 1647 "string.format.m"
                  {
#line 1647 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__UnroundedFrac_12;
#line 1648 "string.format.m"
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 1647 "string.format.m"
                  }
#line 1646 "string.format.m"
              }
#line 1619 "string.format.m"
          }
#line 1650 "string.format.m"
        else
#line 1651 "string.format.m"
          {
#line 1651 "string.format.m"
            mercury__string__format__PrecFracStr_10 = mercury__string__format__FractionStr_8;
#line 1652 "string.format.m"
            mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 1651 "string.format.m"
          }
#line 1650 "string.format.m"
      }
#line 1654 "string.format.m"
    {
#line 1654 "string.format.m"
      mercury__string__format__HalfNewFloat_18 = mercury__string__f_43_43_2_f_0(mercury__string__format__PrecMantissaStr_11, (MR_String) ".");
    }
#line 1655 "string.format.m"
    {
#line 1655 "string.format.m"
      return mercury__string__format__NewFloat_6 = mercury__string__f_43_43_2_f_0(mercury__string__format__HalfNewFloat_18, mercury__string__format__PrecFracStr_10);
    }
#line 1612 "string.format.m"
    return mercury__string__format__NewFloat_6;
#line 1612 "string.format.m"
  }
#line 1610 "string.format.m"
}

#line 1577 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
#line 1577 "string.format.m"
  MR_String mercury__string__format__Float_4,
#line 1577 "string.format.m"
  MR_Integer mercury__string__format__Prec_5)
#line 1577 "string.format.m"
{
#line 1579 "string.format.m"
  {
#line 1579 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1579 "string.format.m"
    MR_String mercury__string__format__Exp_6;
#line 1579 "string.format.m"
    MR_Integer mercury__string__format__Place_7;
#line 1579 "string.format.m"
    MR_String mercury__string__format__MantissaStr_8;
#line 1579 "string.format.m"
    MR_String mercury__string__format__FractionStr_9;
#line 1579 "string.format.m"
    MR_String mercury__string__format__ExpMantissaStr_13;
#line 1579 "string.format.m"
    MR_String mercury__string__format__ExpFractionStr_15;
#line 1579 "string.format.m"
    MR_String mercury__string__format__MantissaAndPoint_17;
#line 1579 "string.format.m"
    MR_String mercury__string__format__UnroundedExpStr_18;
#line 1579 "string.format.m"
    MR_String mercury__string__format__MantissaStr_36;
#line 1579 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_38;
#line 1579 "string.format.m"
    MR_Integer mercury__string__format__V_39_39;
#line 1579 "string.format.m"
    MR_Word mercury__string__format__V_41_41;
#line 1545 "string.format.m"
    MR_String mercury__string__format___FractionStr_37;

#line 1545 "string.format.m"
    {
#line 1545 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_36, &mercury__string__format___FractionStr_37);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_36, &mercury__string__format__V_39_39);
    }
#line 1546 "string.format.m"
    mercury__string__format__NumZeros_38 = (mercury__string__format__V_39_39 - (MR_Integer) 1);
#line 143 "string.opt"
    {
#line 143 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_4, &mercury__string__format__V_41_41);
    }
#line 1547 "string.format.m"
    {
#line 1547 "string.format.m"
      mercury__string__format__Place_7 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_41_41, mercury__string__format__NumZeros_38);
    }
#line 1581 "string.format.m"
    {
#line 1581 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
    }
#line 1582 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Place_7 < (MR_Integer) 0);
#line 1594 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1583 "string.format.m"
      {
#line 1583 "string.format.m"
        MR_Integer mercury__string__format__DecimalPos_10;
#line 1583 "string.format.m"
        MR_String mercury__string__format__PaddedMantissaStr_11;
#line 1583 "string.format.m"
        MR_Integer mercury__string__format__MantissaInt_12;
#line 1583 "string.format.m"
        MR_String mercury__string__format__PaddedFractionStr_14;
#line 1583 "string.format.m"
        MR_Integer mercury__string__format__V_22_22;
#line 1583 "string.format.m"
        MR_Integer mercury__string__format__V_24_24;
#line 1583 "string.format.m"
        MR_Integer mercury__string__format__V_25_25;

#line 70 "int.opt"
        {
#line 70 "int.opt"
          mercury__int__abs_2_p_0(mercury__string__format__Place_7, &mercury__string__format__DecimalPos_10);
        }
#line 488 "string.opt"
        {
#line 488 "string.opt"
          mercury__string__between_4_p_0(mercury__string__format__FractionStr_9, (MR_Integer) 0, mercury__string__format__DecimalPos_10, &mercury__string__format__PaddedMantissaStr_11);
        }
#line 685 "string.opt"
        {
#line 685 "string.opt"
          mercury__string__format__MantissaInt_12 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__PaddedMantissaStr_11);
        }
#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__MantissaInt_12, (MR_Integer) 10, &mercury__string__format__ExpMantissaStr_13);
        }
#line 1591 "string.format.m"
        mercury__string__format__V_22_22 = (mercury__string__format__Prec_5 + (MR_Integer) 1);
#line 560 "string.opt"
        {
#line 560 "string.opt"
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__V_22_22, &mercury__string__format__PaddedFractionStr_14);
        }
#line 1593 "string.format.m"
        mercury__string__format__V_25_25 = (mercury__string__format__DecimalPos_10 + mercury__string__format__Prec_5);
#line 1593 "string.format.m"
        mercury__string__format__V_24_24 = (mercury__string__format__V_25_25 + (MR_Integer) 1);
#line 488 "string.opt"
        {
#line 488 "string.opt"
          mercury__string__between_4_p_0(mercury__string__format__PaddedFractionStr_14, mercury__string__format__DecimalPos_10, mercury__string__format__V_24_24, &mercury__string__format__ExpFractionStr_15);
        }
#line 1583 "string.format.m"
      }
#line 1594 "string.format.m"
    else
#line 1598 "string.format.m"
      {
#line 1594 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Place_7 > (MR_Integer) 0);
#line 1598 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1595 "string.format.m"
          {
#line 1595 "string.format.m"
            MR_String mercury__string__format__FirstHalfOfFractionStr_16;
#line 1595 "string.format.m"
            MR_Integer mercury__string__format__V_31_31;

#line 488 "string.opt"
            {
#line 488 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 0, (MR_Integer) 1, &mercury__string__format__ExpMantissaStr_13);
            }
#line 1596 "string.format.m"
            mercury__string__format__V_31_31 = (mercury__string__format__Place_7 + (MR_Integer) 1);
#line 488 "string.opt"
            {
#line 488 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 1, mercury__string__format__V_31_31, &mercury__string__format__FirstHalfOfFractionStr_16);
            }
#line 411 "string.opt"
            {
#line 411 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__FirstHalfOfFractionStr_16, mercury__string__format__FractionStr_9, &mercury__string__format__ExpFractionStr_15);
            }
#line 1595 "string.format.m"
          }
#line 1598 "string.format.m"
        else
#line 1599 "string.format.m"
          {
#line 1599 "string.format.m"
            mercury__string__format__ExpMantissaStr_13 = mercury__string__format__MantissaStr_8;
#line 1600 "string.format.m"
            mercury__string__format__ExpFractionStr_15 = mercury__string__format__FractionStr_9;
#line 1599 "string.format.m"
          }
#line 1598 "string.format.m"
      }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__ExpMantissaStr_13, (MR_String) ".", &mercury__string__format__MantissaAndPoint_17);
    }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__MantissaAndPoint_17, mercury__string__format__ExpFractionStr_15, &mercury__string__format__UnroundedExpStr_18);
    }
#line 1604 "string.format.m"
    {
#line 1604 "string.format.m"
      return mercury__string__format__Exp_6 = mercury__string__format__change_precision_2_f_0(mercury__string__format__UnroundedExpStr_18, mercury__string__format__Prec_5);
    }
#line 1579 "string.format.m"
    return mercury__string__format__Exp_6;
#line 1579 "string.format.m"
  }
#line 1577 "string.format.m"
}

#line 1554 "string.format.m"
static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
#line 1554 "string.format.m"
  MR_Word mercury__string__format__L_4,
#line 1554 "string.format.m"
  MR_Integer mercury__string__format__CurrentPos_5)
#line 1554 "string.format.m"
{
#line 1558 "string.format.m"
  while (MR_TRUE)
#line 1558 "string.format.m"
    {
#line 1558 "string.format.m"
      /* tailcall optimized into a loop */
#line 1558 "string.format.m"
      {
#line 1558 "string.format.m"
        MR_bool mercury__string__format__succeeded;
#line 1558 "string.format.m"
        MR_Integer mercury__string__format__ActualPos_6;

#line 1558 "string.format.m"
        if ((mercury__string__format__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "string.format.m"
          mercury__string__format__ActualPos_6 = (MR_Integer) 0;
#line 1558 "string.format.m"
        else
#line 1558 "string.format.m"
          {
#line 1558 "string.format.m"
            MR_Char mercury__string__format__H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 0)));
#line 1558 "string.format.m"
            MR_Word mercury__string__format__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 1)));

#line 1677 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 46);
#line 1561 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1560 "string.format.m"
              {
#line 1560 "string.format.m"
                /* direct tailcall eliminated */
#line 1560 "string.format.m"
                {
#line 1560 "string.format.m"
                  MR_Word mercury__string__format__L__tmp_copy_4 = mercury__string__format__T_8;

#line 1560 "string.format.m"
                  mercury__string__format__L_4 = mercury__string__format__L__tmp_copy_4;
#line 1560 "string.format.m"
                }
#line 1560 "string.format.m"
                continue;
#line 1560 "string.format.m"
              }
#line 1561 "string.format.m"
            else
#line 1563 "string.format.m"
              {
#line 1561 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 48);
#line 1563 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1562 "string.format.m"
                  {
#line 1562 "string.format.m"
                    MR_Integer mercury__string__format__V_9_9 = (mercury__string__format__CurrentPos_5 - (MR_Integer) 1);

#line 1562 "string.format.m"
                    /* direct tailcall eliminated */
#line 1562 "string.format.m"
                    {
#line 1562 "string.format.m"
                      MR_Word mercury__string__format__L__tmp_copy_4 = mercury__string__format__T_8;
#line 1562 "string.format.m"
                      MR_Integer mercury__string__format__CurrentPos__tmp_copy_5 = mercury__string__format__V_9_9;

#line 1562 "string.format.m"
                      mercury__string__format__CurrentPos_5 = mercury__string__format__CurrentPos__tmp_copy_5;
#line 1562 "string.format.m"
                      mercury__string__format__L_4 = mercury__string__format__L__tmp_copy_4;
#line 1562 "string.format.m"
                    }
#line 1562 "string.format.m"
                    continue;
#line 1562 "string.format.m"
                  }
#line 1563 "string.format.m"
                else
#line 1564 "string.format.m"
                  mercury__string__format__ActualPos_6 = mercury__string__format__CurrentPos_5;
#line 1563 "string.format.m"
              }
#line 1558 "string.format.m"
          }
#line 1558 "string.format.m"
        return mercury__string__format__ActualPos_6;
#line 1558 "string.format.m"
      }
#line 1558 "string.format.m"
      break;
#line 1558 "string.format.m"
    }
#line 1554 "string.format.m"
}

#line 1528 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
#line 1528 "string.format.m"
  MR_Word mercury__string__format__CharNum_3)
#line 1528 "string.format.m"
{
#line 1533 "string.format.m"
  while (MR_TRUE)
#line 1533 "string.format.m"
    {
#line 1533 "string.format.m"
      /* tailcall optimized into a loop */
#line 1533 "string.format.m"
      {
#line 1533 "string.format.m"
        MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
#line 1533 "string.format.m"
        MR_Word mercury__string__format__TrimmedNum_4;
#line 1533 "string.format.m"
        MR_Word mercury__string__format__Rest_5;
#line 1531 "string.format.m"
        MR_Char mercury__string__format__V_6_6;

#line 1531 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1531 "string.format.m"
          {
#line 1531 "string.format.m"
            mercury__string__format__V_6_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
#line 1531 "string.format.m"
            mercury__string__format__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
#line 1531 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_6_6 == (MR_Char) 48);
#line 1531 "string.format.m"
          }
#line 1533 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1532 "string.format.m"
          {
#line 1532 "string.format.m"
            /* direct tailcall eliminated */
#line 1532 "string.format.m"
            {
#line 1532 "string.format.m"
              MR_Word mercury__string__format__CharNum__tmp_copy_3 = mercury__string__format__Rest_5;

#line 1532 "string.format.m"
              mercury__string__format__CharNum_3 = mercury__string__format__CharNum__tmp_copy_3;
#line 1532 "string.format.m"
            }
#line 1532 "string.format.m"
            continue;
#line 1532 "string.format.m"
          }
#line 1533 "string.format.m"
        else
#line 1535 "string.format.m"
          {
#line 1535 "string.format.m"
            MR_Word mercury__string__format__Rest_8;
#line 1533 "string.format.m"
            MR_Char mercury__string__format__V_7_7;

#line 1533 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
#line 1533 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1533 "string.format.m"
              {
#line 1533 "string.format.m"
                mercury__string__format__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
#line 1533 "string.format.m"
                mercury__string__format__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
#line 1533 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_7_7 == (MR_Char) 46);
#line 1533 "string.format.m"
              }
#line 1535 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1534 "string.format.m"
              mercury__string__format__TrimmedNum_4 = mercury__string__format__Rest_8;
#line 1535 "string.format.m"
            else
#line 1536 "string.format.m"
              mercury__string__format__TrimmedNum_4 = mercury__string__format__CharNum_3;
#line 1535 "string.format.m"
          }
#line 1533 "string.format.m"
        return mercury__string__format__TrimmedNum_4;
#line 1533 "string.format.m"
      }
#line 1533 "string.format.m"
      break;
#line 1533 "string.format.m"
    }
#line 1528 "string.format.m"
}

#line 1516 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
#line 1516 "string.format.m"
  MR_String mercury__string__format__Float_3)
#line 1516 "string.format.m"
{
#line 1518 "string.format.m"
  {
#line 1518 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1518 "string.format.m"
    MR_String mercury__string__format__TrimmedFloat_4;
#line 1518 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_9_9;
#line 1518 "string.format.m"
    MR_Word mercury__string__format__FloatCharList_5;
#line 1518 "string.format.m"
    MR_Word mercury__string__format__FloatCharListRev_6;
#line 1518 "string.format.m"
    MR_Word mercury__string__format__TrimmedFloatRevCharList_7;
#line 1518 "string.format.m"
    MR_Word mercury__string__format__TrimmedFloatCharList_8;

#line 143 "string.opt"
    {
#line 143 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_3, &mercury__string__format__FloatCharList_5);
    }
#line 2621 "string.format.c"
    mercury__string__format__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__FloatCharList_5, &mercury__string__format__FloatCharListRev_6);
    }
#line 1521 "string.format.m"
    {
#line 1521 "string.format.m"
      mercury__string__format__TrimmedFloatRevCharList_7 = mercury__string__format__remove_zeros_1_f_0(mercury__string__format__FloatCharListRev_6);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__TrimmedFloatRevCharList_7, &mercury__string__format__TrimmedFloatCharList_8);
    }
#line 145 "string.opt"
    {
#line 145 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__string__format__TrimmedFloatCharList_8, &mercury__string__format__TrimmedFloat_4);
    }
#line 1518 "string.format.m"
    return mercury__string__format__TrimmedFloat_4;
#line 1518 "string.format.m"
  }
#line 1516 "string.format.m"
}

#line 1457 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
#line 1457 "string.format.m"
  MR_String mercury__string__format__Float_5,
#line 1457 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 1457 "string.format.m"
  MR_String mercury__string__format__E_7)
#line 1457 "string.format.m"
{
#line 1459 "string.format.m"
  {
#line 1459 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1459 "string.format.m"
    MR_String mercury__string__format__ScientificFloat_8;
#line 1459 "string.format.m"
    MR_Integer mercury__string__format__UnsafeExponent_9;
#line 1459 "string.format.m"
    MR_String mercury__string__format__UnsafeBase_10;
#line 1459 "string.format.m"
    MR_String mercury__string__format__MantissaStr_11;
#line 1459 "string.format.m"
    MR_String mercury__string__format__SafeBase_13;
#line 1459 "string.format.m"
    MR_Integer mercury__string__format__SafeExponent_14;
#line 1459 "string.format.m"
    MR_String mercury__string__format__ExponentStr_15;
#line 1459 "string.format.m"
    MR_String mercury__string__format__MantissaStr_46;
#line 1459 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_48;
#line 1459 "string.format.m"
    MR_Integer mercury__string__format__V_49_49;
#line 1459 "string.format.m"
    MR_Word mercury__string__format__V_51_51;
#line 1545 "string.format.m"
    MR_String mercury__string__format___FractionStr_47;
#line 1464 "string.format.m"
    MR_String mercury__string__format___FractionStr_12;
#line 1465 "string.format.m"
    MR_Integer mercury__string__format__V_16_16;

#line 1545 "string.format.m"
    {
#line 1545 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_5, &mercury__string__format__MantissaStr_46, &mercury__string__format___FractionStr_47);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_46, &mercury__string__format__V_49_49);
    }
#line 1546 "string.format.m"
    mercury__string__format__NumZeros_48 = (mercury__string__format__V_49_49 - (MR_Integer) 1);
#line 143 "string.opt"
    {
#line 143 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_5, &mercury__string__format__V_51_51);
    }
#line 1547 "string.format.m"
    {
#line 1547 "string.format.m"
      mercury__string__format__UnsafeExponent_9 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_51_51, mercury__string__format__NumZeros_48);
    }
#line 1461 "string.format.m"
    {
#line 1461 "string.format.m"
      mercury__string__format__UnsafeBase_10 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_5, mercury__string__format__Prec_6);
    }
#line 1464 "string.format.m"
    {
#line 1464 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_10, &mercury__string__format__MantissaStr_11, &mercury__string__format___FractionStr_12);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_11, &mercury__string__format__V_16_16);
    }
#line 1465 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__V_16_16 > (MR_Integer) 1);
#line 1471 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1469 "string.format.m"
      {
#line 1469 "string.format.m"
        MR_String mercury__string__format__V_18_18;

#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__UnsafeBase_10, (MR_String) "0", &mercury__string__format__V_18_18);
        }
#line 1468 "string.format.m"
        {
#line 1468 "string.format.m"
          mercury__string__format__SafeBase_13 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__V_18_18, mercury__string__format__Prec_6);
        }
#line 1470 "string.format.m"
        mercury__string__format__SafeExponent_14 = (mercury__string__format__UnsafeExponent_9 + (MR_Integer) 1);
#line 1469 "string.format.m"
      }
#line 1471 "string.format.m"
    else
#line 1472 "string.format.m"
      {
#line 1472 "string.format.m"
        mercury__string__format__SafeBase_13 = mercury__string__format__UnsafeBase_10;
#line 1473 "string.format.m"
        mercury__string__format__SafeExponent_14 = mercury__string__format__UnsafeExponent_9;
#line 1472 "string.format.m"
      }
#line 1476 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 >= (MR_Integer) 0);
#line 1484 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1480 "string.format.m"
      {
#line 1477 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 < (MR_Integer) 10);
#line 1480 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1478 "string.format.m"
          {
#line 1478 "string.format.m"
            MR_Word mercury__string__format__V_23_23;
#line 1478 "string.format.m"
            MR_Word mercury__string__format__V_24_24;
#line 1478 "string.format.m"
            MR_Word mercury__string__format__V_26_26;
#line 1478 "string.format.m"
            MR_String mercury__string__format__V_27_27;
#line 1478 "string.format.m"
            MR_Word mercury__string__format__V_28_28;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_27_27);
            }
#line 1479 "string.format.m"
            mercury__string__format__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1479 "string.format.m"
            {
#line 1479 "string.format.m"
              mercury__string__format__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 0) = ((MR_Box) (mercury__string__format__V_27_27));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 1) = ((MR_Box) (mercury__string__format__V_28_28));
#line 1479 "string.format.m"
            }
#line 1479 "string.format.m"
            {
#line 1479 "string.format.m"
              mercury__string__format__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_24_24, 0) = ((MR_Box) ((MR_String) "+0"));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_24_24, 1) = ((MR_Box) (mercury__string__format__V_26_26));
#line 1479 "string.format.m"
            }
#line 1479 "string.format.m"
            {
#line 1479 "string.format.m"
              mercury__string__format__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1479 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 1) = ((MR_Box) (mercury__string__format__V_24_24));
#line 1479 "string.format.m"
            }
#line 1478 "string.format.m"
            {
#line 1478 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_23_23);
            }
#line 1478 "string.format.m"
          }
#line 1480 "string.format.m"
        else
#line 1481 "string.format.m"
          {
#line 1481 "string.format.m"
            MR_Word mercury__string__format__V_29_29;
#line 1481 "string.format.m"
            MR_Word mercury__string__format__V_30_30;
#line 1481 "string.format.m"
            MR_Word mercury__string__format__V_32_32;
#line 1481 "string.format.m"
            MR_String mercury__string__format__V_33_33;
#line 1481 "string.format.m"
            MR_Word mercury__string__format__V_34_34;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_33_33);
            }
#line 1482 "string.format.m"
            mercury__string__format__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1482 "string.format.m"
            {
#line 1482 "string.format.m"
              mercury__string__format__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 0) = ((MR_Box) (mercury__string__format__V_33_33));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 1) = ((MR_Box) (mercury__string__format__V_34_34));
#line 1482 "string.format.m"
            }
#line 1482 "string.format.m"
            {
#line 1482 "string.format.m"
              mercury__string__format__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 0) = ((MR_Box) ((MR_String) "+"));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 1) = ((MR_Box) (mercury__string__format__V_32_32));
#line 1482 "string.format.m"
            }
#line 1482 "string.format.m"
            {
#line 1482 "string.format.m"
              mercury__string__format__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_29_29, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1482 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_29_29, 1) = ((MR_Box) (mercury__string__format__V_30_30));
#line 1482 "string.format.m"
            }
#line 1481 "string.format.m"
            {
#line 1481 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_29_29);
            }
#line 1481 "string.format.m"
          }
#line 1480 "string.format.m"
      }
#line 1484 "string.format.m"
    else
#line 1488 "string.format.m"
      {
#line 1485 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 > (MR_Integer) -10);
#line 1488 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1486 "string.format.m"
          {
#line 1486 "string.format.m"
            MR_Word mercury__string__format__V_36_36;
#line 1486 "string.format.m"
            MR_Word mercury__string__format__V_37_37;
#line 1486 "string.format.m"
            MR_Word mercury__string__format__V_39_39;
#line 1486 "string.format.m"
            MR_String mercury__string__format__V_40_40;
#line 1486 "string.format.m"
            MR_Integer mercury__string__format__V_41_41;
#line 1486 "string.format.m"
            MR_Word mercury__string__format__V_42_42;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__SafeExponent_14, &mercury__string__format__V_41_41);
            }
#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__V_41_41, (MR_Integer) 10, &mercury__string__format__V_40_40);
            }
#line 1487 "string.format.m"
            mercury__string__format__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1487 "string.format.m"
            {
#line 1487 "string.format.m"
              mercury__string__format__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 0) = ((MR_Box) (mercury__string__format__V_40_40));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 1) = ((MR_Box) (mercury__string__format__V_42_42));
#line 1487 "string.format.m"
            }
#line 1487 "string.format.m"
            {
#line 1487 "string.format.m"
              mercury__string__format__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 0) = ((MR_Box) ((MR_String) "-0"));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 1) = ((MR_Box) (mercury__string__format__V_39_39));
#line 1487 "string.format.m"
            }
#line 1487 "string.format.m"
            {
#line 1487 "string.format.m"
              mercury__string__format__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1487 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 1) = ((MR_Box) (mercury__string__format__V_37_37));
#line 1487 "string.format.m"
            }
#line 1486 "string.format.m"
            {
#line 1486 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_36_36);
            }
#line 1486 "string.format.m"
          }
#line 1488 "string.format.m"
        else
#line 1489 "string.format.m"
          {
#line 1489 "string.format.m"
            MR_String mercury__string__format__V_43_43;

#line 710 "string.opt"
            {
#line 710 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_43_43);
            }
#line 411 "string.opt"
            {
#line 411 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__E_7, mercury__string__format__V_43_43, &mercury__string__format__ExponentStr_15);
            }
#line 1489 "string.format.m"
          }
#line 1488 "string.format.m"
      }
#line 411 "string.opt"
    {
#line 411 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__SafeBase_13, mercury__string__format__ExponentStr_15, &mercury__string__format__ScientificFloat_8);
    }
#line 1459 "string.format.m"
    return mercury__string__format__ScientificFloat_8;
#line 1459 "string.format.m"
  }
#line 1457 "string.format.m"
}

#line 1400 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
#line 1400 "string.format.m"
  MR_String mercury__string__format__Float_6,
#line 1400 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 1400 "string.format.m"
  MR_String mercury__string__format__E_8,
#line 1400 "string.format.m"
  MR_Word mercury__string__format__Flags_9)
#line 1400 "string.format.m"
{
#line 1403 "string.format.m"
  {
#line 1403 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1403 "string.format.m"
    MR_String mercury__string__format__FormattedFloat_10;
#line 1403 "string.format.m"
    MR_Integer mercury__string__format__Exponent_11;
#line 1403 "string.format.m"
    MR_Integer mercury__string__format__UnsafeExponent_61;
#line 1403 "string.format.m"
    MR_String mercury__string__format__UnsafeBase_62;
#line 1403 "string.format.m"
    MR_String mercury__string__format__MantissaStr_63;
#line 1403 "string.format.m"
    MR_String mercury__string__format__MantissaStr_70;
#line 1403 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_72;
#line 1403 "string.format.m"
    MR_Integer mercury__string__format__V_73_73;
#line 1403 "string.format.m"
    MR_Word mercury__string__format__V_75_75;
#line 1545 "string.format.m"
    MR_String mercury__string__format___FractionStr_71;
#line 1504 "string.format.m"
    MR_String mercury__string__format___FractionStr_64;
#line 1505 "string.format.m"
    MR_Integer mercury__string__format__V_65_65;

#line 1545 "string.format.m"
    {
#line 1545 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_70, &mercury__string__format___FractionStr_71);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_70, &mercury__string__format__V_73_73);
    }
#line 1546 "string.format.m"
    mercury__string__format__NumZeros_72 = (mercury__string__format__V_73_73 - (MR_Integer) 1);
#line 143 "string.opt"
    {
#line 143 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__V_75_75);
    }
#line 1547 "string.format.m"
    {
#line 1547 "string.format.m"
      mercury__string__format__UnsafeExponent_61 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_75_75, mercury__string__format__NumZeros_72);
    }
#line 1501 "string.format.m"
    {
#line 1501 "string.format.m"
      mercury__string__format__UnsafeBase_62 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_6, mercury__string__format__Prec_7);
    }
#line 1504 "string.format.m"
    {
#line 1504 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_62, &mercury__string__format__MantissaStr_63, &mercury__string__format___FractionStr_64);
    }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_63, &mercury__string__format__V_65_65);
    }
#line 1505 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__V_65_65 > (MR_Integer) 1);
#line 1509 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1508 "string.format.m"
      {
#line 1508 "string.format.m"
        mercury__string__format__Exponent_11 = (mercury__string__format__UnsafeExponent_61 + (MR_Integer) 1);
#line 1508 "string.format.m"
      }
#line 1509 "string.format.m"
    else
#line 1510 "string.format.m"
      mercury__string__format__Exponent_11 = mercury__string__format__UnsafeExponent_61;
#line 1406 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Exponent_11 >= (MR_Integer) -4);
#line 1406 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1407 "string.format.m"
      mercury__string__format__succeeded = (mercury__string__format__Exponent_11 < mercury__string__format__Prec_7);
#line 1440 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1432 "string.format.m"
      {
#line 1432 "string.format.m"
        MR_String mercury__string__format__FormattedFloat0_13;
#line 1435 "string.format.m"
        MR_Word mercury__string__format__V_39_39;
#line 1435 "string.format.m"
        MR_Word mercury__string__format__V_50_50;
#line 1435 "string.format.m"
        MR_Word mercury__string__format__V_51_51;
#line 1435 "string.format.m"
        MR_Word mercury__string__format__V_52_52;
#line 1435 "string.format.m"
        MR_Word mercury__string__format__V_53_53;

#line 1417 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Exponent_11 <= (MR_Integer) 0);
#line 1422 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1419 "string.format.m"
          {
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__DecimalPos_12;
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__V_26_26;
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__V_27_27;
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__V_28_28;
#line 1419 "string.format.m"
            MR_String mercury__string__format__MantissaStr_84;
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__NumZeros_86;
#line 1419 "string.format.m"
            MR_Integer mercury__string__format__V_87_87;
#line 1419 "string.format.m"
            MR_Word mercury__string__format__V_89_89;
#line 1545 "string.format.m"
            MR_String mercury__string__format___FractionStr_85;

#line 1545 "string.format.m"
            {
#line 1545 "string.format.m"
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_84, &mercury__string__format___FractionStr_85);
            }
#line 254 "string.opt"
            {
#line 254 "string.opt"
              mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_84, &mercury__string__format__V_87_87);
            }
#line 1546 "string.format.m"
            mercury__string__format__NumZeros_86 = (mercury__string__format__V_87_87 - (MR_Integer) 1);
#line 143 "string.opt"
            {
#line 143 "string.opt"
              mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__V_89_89);
            }
#line 1547 "string.format.m"
            {
#line 1547 "string.format.m"
              mercury__string__format__DecimalPos_12 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_89_89, mercury__string__format__NumZeros_86);
            }
#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__DecimalPos_12, &mercury__string__format__V_28_28);
            }
#line 1421 "string.format.m"
            mercury__string__format__V_27_27 = (mercury__string__format__V_28_28 - (MR_Integer) 1);
#line 1421 "string.format.m"
            mercury__string__format__V_26_26 = (mercury__string__format__V_27_27 + mercury__string__format__Prec_7);
#line 1420 "string.format.m"
            {
#line 1420 "string.format.m"
              mercury__string__format__FormattedFloat0_13 = mercury__string__format__change_precision_2_f_0(mercury__string__format__Float_6, mercury__string__format__V_26_26);
            }
#line 1419 "string.format.m"
          }
#line 1422 "string.format.m"
        else
#line 1424 "string.format.m"
          {
#line 1424 "string.format.m"
            MR_String mercury__string__format__ScientificFloat_14;
#line 1424 "string.format.m"
            MR_String mercury__string__format__BaseStr_15;
#line 1424 "string.format.m"
            MR_String mercury__string__format__ExponentStr_16;
#line 1424 "string.format.m"
            MR_Integer mercury__string__format__Exp_17;
#line 1424 "string.format.m"
            MR_String mercury__string__format__MantissaStr_18;
#line 1424 "string.format.m"
            MR_String mercury__string__format__FractionStr_19;
#line 1424 "string.format.m"
            MR_String mercury__string__format__RestMantissaStr_20;
#line 1424 "string.format.m"
            MR_String mercury__string__format__NewFraction_21;
#line 1424 "string.format.m"
            MR_Integer mercury__string__format__V_30_30 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1424 "string.format.m"
            MR_Integer mercury__string__format__V_34_34;
#line 1424 "string.format.m"
            MR_String mercury__string__format__V_36_36;
#line 1424 "string.format.m"
            MR_String mercury__string__format__V_37_37;

#line 1424 "string.format.m"
            {
#line 1424 "string.format.m"
              mercury__string__format__ScientificFloat_14 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__V_30_30, (MR_String) "e");
            }
#line 1425 "string.format.m"
            {
#line 1425 "string.format.m"
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__ScientificFloat_14, &mercury__string__format__BaseStr_15, &mercury__string__format__ExponentStr_16);
            }
#line 685 "string.opt"
            {
#line 685 "string.opt"
              mercury__string__format__Exp_17 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExponentStr_16);
            }
#line 1427 "string.format.m"
            {
#line 1427 "string.format.m"
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__BaseStr_15, &mercury__string__format__MantissaStr_18, &mercury__string__format__FractionStr_19);
            }
#line 1428 "string.format.m"
            {
#line 1428 "string.format.m"
              mercury__string__format__RestMantissaStr_20 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, (MR_Integer) 0, mercury__string__format__Exp_17);
            }
#line 1429 "string.format.m"
            mercury__string__format__V_34_34 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1429 "string.format.m"
            {
#line 1429 "string.format.m"
              mercury__string__format__NewFraction_21 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, mercury__string__format__Exp_17, mercury__string__format__V_34_34);
            }
#line 1431 "string.format.m"
            {
#line 1431 "string.format.m"
              mercury__string__format__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__string__format__NewFraction_21);
            }
#line 1431 "string.format.m"
            {
#line 1431 "string.format.m"
              mercury__string__format__V_36_36 = mercury__string__f_43_43_2_f_0(mercury__string__format__RestMantissaStr_20, mercury__string__format__V_37_37);
            }
#line 1430 "string.format.m"
            {
#line 1430 "string.format.m"
              mercury__string__format__FormattedFloat0_13 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantissaStr_18, mercury__string__format__V_36_36);
            }
#line 1424 "string.format.m"
          }
#line 1435 "string.format.m"
        mercury__string__format__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1435 "string.format.m"
        mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1435 "string.format.m"
        mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1435 "string.format.m"
        mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1435 "string.format.m"
        mercury__string__format__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1435 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_39_39 == (MR_Integer) 1);
#line 1437 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1436 "string.format.m"
          mercury__string__format__FormattedFloat_10 = mercury__string__format__FormattedFloat0_13;
#line 1437 "string.format.m"
        else
#line 1438 "string.format.m"
          {
#line 1438 "string.format.m"
            return mercury__string__format__FormattedFloat_10 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__FormattedFloat0_13);
          }
#line 1432 "string.format.m"
      }
#line 1440 "string.format.m"
    else
#line 1443 "string.format.m"
      {
#line 1443 "string.format.m"
        MR_String mercury__string__format__UncheckedFloat_22;
#line 1443 "string.format.m"
        MR_Integer mercury__string__format__V_40_40 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1446 "string.format.m"
        MR_Word mercury__string__format__V_42_42;
#line 1446 "string.format.m"
        MR_Word mercury__string__format__V_54_54;
#line 1446 "string.format.m"
        MR_Word mercury__string__format__V_55_55;
#line 1446 "string.format.m"
        MR_Word mercury__string__format__V_56_56;
#line 1446 "string.format.m"
        MR_Word mercury__string__format__V_57_57;

#line 1443 "string.format.m"
        {
#line 1443 "string.format.m"
          mercury__string__format__UncheckedFloat_22 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__V_40_40, mercury__string__format__E_8);
        }
#line 1446 "string.format.m"
        mercury__string__format__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1446 "string.format.m"
        mercury__string__format__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1446 "string.format.m"
        mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1446 "string.format.m"
        mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1446 "string.format.m"
        mercury__string__format__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1446 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_42_42 == (MR_Integer) 1);
#line 1448 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1447 "string.format.m"
          mercury__string__format__FormattedFloat_10 = mercury__string__format__UncheckedFloat_22;
#line 1448 "string.format.m"
        else
#line 1449 "string.format.m"
          {
#line 1449 "string.format.m"
            MR_String mercury__string__format__NewBaseStr_23;
#line 1449 "string.format.m"
            MR_String mercury__string__format__V_43_43;
#line 1449 "string.format.m"
            MR_String mercury__string__format__BaseStr_44;
#line 1449 "string.format.m"
            MR_String mercury__string__format__ExponentStr_45;

#line 1449 "string.format.m"
            {
#line 1449 "string.format.m"
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__UncheckedFloat_22, &mercury__string__format__BaseStr_44, &mercury__string__format__ExponentStr_45);
            }
#line 1450 "string.format.m"
            {
#line 1450 "string.format.m"
              mercury__string__format__NewBaseStr_23 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__BaseStr_44);
            }
#line 1451 "string.format.m"
            {
#line 1451 "string.format.m"
              mercury__string__format__V_43_43 = mercury__string__f_43_43_2_f_0(mercury__string__format__E_8, mercury__string__format__ExponentStr_45);
            }
#line 1451 "string.format.m"
            {
#line 1451 "string.format.m"
              return mercury__string__format__FormattedFloat_10 = mercury__string__f_43_43_2_f_0(mercury__string__format__NewBaseStr_23, mercury__string__format__V_43_43);
            }
#line 1449 "string.format.m"
          }
#line 1443 "string.format.m"
      }
#line 1403 "string.format.m"
    return mercury__string__format__FormattedFloat_10;
#line 1403 "string.format.m"
  }
#line 1400 "string.format.m"
}

#line 1354 "string.format.m"
static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
#line 1354 "string.format.m"
  MR_Float mercury__string__format__FloatVal_1,
#line 1354 "string.format.m"
  MR_String * mercury__string__format__FloatString_2)
#line 1354 "string.format.m"
{
#line 1356 "string.format.m"
  {
#line 1356 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 1360 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__float_to_string_first_pass_2_p_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__FloatVal_1 ;
		{
#line 1360 "string.format.m"
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}
#line 3394 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__FloatString_2  = FloatString;
#line 1360 "string.format.m"
}
#line 1356 "string.format.m"
  }
#line 1354 "string.format.m"
}

#line 1291 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
#line 1291 "string.format.m"
  MR_Float mercury__string__format__Float_3)
#line 1291 "string.format.m"
{
#line 1293 "string.format.m"
  {
#line 1293 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1293 "string.format.m"
    MR_String mercury__string__format__String_4;
#line 1293 "string.format.m"
    MR_String mercury__string__format__FloatStr_5;

#line 1360 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__Float_3 ;
		{
#line 1360 "string.format.m"
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}
#line 3439 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__FloatStr_5  = FloatString;
#line 1360 "string.format.m"
}
#line 374 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 101 ;
		{
#line 374 "string.opt"

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

#line 3470 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 374 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1299 "string.format.m"
    if (!(mercury__string__format__succeeded))
#line 1299 "string.format.m"
      {
#line 374 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 69 ;
		{
#line 374 "string.opt"

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

#line 3507 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 374 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1299 "string.format.m"
      }
#line 1337 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1302 "string.format.m"
      {
#line 1302 "string.format.m"
        MR_Word mercury__string__format__TypeCtorInfo_12_41;
#line 1302 "string.format.m"
        MR_String mercury__string__format__FloatPtStr_6;
#line 1302 "string.format.m"
        MR_String mercury__string__format__ExpStr_7;
#line 1302 "string.format.m"
        MR_String mercury__string__format__MantissaStr_8;
#line 1302 "string.format.m"
        MR_String mercury__string__format__FractionStr_9;
#line 1302 "string.format.m"
        MR_Integer mercury__string__format__ExpInt_10;
#line 1302 "string.format.m"
        MR_Word mercury__string__format__FloatAndExponent_36;
#line 1302 "string.format.m"
        MR_Integer mercury__string__format__WordStart_7_47;
#line 1661 "string.format.m"
        MR_Box mercury__string__format__conv0_FloatPtStr_6;
#line 1662 "string.format.m"
        MR_Box mercury__string__format__conv1_ExpStr_7;

#line 514 "string.opt"
        {
#line 514 "string.opt"
          mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__FloatStr_5, (MR_Integer) 0, &mercury__string__format__WordStart_7_47);
        }
#line 515 "string.opt"
        {
#line 515 "string.opt"
          mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__FloatStr_5, mercury__string__format__WordStart_7_47, &mercury__string__format__FloatAndExponent_36);
        }
#line 3553 "string.format.c"
        mercury__string__format__TypeCtorInfo_12_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1661 "string.format.m"
        {
#line 1661 "string.format.m"
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 0, &mercury__string__format__conv0_FloatPtStr_6);
        }
#line 1661 "string.format.m"
        mercury__string__format__FloatPtStr_6 = ((MR_String) mercury__string__format__conv0_FloatPtStr_6);
#line 1662 "string.format.m"
        {
#line 1662 "string.format.m"
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 1, &mercury__string__format__conv1_ExpStr_7);
        }
#line 1662 "string.format.m"
        mercury__string__format__ExpStr_7 = ((MR_String) mercury__string__format__conv1_ExpStr_7);
#line 1303 "string.format.m"
        {
#line 1303 "string.format.m"
          mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__FloatPtStr_6, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
        }
#line 685 "string.opt"
        {
#line 685 "string.opt"
          mercury__string__format__ExpInt_10 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExpStr_7);
        }
#line 1307 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__ExpInt_10 >= (MR_Integer) 0);
#line 1321 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1309 "string.format.m"
          {
#line 1309 "string.format.m"
            MR_String mercury__string__format__PaddedFracStr_12;
#line 1309 "string.format.m"
            MR_String mercury__string__format__MantissaRest_13;
#line 1309 "string.format.m"
            MR_String mercury__string__format__NewFraction_14;
#line 1309 "string.format.m"
            MR_String mercury__string__format__NewMantissa_15;
#line 1309 "string.format.m"
            MR_String mercury__string__format__MantAndPoint_16;

#line 560 "string.opt"
            {
#line 560 "string.opt"
              mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__ExpInt_10, &mercury__string__format__PaddedFracStr_12);
            }
#line 1311 "string.format.m"
            {
#line 1311 "string.format.m"
              mercury__string__split_4_p_0(mercury__string__format__PaddedFracStr_12, mercury__string__format__ExpInt_10, &mercury__string__format__MantissaRest_13, &mercury__string__format__NewFraction_14);
            }
#line 411 "string.opt"
            {
#line 411 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__MantissaStr_8, mercury__string__format__MantissaRest_13, &mercury__string__format__NewMantissa_15);
            }
#line 411 "string.opt"
            {
#line 411 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__NewMantissa_15, (MR_String) ".", &mercury__string__format__MantAndPoint_16);
            }
#line 1316 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewFraction_14, (MR_String) "") == 0);
#line 1318 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1317 "string.format.m"
              {
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, (MR_String) "0", &mercury__string__format__String_4);
                }
#line 1317 "string.format.m"
              }
#line 1318 "string.format.m"
            else
#line 411 "string.opt"
              {
#line 411 "string.opt"
                mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, mercury__string__format__NewFraction_14, &mercury__string__format__String_4);
              }
#line 1309 "string.format.m"
          }
#line 1321 "string.format.m"
        else
#line 1323 "string.format.m"
          {
#line 1323 "string.format.m"
            MR_String mercury__string__format__PaddedMantissaStr_17;
#line 1323 "string.format.m"
            MR_String mercury__string__format__FractionRest_18;
#line 1323 "string.format.m"
            MR_Integer mercury__string__format__V_26_26;
#line 1323 "string.format.m"
            MR_Integer mercury__string__format__V_27_27;
#line 1323 "string.format.m"
            MR_String mercury__string__format__V_29_29;
#line 1323 "string.format.m"
            MR_Integer mercury__string__format__ExtraDigits_30;
#line 1323 "string.format.m"
            MR_String mercury__string__format__NewMantissa_31;
#line 1323 "string.format.m"
            MR_String mercury__string__format__MantAndPoint_32;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__ExpInt_10, &mercury__string__format__ExtraDigits_30);
            }
#line 558 "string.opt"
            {
#line 558 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__string__format__MantissaStr_8, (MR_Char) 48, mercury__string__format__ExtraDigits_30, &mercury__string__format__PaddedMantissaStr_17);
            }
#line 246 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__PaddedMantissaStr_17 ;
		{
#line 246 "string.opt"

    Length = strlen(Str);

#line 3682 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_27_27  = Length;
#line 246 "string.opt"
}
#line 1327 "string.format.m"
            mercury__string__format__V_26_26 = (mercury__string__format__V_27_27 - mercury__string__format__ExtraDigits_30);
#line 1326 "string.format.m"
            {
#line 1326 "string.format.m"
              mercury__string__split_4_p_0(mercury__string__format__PaddedMantissaStr_17, mercury__string__format__V_26_26, &mercury__string__format__NewMantissa_31, &mercury__string__format__FractionRest_18);
            }
#line 1330 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewMantissa_31, (MR_String) "") == 0);
#line 1332 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1331 "string.format.m"
              mercury__string__format__MantAndPoint_32 = (MR_String) "0.";
#line 1332 "string.format.m"
            else
#line 1333 "string.format.m"
              {
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__NewMantissa_31, (MR_String) ".", &mercury__string__format__MantAndPoint_32);
                }
#line 1333 "string.format.m"
              }
#line 1335 "string.format.m"
            {
#line 1335 "string.format.m"
              mercury__string__format__V_29_29 = mercury__string__f_43_43_2_f_0(mercury__string__format__FractionRest_18, mercury__string__format__FractionStr_9);
            }
#line 1335 "string.format.m"
            {
#line 1335 "string.format.m"
              return mercury__string__format__String_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantAndPoint_32, mercury__string__format__V_29_29);
            }
#line 1323 "string.format.m"
          }
#line 1302 "string.format.m"
      }
#line 1337 "string.format.m"
    else
#line 1338 "string.format.m"
      mercury__string__format__String_4 = mercury__string__format__FloatStr_5;
#line 1293 "string.format.m"
    return mercury__string__format__String_4;
#line 1293 "string.format.m"
  }
#line 1291 "string.format.m"
}

#line 1151 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
#line 1151 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1151 "string.format.m"
{
#line 1187 "string.format.m"
  {
#line 1187 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1187 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1187 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1184 "string.format.m"
      {
#line 1184 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1184 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1184 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
#line 1184 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1236 "string.format.m"
        MR_String mercury__string__format__HexUCPrime_27;

#line 1184 "string.format.m"
        {
#line 1184 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
#line 1266 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1266 "string.format.m"
          {
#line 1266 "string.format.m"
            mercury__string__format__HexUCPrime_27 = (MR_String) "0";
#line 1266 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1266 "string.format.m"
          }
#line 1266 "string.format.m"
        else
#line 1266 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1267 "string.format.m"
            {
#line 1267 "string.format.m"
              mercury__string__format__HexUCPrime_27 = (MR_String) "1";
#line 1267 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1267 "string.format.m"
            }
#line 1266 "string.format.m"
          else
#line 1266 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1268 "string.format.m"
              {
#line 1268 "string.format.m"
                mercury__string__format__HexUCPrime_27 = (MR_String) "2";
#line 1268 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1268 "string.format.m"
              }
#line 1266 "string.format.m"
            else
#line 1266 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1269 "string.format.m"
                {
#line 1269 "string.format.m"
                  mercury__string__format__HexUCPrime_27 = (MR_String) "3";
#line 1269 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1269 "string.format.m"
                }
#line 1266 "string.format.m"
              else
#line 1266 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1270 "string.format.m"
                  {
#line 1270 "string.format.m"
                    mercury__string__format__HexUCPrime_27 = (MR_String) "4";
#line 1270 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1270 "string.format.m"
                  }
#line 1266 "string.format.m"
                else
#line 1266 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1271 "string.format.m"
                    {
#line 1271 "string.format.m"
                      mercury__string__format__HexUCPrime_27 = (MR_String) "5";
#line 1271 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1271 "string.format.m"
                    }
#line 1266 "string.format.m"
                  else
#line 1266 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1272 "string.format.m"
                      {
#line 1272 "string.format.m"
                        mercury__string__format__HexUCPrime_27 = (MR_String) "6";
#line 1272 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1272 "string.format.m"
                      }
#line 1266 "string.format.m"
                    else
#line 1266 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1273 "string.format.m"
                        {
#line 1273 "string.format.m"
                          mercury__string__format__HexUCPrime_27 = (MR_String) "7";
#line 1273 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1273 "string.format.m"
                        }
#line 1266 "string.format.m"
                      else
#line 1266 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1274 "string.format.m"
                          {
#line 1274 "string.format.m"
                            mercury__string__format__HexUCPrime_27 = (MR_String) "8";
#line 1274 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1274 "string.format.m"
                          }
#line 1266 "string.format.m"
                        else
#line 1266 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1275 "string.format.m"
                            {
#line 1275 "string.format.m"
                              mercury__string__format__HexUCPrime_27 = (MR_String) "9";
#line 1275 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1275 "string.format.m"
                            }
#line 1266 "string.format.m"
                          else
#line 1266 "string.format.m"
                            if ((mercury__string__format__V_10_10 == (MR_Integer) 10))
#line 1276 "string.format.m"
                              {
#line 1276 "string.format.m"
                                mercury__string__format__HexUCPrime_27 = (MR_String) "A";
#line 1276 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1276 "string.format.m"
                              }
#line 1266 "string.format.m"
                            else
#line 1266 "string.format.m"
                              if ((mercury__string__format__V_10_10 == (MR_Integer) 11))
#line 1277 "string.format.m"
                                {
#line 1277 "string.format.m"
                                  mercury__string__format__HexUCPrime_27 = (MR_String) "B";
#line 1277 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1277 "string.format.m"
                                }
#line 1266 "string.format.m"
                              else
#line 1266 "string.format.m"
                                if ((mercury__string__format__V_10_10 == (MR_Integer) 12))
#line 1278 "string.format.m"
                                  {
#line 1278 "string.format.m"
                                    mercury__string__format__HexUCPrime_27 = (MR_String) "C";
#line 1278 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1278 "string.format.m"
                                  }
#line 1266 "string.format.m"
                                else
#line 1266 "string.format.m"
                                  if ((mercury__string__format__V_10_10 == (MR_Integer) 13))
#line 1279 "string.format.m"
                                    {
#line 1279 "string.format.m"
                                      mercury__string__format__HexUCPrime_27 = (MR_String) "D";
#line 1279 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1279 "string.format.m"
                                    }
#line 1266 "string.format.m"
                                  else
#line 1266 "string.format.m"
                                    if ((mercury__string__format__V_10_10 == (MR_Integer) 14))
#line 1280 "string.format.m"
                                      {
#line 1280 "string.format.m"
                                        mercury__string__format__HexUCPrime_27 = (MR_String) "E";
#line 1280 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1280 "string.format.m"
                                      }
#line 1266 "string.format.m"
                                    else
#line 1266 "string.format.m"
                                      if ((mercury__string__format__V_10_10 == (MR_Integer) 15))
#line 1281 "string.format.m"
                                        {
#line 1281 "string.format.m"
                                          mercury__string__format__HexUCPrime_27 = (MR_String) "F";
#line 1281 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1281 "string.format.m"
                                        }
#line 1266 "string.format.m"
                                      else
#line 1266 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1236 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1235 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexUCPrime_27;
#line 1236 "string.format.m"
        else
#line 1237 "string.format.m"
          {
#line 1237 "string.format.m"
            {
#line 1237 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
#line 1237 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1184 "string.format.m"
      }
#line 1187 "string.format.m"
    else
#line 1188 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1187 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1187 "string.format.m"
  }
#line 1151 "string.format.m"
}

#line 1150 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
#line 1150 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1150 "string.format.m"
{
#line 1178 "string.format.m"
  {
#line 1178 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1178 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1178 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1175 "string.format.m"
      {
#line 1175 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1175 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1175 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
#line 1175 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1229 "string.format.m"
        MR_String mercury__string__format__HexLCPrime_26;

#line 1175 "string.format.m"
        {
#line 1175 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
#line 1266 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1266 "string.format.m"
          {
#line 1266 "string.format.m"
            mercury__string__format__HexLCPrime_26 = (MR_String) "0";
#line 1266 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1266 "string.format.m"
          }
#line 1266 "string.format.m"
        else
#line 1266 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1267 "string.format.m"
            {
#line 1267 "string.format.m"
              mercury__string__format__HexLCPrime_26 = (MR_String) "1";
#line 1267 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1267 "string.format.m"
            }
#line 1266 "string.format.m"
          else
#line 1266 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1268 "string.format.m"
              {
#line 1268 "string.format.m"
                mercury__string__format__HexLCPrime_26 = (MR_String) "2";
#line 1268 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1268 "string.format.m"
              }
#line 1266 "string.format.m"
            else
#line 1266 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1269 "string.format.m"
                {
#line 1269 "string.format.m"
                  mercury__string__format__HexLCPrime_26 = (MR_String) "3";
#line 1269 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1269 "string.format.m"
                }
#line 1266 "string.format.m"
              else
#line 1266 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1270 "string.format.m"
                  {
#line 1270 "string.format.m"
                    mercury__string__format__HexLCPrime_26 = (MR_String) "4";
#line 1270 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1270 "string.format.m"
                  }
#line 1266 "string.format.m"
                else
#line 1266 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1271 "string.format.m"
                    {
#line 1271 "string.format.m"
                      mercury__string__format__HexLCPrime_26 = (MR_String) "5";
#line 1271 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1271 "string.format.m"
                    }
#line 1266 "string.format.m"
                  else
#line 1266 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1272 "string.format.m"
                      {
#line 1272 "string.format.m"
                        mercury__string__format__HexLCPrime_26 = (MR_String) "6";
#line 1272 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1272 "string.format.m"
                      }
#line 1266 "string.format.m"
                    else
#line 1266 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1273 "string.format.m"
                        {
#line 1273 "string.format.m"
                          mercury__string__format__HexLCPrime_26 = (MR_String) "7";
#line 1273 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1273 "string.format.m"
                        }
#line 1266 "string.format.m"
                      else
#line 1266 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1274 "string.format.m"
                          {
#line 1274 "string.format.m"
                            mercury__string__format__HexLCPrime_26 = (MR_String) "8";
#line 1274 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1274 "string.format.m"
                          }
#line 1266 "string.format.m"
                        else
#line 1266 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1275 "string.format.m"
                            {
#line 1275 "string.format.m"
                              mercury__string__format__HexLCPrime_26 = (MR_String) "9";
#line 1275 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1275 "string.format.m"
                            }
#line 1266 "string.format.m"
                          else
#line 1266 "string.format.m"
                            if ((mercury__string__format__V_10_10 == (MR_Integer) 10))
#line 1276 "string.format.m"
                              {
#line 1276 "string.format.m"
                                mercury__string__format__HexLCPrime_26 = (MR_String) "a";
#line 1276 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1276 "string.format.m"
                              }
#line 1266 "string.format.m"
                            else
#line 1266 "string.format.m"
                              if ((mercury__string__format__V_10_10 == (MR_Integer) 11))
#line 1277 "string.format.m"
                                {
#line 1277 "string.format.m"
                                  mercury__string__format__HexLCPrime_26 = (MR_String) "b";
#line 1277 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1277 "string.format.m"
                                }
#line 1266 "string.format.m"
                              else
#line 1266 "string.format.m"
                                if ((mercury__string__format__V_10_10 == (MR_Integer) 12))
#line 1278 "string.format.m"
                                  {
#line 1278 "string.format.m"
                                    mercury__string__format__HexLCPrime_26 = (MR_String) "c";
#line 1278 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1278 "string.format.m"
                                  }
#line 1266 "string.format.m"
                                else
#line 1266 "string.format.m"
                                  if ((mercury__string__format__V_10_10 == (MR_Integer) 13))
#line 1279 "string.format.m"
                                    {
#line 1279 "string.format.m"
                                      mercury__string__format__HexLCPrime_26 = (MR_String) "d";
#line 1279 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1279 "string.format.m"
                                    }
#line 1266 "string.format.m"
                                  else
#line 1266 "string.format.m"
                                    if ((mercury__string__format__V_10_10 == (MR_Integer) 14))
#line 1280 "string.format.m"
                                      {
#line 1280 "string.format.m"
                                        mercury__string__format__HexLCPrime_26 = (MR_String) "e";
#line 1280 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1280 "string.format.m"
                                      }
#line 1266 "string.format.m"
                                    else
#line 1266 "string.format.m"
                                      if ((mercury__string__format__V_10_10 == (MR_Integer) 15))
#line 1281 "string.format.m"
                                        {
#line 1281 "string.format.m"
                                          mercury__string__format__HexLCPrime_26 = (MR_String) "f";
#line 1281 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1281 "string.format.m"
                                        }
#line 1266 "string.format.m"
                                      else
#line 1266 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1229 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1228 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexLCPrime_26;
#line 1229 "string.format.m"
        else
#line 1230 "string.format.m"
          {
#line 1230 "string.format.m"
            {
#line 1230 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
#line 1230 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1175 "string.format.m"
      }
#line 1178 "string.format.m"
    else
#line 1179 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1178 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1178 "string.format.m"
  }
#line 1150 "string.format.m"
}

#line 1149 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
#line 1149 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1149 "string.format.m"
{
#line 1169 "string.format.m"
  {
#line 1169 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1169 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1164 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1164 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 60 "integer.opt"
    {
#line 60 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 131 "integer.opt"
    {
#line 131 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 44 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1169 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1165 "string.format.m"
      {
#line 1165 "string.format.m"
        MR_Word mercury__string__format__Integer16_5;
#line 1165 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1165 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1165 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1165 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1165 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1165 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 129 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1236 "string.format.m"
        MR_String mercury__string__format__HexUCPrime_43;

#line 60 "integer.opt"
        {
#line 60 "integer.opt"
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1166 "string.format.m"
        {
#line 1166 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1166 "string.format.m"
        {
#line 1166 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__V_11_11);
        }
#line 129 "integer.opt"
        {
#line 129 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1167 "string.format.m"
        {
#line 1167 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1266 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1266 "string.format.m"
          {
#line 1266 "string.format.m"
            mercury__string__format__HexUCPrime_43 = (MR_String) "0";
#line 1266 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1266 "string.format.m"
          }
#line 1266 "string.format.m"
        else
#line 1266 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1267 "string.format.m"
            {
#line 1267 "string.format.m"
              mercury__string__format__HexUCPrime_43 = (MR_String) "1";
#line 1267 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1267 "string.format.m"
            }
#line 1266 "string.format.m"
          else
#line 1266 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1268 "string.format.m"
              {
#line 1268 "string.format.m"
                mercury__string__format__HexUCPrime_43 = (MR_String) "2";
#line 1268 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1268 "string.format.m"
              }
#line 1266 "string.format.m"
            else
#line 1266 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1269 "string.format.m"
                {
#line 1269 "string.format.m"
                  mercury__string__format__HexUCPrime_43 = (MR_String) "3";
#line 1269 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1269 "string.format.m"
                }
#line 1266 "string.format.m"
              else
#line 1266 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1270 "string.format.m"
                  {
#line 1270 "string.format.m"
                    mercury__string__format__HexUCPrime_43 = (MR_String) "4";
#line 1270 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1270 "string.format.m"
                  }
#line 1266 "string.format.m"
                else
#line 1266 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1271 "string.format.m"
                    {
#line 1271 "string.format.m"
                      mercury__string__format__HexUCPrime_43 = (MR_String) "5";
#line 1271 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1271 "string.format.m"
                    }
#line 1266 "string.format.m"
                  else
#line 1266 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1272 "string.format.m"
                      {
#line 1272 "string.format.m"
                        mercury__string__format__HexUCPrime_43 = (MR_String) "6";
#line 1272 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1272 "string.format.m"
                      }
#line 1266 "string.format.m"
                    else
#line 1266 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1273 "string.format.m"
                        {
#line 1273 "string.format.m"
                          mercury__string__format__HexUCPrime_43 = (MR_String) "7";
#line 1273 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1273 "string.format.m"
                        }
#line 1266 "string.format.m"
                      else
#line 1266 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1274 "string.format.m"
                          {
#line 1274 "string.format.m"
                            mercury__string__format__HexUCPrime_43 = (MR_String) "8";
#line 1274 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1274 "string.format.m"
                          }
#line 1266 "string.format.m"
                        else
#line 1266 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1275 "string.format.m"
                            {
#line 1275 "string.format.m"
                              mercury__string__format__HexUCPrime_43 = (MR_String) "9";
#line 1275 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1275 "string.format.m"
                            }
#line 1266 "string.format.m"
                          else
#line 1266 "string.format.m"
                            if ((mercury__string__format__V_13_13 == (MR_Integer) 10))
#line 1276 "string.format.m"
                              {
#line 1276 "string.format.m"
                                mercury__string__format__HexUCPrime_43 = (MR_String) "A";
#line 1276 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1276 "string.format.m"
                              }
#line 1266 "string.format.m"
                            else
#line 1266 "string.format.m"
                              if ((mercury__string__format__V_13_13 == (MR_Integer) 11))
#line 1277 "string.format.m"
                                {
#line 1277 "string.format.m"
                                  mercury__string__format__HexUCPrime_43 = (MR_String) "B";
#line 1277 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1277 "string.format.m"
                                }
#line 1266 "string.format.m"
                              else
#line 1266 "string.format.m"
                                if ((mercury__string__format__V_13_13 == (MR_Integer) 12))
#line 1278 "string.format.m"
                                  {
#line 1278 "string.format.m"
                                    mercury__string__format__HexUCPrime_43 = (MR_String) "C";
#line 1278 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1278 "string.format.m"
                                  }
#line 1266 "string.format.m"
                                else
#line 1266 "string.format.m"
                                  if ((mercury__string__format__V_13_13 == (MR_Integer) 13))
#line 1279 "string.format.m"
                                    {
#line 1279 "string.format.m"
                                      mercury__string__format__HexUCPrime_43 = (MR_String) "D";
#line 1279 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1279 "string.format.m"
                                    }
#line 1266 "string.format.m"
                                  else
#line 1266 "string.format.m"
                                    if ((mercury__string__format__V_13_13 == (MR_Integer) 14))
#line 1280 "string.format.m"
                                      {
#line 1280 "string.format.m"
                                        mercury__string__format__HexUCPrime_43 = (MR_String) "E";
#line 1280 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1280 "string.format.m"
                                      }
#line 1266 "string.format.m"
                                    else
#line 1266 "string.format.m"
                                      if ((mercury__string__format__V_13_13 == (MR_Integer) 15))
#line 1281 "string.format.m"
                                        {
#line 1281 "string.format.m"
                                          mercury__string__format__HexUCPrime_43 = (MR_String) "F";
#line 1281 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1281 "string.format.m"
                                        }
#line 1266 "string.format.m"
                                      else
#line 1266 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1236 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1235 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexUCPrime_43;
#line 1236 "string.format.m"
        else
#line 1237 "string.format.m"
          {
#line 1237 "string.format.m"
            {
#line 1237 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
#line 1237 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1165 "string.format.m"
      }
#line 1169 "string.format.m"
    else
#line 1170 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1169 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1169 "string.format.m"
  }
#line 1149 "string.format.m"
}

#line 1148 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
#line 1148 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1148 "string.format.m"
{
#line 1159 "string.format.m"
  {
#line 1159 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1159 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1154 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1154 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 60 "integer.opt"
    {
#line 60 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 131 "integer.opt"
    {
#line 131 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 44 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1159 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1155 "string.format.m"
      {
#line 1155 "string.format.m"
        MR_Word mercury__string__format__Integer16_5;
#line 1155 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1155 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1155 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1155 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1155 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1155 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 129 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1229 "string.format.m"
        MR_String mercury__string__format__HexLCPrime_42;

#line 60 "integer.opt"
        {
#line 60 "integer.opt"
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1156 "string.format.m"
        {
#line 1156 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1156 "string.format.m"
        {
#line 1156 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__V_11_11);
        }
#line 129 "integer.opt"
        {
#line 129 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1157 "string.format.m"
        {
#line 1157 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1266 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1266 "string.format.m"
          {
#line 1266 "string.format.m"
            mercury__string__format__HexLCPrime_42 = (MR_String) "0";
#line 1266 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1266 "string.format.m"
          }
#line 1266 "string.format.m"
        else
#line 1266 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1267 "string.format.m"
            {
#line 1267 "string.format.m"
              mercury__string__format__HexLCPrime_42 = (MR_String) "1";
#line 1267 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1267 "string.format.m"
            }
#line 1266 "string.format.m"
          else
#line 1266 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1268 "string.format.m"
              {
#line 1268 "string.format.m"
                mercury__string__format__HexLCPrime_42 = (MR_String) "2";
#line 1268 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1268 "string.format.m"
              }
#line 1266 "string.format.m"
            else
#line 1266 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1269 "string.format.m"
                {
#line 1269 "string.format.m"
                  mercury__string__format__HexLCPrime_42 = (MR_String) "3";
#line 1269 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1269 "string.format.m"
                }
#line 1266 "string.format.m"
              else
#line 1266 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1270 "string.format.m"
                  {
#line 1270 "string.format.m"
                    mercury__string__format__HexLCPrime_42 = (MR_String) "4";
#line 1270 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1270 "string.format.m"
                  }
#line 1266 "string.format.m"
                else
#line 1266 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1271 "string.format.m"
                    {
#line 1271 "string.format.m"
                      mercury__string__format__HexLCPrime_42 = (MR_String) "5";
#line 1271 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1271 "string.format.m"
                    }
#line 1266 "string.format.m"
                  else
#line 1266 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1272 "string.format.m"
                      {
#line 1272 "string.format.m"
                        mercury__string__format__HexLCPrime_42 = (MR_String) "6";
#line 1272 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1272 "string.format.m"
                      }
#line 1266 "string.format.m"
                    else
#line 1266 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1273 "string.format.m"
                        {
#line 1273 "string.format.m"
                          mercury__string__format__HexLCPrime_42 = (MR_String) "7";
#line 1273 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1273 "string.format.m"
                        }
#line 1266 "string.format.m"
                      else
#line 1266 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1274 "string.format.m"
                          {
#line 1274 "string.format.m"
                            mercury__string__format__HexLCPrime_42 = (MR_String) "8";
#line 1274 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1274 "string.format.m"
                          }
#line 1266 "string.format.m"
                        else
#line 1266 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1275 "string.format.m"
                            {
#line 1275 "string.format.m"
                              mercury__string__format__HexLCPrime_42 = (MR_String) "9";
#line 1275 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1275 "string.format.m"
                            }
#line 1266 "string.format.m"
                          else
#line 1266 "string.format.m"
                            if ((mercury__string__format__V_13_13 == (MR_Integer) 10))
#line 1276 "string.format.m"
                              {
#line 1276 "string.format.m"
                                mercury__string__format__HexLCPrime_42 = (MR_String) "a";
#line 1276 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1276 "string.format.m"
                              }
#line 1266 "string.format.m"
                            else
#line 1266 "string.format.m"
                              if ((mercury__string__format__V_13_13 == (MR_Integer) 11))
#line 1277 "string.format.m"
                                {
#line 1277 "string.format.m"
                                  mercury__string__format__HexLCPrime_42 = (MR_String) "b";
#line 1277 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1277 "string.format.m"
                                }
#line 1266 "string.format.m"
                              else
#line 1266 "string.format.m"
                                if ((mercury__string__format__V_13_13 == (MR_Integer) 12))
#line 1278 "string.format.m"
                                  {
#line 1278 "string.format.m"
                                    mercury__string__format__HexLCPrime_42 = (MR_String) "c";
#line 1278 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1278 "string.format.m"
                                  }
#line 1266 "string.format.m"
                                else
#line 1266 "string.format.m"
                                  if ((mercury__string__format__V_13_13 == (MR_Integer) 13))
#line 1279 "string.format.m"
                                    {
#line 1279 "string.format.m"
                                      mercury__string__format__HexLCPrime_42 = (MR_String) "d";
#line 1279 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1279 "string.format.m"
                                    }
#line 1266 "string.format.m"
                                  else
#line 1266 "string.format.m"
                                    if ((mercury__string__format__V_13_13 == (MR_Integer) 14))
#line 1280 "string.format.m"
                                      {
#line 1280 "string.format.m"
                                        mercury__string__format__HexLCPrime_42 = (MR_String) "e";
#line 1280 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1280 "string.format.m"
                                      }
#line 1266 "string.format.m"
                                    else
#line 1266 "string.format.m"
                                      if ((mercury__string__format__V_13_13 == (MR_Integer) 15))
#line 1281 "string.format.m"
                                        {
#line 1281 "string.format.m"
                                          mercury__string__format__HexLCPrime_42 = (MR_String) "f";
#line 1281 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1281 "string.format.m"
                                        }
#line 1266 "string.format.m"
                                      else
#line 1266 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1229 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1228 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexLCPrime_42;
#line 1229 "string.format.m"
        else
#line 1230 "string.format.m"
          {
#line 1230 "string.format.m"
            {
#line 1230 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
#line 1230 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1155 "string.format.m"
      }
#line 1159 "string.format.m"
    else
#line 1160 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1159 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1159 "string.format.m"
  }
#line 1148 "string.format.m"
}

#line 1124 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
#line 1124 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1124 "string.format.m"
{
#line 1141 "string.format.m"
  {
#line 1141 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1141 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1141 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1138 "string.format.m"
      {
#line 1138 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1138 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1138 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 10);
#line 1138 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1213 "string.format.m"
        MR_String mercury__string__format__DecimalPrime_26;

#line 1138 "string.format.m"
        {
#line 1138 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 10);
#line 1253 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1253 "string.format.m"
          {
#line 1253 "string.format.m"
            mercury__string__format__DecimalPrime_26 = (MR_String) "0";
#line 1253 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1253 "string.format.m"
          }
#line 1253 "string.format.m"
        else
#line 1253 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1254 "string.format.m"
            {
#line 1254 "string.format.m"
              mercury__string__format__DecimalPrime_26 = (MR_String) "1";
#line 1254 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1254 "string.format.m"
            }
#line 1253 "string.format.m"
          else
#line 1253 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1255 "string.format.m"
              {
#line 1255 "string.format.m"
                mercury__string__format__DecimalPrime_26 = (MR_String) "2";
#line 1255 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1255 "string.format.m"
              }
#line 1253 "string.format.m"
            else
#line 1253 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1256 "string.format.m"
                {
#line 1256 "string.format.m"
                  mercury__string__format__DecimalPrime_26 = (MR_String) "3";
#line 1256 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1256 "string.format.m"
                }
#line 1253 "string.format.m"
              else
#line 1253 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1257 "string.format.m"
                  {
#line 1257 "string.format.m"
                    mercury__string__format__DecimalPrime_26 = (MR_String) "4";
#line 1257 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1257 "string.format.m"
                  }
#line 1253 "string.format.m"
                else
#line 1253 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1258 "string.format.m"
                    {
#line 1258 "string.format.m"
                      mercury__string__format__DecimalPrime_26 = (MR_String) "5";
#line 1258 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1258 "string.format.m"
                    }
#line 1253 "string.format.m"
                  else
#line 1253 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1259 "string.format.m"
                      {
#line 1259 "string.format.m"
                        mercury__string__format__DecimalPrime_26 = (MR_String) "6";
#line 1259 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1259 "string.format.m"
                      }
#line 1253 "string.format.m"
                    else
#line 1253 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1260 "string.format.m"
                        {
#line 1260 "string.format.m"
                          mercury__string__format__DecimalPrime_26 = (MR_String) "7";
#line 1260 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1260 "string.format.m"
                        }
#line 1253 "string.format.m"
                      else
#line 1253 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1261 "string.format.m"
                          {
#line 1261 "string.format.m"
                            mercury__string__format__DecimalPrime_26 = (MR_String) "8";
#line 1261 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1261 "string.format.m"
                          }
#line 1253 "string.format.m"
                        else
#line 1253 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1262 "string.format.m"
                            {
#line 1262 "string.format.m"
                              mercury__string__format__DecimalPrime_26 = (MR_String) "9";
#line 1262 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1262 "string.format.m"
                            }
#line 1253 "string.format.m"
                          else
#line 1253 "string.format.m"
                            mercury__string__format__succeeded = MR_FALSE;
#line 1213 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1212 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__DecimalPrime_26;
#line 1213 "string.format.m"
        else
#line 1214 "string.format.m"
          {
#line 1214 "string.format.m"
            {
#line 1214 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
#line 1214 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1138 "string.format.m"
      }
#line 1141 "string.format.m"
    else
#line 1142 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1141 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1141 "string.format.m"
  }
#line 1124 "string.format.m"
}

#line 1123 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
#line 1123 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1123 "string.format.m"
{
#line 1132 "string.format.m"
  {
#line 1132 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1132 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1127 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1127 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 60 "integer.opt"
    {
#line 60 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 131 "integer.opt"
    {
#line 131 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 44 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1132 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1128 "string.format.m"
      {
#line 1128 "string.format.m"
        MR_Word mercury__string__format__Integer10_5;
#line 1128 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1128 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1128 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1128 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1128 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1128 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 129 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1213 "string.format.m"
        MR_String mercury__string__format__DecimalPrime_42;

#line 60 "integer.opt"
        {
#line 60 "integer.opt"
          mercury__string__format__Integer10_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1129 "string.format.m"
        {
#line 1129 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1129 "string.format.m"
        {
#line 1129 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_11_11);
        }
#line 129 "integer.opt"
        {
#line 129 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1130 "string.format.m"
        {
#line 1130 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1253 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1253 "string.format.m"
          {
#line 1253 "string.format.m"
            mercury__string__format__DecimalPrime_42 = (MR_String) "0";
#line 1253 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1253 "string.format.m"
          }
#line 1253 "string.format.m"
        else
#line 1253 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1254 "string.format.m"
            {
#line 1254 "string.format.m"
              mercury__string__format__DecimalPrime_42 = (MR_String) "1";
#line 1254 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1254 "string.format.m"
            }
#line 1253 "string.format.m"
          else
#line 1253 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1255 "string.format.m"
              {
#line 1255 "string.format.m"
                mercury__string__format__DecimalPrime_42 = (MR_String) "2";
#line 1255 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1255 "string.format.m"
              }
#line 1253 "string.format.m"
            else
#line 1253 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1256 "string.format.m"
                {
#line 1256 "string.format.m"
                  mercury__string__format__DecimalPrime_42 = (MR_String) "3";
#line 1256 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1256 "string.format.m"
                }
#line 1253 "string.format.m"
              else
#line 1253 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1257 "string.format.m"
                  {
#line 1257 "string.format.m"
                    mercury__string__format__DecimalPrime_42 = (MR_String) "4";
#line 1257 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1257 "string.format.m"
                  }
#line 1253 "string.format.m"
                else
#line 1253 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1258 "string.format.m"
                    {
#line 1258 "string.format.m"
                      mercury__string__format__DecimalPrime_42 = (MR_String) "5";
#line 1258 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1258 "string.format.m"
                    }
#line 1253 "string.format.m"
                  else
#line 1253 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1259 "string.format.m"
                      {
#line 1259 "string.format.m"
                        mercury__string__format__DecimalPrime_42 = (MR_String) "6";
#line 1259 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1259 "string.format.m"
                      }
#line 1253 "string.format.m"
                    else
#line 1253 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1260 "string.format.m"
                        {
#line 1260 "string.format.m"
                          mercury__string__format__DecimalPrime_42 = (MR_String) "7";
#line 1260 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1260 "string.format.m"
                        }
#line 1253 "string.format.m"
                      else
#line 1253 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1261 "string.format.m"
                          {
#line 1261 "string.format.m"
                            mercury__string__format__DecimalPrime_42 = (MR_String) "8";
#line 1261 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1261 "string.format.m"
                          }
#line 1253 "string.format.m"
                        else
#line 1253 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1262 "string.format.m"
                            {
#line 1262 "string.format.m"
                              mercury__string__format__DecimalPrime_42 = (MR_String) "9";
#line 1262 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1262 "string.format.m"
                            }
#line 1253 "string.format.m"
                          else
#line 1253 "string.format.m"
                            mercury__string__format__succeeded = MR_FALSE;
#line 1213 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1212 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__DecimalPrime_42;
#line 1213 "string.format.m"
        else
#line 1214 "string.format.m"
          {
#line 1214 "string.format.m"
            {
#line 1214 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
#line 1214 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1128 "string.format.m"
      }
#line 1132 "string.format.m"
    else
#line 1133 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1132 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1132 "string.format.m"
  }
#line 1123 "string.format.m"
}

#line 1100 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
#line 1100 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1100 "string.format.m"
{
#line 1117 "string.format.m"
  {
#line 1117 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1117 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1117 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1114 "string.format.m"
      {
#line 1114 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1114 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1114 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 8);
#line 1114 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1201 "string.format.m"
        MR_String mercury__string__format__OctalPrime_26;

#line 1114 "string.format.m"
        {
#line 1114 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 8);
#line 1242 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1242 "string.format.m"
          {
#line 1242 "string.format.m"
            mercury__string__format__OctalPrime_26 = (MR_String) "0";
#line 1242 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1242 "string.format.m"
          }
#line 1242 "string.format.m"
        else
#line 1242 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1243 "string.format.m"
            {
#line 1243 "string.format.m"
              mercury__string__format__OctalPrime_26 = (MR_String) "1";
#line 1243 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1243 "string.format.m"
            }
#line 1242 "string.format.m"
          else
#line 1242 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1244 "string.format.m"
              {
#line 1244 "string.format.m"
                mercury__string__format__OctalPrime_26 = (MR_String) "2";
#line 1244 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1244 "string.format.m"
              }
#line 1242 "string.format.m"
            else
#line 1242 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1245 "string.format.m"
                {
#line 1245 "string.format.m"
                  mercury__string__format__OctalPrime_26 = (MR_String) "3";
#line 1245 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1245 "string.format.m"
                }
#line 1242 "string.format.m"
              else
#line 1242 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1246 "string.format.m"
                  {
#line 1246 "string.format.m"
                    mercury__string__format__OctalPrime_26 = (MR_String) "4";
#line 1246 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1246 "string.format.m"
                  }
#line 1242 "string.format.m"
                else
#line 1242 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1247 "string.format.m"
                    {
#line 1247 "string.format.m"
                      mercury__string__format__OctalPrime_26 = (MR_String) "5";
#line 1247 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1247 "string.format.m"
                    }
#line 1242 "string.format.m"
                  else
#line 1242 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1248 "string.format.m"
                      {
#line 1248 "string.format.m"
                        mercury__string__format__OctalPrime_26 = (MR_String) "6";
#line 1248 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1248 "string.format.m"
                      }
#line 1242 "string.format.m"
                    else
#line 1242 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1249 "string.format.m"
                        {
#line 1249 "string.format.m"
                          mercury__string__format__OctalPrime_26 = (MR_String) "7";
#line 1249 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1249 "string.format.m"
                        }
#line 1242 "string.format.m"
                      else
#line 1242 "string.format.m"
                        mercury__string__format__succeeded = MR_FALSE;
#line 1201 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1200 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__OctalPrime_26;
#line 1201 "string.format.m"
        else
#line 1202 "string.format.m"
          {
#line 1202 "string.format.m"
            {
#line 1202 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
#line 1202 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1114 "string.format.m"
      }
#line 1117 "string.format.m"
    else
#line 1118 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1117 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1117 "string.format.m"
  }
#line 1100 "string.format.m"
}

#line 1099 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
#line 1099 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1099 "string.format.m"
{
#line 1108 "string.format.m"
  {
#line 1108 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1108 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1103 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1103 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 60 "integer.opt"
    {
#line 60 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 131 "integer.opt"
    {
#line 131 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 44 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1108 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1104 "string.format.m"
      {
#line 1104 "string.format.m"
        MR_Word mercury__string__format__Integer8_5;
#line 1104 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1104 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1104 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1104 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1104 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1104 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 129 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1201 "string.format.m"
        MR_String mercury__string__format__OctalPrime_42;

#line 60 "integer.opt"
        {
#line 60 "integer.opt"
          mercury__string__format__Integer8_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 8);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1105 "string.format.m"
        {
#line 1105 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1105 "string.format.m"
        {
#line 1105 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__V_11_11);
        }
#line 129 "integer.opt"
        {
#line 129 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1106 "string.format.m"
        {
#line 1106 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1242 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1242 "string.format.m"
          {
#line 1242 "string.format.m"
            mercury__string__format__OctalPrime_42 = (MR_String) "0";
#line 1242 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1242 "string.format.m"
          }
#line 1242 "string.format.m"
        else
#line 1242 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1243 "string.format.m"
            {
#line 1243 "string.format.m"
              mercury__string__format__OctalPrime_42 = (MR_String) "1";
#line 1243 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1243 "string.format.m"
            }
#line 1242 "string.format.m"
          else
#line 1242 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1244 "string.format.m"
              {
#line 1244 "string.format.m"
                mercury__string__format__OctalPrime_42 = (MR_String) "2";
#line 1244 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1244 "string.format.m"
              }
#line 1242 "string.format.m"
            else
#line 1242 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1245 "string.format.m"
                {
#line 1245 "string.format.m"
                  mercury__string__format__OctalPrime_42 = (MR_String) "3";
#line 1245 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1245 "string.format.m"
                }
#line 1242 "string.format.m"
              else
#line 1242 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1246 "string.format.m"
                  {
#line 1246 "string.format.m"
                    mercury__string__format__OctalPrime_42 = (MR_String) "4";
#line 1246 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1246 "string.format.m"
                  }
#line 1242 "string.format.m"
                else
#line 1242 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1247 "string.format.m"
                    {
#line 1247 "string.format.m"
                      mercury__string__format__OctalPrime_42 = (MR_String) "5";
#line 1247 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1247 "string.format.m"
                    }
#line 1242 "string.format.m"
                  else
#line 1242 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1248 "string.format.m"
                      {
#line 1248 "string.format.m"
                        mercury__string__format__OctalPrime_42 = (MR_String) "6";
#line 1248 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1248 "string.format.m"
                      }
#line 1242 "string.format.m"
                    else
#line 1242 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1249 "string.format.m"
                        {
#line 1249 "string.format.m"
                          mercury__string__format__OctalPrime_42 = (MR_String) "7";
#line 1249 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1249 "string.format.m"
                        }
#line 1242 "string.format.m"
                      else
#line 1242 "string.format.m"
                        mercury__string__format__succeeded = MR_FALSE;
#line 1201 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1200 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__OctalPrime_42;
#line 1201 "string.format.m"
        else
#line 1202 "string.format.m"
          {
#line 1202 "string.format.m"
            {
#line 1202 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
#line 1202 "string.format.m"
          }
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1104 "string.format.m"
      }
#line 1108 "string.format.m"
    else
#line 1109 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1108 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1108 "string.format.m"
  }
#line 1099 "string.format.m"
}

#line 1063 "string.format.m"
MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
#line 1063 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 1063 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_6,
#line 1063 "string.format.m"
  MR_String mercury__string__format__Str_7)
#line 1063 "string.format.m"
{
#line 1076 "string.format.m"
  {
#line 1076 "string.format.m"
    MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_6)) == (MR_mktag((MR_Integer) 1)));
#line 1076 "string.format.m"
    MR_String mercury__string__format__JustifiedStr_8;
#line 1076 "string.format.m"
    MR_Integer mercury__string__format__Width_9;
#line 1068 "string.format.m"
    MR_Integer mercury__string__format__V_10_10;

#line 1068 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1068 "string.format.m"
      {
#line 1068 "string.format.m"
        mercury__string__format__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_6, (MR_Integer) 0)));
#line 254 "string.opt"
        {
#line 254 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__Str_7, &mercury__string__format__V_10_10);
        }
#line 1069 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_9 > mercury__string__format__V_10_10);
#line 1068 "string.format.m"
      }
#line 1076 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1073 "string.format.m"
      {
#line 1071 "string.format.m"
        MR_Word mercury__string__format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1071 "string.format.m"
        MR_Word mercury__string__format__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1071 "string.format.m"
        MR_Word mercury__string__format__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1071 "string.format.m"
        MR_Word mercury__string__format__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1071 "string.format.m"
        MR_Word mercury__string__format__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1071 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_11_11 == (MR_Integer) 1);
#line 1073 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1072 "string.format.m"
          {
#line 1072 "string.format.m"
            {
#line 1072 "string.format.m"
              mercury__string__pad_right_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
#line 1072 "string.format.m"
          }
#line 1073 "string.format.m"
        else
#line 1074 "string.format.m"
          {
#line 1074 "string.format.m"
            {
#line 1074 "string.format.m"
              mercury__string__pad_left_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
#line 1074 "string.format.m"
          }
#line 1073 "string.format.m"
      }
#line 1076 "string.format.m"
    else
#line 1077 "string.format.m"
      mercury__string__format__JustifiedStr_8 = mercury__string__format__Str_7;
#line 1076 "string.format.m"
    return mercury__string__format__JustifiedStr_8;
#line 1076 "string.format.m"
  }
#line 1063 "string.format.m"
}

#line 878 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
#line 878 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 878 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 878 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 878 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 878 "string.format.m"
  MR_Float mercury__string__format__Float_11)
#line 878 "string.format.m"
{
#line 881 "string.format.m"
  {
#line 881 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 881 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 881 "string.format.m"
    MR_String mercury__string__format__SignedStr_13;

#line 120 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{
#line 120 "float.opt"

    SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 5828 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 120 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 896 "string.format.m"
    if (mercury__string__format__succeeded)
#line 889 "string.format.m"
      if ((((((mercury__string__format__Kind_10 == (MR_Integer) 0)) || ((mercury__string__format__Kind_10 == (MR_Integer) 2)))) || ((mercury__string__format__Kind_10 == (MR_Integer) 4))))
#line 888 "string.format.m"
        mercury__string__format__SignedStr_13 = (MR_String) "nan";
#line 889 "string.format.m"
      else
#line 894 "string.format.m"
        mercury__string__format__SignedStr_13 = (MR_String) "NAN";
#line 896 "string.format.m"
    else
#line 910 "string.format.m"
      {
#line 117 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{
#line 117 "float.opt"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 5864 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 117 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 910 "string.format.m"
        if (mercury__string__format__succeeded)
#line 903 "string.format.m"
          if ((((((mercury__string__format__Kind_10 == (MR_Integer) 0)) || ((mercury__string__format__Kind_10 == (MR_Integer) 2)))) || ((mercury__string__format__Kind_10 == (MR_Integer) 4))))
#line 902 "string.format.m"
            {
#line 902 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 902 "string.format.m"
              if (mercury__string__format__succeeded)
#line 902 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "-infinity";
#line 902 "string.format.m"
              else
#line 902 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "infinity";
#line 902 "string.format.m"
            }
#line 903 "string.format.m"
          else
#line 908 "string.format.m"
            {
#line 908 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 908 "string.format.m"
              if (mercury__string__format__succeeded)
#line 908 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "-INFINITY";
#line 908 "string.format.m"
              else
#line 908 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "INFINITY";
#line 908 "string.format.m"
            }
#line 910 "string.format.m"
        else
#line 915 "string.format.m"
          {
#line 915 "string.format.m"
            MR_Float mercury__string__format__AbsFloat_14;
#line 915 "string.format.m"
            MR_String mercury__string__format__AbsStr_15;
#line 915 "string.format.m"
            MR_String mercury__string__format__PrecModStr_21;
#line 915 "string.format.m"
            MR_String mercury__string__format__FieldStr_24;
#line 915 "string.format.m"
            MR_Word mercury__string__format__ZeroPadded_25;
#line 973 "string.format.m"
            MR_Integer mercury__string__format__Width_23;
#line 966 "string.format.m"
            MR_Integer mercury__string__format__V_35_35;
#line 966 "string.format.m"
            MR_Word mercury__string__format__V_36_36;
#line 966 "string.format.m"
            MR_Word mercury__string__format__V_56_56;
#line 968 "string.format.m"
            MR_Word mercury__string__format__V_54_54;
#line 968 "string.format.m"
            MR_Word mercury__string__format__V_55_55;
#line 968 "string.format.m"
            MR_Word mercury__string__format__V_57_57;

#line 915 "string.format.m"
            {
#line 915 "string.format.m"
              mercury__string__format__AbsFloat_14 = mercury__float__abs_1_f_0(mercury__string__format__Float_11);
            }
#line 916 "string.format.m"
            {
#line 916 "string.format.m"
              mercury__string__format__AbsStr_15 = mercury__string__format__convert_float_to_string_1_f_0(mercury__string__format__AbsFloat_14);
            }
#line 936 "string.format.m"
            if ((mercury__string__format__Kind_10 == (MR_Integer) 0))
#line 922 "string.format.m"
              {
#line 922 "string.format.m"
                MR_Integer mercury__string__format__Prec_17;
#line 922 "string.format.m"
                MR_String mercury__string__format__PrecStr_18;
#line 928 "string.format.m"
                MR_Word mercury__string__format__V_33_33;
#line 928 "string.format.m"
                MR_Integer mercury__string__format__V_34_34;
#line 928 "string.format.m"
                MR_Word mercury__string__format__V_46_46;
#line 928 "string.format.m"
                MR_Word mercury__string__format__V_47_47;
#line 928 "string.format.m"
                MR_Word mercury__string__format__V_48_48;
#line 928 "string.format.m"
                MR_Word mercury__string__format__V_49_49;

#line 989 "string.format.m"
                if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "string.format.m"
                  mercury__string__format__Prec_17 = (MR_Integer) 6;
#line 989 "string.format.m"
                else
#line 989 "string.format.m"
                  mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 924 "string.format.m"
                {
#line 924 "string.format.m"
                  mercury__string__format__PrecStr_18 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_17, (MR_String) "e");
                }
#line 928 "string.format.m"
                mercury__string__format__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 928 "string.format.m"
                mercury__string__format__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 928 "string.format.m"
                mercury__string__format__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 928 "string.format.m"
                mercury__string__format__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 928 "string.format.m"
                mercury__string__format__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 928 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_33_33 == (MR_Integer) 0);
#line 928 "string.format.m"
                if (mercury__string__format__succeeded)
#line 928 "string.format.m"
                  {
#line 929 "string.format.m"
                    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 929 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 929 "string.format.m"
                      {
#line 929 "string.format.m"
                        mercury__string__format__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 929 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__V_34_34 == (MR_Integer) 0);
#line 929 "string.format.m"
                      }
#line 928 "string.format.m"
                  }
#line 933 "string.format.m"
                if (mercury__string__format__succeeded)
#line 931 "string.format.m"
                  {
#line 931 "string.format.m"
                    MR_String mercury__string__format__BaseStr_19;
#line 931 "string.format.m"
                    MR_String mercury__string__format__ExponentStr_20;

#line 931 "string.format.m"
                    {
#line 931 "string.format.m"
                      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_18, &mercury__string__format__BaseStr_19, &mercury__string__format__ExponentStr_20);
                    }
#line 932 "string.format.m"
                    {
#line 932 "string.format.m"
                      mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_19, mercury__string__format__ExponentStr_20);
                    }
#line 931 "string.format.m"
                  }
#line 933 "string.format.m"
                else
#line 934 "string.format.m"
                  mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_18;
#line 922 "string.format.m"
              }
#line 936 "string.format.m"
            else
#line 936 "string.format.m"
              if ((mercury__string__format__Kind_10 == (MR_Integer) 1))
#line 922 "string.format.m"
                {
#line 922 "string.format.m"
                  MR_Integer mercury__string__format__Prec_83;
#line 922 "string.format.m"
                  MR_String mercury__string__format__PrecStr_84;
#line 928 "string.format.m"
                  MR_Word mercury__string__format__V_66_66;
#line 928 "string.format.m"
                  MR_Integer mercury__string__format__V_67_67;
#line 928 "string.format.m"
                  MR_Word mercury__string__format__V_62_62;
#line 928 "string.format.m"
                  MR_Word mercury__string__format__V_63_63;
#line 928 "string.format.m"
                  MR_Word mercury__string__format__V_64_64;
#line 928 "string.format.m"
                  MR_Word mercury__string__format__V_65_65;

#line 989 "string.format.m"
                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "string.format.m"
                    mercury__string__format__Prec_83 = (MR_Integer) 6;
#line 989 "string.format.m"
                  else
#line 989 "string.format.m"
                    mercury__string__format__Prec_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 924 "string.format.m"
                  {
#line 924 "string.format.m"
                    mercury__string__format__PrecStr_84 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_83, (MR_String) "E");
                  }
#line 928 "string.format.m"
                  mercury__string__format__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 928 "string.format.m"
                  mercury__string__format__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 928 "string.format.m"
                  mercury__string__format__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 928 "string.format.m"
                  mercury__string__format__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 928 "string.format.m"
                  mercury__string__format__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 928 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__V_66_66 == (MR_Integer) 0);
#line 928 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 928 "string.format.m"
                    {
#line 929 "string.format.m"
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 929 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 929 "string.format.m"
                        {
#line 929 "string.format.m"
                          mercury__string__format__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 929 "string.format.m"
                          mercury__string__format__succeeded = (mercury__string__format__V_67_67 == (MR_Integer) 0);
#line 929 "string.format.m"
                        }
#line 928 "string.format.m"
                    }
#line 933 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 931 "string.format.m"
                    {
#line 931 "string.format.m"
                      MR_String mercury__string__format__BaseStr_72;
#line 931 "string.format.m"
                      MR_String mercury__string__format__ExponentStr_73;

#line 931 "string.format.m"
                      {
#line 931 "string.format.m"
                        mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_84, &mercury__string__format__BaseStr_72, &mercury__string__format__ExponentStr_73);
                      }
#line 932 "string.format.m"
                      {
#line 932 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_72, mercury__string__format__ExponentStr_73);
                      }
#line 931 "string.format.m"
                    }
#line 933 "string.format.m"
                  else
#line 934 "string.format.m"
                    mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_84;
#line 922 "string.format.m"
                }
#line 936 "string.format.m"
              else
#line 936 "string.format.m"
                if ((mercury__string__format__Kind_10 == (MR_Integer) 4))
#line 956 "string.format.m"
                  {
#line 956 "string.format.m"
                    MR_Integer mercury__string__format__Prec_44;

#line 1001 "string.format.m"
                    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "string.format.m"
                      mercury__string__format__Prec_44 = (MR_Integer) 6;
#line 1001 "string.format.m"
                    else
#line 1001 "string.format.m"
                      {
#line 1001 "string.format.m"
                        MR_Integer mercury__string__format__Prec0_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 1002 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__Prec0_105 == (MR_Integer) 0);
#line 1004 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 1003 "string.format.m"
                          mercury__string__format__Prec_44 = (MR_Integer) 1;
#line 1004 "string.format.m"
                        else
#line 1005 "string.format.m"
                          mercury__string__format__Prec_44 = mercury__string__format__Prec0_105;
#line 1001 "string.format.m"
                      }
#line 958 "string.format.m"
                    {
#line 958 "string.format.m"
                      mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_44, (MR_String) "e", mercury__string__format__Flags_7);
                    }
#line 956 "string.format.m"
                  }
#line 936 "string.format.m"
                else
#line 936 "string.format.m"
                  if ((mercury__string__format__Kind_10 == (MR_Integer) 5))
#line 956 "string.format.m"
                    {
#line 956 "string.format.m"
                      MR_Integer mercury__string__format__Prec_94;

#line 1001 "string.format.m"
                      if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "string.format.m"
                        mercury__string__format__Prec_94 = (MR_Integer) 6;
#line 1001 "string.format.m"
                      else
#line 1001 "string.format.m"
                        {
#line 1001 "string.format.m"
                          MR_Integer mercury__string__format__Prec0_108 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 1002 "string.format.m"
                          mercury__string__format__succeeded = (mercury__string__format__Prec0_108 == (MR_Integer) 0);
#line 1004 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 1003 "string.format.m"
                            mercury__string__format__Prec_94 = (MR_Integer) 1;
#line 1004 "string.format.m"
                          else
#line 1005 "string.format.m"
                            mercury__string__format__Prec_94 = mercury__string__format__Prec0_108;
#line 1001 "string.format.m"
                        }
#line 958 "string.format.m"
                      {
#line 958 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_94, (MR_String) "E", mercury__string__format__Flags_7);
                      }
#line 956 "string.format.m"
                    }
#line 936 "string.format.m"
                  else
#line 939 "string.format.m"
                    {
#line 939 "string.format.m"
                      MR_Integer mercury__string__format__Prec_41;
#line 939 "string.format.m"
                      MR_String mercury__string__format__PrecStr_42;
#line 945 "string.format.m"
                      MR_Word mercury__string__format__V_28_28;
#line 945 "string.format.m"
                      MR_Integer mercury__string__format__V_29_29;
#line 945 "string.format.m"
                      MR_Word mercury__string__format__V_50_50;
#line 945 "string.format.m"
                      MR_Word mercury__string__format__V_51_51;
#line 945 "string.format.m"
                      MR_Word mercury__string__format__V_52_52;
#line 945 "string.format.m"
                      MR_Word mercury__string__format__V_53_53;

#line 989 "string.format.m"
                      if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "string.format.m"
                        mercury__string__format__Prec_41 = (MR_Integer) 6;
#line 989 "string.format.m"
                      else
#line 989 "string.format.m"
                        mercury__string__format__Prec_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 941 "string.format.m"
                      {
#line 941 "string.format.m"
                        mercury__string__format__PrecStr_42 = mercury__string__format__change_precision_2_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_41);
                      }
#line 945 "string.format.m"
                      mercury__string__format__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 945 "string.format.m"
                      mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 945 "string.format.m"
                      mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 945 "string.format.m"
                      mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 945 "string.format.m"
                      mercury__string__format__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 945 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_28_28 == (MR_Integer) 0);
#line 945 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 945 "string.format.m"
                        {
#line 946 "string.format.m"
                          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 946 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 946 "string.format.m"
                            {
#line 946 "string.format.m"
                              mercury__string__format__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 946 "string.format.m"
                              mercury__string__format__succeeded = (mercury__string__format__V_29_29 == (MR_Integer) 0);
#line 946 "string.format.m"
                            }
#line 945 "string.format.m"
                        }
#line 950 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 948 "string.format.m"
                        {
#line 948 "string.format.m"
                          MR_Integer mercury__string__format__PrecStrLen_22;
#line 948 "string.format.m"
                          MR_Integer mercury__string__format__V_31_31;

#line 948 "string.format.m"
                          {
#line 948 "string.format.m"
                            mercury__string__format__PrecStrLen_22 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecStr_42);
                          }
#line 949 "string.format.m"
                          mercury__string__format__V_31_31 = (mercury__string__format__PrecStrLen_22 - (MR_Integer) 1);
#line 949 "string.format.m"
                          {
#line 949 "string.format.m"
                            mercury__string__format__PrecModStr_21 = mercury__string__between_3_f_0(mercury__string__format__PrecStr_42, (MR_Integer) 0, mercury__string__format__V_31_31);
                          }
#line 948 "string.format.m"
                        }
#line 950 "string.format.m"
                      else
#line 951 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_42;
#line 939 "string.format.m"
                    }
#line 966 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
#line 966 "string.format.m"
            if (mercury__string__format__succeeded)
#line 966 "string.format.m"
              {
#line 966 "string.format.m"
                mercury__string__format__Width_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
#line 967 "string.format.m"
                {
#line 967 "string.format.m"
                  mercury__string__format__V_35_35 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecModStr_21);
                }
#line 967 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Width_23 > mercury__string__format__V_35_35);
#line 966 "string.format.m"
                if (mercury__string__format__succeeded)
#line 966 "string.format.m"
                  {
#line 968 "string.format.m"
                    mercury__string__format__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 968 "string.format.m"
                    mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 968 "string.format.m"
                    mercury__string__format__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 968 "string.format.m"
                    mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 968 "string.format.m"
                    mercury__string__format__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 968 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_36_36 == (MR_Integer) 1);
#line 966 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 969 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_56_56 == (MR_Integer) 0);
#line 966 "string.format.m"
                  }
#line 966 "string.format.m"
              }
#line 973 "string.format.m"
            if (mercury__string__format__succeeded)
#line 971 "string.format.m"
              {
#line 971 "string.format.m"
                MR_Integer mercury__string__format__V_39_39 = (mercury__string__format__Width_23 - (MR_Integer) 1);

#line 971 "string.format.m"
                {
#line 971 "string.format.m"
                  mercury__string__format__FieldStr_24 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_21, (MR_Char) 48, mercury__string__format__V_39_39);
                }
#line 972 "string.format.m"
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 1;
#line 971 "string.format.m"
              }
#line 973 "string.format.m"
            else
#line 974 "string.format.m"
              {
#line 974 "string.format.m"
                mercury__string__format__FieldStr_24 = mercury__string__format__PrecModStr_21;
#line 975 "string.format.m"
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 0;
#line 974 "string.format.m"
              }
#line 1047 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 1049 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1048 "string.format.m"
              {
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                }
#line 1048 "string.format.m"
              }
#line 1049 "string.format.m"
            else
#line 1051 "string.format.m"
              {
#line 1049 "string.format.m"
                MR_Word mercury__string__format__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1049 "string.format.m"
                MR_Word mercury__string__format__V_121_121 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1049 "string.format.m"
                MR_Word mercury__string__format__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1049 "string.format.m"
                MR_Word mercury__string__format__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1049 "string.format.m"
                MR_Word mercury__string__format__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1049 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_116_116 == (MR_Integer) 1);
#line 1051 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1050 "string.format.m"
                  {
#line 411 "string.opt"
                    {
#line 411 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                    }
#line 1050 "string.format.m"
                  }
#line 1051 "string.format.m"
                else
#line 1053 "string.format.m"
                  {
#line 1051 "string.format.m"
                    MR_Word mercury__string__format__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1051 "string.format.m"
                    MR_Word mercury__string__format__V_125_125 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1051 "string.format.m"
                    MR_Word mercury__string__format__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1051 "string.format.m"
                    MR_Word mercury__string__format__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1051 "string.format.m"
                    MR_Word mercury__string__format__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1051 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_118_118 == (MR_Integer) 1);
#line 1053 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1052 "string.format.m"
                      {
#line 411 "string.opt"
                        {
#line 411 "string.opt"
                          mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                        }
#line 1052 "string.format.m"
                      }
#line 1053 "string.format.m"
                    else
#line 1057 "string.format.m"
                      if ((mercury__string__format__ZeroPadded_25 == (MR_Integer) 0))
#line 1059 "string.format.m"
                        mercury__string__format__SignedStr_13 = mercury__string__format__FieldStr_24;
#line 1057 "string.format.m"
                      else
#line 1055 "string.format.m"
                        {
#line 411 "string.opt"
                          {
#line 411 "string.opt"
                            mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                          }
#line 1055 "string.format.m"
                        }
#line 1053 "string.format.m"
                  }
#line 1051 "string.format.m"
              }
#line 915 "string.format.m"
          }
#line 910 "string.format.m"
      }
#line 982 "string.format.m"
    {
#line 982 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__SignedStr_13);
    }
#line 881 "string.format.m"
    return mercury__string__format__String_12;
#line 881 "string.format.m"
  }
#line 878 "string.format.m"
}

#line 736 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
#line 736 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 736 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 736 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 736 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 736 "string.format.m"
  MR_Integer mercury__string__format__Int_11)
#line 736 "string.format.m"
{
#line 739 "string.format.m"
  {
#line 739 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 739 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 739 "string.format.m"
    MR_String mercury__string__format__AbsIntStr_13;
#line 739 "string.format.m"
    MR_Integer mercury__string__format__AbsIntStrLength_16;
#line 739 "string.format.m"
    MR_String mercury__string__format__PrecStr_18;
#line 739 "string.format.m"
    MR_String mercury__string__format__PrecModStr_19;
#line 739 "string.format.m"
    MR_String mercury__string__format__FieldModStr_23;
#line 803 "string.format.m"
    MR_Integer mercury__string__format__Prec_17;
#line 809 "string.format.m"
    MR_Word mercury__string__format__V_33_33;
#line 810 "string.format.m"
    MR_Word mercury__string__format__V_49_49;
#line 810 "string.format.m"
    MR_Word mercury__string__format__V_50_50;
#line 810 "string.format.m"
    MR_Word mercury__string__format__V_51_51;
#line 810 "string.format.m"
    MR_Word mercury__string__format__V_52_52;
#line 811 "string.format.m"
    MR_String mercury__string__format__V_34_34;
#line 848 "string.format.m"
    MR_Integer mercury__string__format__Width_20;
#line 820 "string.format.m"
    MR_Integer mercury__string__format__V_36_36;
#line 820 "string.format.m"
    MR_Word mercury__string__format__V_37_37;
#line 820 "string.format.m"
    MR_Word mercury__string__format__V_55_55;
#line 822 "string.format.m"
    MR_Word mercury__string__format__V_53_53;
#line 822 "string.format.m"
    MR_Word mercury__string__format__V_54_54;
#line 822 "string.format.m"
    MR_Word mercury__string__format__V_56_56;

#line 749 "string.format.m"
    if (mercury__string__format__succeeded)
#line 746 "string.format.m"
      {
#line 744 "string.format.m"
        MR_Integer mercury__string__format__V_24_24;

#line 744 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 744 "string.format.m"
        if (mercury__string__format__succeeded)
#line 744 "string.format.m"
          {
#line 744 "string.format.m"
            mercury__string__format__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 744 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_24_24 == (MR_Integer) 0);
#line 744 "string.format.m"
          }
#line 746 "string.format.m"
        if (mercury__string__format__succeeded)
#line 745 "string.format.m"
          mercury__string__format__AbsIntStr_13 = (MR_String) "";
#line 746 "string.format.m"
        else
#line 747 "string.format.m"
          mercury__string__format__AbsIntStr_13 = (MR_String) "0";
#line 746 "string.format.m"
      }
#line 749 "string.format.m"
    else
#line 775 "string.format.m"
      {
#line 759 "string.format.m"
        MR_Integer mercury__string__format__V_26_26;

#line 759 "string.format.m"
        mercury__string__format__succeeded = ((MR_Integer) 0 <= mercury__string__format__Int_11);
#line 759 "string.format.m"
        if (mercury__string__format__succeeded)
#line 759 "string.format.m"
          {
#line 759 "string.format.m"
            mercury__string__format__V_26_26 = (MR_Integer) 32767;
#line 759 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Int_11 <= mercury__string__format__V_26_26);
#line 759 "string.format.m"
          }
#line 775 "string.format.m"
        if (mercury__string__format__succeeded)
#line 763 "string.format.m"
          if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 765 "string.format.m"
            {
#line 765 "string.format.m"
              mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Int_11);
            }
#line 763 "string.format.m"
          else
#line 763 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 773 "string.format.m"
              {
#line 773 "string.format.m"
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__Int_11);
              }
#line 763 "string.format.m"
            else
#line 763 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 0))
#line 762 "string.format.m"
                {
#line 762 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__Int_11);
                }
#line 763 "string.format.m"
              else
#line 770 "string.format.m"
                {
#line 770 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__Int_11);
                }
#line 775 "string.format.m"
        else
#line 776 "string.format.m"
          {
#line 776 "string.format.m"
            MR_Word mercury__string__format__Div_14;
#line 776 "string.format.m"
            MR_Word mercury__string__format__UnsignedInteger_15;
#line 776 "string.format.m"
            MR_Word mercury__string__format__V_27_27;
#line 776 "string.format.m"
            MR_Word mercury__string__format__V_29_29;
#line 776 "string.format.m"
            MR_Integer mercury__string__format__V_30_30;
#line 776 "string.format.m"
            MR_Word mercury__string__format__V_31_31;

#line 60 "integer.opt"
            {
#line 60 "integer.opt"
              mercury__string__format__V_27_27 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 2);
            }
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_5_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 6647 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_30_30  = Bits;
#line 171 "int.opt"
}
#line 60 "integer.opt"
            {
#line 60 "integer.opt"
              mercury__string__format__V_29_29 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__V_30_30);
            }
#line 776 "string.format.m"
            {
#line 776 "string.format.m"
              mercury__string__format__Div_14 = mercury__integer__pow_2_f_0(mercury__string__format__V_27_27, mercury__string__format__V_29_29);
            }
#line 60 "integer.opt"
            {
#line 60 "integer.opt"
              mercury__string__format__V_31_31 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_11);
            }
#line 88 "integer.opt"
            {
#line 88 "integer.opt"
              mercury__string__format__UnsignedInteger_15 = mercury__integer__big_mod_2_f_0(mercury__string__format__V_31_31, mercury__string__format__Div_14);
            }
#line 781 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 783 "string.format.m"
              {
#line 783 "string.format.m"
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_decimal_1_f_0(mercury__string__format__UnsignedInteger_15);
              }
#line 781 "string.format.m"
            else
#line 781 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 791 "string.format.m"
                {
#line 791 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_uc_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
#line 781 "string.format.m"
              else
#line 781 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 0))
#line 780 "string.format.m"
                  {
#line 780 "string.format.m"
                    mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_octal_1_f_0(mercury__string__format__UnsignedInteger_15);
                  }
#line 781 "string.format.m"
                else
#line 788 "string.format.m"
                  {
#line 788 "string.format.m"
                    mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_lc_1_f_0(mercury__string__format__UnsignedInteger_15);
                  }
#line 776 "string.format.m"
          }
#line 775 "string.format.m"
      }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_13, &mercury__string__format__AbsIntStrLength_16);
    }
#line 799 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 799 "string.format.m"
    if (mercury__string__format__succeeded)
#line 799 "string.format.m"
      {
#line 799 "string.format.m"
        mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 800 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_17 > mercury__string__format__AbsIntStrLength_16);
#line 799 "string.format.m"
      }
#line 803 "string.format.m"
    if (mercury__string__format__succeeded)
#line 802 "string.format.m"
      {
#line 558 "string.opt"
        {
#line 558 "string.opt"
          mercury__string__pad_left_4_p_0(mercury__string__format__AbsIntStr_13, (MR_Char) 48, mercury__string__format__Prec_17, &mercury__string__format__PrecStr_18);
        }
#line 802 "string.format.m"
      }
#line 803 "string.format.m"
    else
#line 804 "string.format.m"
      mercury__string__format__PrecStr_18 = mercury__string__format__AbsIntStr_13;
#line 809 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Base_10 == (MR_Integer) 0);
#line 809 "string.format.m"
    if (mercury__string__format__succeeded)
#line 809 "string.format.m"
      {
#line 810 "string.format.m"
        mercury__string__format__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 810 "string.format.m"
        mercury__string__format__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 810 "string.format.m"
        mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 810 "string.format.m"
        mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 810 "string.format.m"
        mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 810 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_33_33 == (MR_Integer) 1);
#line 809 "string.format.m"
        if (mercury__string__format__succeeded)
#line 809 "string.format.m"
          {
#line 811 "string.format.m"
            mercury__string__format__V_34_34 = (MR_String) "0";
#line 811 "string.format.m"
            {
#line 811 "string.format.m"
              mercury__string__format__succeeded = mercury__string__prefix_2_p_0(mercury__string__format__PrecStr_18, mercury__string__format__V_34_34);
            }
#line 811 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 809 "string.format.m"
          }
#line 809 "string.format.m"
      }
#line 814 "string.format.m"
    if (mercury__string__format__succeeded)
#line 813 "string.format.m"
      {
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__PrecStr_18, &mercury__string__format__PrecModStr_19);
        }
#line 813 "string.format.m"
      }
#line 814 "string.format.m"
    else
#line 815 "string.format.m"
      mercury__string__format__PrecModStr_19 = mercury__string__format__PrecStr_18;
#line 820 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
#line 820 "string.format.m"
    if (mercury__string__format__succeeded)
#line 820 "string.format.m"
      {
#line 820 "string.format.m"
        mercury__string__format__Width_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
#line 254 "string.opt"
        {
#line 254 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecModStr_19, &mercury__string__format__V_36_36);
        }
#line 821 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_20 > mercury__string__format__V_36_36);
#line 820 "string.format.m"
        if (mercury__string__format__succeeded)
#line 820 "string.format.m"
          {
#line 822 "string.format.m"
            mercury__string__format__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 822 "string.format.m"
            mercury__string__format__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 822 "string.format.m"
            mercury__string__format__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 822 "string.format.m"
            mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 822 "string.format.m"
            mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 822 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_37_37 == (MR_Integer) 1);
#line 820 "string.format.m"
            if (mercury__string__format__succeeded)
#line 820 "string.format.m"
              {
#line 823 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_55_55 == (MR_Integer) 0);
#line 820 "string.format.m"
                if (mercury__string__format__succeeded)
#line 824 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "string.format.m"
              }
#line 820 "string.format.m"
          }
#line 820 "string.format.m"
      }
#line 848 "string.format.m"
    if (mercury__string__format__succeeded)
#line 844 "string.format.m"
      {
#line 844 "string.format.m"
        MR_String mercury__string__format__Prefix_21;
#line 828 "string.format.m"
        MR_Word mercury__string__format__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 828 "string.format.m"
        MR_Word mercury__string__format__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 828 "string.format.m"
        MR_Word mercury__string__format__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 828 "string.format.m"
        MR_Word mercury__string__format__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 828 "string.format.m"
        MR_Word mercury__string__format__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 828 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_39_39 == (MR_Integer) 1);
#line 828 "string.format.m"
        if (mercury__string__format__succeeded)
#line 832 "string.format.m"
          {
#line 832 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 833 "string.format.m"
              {
#line 834 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 834 "string.format.m"
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 833 "string.format.m"
                if (mercury__string__format__succeeded)
#line 833 "string.format.m"
                  {
#line 835 "string.format.m"
                    mercury__string__format__Prefix_21 = (MR_String) "0x";
#line 835 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 833 "string.format.m"
                  }
#line 833 "string.format.m"
              }
#line 832 "string.format.m"
            else
#line 832 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 831 "string.format.m"
                {
#line 831 "string.format.m"
                  mercury__string__format__Prefix_21 = (MR_String) "0x";
#line 831 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 831 "string.format.m"
                }
#line 832 "string.format.m"
              else
#line 832 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 837 "string.format.m"
                  {
#line 838 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 838 "string.format.m"
                    mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 837 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 837 "string.format.m"
                      {
#line 839 "string.format.m"
                        mercury__string__format__Prefix_21 = (MR_String) "0X";
#line 839 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 837 "string.format.m"
                      }
#line 837 "string.format.m"
                  }
#line 832 "string.format.m"
                else
#line 832 "string.format.m"
                  mercury__string__format__succeeded = MR_FALSE;
#line 832 "string.format.m"
          }
#line 844 "string.format.m"
        if (mercury__string__format__succeeded)
#line 842 "string.format.m"
          {
#line 842 "string.format.m"
            MR_String mercury__string__format__FieldStr_22;
#line 842 "string.format.m"
            MR_Integer mercury__string__format__V_41_41 = (mercury__string__format__Width_20 - (MR_Integer) 2);

#line 558 "string.opt"
            {
#line 558 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__V_41_41, &mercury__string__format__FieldStr_22);
            }
#line 843 "string.format.m"
            {
#line 843 "string.format.m"
              mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_21, mercury__string__format__FieldStr_22);
            }
#line 842 "string.format.m"
          }
#line 844 "string.format.m"
        else
#line 845 "string.format.m"
          {
#line 845 "string.format.m"
            {
#line 845 "string.format.m"
              mercury__string__format__FieldModStr_23 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__Width_20);
            }
#line 845 "string.format.m"
          }
#line 844 "string.format.m"
      }
#line 848 "string.format.m"
    else
#line 867 "string.format.m"
      {
#line 867 "string.format.m"
        MR_String mercury__string__format__Prefix_46;
#line 852 "string.format.m"
        MR_Word mercury__string__format__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 852 "string.format.m"
        MR_Word mercury__string__format__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 852 "string.format.m"
        MR_Word mercury__string__format__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 852 "string.format.m"
        MR_Word mercury__string__format__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 852 "string.format.m"
        MR_Word mercury__string__format__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 852 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_44_44 == (MR_Integer) 1);
#line 852 "string.format.m"
        if (mercury__string__format__succeeded)
#line 856 "string.format.m"
          {
#line 856 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 857 "string.format.m"
              {
#line 858 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 858 "string.format.m"
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 857 "string.format.m"
                if (mercury__string__format__succeeded)
#line 857 "string.format.m"
                  {
#line 859 "string.format.m"
                    mercury__string__format__Prefix_46 = (MR_String) "0x";
#line 859 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 857 "string.format.m"
                  }
#line 857 "string.format.m"
              }
#line 856 "string.format.m"
            else
#line 856 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 855 "string.format.m"
                {
#line 855 "string.format.m"
                  mercury__string__format__Prefix_46 = (MR_String) "0x";
#line 855 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 855 "string.format.m"
                }
#line 856 "string.format.m"
              else
#line 856 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 861 "string.format.m"
                  {
#line 862 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 862 "string.format.m"
                    mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 861 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 861 "string.format.m"
                      {
#line 863 "string.format.m"
                        mercury__string__format__Prefix_46 = (MR_String) "0X";
#line 863 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 861 "string.format.m"
                      }
#line 861 "string.format.m"
                  }
#line 856 "string.format.m"
                else
#line 856 "string.format.m"
                  mercury__string__format__succeeded = MR_FALSE;
#line 856 "string.format.m"
          }
#line 867 "string.format.m"
        if (mercury__string__format__succeeded)
#line 866 "string.format.m"
          {
#line 866 "string.format.m"
            mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_46, mercury__string__format__PrecModStr_19);
          }
#line 867 "string.format.m"
        else
#line 868 "string.format.m"
          mercury__string__format__FieldModStr_23 = mercury__string__format__PrecModStr_19;
#line 867 "string.format.m"
      }
#line 872 "string.format.m"
    {
#line 872 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__FieldModStr_23);
    }
#line 739 "string.format.m"
    return mercury__string__format__String_12;
#line 739 "string.format.m"
  }
#line 736 "string.format.m"
}

#line 668 "string.format.m"
MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
#line 668 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 668 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 668 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 668 "string.format.m"
  MR_Integer mercury__string__format__Int_9)
#line 668 "string.format.m"
{
#line 671 "string.format.m"
  {
#line 671 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_9 == (MR_Integer) 0);
#line 671 "string.format.m"
    MR_String mercury__string__format__String_10;
#line 671 "string.format.m"
    MR_String mercury__string__format__AbsIntStr_11;
#line 671 "string.format.m"
    MR_Integer mercury__string__format__AbsIntStrLength_14;
#line 671 "string.format.m"
    MR_String mercury__string__format__PrecStr_16;
#line 671 "string.format.m"
    MR_String mercury__string__format__FieldStr_18;
#line 671 "string.format.m"
    MR_Word mercury__string__format__ZeroPadded_19;
#line 671 "string.format.m"
    MR_String mercury__string__format__SignedStr_20;
#line 708 "string.format.m"
    MR_Integer mercury__string__format__Prec_15;
#line 722 "string.format.m"
    MR_Integer mercury__string__format__Width_17;
#line 714 "string.format.m"
    MR_Integer mercury__string__format__V_26_26;
#line 714 "string.format.m"
    MR_Word mercury__string__format__V_27_27;
#line 714 "string.format.m"
    MR_Word mercury__string__format__V_34_34;
#line 716 "string.format.m"
    MR_Word mercury__string__format__V_32_32;
#line 716 "string.format.m"
    MR_Word mercury__string__format__V_33_33;
#line 716 "string.format.m"
    MR_Word mercury__string__format__V_35_35;

#line 681 "string.format.m"
    if (mercury__string__format__succeeded)
#line 678 "string.format.m"
      {
#line 676 "string.format.m"
        MR_Integer mercury__string__format__V_21_21;

#line 676 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
#line 676 "string.format.m"
        if (mercury__string__format__succeeded)
#line 676 "string.format.m"
          {
#line 676 "string.format.m"
            mercury__string__format__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 676 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_21_21 == (MR_Integer) 0);
#line 676 "string.format.m"
          }
#line 678 "string.format.m"
        if (mercury__string__format__succeeded)
#line 677 "string.format.m"
          mercury__string__format__AbsIntStr_11 = (MR_String) "";
#line 678 "string.format.m"
        else
#line 679 "string.format.m"
          mercury__string__format__AbsIntStr_11 = (MR_String) "0";
#line 678 "string.format.m"
      }
#line 681 "string.format.m"
    else
#line 695 "string.format.m"
      {
#line 692 "string.format.m"
        MR_Integer mercury__string__format__V_23_23;

#line 692 "string.format.m"
        mercury__string__format__succeeded = ((MR_Integer) -2147483647 <= mercury__string__format__Int_9);
#line 692 "string.format.m"
        if (mercury__string__format__succeeded)
#line 692 "string.format.m"
          {
#line 692 "string.format.m"
            mercury__string__format__V_23_23 = (MR_Integer) 2147483647;
#line 692 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Int_9 <= mercury__string__format__V_23_23);
#line 692 "string.format.m"
          }
#line 695 "string.format.m"
        if (mercury__string__format__succeeded)
#line 693 "string.format.m"
          {
#line 693 "string.format.m"
            MR_Integer mercury__string__format__AbsInt_12;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__Int_9, &mercury__string__format__AbsInt_12);
            }
#line 694 "string.format.m"
            {
#line 694 "string.format.m"
              mercury__string__format__AbsIntStr_11 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__AbsInt_12);
            }
#line 693 "string.format.m"
          }
#line 695 "string.format.m"
        else
#line 696 "string.format.m"
          {
#line 696 "string.format.m"
            MR_Word mercury__string__format__AbsInteger_13;
#line 696 "string.format.m"
            MR_Word mercury__string__format__V_24_24;
#line 1127 "string.format.m"
            MR_Word mercury__string__format__V_51_51;
#line 1127 "string.format.m"
            MR_Word mercury__string__format__C_5_62;

#line 60 "integer.opt"
            {
#line 60 "integer.opt"
              mercury__string__format__V_24_24 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_9);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__string__format__AbsInteger_13 = mercury__integer__big_abs_1_f_0(mercury__string__format__V_24_24);
            }
#line 60 "integer.opt"
            {
#line 60 "integer.opt"
              mercury__string__format__V_51_51 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
            }
#line 131 "integer.opt"
            {
#line 131 "integer.opt"
              mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_62, mercury__string__format__AbsInteger_13, mercury__string__format__V_51_51);
            }
#line 44 "integer.opt"
            mercury__string__format__succeeded = (mercury__string__format__C_5_62 == (MR_Integer) 2);
#line 1132 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1128 "string.format.m"
              {
#line 1128 "string.format.m"
                MR_Word mercury__string__format__Integer10_48;
#line 1128 "string.format.m"
                MR_String mercury__string__format__FrontDigitsStr_49;
#line 1128 "string.format.m"
                MR_String mercury__string__format__LastDigitStr_50;
#line 1128 "string.format.m"
                MR_Integer mercury__string__format__V_54_54;
#line 1128 "string.format.m"
                MR_Word mercury__string__format__V_55_55;
#line 1128 "string.format.m"
                MR_Integer mercury__string__format__V_56_56;
#line 1128 "string.format.m"
                MR_Word mercury__string__format__V_57_57;
#line 127 "integer.opt"
                MR_Word mercury__string__format___Rem_7_75;
#line 129 "integer.opt"
                MR_Word mercury__string__format___Quot_7_82;
#line 1213 "string.format.m"
                MR_String mercury__string__format__DecimalPrime_85;

#line 60 "integer.opt"
                {
#line 60 "integer.opt"
                  mercury__string__format__Integer10_48 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
                }
#line 127 "integer.opt"
                {
#line 127 "integer.opt"
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format__V_55_55, &mercury__string__format___Rem_7_75);
                }
#line 1129 "string.format.m"
                {
#line 1129 "string.format.m"
                  mercury__string__format__V_54_54 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_55_55);
                }
#line 1129 "string.format.m"
                {
#line 1129 "string.format.m"
                  mercury__string__format__FrontDigitsStr_49 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_54_54);
                }
#line 129 "integer.opt"
                {
#line 129 "integer.opt"
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format___Quot_7_82, &mercury__string__format__V_57_57);
                }
#line 1130 "string.format.m"
                {
#line 1130 "string.format.m"
                  mercury__string__format__V_56_56 = mercury__integer__det_to_int_1_f_0(mercury__string__format__V_57_57);
                }
#line 1253 "string.format.m"
                if ((mercury__string__format__V_56_56 == (MR_Integer) 0))
#line 1253 "string.format.m"
                  {
#line 1253 "string.format.m"
                    mercury__string__format__DecimalPrime_85 = (MR_String) "0";
#line 1253 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1253 "string.format.m"
                  }
#line 1253 "string.format.m"
                else
#line 1253 "string.format.m"
                  if ((mercury__string__format__V_56_56 == (MR_Integer) 1))
#line 1254 "string.format.m"
                    {
#line 1254 "string.format.m"
                      mercury__string__format__DecimalPrime_85 = (MR_String) "1";
#line 1254 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1254 "string.format.m"
                    }
#line 1253 "string.format.m"
                  else
#line 1253 "string.format.m"
                    if ((mercury__string__format__V_56_56 == (MR_Integer) 2))
#line 1255 "string.format.m"
                      {
#line 1255 "string.format.m"
                        mercury__string__format__DecimalPrime_85 = (MR_String) "2";
#line 1255 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1255 "string.format.m"
                      }
#line 1253 "string.format.m"
                    else
#line 1253 "string.format.m"
                      if ((mercury__string__format__V_56_56 == (MR_Integer) 3))
#line 1256 "string.format.m"
                        {
#line 1256 "string.format.m"
                          mercury__string__format__DecimalPrime_85 = (MR_String) "3";
#line 1256 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1256 "string.format.m"
                        }
#line 1253 "string.format.m"
                      else
#line 1253 "string.format.m"
                        if ((mercury__string__format__V_56_56 == (MR_Integer) 4))
#line 1257 "string.format.m"
                          {
#line 1257 "string.format.m"
                            mercury__string__format__DecimalPrime_85 = (MR_String) "4";
#line 1257 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1257 "string.format.m"
                          }
#line 1253 "string.format.m"
                        else
#line 1253 "string.format.m"
                          if ((mercury__string__format__V_56_56 == (MR_Integer) 5))
#line 1258 "string.format.m"
                            {
#line 1258 "string.format.m"
                              mercury__string__format__DecimalPrime_85 = (MR_String) "5";
#line 1258 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1258 "string.format.m"
                            }
#line 1253 "string.format.m"
                          else
#line 1253 "string.format.m"
                            if ((mercury__string__format__V_56_56 == (MR_Integer) 6))
#line 1259 "string.format.m"
                              {
#line 1259 "string.format.m"
                                mercury__string__format__DecimalPrime_85 = (MR_String) "6";
#line 1259 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1259 "string.format.m"
                              }
#line 1253 "string.format.m"
                            else
#line 1253 "string.format.m"
                              if ((mercury__string__format__V_56_56 == (MR_Integer) 7))
#line 1260 "string.format.m"
                                {
#line 1260 "string.format.m"
                                  mercury__string__format__DecimalPrime_85 = (MR_String) "7";
#line 1260 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1260 "string.format.m"
                                }
#line 1253 "string.format.m"
                              else
#line 1253 "string.format.m"
                                if ((mercury__string__format__V_56_56 == (MR_Integer) 8))
#line 1261 "string.format.m"
                                  {
#line 1261 "string.format.m"
                                    mercury__string__format__DecimalPrime_85 = (MR_String) "8";
#line 1261 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1261 "string.format.m"
                                  }
#line 1253 "string.format.m"
                                else
#line 1253 "string.format.m"
                                  if ((mercury__string__format__V_56_56 == (MR_Integer) 9))
#line 1262 "string.format.m"
                                    {
#line 1262 "string.format.m"
                                      mercury__string__format__DecimalPrime_85 = (MR_String) "9";
#line 1262 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1262 "string.format.m"
                                    }
#line 1253 "string.format.m"
                                  else
#line 1253 "string.format.m"
                                    mercury__string__format__succeeded = MR_FALSE;
#line 1213 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1212 "string.format.m"
                  mercury__string__format__LastDigitStr_50 = mercury__string__format__DecimalPrime_85;
#line 1213 "string.format.m"
                else
#line 1214 "string.format.m"
                  {
#line 1214 "string.format.m"
                    {
#line 1214 "string.format.m"
                      mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
                    }
#line 1214 "string.format.m"
                  }
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_49, mercury__string__format__LastDigitStr_50, &mercury__string__format__AbsIntStr_11);
                }
#line 1128 "string.format.m"
              }
#line 1132 "string.format.m"
            else
#line 1133 "string.format.m"
              mercury__string__format__AbsIntStr_11 = (MR_String) "";
#line 696 "string.format.m"
          }
#line 695 "string.format.m"
      }
#line 254 "string.opt"
    {
#line 254 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_11, &mercury__string__format__AbsIntStrLength_14);
    }
#line 704 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
#line 704 "string.format.m"
    if (mercury__string__format__succeeded)
#line 704 "string.format.m"
      {
#line 704 "string.format.m"
        mercury__string__format__Prec_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 705 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_15 > mercury__string__format__AbsIntStrLength_14);
#line 704 "string.format.m"
      }
#line 708 "string.format.m"
    if (mercury__string__format__succeeded)
#line 707 "string.format.m"
      {
#line 707 "string.format.m"
        {
#line 707 "string.format.m"
          mercury__string__format__PrecStr_16 = mercury__string__pad_left_3_f_0(mercury__string__format__AbsIntStr_11, (MR_Char) 48, mercury__string__format__Prec_15);
        }
#line 707 "string.format.m"
      }
#line 708 "string.format.m"
    else
#line 709 "string.format.m"
      mercury__string__format__PrecStr_16 = mercury__string__format__AbsIntStr_11;
#line 714 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_7)) == (MR_mktag((MR_Integer) 1)));
#line 714 "string.format.m"
    if (mercury__string__format__succeeded)
#line 714 "string.format.m"
      {
#line 714 "string.format.m"
        mercury__string__format__Width_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_7, (MR_Integer) 0)));
#line 254 "string.opt"
        {
#line 254 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecStr_16, &mercury__string__format__V_26_26);
        }
#line 715 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_17 > mercury__string__format__V_26_26);
#line 714 "string.format.m"
        if (mercury__string__format__succeeded)
#line 714 "string.format.m"
          {
#line 716 "string.format.m"
            mercury__string__format__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 716 "string.format.m"
            mercury__string__format__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "string.format.m"
            mercury__string__format__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "string.format.m"
            mercury__string__format__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 716 "string.format.m"
            mercury__string__format__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 716 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_27_27 == (MR_Integer) 1);
#line 714 "string.format.m"
            if (mercury__string__format__succeeded)
#line 714 "string.format.m"
              {
#line 717 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_34_34 == (MR_Integer) 0);
#line 714 "string.format.m"
                if (mercury__string__format__succeeded)
#line 718 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "string.format.m"
              }
#line 714 "string.format.m"
          }
#line 714 "string.format.m"
      }
#line 722 "string.format.m"
    if (mercury__string__format__succeeded)
#line 720 "string.format.m"
      {
#line 720 "string.format.m"
        MR_Integer mercury__string__format__V_30_30 = (mercury__string__format__Width_17 - (MR_Integer) 1);

#line 720 "string.format.m"
        {
#line 720 "string.format.m"
          mercury__string__format__FieldStr_18 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecStr_16, (MR_Char) 48, mercury__string__format__V_30_30);
        }
#line 721 "string.format.m"
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 1;
#line 720 "string.format.m"
      }
#line 722 "string.format.m"
    else
#line 723 "string.format.m"
      {
#line 723 "string.format.m"
        mercury__string__format__FieldStr_18 = mercury__string__format__PrecStr_16;
#line 724 "string.format.m"
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 0;
#line 723 "string.format.m"
      }
#line 1021 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Int_9 < (MR_Integer) 0);
#line 1023 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1022 "string.format.m"
      {
#line 411 "string.opt"
        {
#line 411 "string.opt"
          mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
        }
#line 1022 "string.format.m"
      }
#line 1023 "string.format.m"
    else
#line 1025 "string.format.m"
      {
#line 1023 "string.format.m"
        MR_Word mercury__string__format__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1023 "string.format.m"
        MR_Word mercury__string__format__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1023 "string.format.m"
        MR_Word mercury__string__format__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1023 "string.format.m"
        MR_Word mercury__string__format__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "string.format.m"
        MR_Word mercury__string__format__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1023 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_103_103 == (MR_Integer) 1);
#line 1025 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1024 "string.format.m"
          {
#line 411 "string.opt"
            {
#line 411 "string.opt"
              mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
            }
#line 1024 "string.format.m"
          }
#line 1025 "string.format.m"
        else
#line 1027 "string.format.m"
          {
#line 1025 "string.format.m"
            MR_Word mercury__string__format__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1025 "string.format.m"
            MR_Word mercury__string__format__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1025 "string.format.m"
            MR_Word mercury__string__format__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1025 "string.format.m"
            MR_Word mercury__string__format__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1025 "string.format.m"
            MR_Word mercury__string__format__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1025 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_105_105 == (MR_Integer) 1);
#line 1027 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1026 "string.format.m"
              {
#line 411 "string.opt"
                {
#line 411 "string.opt"
                  mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                }
#line 1026 "string.format.m"
              }
#line 1027 "string.format.m"
            else
#line 1031 "string.format.m"
              if ((mercury__string__format__ZeroPadded_19 == (MR_Integer) 0))
#line 1033 "string.format.m"
                mercury__string__format__SignedStr_20 = mercury__string__format__FieldStr_18;
#line 1031 "string.format.m"
              else
#line 1029 "string.format.m"
                {
#line 411 "string.opt"
                  {
#line 411 "string.opt"
                    mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                  }
#line 1029 "string.format.m"
                }
#line 1027 "string.format.m"
          }
#line 1025 "string.format.m"
      }
#line 731 "string.format.m"
    {
#line 731 "string.format.m"
      return mercury__string__format__String_10 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__SignedStr_20);
    }
#line 671 "string.format.m"
    return mercury__string__format__String_10;
#line 671 "string.format.m"
  }
#line 668 "string.format.m"
}

#line 646 "string.format.m"
MR_String MR_CALL 
mercury__string__format__format_char_3_f_0(
#line 646 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 646 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_6,
#line 646 "string.format.m"
  MR_Char mercury__string__format__Char_7)
#line 646 "string.format.m"
{
#line 649 "string.format.m"
  {
#line 649 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 649 "string.format.m"
    MR_String mercury__string__format__String_8;
#line 649 "string.format.m"
    MR_String mercury__string__format__CharStr_9;
#line 649 "string.format.m"
    MR_Word mercury__string__format__V_5_14;
#line 649 "string.format.m"
    MR_Word mercury__string__format__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
    {
#line 701 "string.opt"
      mercury__string__format__V_5_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_14, 0) = ((MR_Box) (MR_Word) (mercury__string__format__Char_7));
#line 701 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_14, 1) = ((MR_Box) (mercury__string__format__V_6_15));
#line 701 "string.opt"
    }
#line 703 "string.opt"
    {
#line 703 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__format__CharStr_9, mercury__string__format__V_5_14);
    }
#line 651 "string.format.m"
    {
#line 651 "string.format.m"
      return mercury__string__format__String_8 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__CharStr_9);
    }
#line 649 "string.format.m"
    return mercury__string__format__String_8;
#line 649 "string.format.m"
  }
#line 646 "string.format.m"
}

#line 626 "string.format.m"
MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
#line 626 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 626 "string.format.m"
  MR_Char mercury__string__format__Val_2)
#line 626 "string.format.m"
{
#line 628 "string.format.m"
  {
#line 628 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 628 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 632 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_char_2_f_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 632 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 7712 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 632 "string.format.m"
}
#line 628 "string.format.m"
    return mercury__string__format__Str_3;
#line 628 "string.format.m"
  }
#line 626 "string.format.m"
}

#line 606 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
#line 606 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 606 "string.format.m"
  MR_String mercury__string__format__Val_2)
#line 606 "string.format.m"
{
#line 608 "string.format.m"
  {
#line 608 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 608 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 612 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_string_2_f_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 612 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 7759 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 612 "string.format.m"
}
#line 608 "string.format.m"
    return mercury__string__format__Str_3;
#line 608 "string.format.m"
  }
#line 606 "string.format.m"
}

#line 586 "string.format.m"
MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
#line 586 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 586 "string.format.m"
  MR_Integer mercury__string__format__Val_2)
#line 586 "string.format.m"
{
#line 588 "string.format.m"
  {
#line 588 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 588 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 592 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_int_2_f_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 592 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 7806 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 592 "string.format.m"
}
#line 588 "string.format.m"
    return mercury__string__format__Str_3;
#line 588 "string.format.m"
  }
#line 586 "string.format.m"
}

#line 566 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
#line 566 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 566 "string.format.m"
  MR_Float mercury__string__format__Val_2)
#line 566 "string.format.m"
{
#line 568 "string.format.m"
  {
#line 568 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 568 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 572 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_float_2_f_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 572 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}
#line 7853 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 572 "string.format.m"
}
#line 568 "string.format.m"
    return mercury__string__format__Str_3;
#line 568 "string.format.m"
  }
#line 566 "string.format.m"
}

#line 547 "string.format.m"
MR_String MR_CALL 
mercury__string__format__int_length_modifer_0_f_0(void)
#line 547 "string.format.m"
{
#line 549 "string.format.m"
  {
#line 549 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 549 "string.format.m"
    MR_String mercury__string__format__LengthModifier_1;

#line 553 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__int_length_modifer_0_f_0

	MR_String LengthModifier;

		{
#line 553 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 7890 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__LengthModifier_1  = LengthModifier;
#line 553 "string.format.m"
}
#line 549 "string.format.m"
    return mercury__string__format__LengthModifier_1;
#line 549 "string.format.m"
  }
#line 547 "string.format.m"
}

#line 508 "string.format.m"
MR_String MR_CALL 
mercury__string__format__make_format_dotnet_5_f_0(
#line 508 "string.format.m"
  MR_Word mercury__string__format___Flags_7,
#line 508 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 508 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 508 "string.format.m"
  MR_String mercury__string__format___LengthMod_10,
#line 508 "string.format.m"
  MR_String mercury__string__format__Spec0_11)
#line 508 "string.format.m"
{
#line 512 "string.format.m"
  {
#line 512 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 512 "string.format.m"
    MR_String mercury__string__format__String_12;

#line 512 "string.format.m"
    {
#line 512 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Spec0_11);
    }
#line 512 "string.format.m"
    return mercury__string__format__String_12;
#line 512 "string.format.m"
  }
#line 508 "string.format.m"
}

#line 462 "string.format.m"
MR_String MR_CALL 
mercury__string__format__make_format_sprintf_5_f_0(
#line 462 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 462 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 462 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 462 "string.format.m"
  MR_String mercury__string__format__LengthMod_10,
#line 462 "string.format.m"
  MR_String mercury__string__format__Spec_11)
#line 462 "string.format.m"
{
#line 465 "string.format.m"
  {
#line 465 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 465 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 465 "string.format.m"
    MR_Word mercury__string__format__FlagHash_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 465 "string.format.m"
    MR_Word mercury__string__format__FlagSpace_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 465 "string.format.m"
    MR_Word mercury__string__format__FlagZero_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 465 "string.format.m"
    MR_Word mercury__string__format__FlagMinus_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 465 "string.format.m"
    MR_Word mercury__string__format__FlagPlus_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 465 "string.format.m"
    MR_String mercury__string__format__FlagHashStr_18;
#line 465 "string.format.m"
    MR_String mercury__string__format__FlagSpaceStr_19;
#line 465 "string.format.m"
    MR_String mercury__string__format__FlagZeroStr_20;
#line 465 "string.format.m"
    MR_String mercury__string__format__FlagMinusStr_21;
#line 465 "string.format.m"
    MR_String mercury__string__format__FlagPlusStr_22;
#line 465 "string.format.m"
    MR_String mercury__string__format__WidthStr_24;
#line 465 "string.format.m"
    MR_String mercury__string__format__PrecPrefixStr_26;
#line 465 "string.format.m"
    MR_String mercury__string__format__PrecStr_27;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_28_28;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_30_30;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_31_31;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_32_32;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_33_33;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_34_34;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_35_35;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_36_36;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_37_37;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_38_38;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_39_39;
#line 465 "string.format.m"
    MR_Word mercury__string__format__V_40_40;

#line 469 "string.format.m"
    if ((mercury__string__format__FlagHash_13 == (MR_Integer) 0))
#line 468 "string.format.m"
      mercury__string__format__FlagHashStr_18 = (MR_String) "";
#line 469 "string.format.m"
    else
#line 469 "string.format.m"
      mercury__string__format__FlagHashStr_18 = (MR_String) "#";
#line 472 "string.format.m"
    if ((mercury__string__format__FlagSpace_14 == (MR_Integer) 0))
#line 471 "string.format.m"
      mercury__string__format__FlagSpaceStr_19 = (MR_String) "";
#line 472 "string.format.m"
    else
#line 472 "string.format.m"
      mercury__string__format__FlagSpaceStr_19 = (MR_String) " ";
#line 475 "string.format.m"
    if ((mercury__string__format__FlagZero_15 == (MR_Integer) 0))
#line 474 "string.format.m"
      mercury__string__format__FlagZeroStr_20 = (MR_String) "";
#line 475 "string.format.m"
    else
#line 475 "string.format.m"
      mercury__string__format__FlagZeroStr_20 = (MR_String) "0";
#line 478 "string.format.m"
    if ((mercury__string__format__FlagMinus_16 == (MR_Integer) 0))
#line 477 "string.format.m"
      mercury__string__format__FlagMinusStr_21 = (MR_String) "";
#line 478 "string.format.m"
    else
#line 478 "string.format.m"
      mercury__string__format__FlagMinusStr_21 = (MR_String) "-";
#line 481 "string.format.m"
    if ((mercury__string__format__FlagPlus_17 == (MR_Integer) 0))
#line 480 "string.format.m"
      mercury__string__format__FlagPlusStr_22 = (MR_String) "";
#line 481 "string.format.m"
    else
#line 481 "string.format.m"
      mercury__string__format__FlagPlusStr_22 = (MR_String) "+";
#line 486 "string.format.m"
    if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "string.format.m"
      mercury__string__format__WidthStr_24 = (MR_String) "";
#line 486 "string.format.m"
    else
#line 484 "string.format.m"
      {
#line 484 "string.format.m"
        MR_Integer mercury__string__format__Width_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_23, (MR_Integer) 10, &mercury__string__format__WidthStr_24);
        }
#line 484 "string.format.m"
      }
#line 494 "string.format.m"
    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "string.format.m"
      {
#line 496 "string.format.m"
        mercury__string__format__PrecPrefixStr_26 = (MR_String) "";
#line 497 "string.format.m"
        mercury__string__format__PrecStr_27 = (MR_String) "";
#line 495 "string.format.m"
      }
#line 494 "string.format.m"
    else
#line 491 "string.format.m"
      {
#line 491 "string.format.m"
        MR_Integer mercury__string__format__Prec_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 492 "string.format.m"
        mercury__string__format__PrecPrefixStr_26 = (MR_String) ".";
#line 710 "string.opt"
        {
#line 710 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_25, (MR_Integer) 10, &mercury__string__format__PrecStr_27);
        }
#line 491 "string.format.m"
      }
#line 501 "string.format.m"
    mercury__string__format__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "string.format.m"
    {
#line 501 "string.format.m"
      mercury__string__format__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 0) = ((MR_Box) (mercury__string__format__Spec_11));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 1) = ((MR_Box) (mercury__string__format__V_40_40));
#line 501 "string.format.m"
    }
#line 501 "string.format.m"
    {
#line 501 "string.format.m"
      mercury__string__format__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_38_38, 0) = ((MR_Box) (mercury__string__format__LengthMod_10));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_38_38, 1) = ((MR_Box) (mercury__string__format__V_39_39));
#line 501 "string.format.m"
    }
#line 501 "string.format.m"
    {
#line 501 "string.format.m"
      mercury__string__format__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 0) = ((MR_Box) (mercury__string__format__PrecStr_27));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 1) = ((MR_Box) (mercury__string__format__V_38_38));
#line 501 "string.format.m"
    }
#line 501 "string.format.m"
    {
#line 501 "string.format.m"
      mercury__string__format__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 0) = ((MR_Box) (mercury__string__format__PrecPrefixStr_26));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 1) = ((MR_Box) (mercury__string__format__V_37_37));
#line 501 "string.format.m"
    }
#line 501 "string.format.m"
    {
#line 501 "string.format.m"
      mercury__string__format__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_35_35, 0) = ((MR_Box) (mercury__string__format__WidthStr_24));
#line 501 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_35_35, 1) = ((MR_Box) (mercury__string__format__V_36_36));
#line 501 "string.format.m"
    }
#line 500 "string.format.m"
    {
#line 500 "string.format.m"
      mercury__string__format__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_34_34, 0) = ((MR_Box) (mercury__string__format__FlagPlusStr_22));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_34_34, 1) = ((MR_Box) (mercury__string__format__V_35_35));
#line 500 "string.format.m"
    }
#line 500 "string.format.m"
    {
#line 500 "string.format.m"
      mercury__string__format__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_33_33, 0) = ((MR_Box) (mercury__string__format__FlagMinusStr_21));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_33_33, 1) = ((MR_Box) (mercury__string__format__V_34_34));
#line 500 "string.format.m"
    }
#line 500 "string.format.m"
    {
#line 500 "string.format.m"
      mercury__string__format__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 0) = ((MR_Box) (mercury__string__format__FlagZeroStr_20));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 1) = ((MR_Box) (mercury__string__format__V_33_33));
#line 500 "string.format.m"
    }
#line 500 "string.format.m"
    {
#line 500 "string.format.m"
      mercury__string__format__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_31_31, 0) = ((MR_Box) (mercury__string__format__FlagSpaceStr_19));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_31_31, 1) = ((MR_Box) (mercury__string__format__V_32_32));
#line 500 "string.format.m"
    }
#line 500 "string.format.m"
    {
#line 500 "string.format.m"
      mercury__string__format__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 0) = ((MR_Box) (mercury__string__format__FlagHashStr_18));
#line 500 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 1) = ((MR_Box) (mercury__string__format__V_31_31));
#line 500 "string.format.m"
    }
#line 499 "string.format.m"
    {
#line 499 "string.format.m"
      mercury__string__format__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_28_28, 0) = ((MR_Box) ((MR_String) "%"));
#line 499 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_28_28, 1) = ((MR_Box) (mercury__string__format__V_30_30));
#line 499 "string.format.m"
    }
#line 499 "string.format.m"
    {
#line 499 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__append_list_1_f_0(mercury__string__format__V_28_28);
    }
#line 465 "string.format.m"
    return mercury__string__format__String_12;
#line 465 "string.format.m"
  }
#line 462 "string.format.m"
}

#line 435 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
#line 435 "string.format.m"
  MR_String mercury__string__format__Str_1)
#line 435 "string.format.m"
{
#line 440 "string.format.m"
  {
#line 440 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 444 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_string_1_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_1 ;
		{
#line 444 "string.format.m"

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

#line 8255 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 444 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 440 "string.format.m"
    return mercury__string__format__succeeded;
#line 440 "string.format.m"
  }
#line 435 "string.format.m"
}

#line 421 "string.format.m"
MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
#line 421 "string.format.m"
  MR_Char mercury__string__format__Char_1)
#line 421 "string.format.m"
{
#line 426 "string.format.m"
  {
#line 426 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 430 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_char_1_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_1 ;
		{
#line 430 "string.format.m"

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);

#line 8297 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 430 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 426 "string.format.m"
    return mercury__string__format__succeeded;
#line 426 "string.format.m"
  }
#line 421 "string.format.m"
}

#line 397 "string.format.m"
MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void)
#line 397 "string.format.m"
{
#line 399 "string.format.m"
  {
#line 399 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8334 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 399 "string.format.m"
    return mercury__string__format__succeeded;
#line 399 "string.format.m"
  }
#line 397 "string.format.m"
}

#line 377 "string.format.m"
MR_String MR_CALL 
mercury__string__format__make_format_5_f_0(
#line 377 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 377 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 377 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 377 "string.format.m"
  MR_String mercury__string__format__LengthMod_10,
#line 377 "string.format.m"
  MR_String mercury__string__format__Spec_11)
#line 377 "string.format.m"
{
#line 380 "string.format.m"
  {
#line 380 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 380 "string.format.m"
    MR_String mercury__string__format__HeadVar__6_6;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__make_format_5_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8383 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
    if (mercury__string__format__succeeded)
#line 382 "string.format.m"
      {
#line 382 "string.format.m"
        return mercury__string__format__HeadVar__6_6 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__LengthMod_10, mercury__string__format__Spec_11);
      }
#line 380 "string.format.m"
    else
#line 384 "string.format.m"
      {
#line 384 "string.format.m"
        return mercury__string__format__HeadVar__6_6 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Spec_11);
      }
#line 380 "string.format.m"
    return mercury__string__format__HeadVar__6_6;
#line 380 "string.format.m"
  }
#line 377 "string.format.m"
}

#line 350 "string.format.m"
void MR_CALL 
mercury__string__format__format_float_component_6_p_0(
#line 350 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 350 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 350 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 350 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 350 "string.format.m"
  MR_Float mercury__string__format__Float_11,
#line 350 "string.format.m"
  MR_String * mercury__string__format__String_12)
#line 350 "string.format.m"
{
#line 369 "string.format.m"
  {
#line 369 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 131 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{
#line 131 "float.opt"

    SUCCESS_INDICATOR = MR_is_finite(Flt);

#line 8448 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 131 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "string.format.m"
    if (mercury__string__format__succeeded)
#line 356 "string.format.m"
      {
#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8472 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "string.format.m"
      }
#line 369 "string.format.m"
    if (mercury__string__format__succeeded)
#line 365 "string.format.m"
      {
#line 365 "string.format.m"
        MR_String mercury__string__format__SpecChar_13;
#line 365 "string.format.m"
        MR_String mercury__string__format__FormatStr_14;

#line 360 "string.format.m"
        if ((mercury__string__format__Kind_10 == (MR_Integer) 0))
#line 359 "string.format.m"
          mercury__string__format__SpecChar_13 = (MR_String) "e";
#line 360 "string.format.m"
        else
#line 360 "string.format.m"
          if ((mercury__string__format__Kind_10 == (MR_Integer) 1))
#line 360 "string.format.m"
            mercury__string__format__SpecChar_13 = (MR_String) "E";
#line 360 "string.format.m"
          else
#line 360 "string.format.m"
            if ((mercury__string__format__Kind_10 == (MR_Integer) 2))
#line 361 "string.format.m"
              mercury__string__format__SpecChar_13 = (MR_String) "f";
#line 360 "string.format.m"
            else
#line 360 "string.format.m"
              if ((mercury__string__format__Kind_10 == (MR_Integer) 3))
#line 362 "string.format.m"
                mercury__string__format__SpecChar_13 = (MR_String) "F";
#line 360 "string.format.m"
              else
#line 360 "string.format.m"
                if ((mercury__string__format__Kind_10 == (MR_Integer) 4))
#line 363 "string.format.m"
                  mercury__string__format__SpecChar_13 = (MR_String) "g";
#line 360 "string.format.m"
                else
#line 364 "string.format.m"
                  mercury__string__format__SpecChar_13 = (MR_String) "G";
#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8535 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
        if (mercury__string__format__succeeded)
#line 382 "string.format.m"
          {
#line 382 "string.format.m"
            mercury__string__format__FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, (MR_String) "", mercury__string__format__SpecChar_13);
          }
#line 380 "string.format.m"
        else
#line 384 "string.format.m"
          {
#line 384 "string.format.m"
            mercury__string__format__FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__SpecChar_13);
          }
#line 572 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_float_component_6_p_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_14 ;
	Val =  mercury__string__format__Float_11 ;
		{
#line 572 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}
#line 8575 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_12  = Str;
#line 572 "string.format.m"
}
#line 365 "string.format.m"
      }
#line 369 "string.format.m"
    else
#line 370 "string.format.m"
      {
#line 370 "string.format.m"
        *mercury__string__format__String_12 = mercury__string__format__format_float_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Kind_10, mercury__string__format__Float_11);
      }
#line 369 "string.format.m"
  }
#line 350 "string.format.m"
}

#line 330 "string.format.m"
void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
#line 330 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 330 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 330 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 330 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 330 "string.format.m"
  MR_Integer mercury__string__format__Int_11,
#line 330 "string.format.m"
  MR_String * mercury__string__format__String_12)
#line 330 "string.format.m"
{
#line 346 "string.format.m"
  {
#line 346 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8629 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 346 "string.format.m"
    if (mercury__string__format__succeeded)
#line 342 "string.format.m"
      {
#line 342 "string.format.m"
        MR_String mercury__string__format__SpecChar_13;
#line 342 "string.format.m"
        MR_String mercury__string__format__FormatStr_14;
#line 342 "string.format.m"
        MR_String mercury__string__format__V_15_15;

#line 338 "string.format.m"
        if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 338 "string.format.m"
          mercury__string__format__SpecChar_13 = (MR_String) "u";
#line 338 "string.format.m"
        else
#line 338 "string.format.m"
          if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 339 "string.format.m"
            mercury__string__format__SpecChar_13 = (MR_String) "x";
#line 338 "string.format.m"
          else
#line 338 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 341 "string.format.m"
              mercury__string__format__SpecChar_13 = (MR_String) "p";
#line 338 "string.format.m"
            else
#line 338 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 340 "string.format.m"
                mercury__string__format__SpecChar_13 = (MR_String) "X";
#line 338 "string.format.m"
              else
#line 337 "string.format.m"
                mercury__string__format__SpecChar_13 = (MR_String) "o";
#line 553 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String LengthModifier;

		{
#line 553 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 8686 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_15_15  = LengthModifier;
#line 553 "string.format.m"
}
#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8704 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
        if (mercury__string__format__succeeded)
#line 382 "string.format.m"
          {
#line 382 "string.format.m"
            mercury__string__format__FormatStr_14 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__V_15_15, mercury__string__format__SpecChar_13);
          }
#line 380 "string.format.m"
        else
#line 384 "string.format.m"
          {
#line 384 "string.format.m"
            mercury__string__format__FormatStr_14 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__SpecChar_13);
          }
#line 592 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_14 ;
	Val =  mercury__string__format__Int_11 ;
		{
#line 592 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 8744 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_12  = Str;
#line 592 "string.format.m"
}
#line 342 "string.format.m"
      }
#line 346 "string.format.m"
    else
#line 347 "string.format.m"
      {
#line 347 "string.format.m"
        *mercury__string__format__String_12 = mercury__string__format__format_unsigned_int_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Base_10, mercury__string__format__Int_11);
      }
#line 346 "string.format.m"
  }
#line 330 "string.format.m"
}

#line 316 "string.format.m"
void MR_CALL 
mercury__string__format__format_signed_int_component_5_p_0(
#line 316 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 316 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 316 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 316 "string.format.m"
  MR_Integer mercury__string__format__Int_9,
#line 316 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 316 "string.format.m"
{
#line 326 "string.format.m"
  {
#line 326 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8796 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 326 "string.format.m"
    if (mercury__string__format__succeeded)
#line 324 "string.format.m"
      {
#line 324 "string.format.m"
        MR_String mercury__string__format__FormatStr_11;
#line 324 "string.format.m"
        MR_String mercury__string__format__V_12_12;

#line 553 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String LengthModifier;

		{
#line 553 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 8825 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_12_12  = LengthModifier;
#line 553 "string.format.m"
}
#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8843 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
        if (mercury__string__format__succeeded)
#line 382 "string.format.m"
          {
#line 382 "string.format.m"
            mercury__string__format__FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__V_12_12, (MR_String) "d");
          }
#line 380 "string.format.m"
        else
#line 384 "string.format.m"
          {
#line 384 "string.format.m"
            mercury__string__format__FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "d");
          }
#line 592 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_signed_int_component_5_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_11 ;
	Val =  mercury__string__format__Int_9 ;
		{
#line 592 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 8883 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_10  = Str;
#line 592 "string.format.m"
}
#line 324 "string.format.m"
      }
#line 326 "string.format.m"
    else
#line 327 "string.format.m"
      {
#line 327 "string.format.m"
        *mercury__string__format__String_10 = mercury__string__format__format_signed_int_4_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Int_9);
      }
#line 326 "string.format.m"
  }
#line 316 "string.format.m"
}

#line 294 "string.format.m"
void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
#line 294 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 294 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 294 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 294 "string.format.m"
  MR_String mercury__string__format__Str_9,
#line 294 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 294 "string.format.m"
{
#line 312 "string.format.m"
  {
#line 312 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 301 "string.format.m"
    {
#line 302 "string.format.m"
      MR_Word mercury__string__format__V_12_12;
#line 302 "string.format.m"
      MR_Word mercury__string__format__V_13_13;
#line 302 "string.format.m"
      MR_Word mercury__string__format__V_14_14;
#line 302 "string.format.m"
      MR_Word mercury__string__format__V_15_15;
#line 302 "string.format.m"
      MR_Word mercury__string__format__V_16_16;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 8948 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 301 "string.format.m"
      if (mercury__string__format__succeeded)
#line 301 "string.format.m"
        {
#line 302 "string.format.m"
          mercury__string__format__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 302 "string.format.m"
          mercury__string__format__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 302 "string.format.m"
          mercury__string__format__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 302 "string.format.m"
          mercury__string__format__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 302 "string.format.m"
          mercury__string__format__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 302 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__V_12_12 == (MR_Integer) 0);
#line 302 "string.format.m"
          if (mercury__string__format__succeeded)
#line 302 "string.format.m"
            {
#line 302 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__V_13_13 == (MR_Integer) 0);
#line 302 "string.format.m"
              if (mercury__string__format__succeeded)
#line 302 "string.format.m"
                {
#line 303 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__V_14_14 == (MR_Integer) 0);
#line 302 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 302 "string.format.m"
                    {
#line 303 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_15_15 == (MR_Integer) 0);
#line 302 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 303 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__V_16_16 == (MR_Integer) 0);
#line 302 "string.format.m"
                    }
#line 302 "string.format.m"
                }
#line 302 "string.format.m"
            }
#line 301 "string.format.m"
          if (mercury__string__format__succeeded)
#line 301 "string.format.m"
            {
#line 304 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__MaybeWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "string.format.m"
              if (mercury__string__format__succeeded)
#line 305 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "string.format.m"
            }
#line 301 "string.format.m"
        }
#line 301 "string.format.m"
    }
#line 306 "string.format.m"
    if (!(mercury__string__format__succeeded))
#line 440 "string.format.m"
      {
#line 444 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_9 ;
		{
#line 444 "string.format.m"

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

#line 9046 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 444 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 440 "string.format.m"
      }
#line 312 "string.format.m"
    if (mercury__string__format__succeeded)
#line 310 "string.format.m"
      {
#line 310 "string.format.m"
        MR_String mercury__string__format__FormatStr_11;

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 9075 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
        if (mercury__string__format__succeeded)
#line 382 "string.format.m"
          {
#line 382 "string.format.m"
            mercury__string__format__FormatStr_11 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "", (MR_String) "s");
          }
#line 380 "string.format.m"
        else
#line 384 "string.format.m"
          {
#line 384 "string.format.m"
            mercury__string__format__FormatStr_11 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "s");
          }
#line 612 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_11 ;
	Val =  mercury__string__format__Str_9 ;
		{
#line 612 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 9115 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_10  = Str;
#line 612 "string.format.m"
}
#line 310 "string.format.m"
      }
#line 312 "string.format.m"
    else
#line 658 "string.format.m"
      {
#line 658 "string.format.m"
        MR_String mercury__string__format__PrecStr_35;

#line 662 "string.format.m"
        if ((mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "string.format.m"
          mercury__string__format__PrecStr_35 = mercury__string__format__Str_9;
#line 662 "string.format.m"
        else
#line 660 "string.format.m"
          {
#line 660 "string.format.m"
            MR_Integer mercury__string__format__NumChars_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 474 "string.opt"
            MR_String mercury__string__format___RightString_7_42;

#line 474 "string.opt"
            {
#line 474 "string.opt"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__format__Str_9, mercury__string__format__NumChars_34, &mercury__string__format__PrecStr_35, &mercury__string__format___RightString_7_42);
            }
#line 660 "string.format.m"
          }
#line 666 "string.format.m"
        {
#line 666 "string.format.m"
          *mercury__string__format__String_10 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__PrecStr_35);
        }
#line 658 "string.format.m"
      }
#line 312 "string.format.m"
  }
#line 294 "string.format.m"
}

#line 282 "string.format.m"
void MR_CALL 
mercury__string__format__format_char_component_4_p_0(
#line 282 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 282 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_6,
#line 282 "string.format.m"
  MR_Char mercury__string__format__Char_7,
#line 282 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 282 "string.format.m"
{
#line 290 "string.format.m"
  {
#line 290 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 430 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_7 ;
		{
#line 430 "string.format.m"

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);

#line 9195 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 430 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 290 "string.format.m"
    if (mercury__string__format__succeeded)
#line 288 "string.format.m"
      {
#line 288 "string.format.m"
        MR_String mercury__string__format__FormatStr_9;
#line 288 "string.format.m"
        MR_Word mercury__string__format__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 402 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 402 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 9224 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 402 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 380 "string.format.m"
        if (mercury__string__format__succeeded)
#line 382 "string.format.m"
          {
#line 382 "string.format.m"
            mercury__string__format__FormatStr_9 = mercury__string__format__make_format_sprintf_5_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__V_10_10, (MR_String) "", (MR_String) "c");
          }
#line 380 "string.format.m"
        else
#line 384 "string.format.m"
          {
#line 384 "string.format.m"
            mercury__string__format__FormatStr_9 = mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_102_111_114_109_97_116_95_100_111_116_110_101_116_95_95_91_49_44_32_52_93_95_48_5_f_0(mercury__string__format__MaybeWidth_6, mercury__string__format__V_10_10, (MR_String) "c");
          }
#line 632 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_char_component_4_p_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_9 ;
	Val =  mercury__string__format__Char_7 ;
		{
#line 632 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 9264 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_8  = Str;
#line 632 "string.format.m"
}
#line 288 "string.format.m"
      }
#line 290 "string.format.m"
    else
#line 649 "string.format.m"
      {
#line 649 "string.format.m"
        MR_String mercury__string__format__CharStr_27;
#line 649 "string.format.m"
        MR_Word mercury__string__format__V_5_32;
#line 649 "string.format.m"
        MR_Word mercury__string__format__V_6_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 701 "string.opt"
        {
#line 701 "string.opt"
          mercury__string__format__V_5_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_5_32, 0) = ((MR_Box) (MR_Word) (mercury__string__format__Char_7));
#line 701 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_5_32, 1) = ((MR_Box) (mercury__string__format__V_6_33));
#line 701 "string.opt"
        }
#line 703 "string.opt"
        {
#line 703 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__string__format__CharStr_27, mercury__string__format__V_5_32);
        }
#line 651 "string.format.m"
        {
#line 651 "string.format.m"
          *mercury__string__format__String_8 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_6, mercury__string__format__CharStr_27);
        }
#line 649 "string.format.m"
      }
#line 290 "string.format.m"
  }
#line 282 "string.format.m"
}

#line 139 "string.format.m"
static void MR_CALL 
mercury__string__format__specs_to_strings_2_p_0(
#line 139 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 139 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__2_2)
#line 139 "string.format.m"
{
#line 142 "string.format.m"
  {
#line 142 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 142 "string.format.m"
    if ((mercury__string__format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "string.format.m"
      *mercury__string__format__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 142 "string.format.m"
    else
#line 143 "string.format.m"
      {
#line 143 "string.format.m"
        MR_Word mercury__string__format__Spec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "string.format.m"
        MR_Word mercury__string__format__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "string.format.m"
        MR_String mercury__string__format__String_5;
#line 143 "string.format.m"
        MR_Word mercury__string__format__Strings_6;

#line 152 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__Spec_3)) == (MR_mktag((MR_Integer) 1))))
#line 169 "string.format.m"
          {
#line 169 "string.format.m"
            MR_Char mercury__string__format__Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 2)));
#line 169 "string.format.m"
            MR_Word mercury__string__format__Flags_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 0)));
#line 169 "string.format.m"
            MR_Word mercury__string__format__MaybeWidth_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_3, (MR_Integer) 1)));

#line 170 "string.format.m"
            {
#line 170 "string.format.m"
              mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_25, mercury__string__format__MaybeWidth_26, mercury__string__format__Char_16, &mercury__string__format__String_5);
            }
#line 169 "string.format.m"
          }
#line 152 "string.format.m"
        else
#line 152 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__Spec_3)) == (MR_mktag((MR_Integer) 0))))
#line 152 "string.format.m"
            mercury__string__format__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__Spec_3, (MR_Integer) 0)));
#line 152 "string.format.m"
          else
#line 152 "string.format.m"
            if (((MR_tag((MR_Word) mercury__string__format__Spec_3)) == (MR_mktag((MR_Integer) 2))))
#line 173 "string.format.m"
              {
#line 173 "string.format.m"
                MR_String mercury__string__format__Str_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 3)));
#line 173 "string.format.m"
                MR_Word mercury__string__format__Flags_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 0)));
#line 173 "string.format.m"
                MR_Word mercury__string__format__MaybeWidth_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 1)));
#line 173 "string.format.m"
                MR_Word mercury__string__format__MaybePrec_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_3, (MR_Integer) 2)));

#line 174 "string.format.m"
                {
#line 174 "string.format.m"
                  mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_27, mercury__string__format__MaybeWidth_28, mercury__string__format__MaybePrec_29, mercury__string__format__Str_17, &mercury__string__format__String_5);
                }
#line 173 "string.format.m"
              }
#line 152 "string.format.m"
            else
#line 152 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__Spec_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 164 "string.format.m"
                {
#line 164 "string.format.m"
                  MR_Word mercury__string__format__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));
#line 164 "string.format.m"
                  MR_Float mercury__string__format__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 5)));
#line 164 "string.format.m"
                  MR_Word mercury__string__format__Flags_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
#line 164 "string.format.m"
                  MR_Word mercury__string__format__MaybeWidth_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
#line 164 "string.format.m"
                  MR_Word mercury__string__format__MaybePrec_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));

#line 165 "string.format.m"
                  {
#line 165 "string.format.m"
                    mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_22, mercury__string__format__MaybeWidth_23, mercury__string__format__MaybePrec_24, mercury__string__format__Kind_14, mercury__string__format__Float_15, &mercury__string__format__String_5);
                  }
#line 164 "string.format.m"
                }
#line 152 "string.format.m"
              else
#line 152 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__Spec_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 155 "string.format.m"
                  {
#line 155 "string.format.m"
                    MR_Word mercury__string__format__Flags_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
#line 155 "string.format.m"
                    MR_Word mercury__string__format__MaybeWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
#line 155 "string.format.m"
                    MR_Word mercury__string__format__MaybePrec_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));
#line 155 "string.format.m"
                    MR_Integer mercury__string__format__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));

#line 156 "string.format.m"
                    {
#line 156 "string.format.m"
                      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_9, mercury__string__format__MaybeWidth_10, mercury__string__format__MaybePrec_11, mercury__string__format__Int_12, &mercury__string__format__String_5);
                    }
#line 155 "string.format.m"
                  }
#line 152 "string.format.m"
                else
#line 159 "string.format.m"
                  {
#line 159 "string.format.m"
                    MR_Word mercury__string__format__Base_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 4)));
#line 159 "string.format.m"
                    MR_Word mercury__string__format__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 1)));
#line 159 "string.format.m"
                    MR_Word mercury__string__format__MaybeWidth_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 2)));
#line 159 "string.format.m"
                    MR_Word mercury__string__format__MaybePrec_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 3)));
#line 159 "string.format.m"
                    MR_Integer mercury__string__format__Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_3, (MR_Integer) 5)));

#line 160 "string.format.m"
                    {
#line 160 "string.format.m"
                      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_18, mercury__string__format__MaybeWidth_19, mercury__string__format__MaybePrec_20, mercury__string__format__Base_13, mercury__string__format__Int_21, &mercury__string__format__String_5);
                    }
#line 159 "string.format.m"
                  }
#line 145 "string.format.m"
        {
#line 145 "string.format.m"
          mercury__string__format__specs_to_strings_2_p_0(mercury__string__format__Specs_4, &mercury__string__format__Strings_6);
        }
#line 143 "string.format.m"
        {
#line 143 "string.format.m"
          MR_Word base;
#line 143 "string.format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "string.format.m"
          *mercury__string__format__HeadVar__2_2 = base;
#line 143 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__String_5));
#line 143 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Strings_6));
#line 143 "string.format.m"
        }
#line 143 "string.format.m"
      }
#line 142 "string.format.m"
  }
#line 139 "string.format.m"
}

#line 75 "string.format.m"
void MR_CALL 
mercury__string__format__format_float_component_width_prec_6_p_0(
#line 75 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 75 "string.format.m"
  MR_Integer mercury__string__format__Width_8,
#line 75 "string.format.m"
  MR_Integer mercury__string__format__Prec_9,
#line 75 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 75 "string.format.m"
  MR_Float mercury__string__format__Float_11,
#line 75 "string.format.m"
  MR_String * mercury__string__format__String_12)
#line 75 "string.format.m"
{
#line 275 "string.format.m"
  {
#line 275 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 275 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_13;
#line 275 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_14;

#line 276 "string.format.m"
    {
#line 276 "string.format.m"
      mercury__string__format__MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_13, 0) = ((MR_Box) (mercury__string__format__Width_8));
#line 276 "string.format.m"
    }
#line 277 "string.format.m"
    {
#line 277 "string.format.m"
      mercury__string__format__MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_14, 0) = ((MR_Box) (mercury__string__format__Prec_9));
#line 277 "string.format.m"
    }
#line 278 "string.format.m"
    {
#line 278 "string.format.m"
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__Kind_10, mercury__string__format__Float_11, mercury__string__format__String_12);
#line 278 "string.format.m"
      return;
    }
#line 275 "string.format.m"
  }
#line 75 "string.format.m"
}

#line 73 "string.format.m"
void MR_CALL 
mercury__string__format__format_float_component_width_noprec_5_p_0(
#line 73 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 73 "string.format.m"
  MR_Integer mercury__string__format__Width_7,
#line 73 "string.format.m"
  MR_Word mercury__string__format__Kind_8,
#line 73 "string.format.m"
  MR_Float mercury__string__format__Float_9,
#line 73 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 73 "string.format.m"
{
#line 270 "string.format.m"
  {
#line 270 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 270 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11;
#line 270 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 271 "string.format.m"
    {
#line 271 "string.format.m"
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
#line 271 "string.format.m"
    }
#line 272 "string.format.m"
    mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "string.format.m"
    {
#line 273 "string.format.m"
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Kind_8, mercury__string__format__Float_9, mercury__string__format__String_10);
#line 273 "string.format.m"
      return;
    }
#line 270 "string.format.m"
  }
#line 73 "string.format.m"
}

#line 71 "string.format.m"
void MR_CALL 
mercury__string__format__format_float_component_nowidth_prec_5_p_0(
#line 71 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 71 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 71 "string.format.m"
  MR_Word mercury__string__format__Kind_8,
#line 71 "string.format.m"
  MR_Float mercury__string__format__Float_9,
#line 71 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 71 "string.format.m"
{
#line 265 "string.format.m"
  {
#line 265 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 265 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 267 "string.format.m"
    {
#line 267 "string.format.m"
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 267 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_7));
#line 267 "string.format.m"
    }
#line 268 "string.format.m"
    {
#line 268 "string.format.m"
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Kind_8, mercury__string__format__Float_9, mercury__string__format__String_10);
#line 268 "string.format.m"
      return;
    }
#line 265 "string.format.m"
  }
#line 71 "string.format.m"
}

#line 69 "string.format.m"
void MR_CALL 
mercury__string__format__format_float_component_nowidth_noprec_4_p_0(
#line 69 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 69 "string.format.m"
  MR_Word mercury__string__format__Kind_6,
#line 69 "string.format.m"
  MR_Float mercury__string__format__Float_7,
#line 69 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 69 "string.format.m"
{
#line 260 "string.format.m"
  {
#line 260 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 260 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 263 "string.format.m"
    {
#line 263 "string.format.m"
      mercury__string__format__format_float_component_6_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Kind_6, mercury__string__format__Float_7, mercury__string__format__String_8);
#line 263 "string.format.m"
      return;
    }
#line 260 "string.format.m"
  }
#line 69 "string.format.m"
}

#line 66 "string.format.m"
void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_prec_6_p_0(
#line 66 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 66 "string.format.m"
  MR_Integer mercury__string__format__Width_8,
#line 66 "string.format.m"
  MR_Integer mercury__string__format__Prec_9,
#line 66 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 66 "string.format.m"
  MR_Integer mercury__string__format__Int_11,
#line 66 "string.format.m"
  MR_String * mercury__string__format__String_12)
#line 66 "string.format.m"
{
#line 252 "string.format.m"
  {
#line 252 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 252 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_13;
#line 252 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_14;

#line 253 "string.format.m"
    {
#line 253 "string.format.m"
      mercury__string__format__MaybeWidth_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_13, 0) = ((MR_Box) (mercury__string__format__Width_8));
#line 253 "string.format.m"
    }
#line 254 "string.format.m"
    {
#line 254 "string.format.m"
      mercury__string__format__MaybePrec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 254 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_14, 0) = ((MR_Box) (mercury__string__format__Prec_9));
#line 254 "string.format.m"
    }
#line 255 "string.format.m"
    {
#line 255 "string.format.m"
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__Base_10, mercury__string__format__Int_11, mercury__string__format__String_12);
#line 255 "string.format.m"
      return;
    }
#line 252 "string.format.m"
  }
#line 66 "string.format.m"
}

#line 64 "string.format.m"
void MR_CALL 
mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0(
#line 64 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 64 "string.format.m"
  MR_Integer mercury__string__format__Width_7,
#line 64 "string.format.m"
  MR_Word mercury__string__format__Base_8,
#line 64 "string.format.m"
  MR_Integer mercury__string__format__Int_9,
#line 64 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 64 "string.format.m"
{
#line 245 "string.format.m"
  {
#line 245 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 245 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11;
#line 245 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 246 "string.format.m"
    {
#line 246 "string.format.m"
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 246 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
#line 246 "string.format.m"
    }
#line 247 "string.format.m"
    mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "string.format.m"
    {
#line 248 "string.format.m"
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Base_8, mercury__string__format__Int_9, mercury__string__format__String_10);
#line 248 "string.format.m"
      return;
    }
#line 245 "string.format.m"
  }
#line 64 "string.format.m"
}

#line 62 "string.format.m"
void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_prec_5_p_0(
#line 62 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 62 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 62 "string.format.m"
  MR_Word mercury__string__format__Base_8,
#line 62 "string.format.m"
  MR_Integer mercury__string__format__Int_9,
#line 62 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 62 "string.format.m"
{
#line 239 "string.format.m"
  {
#line 239 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 239 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 239 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 241 "string.format.m"
    {
#line 241 "string.format.m"
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 241 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_7));
#line 241 "string.format.m"
    }
#line 242 "string.format.m"
    {
#line 242 "string.format.m"
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Base_8, mercury__string__format__Int_9, mercury__string__format__String_10);
#line 242 "string.format.m"
      return;
    }
#line 239 "string.format.m"
  }
#line 62 "string.format.m"
}

#line 60 "string.format.m"
void MR_CALL 
mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0(
#line 60 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 60 "string.format.m"
  MR_Word mercury__string__format__Base_6,
#line 60 "string.format.m"
  MR_Integer mercury__string__format__Int_7,
#line 60 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 60 "string.format.m"
{
#line 233 "string.format.m"
  {
#line 233 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 233 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 233 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 236 "string.format.m"
    {
#line 236 "string.format.m"
      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Base_6, mercury__string__format__Int_7, mercury__string__format__String_8);
#line 236 "string.format.m"
      return;
    }
#line 233 "string.format.m"
  }
#line 60 "string.format.m"
}

#line 57 "string.format.m"
void MR_CALL 
mercury__string__format__format_signed_int_component_width_prec_5_p_0(
#line 57 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 57 "string.format.m"
  MR_Integer mercury__string__format__Width_7,
#line 57 "string.format.m"
  MR_Integer mercury__string__format__Prec_8,
#line 57 "string.format.m"
  MR_Integer mercury__string__format__Int_9,
#line 57 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 57 "string.format.m"
{
#line 226 "string.format.m"
  {
#line 226 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 226 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11;
#line 226 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 227 "string.format.m"
    {
#line 227 "string.format.m"
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
#line 227 "string.format.m"
    }
#line 228 "string.format.m"
    {
#line 228 "string.format.m"
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_8));
#line 228 "string.format.m"
    }
#line 229 "string.format.m"
    {
#line 229 "string.format.m"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Int_9, mercury__string__format__String_10);
#line 229 "string.format.m"
      return;
    }
#line 226 "string.format.m"
  }
#line 57 "string.format.m"
}

#line 55 "string.format.m"
void MR_CALL 
mercury__string__format__format_signed_int_component_width_noprec_4_p_0(
#line 55 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 55 "string.format.m"
  MR_Integer mercury__string__format__Width_6,
#line 55 "string.format.m"
  MR_Integer mercury__string__format__Int_7,
#line 55 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 55 "string.format.m"
{
#line 221 "string.format.m"
  {
#line 221 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 221 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9;
#line 221 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10;

#line 222 "string.format.m"
    {
#line 222 "string.format.m"
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 222 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
#line 222 "string.format.m"
    }
#line 223 "string.format.m"
    mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 224 "string.format.m"
    {
#line 224 "string.format.m"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Int_7, mercury__string__format__String_8);
#line 224 "string.format.m"
      return;
    }
#line 221 "string.format.m"
  }
#line 55 "string.format.m"
}

#line 53 "string.format.m"
void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(
#line 53 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 53 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 53 "string.format.m"
  MR_Integer mercury__string__format__Int_7,
#line 53 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 53 "string.format.m"
{
#line 216 "string.format.m"
  {
#line 216 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 216 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10;

#line 218 "string.format.m"
    {
#line 218 "string.format.m"
      mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_10, 0) = ((MR_Box) (mercury__string__format__Prec_6));
#line 218 "string.format.m"
    }
#line 219 "string.format.m"
    {
#line 219 "string.format.m"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Int_7, mercury__string__format__String_8);
#line 219 "string.format.m"
      return;
    }
#line 216 "string.format.m"
  }
#line 53 "string.format.m"
}

#line 51 "string.format.m"
void MR_CALL 
mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(
#line 51 "string.format.m"
  MR_Word mercury__string__format__Flags_4,
#line 51 "string.format.m"
  MR_Integer mercury__string__format__Int_5,
#line 51 "string.format.m"
  MR_String * mercury__string__format__String_6)
#line 51 "string.format.m"
{
#line 211 "string.format.m"
  {
#line 211 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 211 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 214 "string.format.m"
    {
#line 214 "string.format.m"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Int_5, mercury__string__format__String_6);
#line 214 "string.format.m"
      return;
    }
#line 211 "string.format.m"
  }
#line 51 "string.format.m"
}

#line 48 "string.format.m"
void MR_CALL 
mercury__string__format__format_string_component_width_prec_5_p_0(
#line 48 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 48 "string.format.m"
  MR_Integer mercury__string__format__Width_7,
#line 48 "string.format.m"
  MR_Integer mercury__string__format__Prec_8,
#line 48 "string.format.m"
  MR_String mercury__string__format__Str_9,
#line 48 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 48 "string.format.m"
{
#line 204 "string.format.m"
  {
#line 204 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 204 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_11;
#line 204 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_12;

#line 205 "string.format.m"
    {
#line 205 "string.format.m"
      mercury__string__format__MaybeWidth_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_11, 0) = ((MR_Box) (mercury__string__format__Width_7));
#line 205 "string.format.m"
    }
#line 206 "string.format.m"
    {
#line 206 "string.format.m"
      mercury__string__format__MaybePrec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_12, 0) = ((MR_Box) (mercury__string__format__Prec_8));
#line 206 "string.format.m"
    }
#line 207 "string.format.m"
    {
#line 207 "string.format.m"
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_11, mercury__string__format__MaybePrec_12, mercury__string__format__Str_9, mercury__string__format__String_10);
#line 207 "string.format.m"
      return;
    }
#line 204 "string.format.m"
  }
#line 48 "string.format.m"
}

#line 46 "string.format.m"
void MR_CALL 
mercury__string__format__format_string_component_width_noprec_4_p_0(
#line 46 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 46 "string.format.m"
  MR_Integer mercury__string__format__Width_6,
#line 46 "string.format.m"
  MR_String mercury__string__format__Str_7,
#line 46 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 46 "string.format.m"
{
#line 199 "string.format.m"
  {
#line 199 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 199 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9;
#line 199 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10;

#line 200 "string.format.m"
    {
#line 200 "string.format.m"
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
#line 200 "string.format.m"
    }
#line 201 "string.format.m"
    mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "string.format.m"
    {
#line 202 "string.format.m"
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Str_7, mercury__string__format__String_8);
#line 202 "string.format.m"
      return;
    }
#line 199 "string.format.m"
  }
#line 46 "string.format.m"
}

#line 44 "string.format.m"
void MR_CALL 
mercury__string__format__format_string_component_nowidth_prec_4_p_0(
#line 44 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 44 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 44 "string.format.m"
  MR_String mercury__string__format__Str_7,
#line 44 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 44 "string.format.m"
{
#line 194 "string.format.m"
  {
#line 194 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 194 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_10;

#line 196 "string.format.m"
    {
#line 196 "string.format.m"
      mercury__string__format__MaybePrec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_10, 0) = ((MR_Box) (mercury__string__format__Prec_6));
#line 196 "string.format.m"
    }
#line 197 "string.format.m"
    {
#line 197 "string.format.m"
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__MaybePrec_10, mercury__string__format__Str_7, mercury__string__format__String_8);
#line 197 "string.format.m"
      return;
    }
#line 194 "string.format.m"
  }
#line 44 "string.format.m"
}

#line 42 "string.format.m"
void MR_CALL 
mercury__string__format__format_string_component_nowidth_noprec_3_p_0(
#line 42 "string.format.m"
  MR_Word mercury__string__format__Flags_4,
#line 42 "string.format.m"
  MR_String mercury__string__format__Str_5,
#line 42 "string.format.m"
  MR_String * mercury__string__format__String_6)
#line 42 "string.format.m"
{
#line 189 "string.format.m"
  {
#line 189 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 189 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 192 "string.format.m"
    {
#line 192 "string.format.m"
      mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, mercury__string__format__Str_5, mercury__string__format__String_6);
#line 192 "string.format.m"
      return;
    }
#line 189 "string.format.m"
  }
#line 42 "string.format.m"
}

#line 39 "string.format.m"
void MR_CALL 
mercury__string__format__format_char_component_width_4_p_0(
#line 39 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 39 "string.format.m"
  MR_Integer mercury__string__format__Width_6,
#line 39 "string.format.m"
  MR_Char mercury__string__format__Char_7,
#line 39 "string.format.m"
  MR_String * mercury__string__format__String_8)
#line 39 "string.format.m"
{
#line 183 "string.format.m"
  {
#line 183 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 183 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_9;

#line 184 "string.format.m"
    {
#line 184 "string.format.m"
      mercury__string__format__MaybeWidth_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "string.format.m"
      MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_9, 0) = ((MR_Box) (mercury__string__format__Width_6));
#line 184 "string.format.m"
    }
#line 185 "string.format.m"
    {
#line 185 "string.format.m"
      mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_5, mercury__string__format__MaybeWidth_9, mercury__string__format__Char_7, mercury__string__format__String_8);
#line 185 "string.format.m"
      return;
    }
#line 183 "string.format.m"
  }
#line 39 "string.format.m"
}

#line 37 "string.format.m"
void MR_CALL 
mercury__string__format__format_char_component_nowidth_3_p_0(
#line 37 "string.format.m"
  MR_Word mercury__string__format__Flags_4,
#line 37 "string.format.m"
  MR_Char mercury__string__format__Char_5,
#line 37 "string.format.m"
  MR_String * mercury__string__format__String_6)
#line 37 "string.format.m"
{
#line 179 "string.format.m"
  {
#line 179 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 179 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 181 "string.format.m"
    {
#line 181 "string.format.m"
      mercury__string__format__format_char_component_4_p_0(mercury__string__format__Flags_4, mercury__string__format__MaybeWidth_7, mercury__string__format__Char_5, mercury__string__format__String_6);
#line 181 "string.format.m"
      return;
    }
#line 179 "string.format.m"
  }
#line 37 "string.format.m"
}

#line 27 "string.format.m"
void MR_CALL 
mercury__string__format__format_impl_3_p_0(
#line 27 "string.format.m"
  MR_String mercury__string__format__FormatString_4,
#line 27 "string.format.m"
  MR_Word mercury__string__format__PolyList_5,
#line 27 "string.format.m"
  MR_String * mercury__string__format__String_6)
#line 27 "string.format.m"
{
#line 110 "string.format.m"
  {
#line 110 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 110 "string.format.m"
    MR_Word mercury__string__format__Chars_7;
#line 110 "string.format.m"
    MR_Word mercury__string__format__Specs_8;
#line 110 "string.format.m"
    MR_Word mercury__string__format__Errors_9;

#line 143 "string.opt"
    {
#line 143 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__FormatString_4, &mercury__string__format__Chars_7);
    }
#line 118 "string.format.m"
    {
#line 118 "string.format.m"
      mercury__string__parse_runtime__parse_format_string_5_p_0(mercury__string__format__Chars_7, mercury__string__format__PolyList_5, (MR_Integer) 1, &mercury__string__format__Specs_8, &mercury__string__format__Errors_9);
    }
#line 123 "string.format.m"
    if ((mercury__string__format__Errors_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "string.format.m"
      {
#line 120 "string.format.m"
        MR_Word mercury__string__format__SpecStrs_10;

#line 121 "string.format.m"
        {
#line 121 "string.format.m"
          mercury__string__format__specs_to_strings_2_p_0(mercury__string__format__Specs_8, &mercury__string__format__SpecStrs_10);
        }
#line 122 "string.format.m"
        {
#line 122 "string.format.m"
          *mercury__string__format__String_6 = mercury__string__append_list_1_f_0(mercury__string__format__SpecStrs_10);
        }
#line 120 "string.format.m"
      }
#line 123 "string.format.m"
    else
#line 124 "string.format.m"
      {
#line 124 "string.format.m"
        MR_Word mercury__string__format__HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 0)));
#line 124 "string.format.m"
        MR_String mercury__string__format__Msg_13;
#line 124 "string.format.m"
        MR_Word mercury__string__format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 1)));

#line 133 "string.format.m"
        {
#line 133 "string.format.m"
          mercury__string__format__Msg_13 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(mercury__string__format__HeadError_11);
        }
#line 134 "string.format.m"
        {
#line 134 "string.format.m"
          mercury__require__error_2_p_0((MR_String) "string.format", mercury__string__format__Msg_13);
#line 134 "string.format.m"
          return;
        }
#line 124 "string.format.m"
      }
#line 110 "string.format.m"
  }
#line 27 "string.format.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.format. */
