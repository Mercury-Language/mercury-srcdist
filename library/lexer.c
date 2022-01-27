/*
** Automatically generated from `lexer.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module lexer. */
/* :- implementation. */

/*
INIT mercury__lexer__init
ENDINIT
*/

#include "lexer.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_0;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_1;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_2;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_3;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_4;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_5;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_6;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_7;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_8;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_9;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_10;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_11;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_12;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_13;

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_get_token_action_0[14];

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_get_token_action_0[14];

static const MR_Integer mercury__lexer__lexer__functor_number_map_get_token_action_0[14];

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_0;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_1;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_2;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_3;

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_integer_base_0[4];

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_integer_base_0[4];

static const MR_Integer mercury__lexer__lexer__functor_number_map_integer_base_0[4];

static const MR_Integer mercury__lexer__lexer__functor_number_map_maybe_have_valid_token_0[1];

static const MR_NotagFunctorDesc mercury__lexer__lexer__notag_functor_desc_maybe_have_valid_token_0;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_0;

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_1;

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_scanned_past_whitespace_0[2];

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_scanned_past_whitespace_0[2];

static const MR_Integer mercury__lexer__lexer__functor_number_map_scanned_past_whitespace_0[2];

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_0[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_0;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_1[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_1;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_2[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_2;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_3[2];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_3;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_4[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_4;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_5[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_5;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_6[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_6;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_7;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_8;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_9;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_10;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_11;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_12;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_13;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_14;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_15;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_16;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_17[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_17;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_18[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_18;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_19[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_19;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_20;

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_21[1];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_21;

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_0[11];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_1[1];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_2[1];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_3[9];

static const MR_DuPtagLayout mercury__lexer__lexer__du_ptag_ordered_token_0[4];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_name_ordered_token_0[22];

static const MR_Integer mercury__lexer__lexer__functor_number_map_token_0[22];

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_list_0_0[3];

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_list_0_0;

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_list_0_1;

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_list_0_0[1];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_list_0_1[1];

static const MR_DuPtagLayout mercury__lexer__lexer__du_ptag_ordered_token_list_0[2];

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_name_ordered_token_list_0[2];

static const MR_Integer mercury__lexer__lexer__functor_number_map_token_list_0[2];

static MR_bool MR_CALL 
mercury__lexer____Unify____get_token_action_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____get_token_action_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____integer_base_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____integer_base_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____maybe_have_valid_token_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____maybe_have_valid_token_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____offset_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____offset_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____scanned_past_whitespace_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____scanned_past_whitespace_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____string_token_context_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____string_token_context_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____token_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____token_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____token_context_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____token_context_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__lexer____Unify____token_list_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2);

static void MR_CALL 
mercury__lexer____Compare____token_list_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__lexer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__lexer__conv_string_to_int_3_p_0(
  MR_String mercury__lexer__String_4,
  MR_Word mercury__lexer__Base_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_float_exponent_3_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_float_exponent_3_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__get_float_exponent_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_float_exponent_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_float_exponent_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_float_decimals_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_float_decimals_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_int_dot_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_int_dot_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_number_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_number_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_hex_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_hex_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_hex_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_hex_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_octal_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_octal_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_octal_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_octal_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_binary_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_binary_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_binary_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_binary_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__get_char_code_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_zero_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16);

static void MR_CALL 
mercury__lexer__get_zero_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_variable_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_variable_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_graphic_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_graphic_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_get_source_line_number_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_19,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_20);

static void MR_CALL 
mercury__lexer__get_source_line_number_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_18,
  MR_Word * mercury__lexer__Token_9,
  MR_Word * mercury__lexer__HaveToken_10);

static void MR_CALL 
mercury__lexer__string_get_implementation_defined_literal_rest_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_18,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_19);

static void MR_CALL 
mercury__lexer__get_implementation_defined_literal_rest_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__string_get_name_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_name_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8);

static void MR_CALL 
mercury__lexer__string_finish_octal_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_25,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_26,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_27,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_28);

static void MR_CALL 
mercury__lexer__finish_octal_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_20,
  MR_Word * mercury__lexer__Token_12);

static void MR_CALL 
mercury__lexer__string_get_octal_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_21,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_22,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24);

static void MR_CALL 
mercury__lexer__get_octal_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_17,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_18,
  MR_Word * mercury__lexer__Token_12);

static void MR_CALL 
mercury__lexer__string_finish_hex_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_25,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_26,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_27,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_28);

static void MR_CALL 
mercury__lexer__finish_hex_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_20,
  MR_Word * mercury__lexer__Token_12);

static void MR_CALL 
mercury__lexer__string_get_hex_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_21,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_22,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24);

static void MR_CALL 
mercury__lexer__get_hex_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_17,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_18,
  MR_Word * mercury__lexer__Token_12);

static void MR_CALL 
mercury__lexer__string_get_unicode_escape_11_p_0(
  MR_Integer mercury__lexer__NumHexChars_12,
  MR_String mercury__lexer__String_13,
  MR_Integer mercury__lexer__Len_14,
  MR_Char mercury__lexer__QuoteChar_15,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_26,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_27,
  MR_Word mercury__lexer__Posn0_18,
  MR_Word * mercury__lexer__Token_19,
  MR_Integer * mercury__lexer__Context_20,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_28,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_29);

static void MR_CALL 
mercury__lexer__get_unicode_escape_8_p_0(
  MR_Word mercury__lexer__Stream_9,
  MR_Integer mercury__lexer__NumHexChars_10,
  MR_Char mercury__lexer__QuoteChar_11,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_22,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_23,
  MR_Word * mercury__lexer__Token_14);

static void MR_CALL 
mercury__lexer__string_get_quoted_name_escape_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_20,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_21,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_22);

static void MR_CALL 
mercury__lexer__get_quoted_name_escape_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_16,
  MR_Word * mercury__lexer__Token_10);

static void MR_CALL 
mercury__lexer__string_get_quoted_name_quote_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_20,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_21);

static void MR_CALL 
mercury__lexer__get_quoted_name_quote_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10);

static void MR_CALL 
mercury__lexer__string_get_quoted_name_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_20,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_21);

static void MR_CALL 
mercury__lexer__get_quoted_name_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10);

static void MR_CALL 
mercury__lexer__string_start_quoted_name_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_22,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24);

static void MR_CALL 
mercury__lexer__start_quoted_name_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10);

static void MR_CALL 
mercury__lexer__string_get_comment_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16);

static void MR_CALL 
mercury__lexer__get_comment_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8);

static void MR_CALL 
mercury__lexer__string_get_comment_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16);

static void MR_CALL 
mercury__lexer__get_comment_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8);

static void MR_CALL 
mercury__lexer__string_get_slash_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17);

static void MR_CALL 
mercury__lexer__get_slash_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8);

static void MR_CALL 
mercury__lexer__string_skip_to_eol_6_p_0(
  MR_String mercury__lexer__String_7,
  MR_Integer mercury__lexer__Len_8,
  MR_Word * mercury__lexer__Token_9,
  MR_Word * mercury__lexer__HaveToken_10,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_13,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_14);

static void MR_CALL 
mercury__lexer__skip_to_eol_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8);

static void MR_CALL 
mercury__lexer__string_get_dot_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16);

static void MR_CALL 
mercury__lexer__get_dot_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6);

static void MR_CALL 
mercury__lexer__execute_string_get_token_action_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Word mercury__lexer__Posn0_13,
  MR_Char mercury__lexer__Char_14,
  MR_Word mercury__lexer__Action_15,
  MR_Word mercury__lexer__ScannedPastWhiteSpace_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24);

static MR_bool MR_CALL 
mercury__lexer__have_token_with_context_2_p_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Integer * mercury__lexer__Context_3);

static void MR_CALL 
mercury__lexer__string_have_token_4_p_0(
  MR_Word mercury__lexer__Posn0_5,
  MR_Word * mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_8,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_9);

static void MR_CALL 
mercury__lexer__have_token_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__HeadVar__2_2);

static void MR_CALL 
mercury__lexer__grab_string_5_p_0(
  MR_String mercury__lexer__String_6,
  MR_Word mercury__lexer__Posn0_7,
  MR_String * mercury__lexer__SubString_8,
  MR_Word mercury__lexer__Posn_9,
  MR_Word * mercury__lexer__Posn_5);

static void MR_CALL 
mercury__lexer__string_ungetchar_3_p_0(
  MR_String mercury__lexer__String_4,
  MR_Word mercury__lexer__Posn0_5,
  MR_Word * mercury__lexer__Posn_6);

static void MR_CALL 
mercury__lexer__string_get_context_4_p_0(
  MR_Word mercury__lexer__StartPosn_5,
  MR_Integer * mercury__lexer__Context_6,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_11,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_12);


static /* final */ const MR_Box mercury__lexer_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__lexer_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__lexer_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__lexer_scalar_common_5[1][4];

static /* final */ const MR_Box mercury__lexer_scalar_common_7[36][2];

static /* final */ const MR_Box mercury__lexer_scalar_common_8[5][1];


/* sealed */ struct mercury__lexer__vector_common_type_4_0_s {
  const MR_Word mercury__lexer__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct mercury__lexer__vector_common_type_4_0_s mercury__lexer_vector_common_4[1534];

/* sealed */ struct mercury__lexer__vector_common_type_6_0_s {
  const MR_Integer mercury__lexer__vector_common_type_6_0__vct_6_f_0;
  const MR_String mercury__lexer__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mercury__lexer__vector_common_type_6_0_s mercury__lexer_vector_common_6[4];

/* sealed */ struct mercury__lexer__vector_common_type_9_0_s {
  const MR_Integer mercury__lexer__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct mercury__lexer__vector_common_type_9_0_s mercury__lexer_vector_common_9[4];



static /* final */ const MR_Box mercury__lexer_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lexer_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lexer_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__lexer_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lexer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__lexer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__lexer_scalar_common_5[1][4] = {
  /* row 0 */
  {
    (MR_Integer) 4286578719,
    (MR_Integer) 4294967295,
    (MR_Integer) 4294967295,
    (MR_Integer) 4194303
  },
};

static /* final */ const MR_Box mercury__lexer_scalar_common_7[36][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ">>")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\"")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 46)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 47)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated \'/*\' comment"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated quote"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in quoted name"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid escape character"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "null character is illegal in strings and names"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid Unicode character code"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid hex character in Unicode escape"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated hex escape"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "empty hex escape"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid hex escape"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated octal escape"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "empty octal escape"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid octal escape"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in name"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 36)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unexpected end-of-file in \140#\' line number directive"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\' in \140#\' line number directive")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in \140#\' line number directive"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in graphic token"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in variable"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated char code constant"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated binary constant"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid character in int"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated octal constant"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated hex constant"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "invalid float token"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "unterminated exponent in float token"))
  },
};

static /* final */ const MR_Box mercury__lexer_scalar_common_8[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\140"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "/"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\044"))
  },
};


static /* final */ const struct mercury__lexer__vector_common_type_4_0_s mercury__lexer_vector_common_4[1534] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 6 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 7 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 8 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 9 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 10 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 11 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 12 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 13 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 14 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 15 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 16 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 17 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 18 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 19 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 20 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 21 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 22 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 23 */   {     (MR_Integer) 0 },
  /* row 24 */   {     (MR_Integer) 13 },
  /* row 25 */   {     (MR_Integer) 8 },
  /* row 26 */   {     (MR_Integer) 10 },
  /* row 27 */   {     (MR_Integer) 12 },
  /* row 28 */   {     (MR_Integer) 7 },
  /* row 29 */   {     (MR_Integer) 13 },
  /* row 30 */   {     (MR_Integer) 8 },
  /* row 31 */   {     (MR_Integer) 5 },
  /* row 32 */   {     (MR_Integer) 5 },
  /* row 33 */   {     (MR_Integer) 13 },
  /* row 34 */   {     (MR_Integer) 13 },
  /* row 35 */   {     (MR_Integer) 5 },
  /* row 36 */   {     (MR_Integer) 13 },
  /* row 37 */   {     (MR_Integer) 6 },
  /* row 38 */   {     (MR_Integer) 9 },
  /* row 39 */   {     (MR_Integer) 3 },
  /* row 40 */   {     (MR_Integer) 4 },
  /* row 41 */   {     (MR_Integer) 4 },
  /* row 42 */   {     (MR_Integer) 4 },
  /* row 43 */   {     (MR_Integer) 4 },
  /* row 44 */   {     (MR_Integer) 4 },
  /* row 45 */   {     (MR_Integer) 4 },
  /* row 46 */   {     (MR_Integer) 4 },
  /* row 47 */   {     (MR_Integer) 4 },
  /* row 48 */   {     (MR_Integer) 4 },
  /* row 49 */   {     (MR_Integer) 13 },
  /* row 50 */   {     (MR_Integer) 5 },
  /* row 51 */   {     (MR_Integer) 13 },
  /* row 52 */   {     (MR_Integer) 13 },
  /* row 53 */   {     (MR_Integer) 13 },
  /* row 54 */   {     (MR_Integer) 13 },
  /* row 55 */   {     (MR_Integer) 13 },
  /* row 56 */   {     (MR_Integer) 2 },
  /* row 57 */   {     (MR_Integer) 2 },
  /* row 58 */   {     (MR_Integer) 2 },
  /* row 59 */   {     (MR_Integer) 2 },
  /* row 60 */   {     (MR_Integer) 2 },
  /* row 61 */   {     (MR_Integer) 2 },
  /* row 62 */   {     (MR_Integer) 2 },
  /* row 63 */   {     (MR_Integer) 2 },
  /* row 64 */   {     (MR_Integer) 2 },
  /* row 65 */   {     (MR_Integer) 2 },
  /* row 66 */   {     (MR_Integer) 2 },
  /* row 67 */   {     (MR_Integer) 2 },
  /* row 68 */   {     (MR_Integer) 2 },
  /* row 69 */   {     (MR_Integer) 2 },
  /* row 70 */   {     (MR_Integer) 2 },
  /* row 71 */   {     (MR_Integer) 2 },
  /* row 72 */   {     (MR_Integer) 2 },
  /* row 73 */   {     (MR_Integer) 2 },
  /* row 74 */   {     (MR_Integer) 2 },
  /* row 75 */   {     (MR_Integer) 2 },
  /* row 76 */   {     (MR_Integer) 2 },
  /* row 77 */   {     (MR_Integer) 2 },
  /* row 78 */   {     (MR_Integer) 2 },
  /* row 79 */   {     (MR_Integer) 2 },
  /* row 80 */   {     (MR_Integer) 2 },
  /* row 81 */   {     (MR_Integer) 2 },
  /* row 82 */   {     (MR_Integer) 5 },
  /* row 83 */   {     (MR_Integer) 13 },
  /* row 84 */   {     (MR_Integer) 5 },
  /* row 85 */   {     (MR_Integer) 13 },
  /* row 86 */   {     (MR_Integer) 2 },
  /* row 87 */   {     (MR_Integer) 11 },
  /* row 88 */   {     (MR_Integer) 1 },
  /* row 89 */   {     (MR_Integer) 1 },
  /* row 90 */   {     (MR_Integer) 1 },
  /* row 91 */   {     (MR_Integer) 1 },
  /* row 92 */   {     (MR_Integer) 1 },
  /* row 93 */   {     (MR_Integer) 1 },
  /* row 94 */   {     (MR_Integer) 1 },
  /* row 95 */   {     (MR_Integer) 1 },
  /* row 96 */   {     (MR_Integer) 1 },
  /* row 97 */   {     (MR_Integer) 1 },
  /* row 98 */   {     (MR_Integer) 1 },
  /* row 99 */   {     (MR_Integer) 1 },
  /* row 100 */   {     (MR_Integer) 1 },
  /* row 101 */   {     (MR_Integer) 1 },
  /* row 102 */   {     (MR_Integer) 1 },
  /* row 103 */   {     (MR_Integer) 1 },
  /* row 104 */   {     (MR_Integer) 1 },
  /* row 105 */   {     (MR_Integer) 1 },
  /* row 106 */   {     (MR_Integer) 1 },
  /* row 107 */   {     (MR_Integer) 1 },
  /* row 108 */   {     (MR_Integer) 1 },
  /* row 109 */   {     (MR_Integer) 1 },
  /* row 110 */   {     (MR_Integer) 1 },
  /* row 111 */   {     (MR_Integer) 1 },
  /* row 112 */   {     (MR_Integer) 1 },
  /* row 113 */   {     (MR_Integer) 1 },
  /* row 114 */   {     (MR_Integer) 5 },
  /* row 115 */   {     (MR_Integer) 5 },
  /* row 116 */   {     (MR_Integer) 5 },
  /* row 117 */   {     (MR_Integer) 13 },
  /* row 118 */   {     (MR_Integer) 0 },
  /* row 119 */   {     (MR_Integer) 0 },
  /* row 120 */   {     (MR_Integer) 0 },
  /* row 121 */   {     (MR_Integer) 0 },
  /* row 122 */   {     (MR_Integer) 0 },
  /* row 123 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 124 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 125 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 126 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 127 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 128 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 129 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 130 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 131 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 132 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 133 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 134 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 135 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 136 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 137 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 138 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 139 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 140 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 141 */   {     (MR_Integer) 0 },
  /* row 142 */   {     (MR_Integer) 13 },
  /* row 143 */   {     (MR_Integer) 8 },
  /* row 144 */   {     (MR_Integer) 10 },
  /* row 145 */   {     (MR_Integer) 12 },
  /* row 146 */   {     (MR_Integer) 7 },
  /* row 147 */   {     (MR_Integer) 13 },
  /* row 148 */   {     (MR_Integer) 8 },
  /* row 149 */   {     (MR_Integer) 5 },
  /* row 150 */   {     (MR_Integer) 5 },
  /* row 151 */   {     (MR_Integer) 13 },
  /* row 152 */   {     (MR_Integer) 13 },
  /* row 153 */   {     (MR_Integer) 5 },
  /* row 154 */   {     (MR_Integer) 13 },
  /* row 155 */   {     (MR_Integer) 6 },
  /* row 156 */   {     (MR_Integer) 9 },
  /* row 157 */   {     (MR_Integer) 3 },
  /* row 158 */   {     (MR_Integer) 4 },
  /* row 159 */   {     (MR_Integer) 4 },
  /* row 160 */   {     (MR_Integer) 4 },
  /* row 161 */   {     (MR_Integer) 4 },
  /* row 162 */   {     (MR_Integer) 4 },
  /* row 163 */   {     (MR_Integer) 4 },
  /* row 164 */   {     (MR_Integer) 4 },
  /* row 165 */   {     (MR_Integer) 4 },
  /* row 166 */   {     (MR_Integer) 4 },
  /* row 167 */   {     (MR_Integer) 13 },
  /* row 168 */   {     (MR_Integer) 5 },
  /* row 169 */   {     (MR_Integer) 13 },
  /* row 170 */   {     (MR_Integer) 13 },
  /* row 171 */   {     (MR_Integer) 13 },
  /* row 172 */   {     (MR_Integer) 13 },
  /* row 173 */   {     (MR_Integer) 13 },
  /* row 174 */   {     (MR_Integer) 2 },
  /* row 175 */   {     (MR_Integer) 2 },
  /* row 176 */   {     (MR_Integer) 2 },
  /* row 177 */   {     (MR_Integer) 2 },
  /* row 178 */   {     (MR_Integer) 2 },
  /* row 179 */   {     (MR_Integer) 2 },
  /* row 180 */   {     (MR_Integer) 2 },
  /* row 181 */   {     (MR_Integer) 2 },
  /* row 182 */   {     (MR_Integer) 2 },
  /* row 183 */   {     (MR_Integer) 2 },
  /* row 184 */   {     (MR_Integer) 2 },
  /* row 185 */   {     (MR_Integer) 2 },
  /* row 186 */   {     (MR_Integer) 2 },
  /* row 187 */   {     (MR_Integer) 2 },
  /* row 188 */   {     (MR_Integer) 2 },
  /* row 189 */   {     (MR_Integer) 2 },
  /* row 190 */   {     (MR_Integer) 2 },
  /* row 191 */   {     (MR_Integer) 2 },
  /* row 192 */   {     (MR_Integer) 2 },
  /* row 193 */   {     (MR_Integer) 2 },
  /* row 194 */   {     (MR_Integer) 2 },
  /* row 195 */   {     (MR_Integer) 2 },
  /* row 196 */   {     (MR_Integer) 2 },
  /* row 197 */   {     (MR_Integer) 2 },
  /* row 198 */   {     (MR_Integer) 2 },
  /* row 199 */   {     (MR_Integer) 2 },
  /* row 200 */   {     (MR_Integer) 5 },
  /* row 201 */   {     (MR_Integer) 13 },
  /* row 202 */   {     (MR_Integer) 5 },
  /* row 203 */   {     (MR_Integer) 13 },
  /* row 204 */   {     (MR_Integer) 2 },
  /* row 205 */   {     (MR_Integer) 11 },
  /* row 206 */   {     (MR_Integer) 1 },
  /* row 207 */   {     (MR_Integer) 1 },
  /* row 208 */   {     (MR_Integer) 1 },
  /* row 209 */   {     (MR_Integer) 1 },
  /* row 210 */   {     (MR_Integer) 1 },
  /* row 211 */   {     (MR_Integer) 1 },
  /* row 212 */   {     (MR_Integer) 1 },
  /* row 213 */   {     (MR_Integer) 1 },
  /* row 214 */   {     (MR_Integer) 1 },
  /* row 215 */   {     (MR_Integer) 1 },
  /* row 216 */   {     (MR_Integer) 1 },
  /* row 217 */   {     (MR_Integer) 1 },
  /* row 218 */   {     (MR_Integer) 1 },
  /* row 219 */   {     (MR_Integer) 1 },
  /* row 220 */   {     (MR_Integer) 1 },
  /* row 221 */   {     (MR_Integer) 1 },
  /* row 222 */   {     (MR_Integer) 1 },
  /* row 223 */   {     (MR_Integer) 1 },
  /* row 224 */   {     (MR_Integer) 1 },
  /* row 225 */   {     (MR_Integer) 1 },
  /* row 226 */   {     (MR_Integer) 1 },
  /* row 227 */   {     (MR_Integer) 1 },
  /* row 228 */   {     (MR_Integer) 1 },
  /* row 229 */   {     (MR_Integer) 1 },
  /* row 230 */   {     (MR_Integer) 1 },
  /* row 231 */   {     (MR_Integer) 1 },
  /* row 232 */   {     (MR_Integer) 5 },
  /* row 233 */   {     (MR_Integer) 5 },
  /* row 234 */   {     (MR_Integer) 5 },
  /* row 235 */   {     (MR_Integer) 13 },
  /* row 236 */   {     (MR_Integer) 0 },
  /* row 237 */   {     (MR_Integer) 0 },
  /* row 238 */   {     (MR_Integer) 0 },
  /* row 239 */   {     (MR_Integer) 0 },
  /* row 240 */   {     (MR_Integer) 0 },
  /* row 241 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 242 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 243 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 244 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 245 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 246 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 247 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 248 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 249 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 250 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 251 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 252 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 253 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 254 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 255 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 256 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 257 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 258 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 259 */   {     (MR_Integer) 0 },
  /* row 260 */   {     (MR_Integer) 13 },
  /* row 261 */   {     (MR_Integer) 8 },
  /* row 262 */   {     (MR_Integer) 10 },
  /* row 263 */   {     (MR_Integer) 12 },
  /* row 264 */   {     (MR_Integer) 7 },
  /* row 265 */   {     (MR_Integer) 13 },
  /* row 266 */   {     (MR_Integer) 8 },
  /* row 267 */   {     (MR_Integer) 5 },
  /* row 268 */   {     (MR_Integer) 5 },
  /* row 269 */   {     (MR_Integer) 13 },
  /* row 270 */   {     (MR_Integer) 13 },
  /* row 271 */   {     (MR_Integer) 5 },
  /* row 272 */   {     (MR_Integer) 13 },
  /* row 273 */   {     (MR_Integer) 6 },
  /* row 274 */   {     (MR_Integer) 9 },
  /* row 275 */   {     (MR_Integer) 3 },
  /* row 276 */   {     (MR_Integer) 4 },
  /* row 277 */   {     (MR_Integer) 4 },
  /* row 278 */   {     (MR_Integer) 4 },
  /* row 279 */   {     (MR_Integer) 4 },
  /* row 280 */   {     (MR_Integer) 4 },
  /* row 281 */   {     (MR_Integer) 4 },
  /* row 282 */   {     (MR_Integer) 4 },
  /* row 283 */   {     (MR_Integer) 4 },
  /* row 284 */   {     (MR_Integer) 4 },
  /* row 285 */   {     (MR_Integer) 13 },
  /* row 286 */   {     (MR_Integer) 5 },
  /* row 287 */   {     (MR_Integer) 13 },
  /* row 288 */   {     (MR_Integer) 13 },
  /* row 289 */   {     (MR_Integer) 13 },
  /* row 290 */   {     (MR_Integer) 13 },
  /* row 291 */   {     (MR_Integer) 13 },
  /* row 292 */   {     (MR_Integer) 2 },
  /* row 293 */   {     (MR_Integer) 2 },
  /* row 294 */   {     (MR_Integer) 2 },
  /* row 295 */   {     (MR_Integer) 2 },
  /* row 296 */   {     (MR_Integer) 2 },
  /* row 297 */   {     (MR_Integer) 2 },
  /* row 298 */   {     (MR_Integer) 2 },
  /* row 299 */   {     (MR_Integer) 2 },
  /* row 300 */   {     (MR_Integer) 2 },
  /* row 301 */   {     (MR_Integer) 2 },
  /* row 302 */   {     (MR_Integer) 2 },
  /* row 303 */   {     (MR_Integer) 2 },
  /* row 304 */   {     (MR_Integer) 2 },
  /* row 305 */   {     (MR_Integer) 2 },
  /* row 306 */   {     (MR_Integer) 2 },
  /* row 307 */   {     (MR_Integer) 2 },
  /* row 308 */   {     (MR_Integer) 2 },
  /* row 309 */   {     (MR_Integer) 2 },
  /* row 310 */   {     (MR_Integer) 2 },
  /* row 311 */   {     (MR_Integer) 2 },
  /* row 312 */   {     (MR_Integer) 2 },
  /* row 313 */   {     (MR_Integer) 2 },
  /* row 314 */   {     (MR_Integer) 2 },
  /* row 315 */   {     (MR_Integer) 2 },
  /* row 316 */   {     (MR_Integer) 2 },
  /* row 317 */   {     (MR_Integer) 2 },
  /* row 318 */   {     (MR_Integer) 5 },
  /* row 319 */   {     (MR_Integer) 13 },
  /* row 320 */   {     (MR_Integer) 5 },
  /* row 321 */   {     (MR_Integer) 13 },
  /* row 322 */   {     (MR_Integer) 2 },
  /* row 323 */   {     (MR_Integer) 11 },
  /* row 324 */   {     (MR_Integer) 1 },
  /* row 325 */   {     (MR_Integer) 1 },
  /* row 326 */   {     (MR_Integer) 1 },
  /* row 327 */   {     (MR_Integer) 1 },
  /* row 328 */   {     (MR_Integer) 1 },
  /* row 329 */   {     (MR_Integer) 1 },
  /* row 330 */   {     (MR_Integer) 1 },
  /* row 331 */   {     (MR_Integer) 1 },
  /* row 332 */   {     (MR_Integer) 1 },
  /* row 333 */   {     (MR_Integer) 1 },
  /* row 334 */   {     (MR_Integer) 1 },
  /* row 335 */   {     (MR_Integer) 1 },
  /* row 336 */   {     (MR_Integer) 1 },
  /* row 337 */   {     (MR_Integer) 1 },
  /* row 338 */   {     (MR_Integer) 1 },
  /* row 339 */   {     (MR_Integer) 1 },
  /* row 340 */   {     (MR_Integer) 1 },
  /* row 341 */   {     (MR_Integer) 1 },
  /* row 342 */   {     (MR_Integer) 1 },
  /* row 343 */   {     (MR_Integer) 1 },
  /* row 344 */   {     (MR_Integer) 1 },
  /* row 345 */   {     (MR_Integer) 1 },
  /* row 346 */   {     (MR_Integer) 1 },
  /* row 347 */   {     (MR_Integer) 1 },
  /* row 348 */   {     (MR_Integer) 1 },
  /* row 349 */   {     (MR_Integer) 1 },
  /* row 350 */   {     (MR_Integer) 5 },
  /* row 351 */   {     (MR_Integer) 5 },
  /* row 352 */   {     (MR_Integer) 5 },
  /* row 353 */   {     (MR_Integer) 13 },
  /* row 354 */   {     (MR_Integer) 0 },
  /* row 355 */   {     (MR_Integer) 0 },
  /* row 356 */   {     (MR_Integer) 0 },
  /* row 357 */   {     (MR_Integer) 0 },
  /* row 358 */   {     (MR_Integer) 0 },
  /* row 359 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 360 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 361 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 362 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 363 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 364 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 365 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 366 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 367 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 368 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 369 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 370 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 371 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 372 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 373 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 374 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 375 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 376 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 377 */   {     (MR_Integer) 0 },
  /* row 378 */   {     (MR_Integer) 13 },
  /* row 379 */   {     (MR_Integer) 8 },
  /* row 380 */   {     (MR_Integer) 10 },
  /* row 381 */   {     (MR_Integer) 12 },
  /* row 382 */   {     (MR_Integer) 7 },
  /* row 383 */   {     (MR_Integer) 13 },
  /* row 384 */   {     (MR_Integer) 8 },
  /* row 385 */   {     (MR_Integer) 5 },
  /* row 386 */   {     (MR_Integer) 5 },
  /* row 387 */   {     (MR_Integer) 13 },
  /* row 388 */   {     (MR_Integer) 13 },
  /* row 389 */   {     (MR_Integer) 5 },
  /* row 390 */   {     (MR_Integer) 13 },
  /* row 391 */   {     (MR_Integer) 6 },
  /* row 392 */   {     (MR_Integer) 9 },
  /* row 393 */   {     (MR_Integer) 3 },
  /* row 394 */   {     (MR_Integer) 4 },
  /* row 395 */   {     (MR_Integer) 4 },
  /* row 396 */   {     (MR_Integer) 4 },
  /* row 397 */   {     (MR_Integer) 4 },
  /* row 398 */   {     (MR_Integer) 4 },
  /* row 399 */   {     (MR_Integer) 4 },
  /* row 400 */   {     (MR_Integer) 4 },
  /* row 401 */   {     (MR_Integer) 4 },
  /* row 402 */   {     (MR_Integer) 4 },
  /* row 403 */   {     (MR_Integer) 13 },
  /* row 404 */   {     (MR_Integer) 5 },
  /* row 405 */   {     (MR_Integer) 13 },
  /* row 406 */   {     (MR_Integer) 13 },
  /* row 407 */   {     (MR_Integer) 13 },
  /* row 408 */   {     (MR_Integer) 13 },
  /* row 409 */   {     (MR_Integer) 13 },
  /* row 410 */   {     (MR_Integer) 2 },
  /* row 411 */   {     (MR_Integer) 2 },
  /* row 412 */   {     (MR_Integer) 2 },
  /* row 413 */   {     (MR_Integer) 2 },
  /* row 414 */   {     (MR_Integer) 2 },
  /* row 415 */   {     (MR_Integer) 2 },
  /* row 416 */   {     (MR_Integer) 2 },
  /* row 417 */   {     (MR_Integer) 2 },
  /* row 418 */   {     (MR_Integer) 2 },
  /* row 419 */   {     (MR_Integer) 2 },
  /* row 420 */   {     (MR_Integer) 2 },
  /* row 421 */   {     (MR_Integer) 2 },
  /* row 422 */   {     (MR_Integer) 2 },
  /* row 423 */   {     (MR_Integer) 2 },
  /* row 424 */   {     (MR_Integer) 2 },
  /* row 425 */   {     (MR_Integer) 2 },
  /* row 426 */   {     (MR_Integer) 2 },
  /* row 427 */   {     (MR_Integer) 2 },
  /* row 428 */   {     (MR_Integer) 2 },
  /* row 429 */   {     (MR_Integer) 2 },
  /* row 430 */   {     (MR_Integer) 2 },
  /* row 431 */   {     (MR_Integer) 2 },
  /* row 432 */   {     (MR_Integer) 2 },
  /* row 433 */   {     (MR_Integer) 2 },
  /* row 434 */   {     (MR_Integer) 2 },
  /* row 435 */   {     (MR_Integer) 2 },
  /* row 436 */   {     (MR_Integer) 5 },
  /* row 437 */   {     (MR_Integer) 13 },
  /* row 438 */   {     (MR_Integer) 5 },
  /* row 439 */   {     (MR_Integer) 13 },
  /* row 440 */   {     (MR_Integer) 2 },
  /* row 441 */   {     (MR_Integer) 11 },
  /* row 442 */   {     (MR_Integer) 1 },
  /* row 443 */   {     (MR_Integer) 1 },
  /* row 444 */   {     (MR_Integer) 1 },
  /* row 445 */   {     (MR_Integer) 1 },
  /* row 446 */   {     (MR_Integer) 1 },
  /* row 447 */   {     (MR_Integer) 1 },
  /* row 448 */   {     (MR_Integer) 1 },
  /* row 449 */   {     (MR_Integer) 1 },
  /* row 450 */   {     (MR_Integer) 1 },
  /* row 451 */   {     (MR_Integer) 1 },
  /* row 452 */   {     (MR_Integer) 1 },
  /* row 453 */   {     (MR_Integer) 1 },
  /* row 454 */   {     (MR_Integer) 1 },
  /* row 455 */   {     (MR_Integer) 1 },
  /* row 456 */   {     (MR_Integer) 1 },
  /* row 457 */   {     (MR_Integer) 1 },
  /* row 458 */   {     (MR_Integer) 1 },
  /* row 459 */   {     (MR_Integer) 1 },
  /* row 460 */   {     (MR_Integer) 1 },
  /* row 461 */   {     (MR_Integer) 1 },
  /* row 462 */   {     (MR_Integer) 1 },
  /* row 463 */   {     (MR_Integer) 1 },
  /* row 464 */   {     (MR_Integer) 1 },
  /* row 465 */   {     (MR_Integer) 1 },
  /* row 466 */   {     (MR_Integer) 1 },
  /* row 467 */   {     (MR_Integer) 1 },
  /* row 468 */   {     (MR_Integer) 5 },
  /* row 469 */   {     (MR_Integer) 5 },
  /* row 470 */   {     (MR_Integer) 5 },
  /* row 471 */   {     (MR_Integer) 13 },
  /* row 472 */   {     (MR_Integer) 0 },
  /* row 473 */   {     (MR_Integer) 0 },
  /* row 474 */   {     (MR_Integer) 0 },
  /* row 475 */   {     (MR_Integer) 0 },
  /* row 476 */   {     (MR_Integer) 0 },
  /* row 477 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 478 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 479 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 480 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 481 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 482 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 483 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 484 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 485 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 486 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 487 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 488 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 489 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 490 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 491 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 492 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 493 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 494 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 495 */   {     (MR_Integer) 0 },
  /* row 496 */   {     (MR_Integer) 13 },
  /* row 497 */   {     (MR_Integer) 8 },
  /* row 498 */   {     (MR_Integer) 10 },
  /* row 499 */   {     (MR_Integer) 12 },
  /* row 500 */   {     (MR_Integer) 7 },
  /* row 501 */   {     (MR_Integer) 13 },
  /* row 502 */   {     (MR_Integer) 8 },
  /* row 503 */   {     (MR_Integer) 5 },
  /* row 504 */   {     (MR_Integer) 5 },
  /* row 505 */   {     (MR_Integer) 13 },
  /* row 506 */   {     (MR_Integer) 13 },
  /* row 507 */   {     (MR_Integer) 5 },
  /* row 508 */   {     (MR_Integer) 13 },
  /* row 509 */   {     (MR_Integer) 6 },
  /* row 510 */   {     (MR_Integer) 9 },
  /* row 511 */   {     (MR_Integer) 3 },
  /* row 512 */   {     (MR_Integer) 4 },
  /* row 513 */   {     (MR_Integer) 4 },
  /* row 514 */   {     (MR_Integer) 4 },
  /* row 515 */   {     (MR_Integer) 4 },
  /* row 516 */   {     (MR_Integer) 4 },
  /* row 517 */   {     (MR_Integer) 4 },
  /* row 518 */   {     (MR_Integer) 4 },
  /* row 519 */   {     (MR_Integer) 4 },
  /* row 520 */   {     (MR_Integer) 4 },
  /* row 521 */   {     (MR_Integer) 13 },
  /* row 522 */   {     (MR_Integer) 5 },
  /* row 523 */   {     (MR_Integer) 13 },
  /* row 524 */   {     (MR_Integer) 13 },
  /* row 525 */   {     (MR_Integer) 13 },
  /* row 526 */   {     (MR_Integer) 13 },
  /* row 527 */   {     (MR_Integer) 13 },
  /* row 528 */   {     (MR_Integer) 2 },
  /* row 529 */   {     (MR_Integer) 2 },
  /* row 530 */   {     (MR_Integer) 2 },
  /* row 531 */   {     (MR_Integer) 2 },
  /* row 532 */   {     (MR_Integer) 2 },
  /* row 533 */   {     (MR_Integer) 2 },
  /* row 534 */   {     (MR_Integer) 2 },
  /* row 535 */   {     (MR_Integer) 2 },
  /* row 536 */   {     (MR_Integer) 2 },
  /* row 537 */   {     (MR_Integer) 2 },
  /* row 538 */   {     (MR_Integer) 2 },
  /* row 539 */   {     (MR_Integer) 2 },
  /* row 540 */   {     (MR_Integer) 2 },
  /* row 541 */   {     (MR_Integer) 2 },
  /* row 542 */   {     (MR_Integer) 2 },
  /* row 543 */   {     (MR_Integer) 2 },
  /* row 544 */   {     (MR_Integer) 2 },
  /* row 545 */   {     (MR_Integer) 2 },
  /* row 546 */   {     (MR_Integer) 2 },
  /* row 547 */   {     (MR_Integer) 2 },
  /* row 548 */   {     (MR_Integer) 2 },
  /* row 549 */   {     (MR_Integer) 2 },
  /* row 550 */   {     (MR_Integer) 2 },
  /* row 551 */   {     (MR_Integer) 2 },
  /* row 552 */   {     (MR_Integer) 2 },
  /* row 553 */   {     (MR_Integer) 2 },
  /* row 554 */   {     (MR_Integer) 5 },
  /* row 555 */   {     (MR_Integer) 13 },
  /* row 556 */   {     (MR_Integer) 5 },
  /* row 557 */   {     (MR_Integer) 13 },
  /* row 558 */   {     (MR_Integer) 2 },
  /* row 559 */   {     (MR_Integer) 11 },
  /* row 560 */   {     (MR_Integer) 1 },
  /* row 561 */   {     (MR_Integer) 1 },
  /* row 562 */   {     (MR_Integer) 1 },
  /* row 563 */   {     (MR_Integer) 1 },
  /* row 564 */   {     (MR_Integer) 1 },
  /* row 565 */   {     (MR_Integer) 1 },
  /* row 566 */   {     (MR_Integer) 1 },
  /* row 567 */   {     (MR_Integer) 1 },
  /* row 568 */   {     (MR_Integer) 1 },
  /* row 569 */   {     (MR_Integer) 1 },
  /* row 570 */   {     (MR_Integer) 1 },
  /* row 571 */   {     (MR_Integer) 1 },
  /* row 572 */   {     (MR_Integer) 1 },
  /* row 573 */   {     (MR_Integer) 1 },
  /* row 574 */   {     (MR_Integer) 1 },
  /* row 575 */   {     (MR_Integer) 1 },
  /* row 576 */   {     (MR_Integer) 1 },
  /* row 577 */   {     (MR_Integer) 1 },
  /* row 578 */   {     (MR_Integer) 1 },
  /* row 579 */   {     (MR_Integer) 1 },
  /* row 580 */   {     (MR_Integer) 1 },
  /* row 581 */   {     (MR_Integer) 1 },
  /* row 582 */   {     (MR_Integer) 1 },
  /* row 583 */   {     (MR_Integer) 1 },
  /* row 584 */   {     (MR_Integer) 1 },
  /* row 585 */   {     (MR_Integer) 1 },
  /* row 586 */   {     (MR_Integer) 5 },
  /* row 587 */   {     (MR_Integer) 5 },
  /* row 588 */   {     (MR_Integer) 5 },
  /* row 589 */   {     (MR_Integer) 13 },
  /* row 590 */   {     (MR_Integer) 0 },
  /* row 591 */   {     (MR_Integer) 0 },
  /* row 592 */   {     (MR_Integer) 0 },
  /* row 593 */   {     (MR_Integer) 0 },
  /* row 594 */   {     (MR_Integer) 0 },
  /* row 595 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 596 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 597 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 598 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 599 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 600 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 601 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 602 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 603 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 604 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 605 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 606 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 607 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 608 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 609 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 610 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 611 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 612 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 613 */   {     (MR_Integer) 0 },
  /* row 614 */   {     (MR_Integer) 13 },
  /* row 615 */   {     (MR_Integer) 8 },
  /* row 616 */   {     (MR_Integer) 10 },
  /* row 617 */   {     (MR_Integer) 12 },
  /* row 618 */   {     (MR_Integer) 7 },
  /* row 619 */   {     (MR_Integer) 13 },
  /* row 620 */   {     (MR_Integer) 8 },
  /* row 621 */   {     (MR_Integer) 5 },
  /* row 622 */   {     (MR_Integer) 5 },
  /* row 623 */   {     (MR_Integer) 13 },
  /* row 624 */   {     (MR_Integer) 13 },
  /* row 625 */   {     (MR_Integer) 5 },
  /* row 626 */   {     (MR_Integer) 13 },
  /* row 627 */   {     (MR_Integer) 6 },
  /* row 628 */   {     (MR_Integer) 9 },
  /* row 629 */   {     (MR_Integer) 3 },
  /* row 630 */   {     (MR_Integer) 4 },
  /* row 631 */   {     (MR_Integer) 4 },
  /* row 632 */   {     (MR_Integer) 4 },
  /* row 633 */   {     (MR_Integer) 4 },
  /* row 634 */   {     (MR_Integer) 4 },
  /* row 635 */   {     (MR_Integer) 4 },
  /* row 636 */   {     (MR_Integer) 4 },
  /* row 637 */   {     (MR_Integer) 4 },
  /* row 638 */   {     (MR_Integer) 4 },
  /* row 639 */   {     (MR_Integer) 13 },
  /* row 640 */   {     (MR_Integer) 5 },
  /* row 641 */   {     (MR_Integer) 13 },
  /* row 642 */   {     (MR_Integer) 13 },
  /* row 643 */   {     (MR_Integer) 13 },
  /* row 644 */   {     (MR_Integer) 13 },
  /* row 645 */   {     (MR_Integer) 13 },
  /* row 646 */   {     (MR_Integer) 2 },
  /* row 647 */   {     (MR_Integer) 2 },
  /* row 648 */   {     (MR_Integer) 2 },
  /* row 649 */   {     (MR_Integer) 2 },
  /* row 650 */   {     (MR_Integer) 2 },
  /* row 651 */   {     (MR_Integer) 2 },
  /* row 652 */   {     (MR_Integer) 2 },
  /* row 653 */   {     (MR_Integer) 2 },
  /* row 654 */   {     (MR_Integer) 2 },
  /* row 655 */   {     (MR_Integer) 2 },
  /* row 656 */   {     (MR_Integer) 2 },
  /* row 657 */   {     (MR_Integer) 2 },
  /* row 658 */   {     (MR_Integer) 2 },
  /* row 659 */   {     (MR_Integer) 2 },
  /* row 660 */   {     (MR_Integer) 2 },
  /* row 661 */   {     (MR_Integer) 2 },
  /* row 662 */   {     (MR_Integer) 2 },
  /* row 663 */   {     (MR_Integer) 2 },
  /* row 664 */   {     (MR_Integer) 2 },
  /* row 665 */   {     (MR_Integer) 2 },
  /* row 666 */   {     (MR_Integer) 2 },
  /* row 667 */   {     (MR_Integer) 2 },
  /* row 668 */   {     (MR_Integer) 2 },
  /* row 669 */   {     (MR_Integer) 2 },
  /* row 670 */   {     (MR_Integer) 2 },
  /* row 671 */   {     (MR_Integer) 2 },
  /* row 672 */   {     (MR_Integer) 5 },
  /* row 673 */   {     (MR_Integer) 13 },
  /* row 674 */   {     (MR_Integer) 5 },
  /* row 675 */   {     (MR_Integer) 13 },
  /* row 676 */   {     (MR_Integer) 2 },
  /* row 677 */   {     (MR_Integer) 11 },
  /* row 678 */   {     (MR_Integer) 1 },
  /* row 679 */   {     (MR_Integer) 1 },
  /* row 680 */   {     (MR_Integer) 1 },
  /* row 681 */   {     (MR_Integer) 1 },
  /* row 682 */   {     (MR_Integer) 1 },
  /* row 683 */   {     (MR_Integer) 1 },
  /* row 684 */   {     (MR_Integer) 1 },
  /* row 685 */   {     (MR_Integer) 1 },
  /* row 686 */   {     (MR_Integer) 1 },
  /* row 687 */   {     (MR_Integer) 1 },
  /* row 688 */   {     (MR_Integer) 1 },
  /* row 689 */   {     (MR_Integer) 1 },
  /* row 690 */   {     (MR_Integer) 1 },
  /* row 691 */   {     (MR_Integer) 1 },
  /* row 692 */   {     (MR_Integer) 1 },
  /* row 693 */   {     (MR_Integer) 1 },
  /* row 694 */   {     (MR_Integer) 1 },
  /* row 695 */   {     (MR_Integer) 1 },
  /* row 696 */   {     (MR_Integer) 1 },
  /* row 697 */   {     (MR_Integer) 1 },
  /* row 698 */   {     (MR_Integer) 1 },
  /* row 699 */   {     (MR_Integer) 1 },
  /* row 700 */   {     (MR_Integer) 1 },
  /* row 701 */   {     (MR_Integer) 1 },
  /* row 702 */   {     (MR_Integer) 1 },
  /* row 703 */   {     (MR_Integer) 1 },
  /* row 704 */   {     (MR_Integer) 5 },
  /* row 705 */   {     (MR_Integer) 5 },
  /* row 706 */   {     (MR_Integer) 5 },
  /* row 707 */   {     (MR_Integer) 13 },
  /* row 708 */   {     (MR_Integer) 0 },
  /* row 709 */   {     (MR_Integer) 0 },
  /* row 710 */   {     (MR_Integer) 0 },
  /* row 711 */   {     (MR_Integer) 0 },
  /* row 712 */   {     (MR_Integer) 0 },
  /* row 713 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 714 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 715 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 716 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 717 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 718 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 719 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 720 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 721 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 722 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 723 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 724 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 725 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 726 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 727 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 728 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 729 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 730 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 731 */   {     (MR_Integer) 0 },
  /* row 732 */   {     (MR_Integer) 13 },
  /* row 733 */   {     (MR_Integer) 8 },
  /* row 734 */   {     (MR_Integer) 10 },
  /* row 735 */   {     (MR_Integer) 12 },
  /* row 736 */   {     (MR_Integer) 7 },
  /* row 737 */   {     (MR_Integer) 13 },
  /* row 738 */   {     (MR_Integer) 8 },
  /* row 739 */   {     (MR_Integer) 5 },
  /* row 740 */   {     (MR_Integer) 5 },
  /* row 741 */   {     (MR_Integer) 13 },
  /* row 742 */   {     (MR_Integer) 13 },
  /* row 743 */   {     (MR_Integer) 5 },
  /* row 744 */   {     (MR_Integer) 13 },
  /* row 745 */   {     (MR_Integer) 6 },
  /* row 746 */   {     (MR_Integer) 9 },
  /* row 747 */   {     (MR_Integer) 3 },
  /* row 748 */   {     (MR_Integer) 4 },
  /* row 749 */   {     (MR_Integer) 4 },
  /* row 750 */   {     (MR_Integer) 4 },
  /* row 751 */   {     (MR_Integer) 4 },
  /* row 752 */   {     (MR_Integer) 4 },
  /* row 753 */   {     (MR_Integer) 4 },
  /* row 754 */   {     (MR_Integer) 4 },
  /* row 755 */   {     (MR_Integer) 4 },
  /* row 756 */   {     (MR_Integer) 4 },
  /* row 757 */   {     (MR_Integer) 13 },
  /* row 758 */   {     (MR_Integer) 5 },
  /* row 759 */   {     (MR_Integer) 13 },
  /* row 760 */   {     (MR_Integer) 13 },
  /* row 761 */   {     (MR_Integer) 13 },
  /* row 762 */   {     (MR_Integer) 13 },
  /* row 763 */   {     (MR_Integer) 13 },
  /* row 764 */   {     (MR_Integer) 2 },
  /* row 765 */   {     (MR_Integer) 2 },
  /* row 766 */   {     (MR_Integer) 2 },
  /* row 767 */   {     (MR_Integer) 2 },
  /* row 768 */   {     (MR_Integer) 2 },
  /* row 769 */   {     (MR_Integer) 2 },
  /* row 770 */   {     (MR_Integer) 2 },
  /* row 771 */   {     (MR_Integer) 2 },
  /* row 772 */   {     (MR_Integer) 2 },
  /* row 773 */   {     (MR_Integer) 2 },
  /* row 774 */   {     (MR_Integer) 2 },
  /* row 775 */   {     (MR_Integer) 2 },
  /* row 776 */   {     (MR_Integer) 2 },
  /* row 777 */   {     (MR_Integer) 2 },
  /* row 778 */   {     (MR_Integer) 2 },
  /* row 779 */   {     (MR_Integer) 2 },
  /* row 780 */   {     (MR_Integer) 2 },
  /* row 781 */   {     (MR_Integer) 2 },
  /* row 782 */   {     (MR_Integer) 2 },
  /* row 783 */   {     (MR_Integer) 2 },
  /* row 784 */   {     (MR_Integer) 2 },
  /* row 785 */   {     (MR_Integer) 2 },
  /* row 786 */   {     (MR_Integer) 2 },
  /* row 787 */   {     (MR_Integer) 2 },
  /* row 788 */   {     (MR_Integer) 2 },
  /* row 789 */   {     (MR_Integer) 2 },
  /* row 790 */   {     (MR_Integer) 5 },
  /* row 791 */   {     (MR_Integer) 13 },
  /* row 792 */   {     (MR_Integer) 5 },
  /* row 793 */   {     (MR_Integer) 13 },
  /* row 794 */   {     (MR_Integer) 2 },
  /* row 795 */   {     (MR_Integer) 11 },
  /* row 796 */   {     (MR_Integer) 1 },
  /* row 797 */   {     (MR_Integer) 1 },
  /* row 798 */   {     (MR_Integer) 1 },
  /* row 799 */   {     (MR_Integer) 1 },
  /* row 800 */   {     (MR_Integer) 1 },
  /* row 801 */   {     (MR_Integer) 1 },
  /* row 802 */   {     (MR_Integer) 1 },
  /* row 803 */   {     (MR_Integer) 1 },
  /* row 804 */   {     (MR_Integer) 1 },
  /* row 805 */   {     (MR_Integer) 1 },
  /* row 806 */   {     (MR_Integer) 1 },
  /* row 807 */   {     (MR_Integer) 1 },
  /* row 808 */   {     (MR_Integer) 1 },
  /* row 809 */   {     (MR_Integer) 1 },
  /* row 810 */   {     (MR_Integer) 1 },
  /* row 811 */   {     (MR_Integer) 1 },
  /* row 812 */   {     (MR_Integer) 1 },
  /* row 813 */   {     (MR_Integer) 1 },
  /* row 814 */   {     (MR_Integer) 1 },
  /* row 815 */   {     (MR_Integer) 1 },
  /* row 816 */   {     (MR_Integer) 1 },
  /* row 817 */   {     (MR_Integer) 1 },
  /* row 818 */   {     (MR_Integer) 1 },
  /* row 819 */   {     (MR_Integer) 1 },
  /* row 820 */   {     (MR_Integer) 1 },
  /* row 821 */   {     (MR_Integer) 1 },
  /* row 822 */   {     (MR_Integer) 5 },
  /* row 823 */   {     (MR_Integer) 5 },
  /* row 824 */   {     (MR_Integer) 5 },
  /* row 825 */   {     (MR_Integer) 13 },
  /* row 826 */   {     (MR_Integer) 0 },
  /* row 827 */   {     (MR_Integer) 0 },
  /* row 828 */   {     (MR_Integer) 0 },
  /* row 829 */   {     (MR_Integer) 0 },
  /* row 830 */   {     (MR_Integer) 0 },
  /* row 831 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 832 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 833 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 834 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 835 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 836 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 837 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 838 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 839 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 840 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 841 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 842 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 843 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 844 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 845 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 846 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 847 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 848 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 849 */   {     (MR_Integer) 0 },
  /* row 850 */   {     (MR_Integer) 13 },
  /* row 851 */   {     (MR_Integer) 8 },
  /* row 852 */   {     (MR_Integer) 10 },
  /* row 853 */   {     (MR_Integer) 12 },
  /* row 854 */   {     (MR_Integer) 7 },
  /* row 855 */   {     (MR_Integer) 13 },
  /* row 856 */   {     (MR_Integer) 8 },
  /* row 857 */   {     (MR_Integer) 5 },
  /* row 858 */   {     (MR_Integer) 5 },
  /* row 859 */   {     (MR_Integer) 13 },
  /* row 860 */   {     (MR_Integer) 13 },
  /* row 861 */   {     (MR_Integer) 5 },
  /* row 862 */   {     (MR_Integer) 13 },
  /* row 863 */   {     (MR_Integer) 6 },
  /* row 864 */   {     (MR_Integer) 9 },
  /* row 865 */   {     (MR_Integer) 3 },
  /* row 866 */   {     (MR_Integer) 4 },
  /* row 867 */   {     (MR_Integer) 4 },
  /* row 868 */   {     (MR_Integer) 4 },
  /* row 869 */   {     (MR_Integer) 4 },
  /* row 870 */   {     (MR_Integer) 4 },
  /* row 871 */   {     (MR_Integer) 4 },
  /* row 872 */   {     (MR_Integer) 4 },
  /* row 873 */   {     (MR_Integer) 4 },
  /* row 874 */   {     (MR_Integer) 4 },
  /* row 875 */   {     (MR_Integer) 13 },
  /* row 876 */   {     (MR_Integer) 5 },
  /* row 877 */   {     (MR_Integer) 13 },
  /* row 878 */   {     (MR_Integer) 13 },
  /* row 879 */   {     (MR_Integer) 13 },
  /* row 880 */   {     (MR_Integer) 13 },
  /* row 881 */   {     (MR_Integer) 13 },
  /* row 882 */   {     (MR_Integer) 2 },
  /* row 883 */   {     (MR_Integer) 2 },
  /* row 884 */   {     (MR_Integer) 2 },
  /* row 885 */   {     (MR_Integer) 2 },
  /* row 886 */   {     (MR_Integer) 2 },
  /* row 887 */   {     (MR_Integer) 2 },
  /* row 888 */   {     (MR_Integer) 2 },
  /* row 889 */   {     (MR_Integer) 2 },
  /* row 890 */   {     (MR_Integer) 2 },
  /* row 891 */   {     (MR_Integer) 2 },
  /* row 892 */   {     (MR_Integer) 2 },
  /* row 893 */   {     (MR_Integer) 2 },
  /* row 894 */   {     (MR_Integer) 2 },
  /* row 895 */   {     (MR_Integer) 2 },
  /* row 896 */   {     (MR_Integer) 2 },
  /* row 897 */   {     (MR_Integer) 2 },
  /* row 898 */   {     (MR_Integer) 2 },
  /* row 899 */   {     (MR_Integer) 2 },
  /* row 900 */   {     (MR_Integer) 2 },
  /* row 901 */   {     (MR_Integer) 2 },
  /* row 902 */   {     (MR_Integer) 2 },
  /* row 903 */   {     (MR_Integer) 2 },
  /* row 904 */   {     (MR_Integer) 2 },
  /* row 905 */   {     (MR_Integer) 2 },
  /* row 906 */   {     (MR_Integer) 2 },
  /* row 907 */   {     (MR_Integer) 2 },
  /* row 908 */   {     (MR_Integer) 5 },
  /* row 909 */   {     (MR_Integer) 13 },
  /* row 910 */   {     (MR_Integer) 5 },
  /* row 911 */   {     (MR_Integer) 13 },
  /* row 912 */   {     (MR_Integer) 2 },
  /* row 913 */   {     (MR_Integer) 11 },
  /* row 914 */   {     (MR_Integer) 1 },
  /* row 915 */   {     (MR_Integer) 1 },
  /* row 916 */   {     (MR_Integer) 1 },
  /* row 917 */   {     (MR_Integer) 1 },
  /* row 918 */   {     (MR_Integer) 1 },
  /* row 919 */   {     (MR_Integer) 1 },
  /* row 920 */   {     (MR_Integer) 1 },
  /* row 921 */   {     (MR_Integer) 1 },
  /* row 922 */   {     (MR_Integer) 1 },
  /* row 923 */   {     (MR_Integer) 1 },
  /* row 924 */   {     (MR_Integer) 1 },
  /* row 925 */   {     (MR_Integer) 1 },
  /* row 926 */   {     (MR_Integer) 1 },
  /* row 927 */   {     (MR_Integer) 1 },
  /* row 928 */   {     (MR_Integer) 1 },
  /* row 929 */   {     (MR_Integer) 1 },
  /* row 930 */   {     (MR_Integer) 1 },
  /* row 931 */   {     (MR_Integer) 1 },
  /* row 932 */   {     (MR_Integer) 1 },
  /* row 933 */   {     (MR_Integer) 1 },
  /* row 934 */   {     (MR_Integer) 1 },
  /* row 935 */   {     (MR_Integer) 1 },
  /* row 936 */   {     (MR_Integer) 1 },
  /* row 937 */   {     (MR_Integer) 1 },
  /* row 938 */   {     (MR_Integer) 1 },
  /* row 939 */   {     (MR_Integer) 1 },
  /* row 940 */   {     (MR_Integer) 5 },
  /* row 941 */   {     (MR_Integer) 5 },
  /* row 942 */   {     (MR_Integer) 5 },
  /* row 943 */   {     (MR_Integer) 13 },
  /* row 944 */   {     (MR_Integer) 0 },
  /* row 945 */   {     (MR_Integer) 0 },
  /* row 946 */   {     (MR_Integer) 0 },
  /* row 947 */   {     (MR_Integer) 0 },
  /* row 948 */   {     (MR_Integer) 0 },
  /* row 949 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 950 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 951 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 952 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 953 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 954 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 955 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 956 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 957 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 958 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 959 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 960 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 961 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 962 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 963 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 964 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 965 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 966 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 967 */   {     (MR_Integer) 0 },
  /* row 968 */   {     (MR_Integer) 13 },
  /* row 969 */   {     (MR_Integer) 8 },
  /* row 970 */   {     (MR_Integer) 10 },
  /* row 971 */   {     (MR_Integer) 12 },
  /* row 972 */   {     (MR_Integer) 7 },
  /* row 973 */   {     (MR_Integer) 13 },
  /* row 974 */   {     (MR_Integer) 8 },
  /* row 975 */   {     (MR_Integer) 5 },
  /* row 976 */   {     (MR_Integer) 5 },
  /* row 977 */   {     (MR_Integer) 13 },
  /* row 978 */   {     (MR_Integer) 13 },
  /* row 979 */   {     (MR_Integer) 5 },
  /* row 980 */   {     (MR_Integer) 13 },
  /* row 981 */   {     (MR_Integer) 6 },
  /* row 982 */   {     (MR_Integer) 9 },
  /* row 983 */   {     (MR_Integer) 3 },
  /* row 984 */   {     (MR_Integer) 4 },
  /* row 985 */   {     (MR_Integer) 4 },
  /* row 986 */   {     (MR_Integer) 4 },
  /* row 987 */   {     (MR_Integer) 4 },
  /* row 988 */   {     (MR_Integer) 4 },
  /* row 989 */   {     (MR_Integer) 4 },
  /* row 990 */   {     (MR_Integer) 4 },
  /* row 991 */   {     (MR_Integer) 4 },
  /* row 992 */   {     (MR_Integer) 4 },
  /* row 993 */   {     (MR_Integer) 13 },
  /* row 994 */   {     (MR_Integer) 5 },
  /* row 995 */   {     (MR_Integer) 13 },
  /* row 996 */   {     (MR_Integer) 13 },
  /* row 997 */   {     (MR_Integer) 13 },
  /* row 998 */   {     (MR_Integer) 13 },
  /* row 999 */   {     (MR_Integer) 13 },
  /* row 1000 */   {     (MR_Integer) 2 },
  /* row 1001 */   {     (MR_Integer) 2 },
  /* row 1002 */   {     (MR_Integer) 2 },
  /* row 1003 */   {     (MR_Integer) 2 },
  /* row 1004 */   {     (MR_Integer) 2 },
  /* row 1005 */   {     (MR_Integer) 2 },
  /* row 1006 */   {     (MR_Integer) 2 },
  /* row 1007 */   {     (MR_Integer) 2 },
  /* row 1008 */   {     (MR_Integer) 2 },
  /* row 1009 */   {     (MR_Integer) 2 },
  /* row 1010 */   {     (MR_Integer) 2 },
  /* row 1011 */   {     (MR_Integer) 2 },
  /* row 1012 */   {     (MR_Integer) 2 },
  /* row 1013 */   {     (MR_Integer) 2 },
  /* row 1014 */   {     (MR_Integer) 2 },
  /* row 1015 */   {     (MR_Integer) 2 },
  /* row 1016 */   {     (MR_Integer) 2 },
  /* row 1017 */   {     (MR_Integer) 2 },
  /* row 1018 */   {     (MR_Integer) 2 },
  /* row 1019 */   {     (MR_Integer) 2 },
  /* row 1020 */   {     (MR_Integer) 2 },
  /* row 1021 */   {     (MR_Integer) 2 },
  /* row 1022 */   {     (MR_Integer) 2 },
  /* row 1023 */   {     (MR_Integer) 2 },
  /* row 1024 */   {     (MR_Integer) 2 },
  /* row 1025 */   {     (MR_Integer) 2 },
  /* row 1026 */   {     (MR_Integer) 5 },
  /* row 1027 */   {     (MR_Integer) 13 },
  /* row 1028 */   {     (MR_Integer) 5 },
  /* row 1029 */   {     (MR_Integer) 13 },
  /* row 1030 */   {     (MR_Integer) 2 },
  /* row 1031 */   {     (MR_Integer) 11 },
  /* row 1032 */   {     (MR_Integer) 1 },
  /* row 1033 */   {     (MR_Integer) 1 },
  /* row 1034 */   {     (MR_Integer) 1 },
  /* row 1035 */   {     (MR_Integer) 1 },
  /* row 1036 */   {     (MR_Integer) 1 },
  /* row 1037 */   {     (MR_Integer) 1 },
  /* row 1038 */   {     (MR_Integer) 1 },
  /* row 1039 */   {     (MR_Integer) 1 },
  /* row 1040 */   {     (MR_Integer) 1 },
  /* row 1041 */   {     (MR_Integer) 1 },
  /* row 1042 */   {     (MR_Integer) 1 },
  /* row 1043 */   {     (MR_Integer) 1 },
  /* row 1044 */   {     (MR_Integer) 1 },
  /* row 1045 */   {     (MR_Integer) 1 },
  /* row 1046 */   {     (MR_Integer) 1 },
  /* row 1047 */   {     (MR_Integer) 1 },
  /* row 1048 */   {     (MR_Integer) 1 },
  /* row 1049 */   {     (MR_Integer) 1 },
  /* row 1050 */   {     (MR_Integer) 1 },
  /* row 1051 */   {     (MR_Integer) 1 },
  /* row 1052 */   {     (MR_Integer) 1 },
  /* row 1053 */   {     (MR_Integer) 1 },
  /* row 1054 */   {     (MR_Integer) 1 },
  /* row 1055 */   {     (MR_Integer) 1 },
  /* row 1056 */   {     (MR_Integer) 1 },
  /* row 1057 */   {     (MR_Integer) 1 },
  /* row 1058 */   {     (MR_Integer) 5 },
  /* row 1059 */   {     (MR_Integer) 5 },
  /* row 1060 */   {     (MR_Integer) 5 },
  /* row 1061 */   {     (MR_Integer) 13 },
  /* row 1062 */   {     (MR_Integer) 0 },
  /* row 1063 */   {     (MR_Integer) 0 },
  /* row 1064 */   {     (MR_Integer) 0 },
  /* row 1065 */   {     (MR_Integer) 0 },
  /* row 1066 */   {     (MR_Integer) 0 },
  /* row 1067 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1068 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1069 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1070 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1071 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1072 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1073 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1074 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1075 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1076 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1077 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1078 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1079 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1080 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1081 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1082 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1083 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1084 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1085 */   {     (MR_Integer) 0 },
  /* row 1086 */   {     (MR_Integer) 13 },
  /* row 1087 */   {     (MR_Integer) 8 },
  /* row 1088 */   {     (MR_Integer) 10 },
  /* row 1089 */   {     (MR_Integer) 12 },
  /* row 1090 */   {     (MR_Integer) 7 },
  /* row 1091 */   {     (MR_Integer) 13 },
  /* row 1092 */   {     (MR_Integer) 8 },
  /* row 1093 */   {     (MR_Integer) 5 },
  /* row 1094 */   {     (MR_Integer) 5 },
  /* row 1095 */   {     (MR_Integer) 13 },
  /* row 1096 */   {     (MR_Integer) 13 },
  /* row 1097 */   {     (MR_Integer) 5 },
  /* row 1098 */   {     (MR_Integer) 13 },
  /* row 1099 */   {     (MR_Integer) 6 },
  /* row 1100 */   {     (MR_Integer) 9 },
  /* row 1101 */   {     (MR_Integer) 3 },
  /* row 1102 */   {     (MR_Integer) 4 },
  /* row 1103 */   {     (MR_Integer) 4 },
  /* row 1104 */   {     (MR_Integer) 4 },
  /* row 1105 */   {     (MR_Integer) 4 },
  /* row 1106 */   {     (MR_Integer) 4 },
  /* row 1107 */   {     (MR_Integer) 4 },
  /* row 1108 */   {     (MR_Integer) 4 },
  /* row 1109 */   {     (MR_Integer) 4 },
  /* row 1110 */   {     (MR_Integer) 4 },
  /* row 1111 */   {     (MR_Integer) 13 },
  /* row 1112 */   {     (MR_Integer) 5 },
  /* row 1113 */   {     (MR_Integer) 13 },
  /* row 1114 */   {     (MR_Integer) 13 },
  /* row 1115 */   {     (MR_Integer) 13 },
  /* row 1116 */   {     (MR_Integer) 13 },
  /* row 1117 */   {     (MR_Integer) 13 },
  /* row 1118 */   {     (MR_Integer) 2 },
  /* row 1119 */   {     (MR_Integer) 2 },
  /* row 1120 */   {     (MR_Integer) 2 },
  /* row 1121 */   {     (MR_Integer) 2 },
  /* row 1122 */   {     (MR_Integer) 2 },
  /* row 1123 */   {     (MR_Integer) 2 },
  /* row 1124 */   {     (MR_Integer) 2 },
  /* row 1125 */   {     (MR_Integer) 2 },
  /* row 1126 */   {     (MR_Integer) 2 },
  /* row 1127 */   {     (MR_Integer) 2 },
  /* row 1128 */   {     (MR_Integer) 2 },
  /* row 1129 */   {     (MR_Integer) 2 },
  /* row 1130 */   {     (MR_Integer) 2 },
  /* row 1131 */   {     (MR_Integer) 2 },
  /* row 1132 */   {     (MR_Integer) 2 },
  /* row 1133 */   {     (MR_Integer) 2 },
  /* row 1134 */   {     (MR_Integer) 2 },
  /* row 1135 */   {     (MR_Integer) 2 },
  /* row 1136 */   {     (MR_Integer) 2 },
  /* row 1137 */   {     (MR_Integer) 2 },
  /* row 1138 */   {     (MR_Integer) 2 },
  /* row 1139 */   {     (MR_Integer) 2 },
  /* row 1140 */   {     (MR_Integer) 2 },
  /* row 1141 */   {     (MR_Integer) 2 },
  /* row 1142 */   {     (MR_Integer) 2 },
  /* row 1143 */   {     (MR_Integer) 2 },
  /* row 1144 */   {     (MR_Integer) 5 },
  /* row 1145 */   {     (MR_Integer) 13 },
  /* row 1146 */   {     (MR_Integer) 5 },
  /* row 1147 */   {     (MR_Integer) 13 },
  /* row 1148 */   {     (MR_Integer) 2 },
  /* row 1149 */   {     (MR_Integer) 11 },
  /* row 1150 */   {     (MR_Integer) 1 },
  /* row 1151 */   {     (MR_Integer) 1 },
  /* row 1152 */   {     (MR_Integer) 1 },
  /* row 1153 */   {     (MR_Integer) 1 },
  /* row 1154 */   {     (MR_Integer) 1 },
  /* row 1155 */   {     (MR_Integer) 1 },
  /* row 1156 */   {     (MR_Integer) 1 },
  /* row 1157 */   {     (MR_Integer) 1 },
  /* row 1158 */   {     (MR_Integer) 1 },
  /* row 1159 */   {     (MR_Integer) 1 },
  /* row 1160 */   {     (MR_Integer) 1 },
  /* row 1161 */   {     (MR_Integer) 1 },
  /* row 1162 */   {     (MR_Integer) 1 },
  /* row 1163 */   {     (MR_Integer) 1 },
  /* row 1164 */   {     (MR_Integer) 1 },
  /* row 1165 */   {     (MR_Integer) 1 },
  /* row 1166 */   {     (MR_Integer) 1 },
  /* row 1167 */   {     (MR_Integer) 1 },
  /* row 1168 */   {     (MR_Integer) 1 },
  /* row 1169 */   {     (MR_Integer) 1 },
  /* row 1170 */   {     (MR_Integer) 1 },
  /* row 1171 */   {     (MR_Integer) 1 },
  /* row 1172 */   {     (MR_Integer) 1 },
  /* row 1173 */   {     (MR_Integer) 1 },
  /* row 1174 */   {     (MR_Integer) 1 },
  /* row 1175 */   {     (MR_Integer) 1 },
  /* row 1176 */   {     (MR_Integer) 5 },
  /* row 1177 */   {     (MR_Integer) 5 },
  /* row 1178 */   {     (MR_Integer) 5 },
  /* row 1179 */   {     (MR_Integer) 13 },
  /* row 1180 */   {     (MR_Integer) 0 },
  /* row 1181 */   {     (MR_Integer) 0 },
  /* row 1182 */   {     (MR_Integer) 0 },
  /* row 1183 */   {     (MR_Integer) 0 },
  /* row 1184 */   {     (MR_Integer) 0 },
  /* row 1185 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1186 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1187 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1188 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1189 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1190 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1191 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1192 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1193 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1194 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1195 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1196 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1197 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1198 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1199 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1200 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1201 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1202 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1203 */   {     (MR_Integer) 0 },
  /* row 1204 */   {     (MR_Integer) 13 },
  /* row 1205 */   {     (MR_Integer) 8 },
  /* row 1206 */   {     (MR_Integer) 10 },
  /* row 1207 */   {     (MR_Integer) 12 },
  /* row 1208 */   {     (MR_Integer) 7 },
  /* row 1209 */   {     (MR_Integer) 13 },
  /* row 1210 */   {     (MR_Integer) 8 },
  /* row 1211 */   {     (MR_Integer) 5 },
  /* row 1212 */   {     (MR_Integer) 5 },
  /* row 1213 */   {     (MR_Integer) 13 },
  /* row 1214 */   {     (MR_Integer) 13 },
  /* row 1215 */   {     (MR_Integer) 5 },
  /* row 1216 */   {     (MR_Integer) 13 },
  /* row 1217 */   {     (MR_Integer) 6 },
  /* row 1218 */   {     (MR_Integer) 9 },
  /* row 1219 */   {     (MR_Integer) 3 },
  /* row 1220 */   {     (MR_Integer) 4 },
  /* row 1221 */   {     (MR_Integer) 4 },
  /* row 1222 */   {     (MR_Integer) 4 },
  /* row 1223 */   {     (MR_Integer) 4 },
  /* row 1224 */   {     (MR_Integer) 4 },
  /* row 1225 */   {     (MR_Integer) 4 },
  /* row 1226 */   {     (MR_Integer) 4 },
  /* row 1227 */   {     (MR_Integer) 4 },
  /* row 1228 */   {     (MR_Integer) 4 },
  /* row 1229 */   {     (MR_Integer) 13 },
  /* row 1230 */   {     (MR_Integer) 5 },
  /* row 1231 */   {     (MR_Integer) 13 },
  /* row 1232 */   {     (MR_Integer) 13 },
  /* row 1233 */   {     (MR_Integer) 13 },
  /* row 1234 */   {     (MR_Integer) 13 },
  /* row 1235 */   {     (MR_Integer) 13 },
  /* row 1236 */   {     (MR_Integer) 2 },
  /* row 1237 */   {     (MR_Integer) 2 },
  /* row 1238 */   {     (MR_Integer) 2 },
  /* row 1239 */   {     (MR_Integer) 2 },
  /* row 1240 */   {     (MR_Integer) 2 },
  /* row 1241 */   {     (MR_Integer) 2 },
  /* row 1242 */   {     (MR_Integer) 2 },
  /* row 1243 */   {     (MR_Integer) 2 },
  /* row 1244 */   {     (MR_Integer) 2 },
  /* row 1245 */   {     (MR_Integer) 2 },
  /* row 1246 */   {     (MR_Integer) 2 },
  /* row 1247 */   {     (MR_Integer) 2 },
  /* row 1248 */   {     (MR_Integer) 2 },
  /* row 1249 */   {     (MR_Integer) 2 },
  /* row 1250 */   {     (MR_Integer) 2 },
  /* row 1251 */   {     (MR_Integer) 2 },
  /* row 1252 */   {     (MR_Integer) 2 },
  /* row 1253 */   {     (MR_Integer) 2 },
  /* row 1254 */   {     (MR_Integer) 2 },
  /* row 1255 */   {     (MR_Integer) 2 },
  /* row 1256 */   {     (MR_Integer) 2 },
  /* row 1257 */   {     (MR_Integer) 2 },
  /* row 1258 */   {     (MR_Integer) 2 },
  /* row 1259 */   {     (MR_Integer) 2 },
  /* row 1260 */   {     (MR_Integer) 2 },
  /* row 1261 */   {     (MR_Integer) 2 },
  /* row 1262 */   {     (MR_Integer) 5 },
  /* row 1263 */   {     (MR_Integer) 13 },
  /* row 1264 */   {     (MR_Integer) 5 },
  /* row 1265 */   {     (MR_Integer) 13 },
  /* row 1266 */   {     (MR_Integer) 2 },
  /* row 1267 */   {     (MR_Integer) 11 },
  /* row 1268 */   {     (MR_Integer) 1 },
  /* row 1269 */   {     (MR_Integer) 1 },
  /* row 1270 */   {     (MR_Integer) 1 },
  /* row 1271 */   {     (MR_Integer) 1 },
  /* row 1272 */   {     (MR_Integer) 1 },
  /* row 1273 */   {     (MR_Integer) 1 },
  /* row 1274 */   {     (MR_Integer) 1 },
  /* row 1275 */   {     (MR_Integer) 1 },
  /* row 1276 */   {     (MR_Integer) 1 },
  /* row 1277 */   {     (MR_Integer) 1 },
  /* row 1278 */   {     (MR_Integer) 1 },
  /* row 1279 */   {     (MR_Integer) 1 },
  /* row 1280 */   {     (MR_Integer) 1 },
  /* row 1281 */   {     (MR_Integer) 1 },
  /* row 1282 */   {     (MR_Integer) 1 },
  /* row 1283 */   {     (MR_Integer) 1 },
  /* row 1284 */   {     (MR_Integer) 1 },
  /* row 1285 */   {     (MR_Integer) 1 },
  /* row 1286 */   {     (MR_Integer) 1 },
  /* row 1287 */   {     (MR_Integer) 1 },
  /* row 1288 */   {     (MR_Integer) 1 },
  /* row 1289 */   {     (MR_Integer) 1 },
  /* row 1290 */   {     (MR_Integer) 1 },
  /* row 1291 */   {     (MR_Integer) 1 },
  /* row 1292 */   {     (MR_Integer) 1 },
  /* row 1293 */   {     (MR_Integer) 1 },
  /* row 1294 */   {     (MR_Integer) 5 },
  /* row 1295 */   {     (MR_Integer) 5 },
  /* row 1296 */   {     (MR_Integer) 5 },
  /* row 1297 */   {     (MR_Integer) 13 },
  /* row 1298 */   {     (MR_Integer) 0 },
  /* row 1299 */   {     (MR_Integer) 0 },
  /* row 1300 */   {     (MR_Integer) 0 },
  /* row 1301 */   {     (MR_Integer) 0 },
  /* row 1302 */   {     (MR_Integer) 0 },
  /* row 1303 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1304 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1305 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1306 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1307 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1308 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1309 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1310 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1311 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1312 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1313 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1314 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1315 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1316 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1317 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1318 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1319 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1320 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1321 */   {     (MR_Integer) 0 },
  /* row 1322 */   {     (MR_Integer) 13 },
  /* row 1323 */   {     (MR_Integer) 8 },
  /* row 1324 */   {     (MR_Integer) 10 },
  /* row 1325 */   {     (MR_Integer) 12 },
  /* row 1326 */   {     (MR_Integer) 7 },
  /* row 1327 */   {     (MR_Integer) 13 },
  /* row 1328 */   {     (MR_Integer) 8 },
  /* row 1329 */   {     (MR_Integer) 5 },
  /* row 1330 */   {     (MR_Integer) 5 },
  /* row 1331 */   {     (MR_Integer) 13 },
  /* row 1332 */   {     (MR_Integer) 13 },
  /* row 1333 */   {     (MR_Integer) 5 },
  /* row 1334 */   {     (MR_Integer) 13 },
  /* row 1335 */   {     (MR_Integer) 6 },
  /* row 1336 */   {     (MR_Integer) 9 },
  /* row 1337 */   {     (MR_Integer) 3 },
  /* row 1338 */   {     (MR_Integer) 4 },
  /* row 1339 */   {     (MR_Integer) 4 },
  /* row 1340 */   {     (MR_Integer) 4 },
  /* row 1341 */   {     (MR_Integer) 4 },
  /* row 1342 */   {     (MR_Integer) 4 },
  /* row 1343 */   {     (MR_Integer) 4 },
  /* row 1344 */   {     (MR_Integer) 4 },
  /* row 1345 */   {     (MR_Integer) 4 },
  /* row 1346 */   {     (MR_Integer) 4 },
  /* row 1347 */   {     (MR_Integer) 13 },
  /* row 1348 */   {     (MR_Integer) 5 },
  /* row 1349 */   {     (MR_Integer) 13 },
  /* row 1350 */   {     (MR_Integer) 13 },
  /* row 1351 */   {     (MR_Integer) 13 },
  /* row 1352 */   {     (MR_Integer) 13 },
  /* row 1353 */   {     (MR_Integer) 13 },
  /* row 1354 */   {     (MR_Integer) 2 },
  /* row 1355 */   {     (MR_Integer) 2 },
  /* row 1356 */   {     (MR_Integer) 2 },
  /* row 1357 */   {     (MR_Integer) 2 },
  /* row 1358 */   {     (MR_Integer) 2 },
  /* row 1359 */   {     (MR_Integer) 2 },
  /* row 1360 */   {     (MR_Integer) 2 },
  /* row 1361 */   {     (MR_Integer) 2 },
  /* row 1362 */   {     (MR_Integer) 2 },
  /* row 1363 */   {     (MR_Integer) 2 },
  /* row 1364 */   {     (MR_Integer) 2 },
  /* row 1365 */   {     (MR_Integer) 2 },
  /* row 1366 */   {     (MR_Integer) 2 },
  /* row 1367 */   {     (MR_Integer) 2 },
  /* row 1368 */   {     (MR_Integer) 2 },
  /* row 1369 */   {     (MR_Integer) 2 },
  /* row 1370 */   {     (MR_Integer) 2 },
  /* row 1371 */   {     (MR_Integer) 2 },
  /* row 1372 */   {     (MR_Integer) 2 },
  /* row 1373 */   {     (MR_Integer) 2 },
  /* row 1374 */   {     (MR_Integer) 2 },
  /* row 1375 */   {     (MR_Integer) 2 },
  /* row 1376 */   {     (MR_Integer) 2 },
  /* row 1377 */   {     (MR_Integer) 2 },
  /* row 1378 */   {     (MR_Integer) 2 },
  /* row 1379 */   {     (MR_Integer) 2 },
  /* row 1380 */   {     (MR_Integer) 5 },
  /* row 1381 */   {     (MR_Integer) 13 },
  /* row 1382 */   {     (MR_Integer) 5 },
  /* row 1383 */   {     (MR_Integer) 13 },
  /* row 1384 */   {     (MR_Integer) 2 },
  /* row 1385 */   {     (MR_Integer) 11 },
  /* row 1386 */   {     (MR_Integer) 1 },
  /* row 1387 */   {     (MR_Integer) 1 },
  /* row 1388 */   {     (MR_Integer) 1 },
  /* row 1389 */   {     (MR_Integer) 1 },
  /* row 1390 */   {     (MR_Integer) 1 },
  /* row 1391 */   {     (MR_Integer) 1 },
  /* row 1392 */   {     (MR_Integer) 1 },
  /* row 1393 */   {     (MR_Integer) 1 },
  /* row 1394 */   {     (MR_Integer) 1 },
  /* row 1395 */   {     (MR_Integer) 1 },
  /* row 1396 */   {     (MR_Integer) 1 },
  /* row 1397 */   {     (MR_Integer) 1 },
  /* row 1398 */   {     (MR_Integer) 1 },
  /* row 1399 */   {     (MR_Integer) 1 },
  /* row 1400 */   {     (MR_Integer) 1 },
  /* row 1401 */   {     (MR_Integer) 1 },
  /* row 1402 */   {     (MR_Integer) 1 },
  /* row 1403 */   {     (MR_Integer) 1 },
  /* row 1404 */   {     (MR_Integer) 1 },
  /* row 1405 */   {     (MR_Integer) 1 },
  /* row 1406 */   {     (MR_Integer) 1 },
  /* row 1407 */   {     (MR_Integer) 1 },
  /* row 1408 */   {     (MR_Integer) 1 },
  /* row 1409 */   {     (MR_Integer) 1 },
  /* row 1410 */   {     (MR_Integer) 1 },
  /* row 1411 */   {     (MR_Integer) 1 },
  /* row 1412 */   {     (MR_Integer) 5 },
  /* row 1413 */   {     (MR_Integer) 5 },
  /* row 1414 */   {     (MR_Integer) 5 },
  /* row 1415 */   {     (MR_Integer) 13 },
  /* row 1416 */   {     (MR_Integer) 0 },
  /* row 1417 */   {     (MR_Integer) 0 },
  /* row 1418 */   {     (MR_Integer) 0 },
  /* row 1419 */   {     (MR_Integer) 0 },
  /* row 1420 */   {     (MR_Integer) 0 },
  /* row 1421 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1422 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1423 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1424 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1425 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1426 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1427 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1428 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1429 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1430 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1431 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1432 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1433 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1434 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1435 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1436 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1437 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1438 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 1439 */   {     (MR_Integer) 0 },
  /* row 1440 */   {     (MR_Integer) 13 },
  /* row 1441 */   {     (MR_Integer) 8 },
  /* row 1442 */   {     (MR_Integer) 10 },
  /* row 1443 */   {     (MR_Integer) 12 },
  /* row 1444 */   {     (MR_Integer) 7 },
  /* row 1445 */   {     (MR_Integer) 13 },
  /* row 1446 */   {     (MR_Integer) 8 },
  /* row 1447 */   {     (MR_Integer) 5 },
  /* row 1448 */   {     (MR_Integer) 5 },
  /* row 1449 */   {     (MR_Integer) 13 },
  /* row 1450 */   {     (MR_Integer) 13 },
  /* row 1451 */   {     (MR_Integer) 5 },
  /* row 1452 */   {     (MR_Integer) 13 },
  /* row 1453 */   {     (MR_Integer) 6 },
  /* row 1454 */   {     (MR_Integer) 9 },
  /* row 1455 */   {     (MR_Integer) 3 },
  /* row 1456 */   {     (MR_Integer) 4 },
  /* row 1457 */   {     (MR_Integer) 4 },
  /* row 1458 */   {     (MR_Integer) 4 },
  /* row 1459 */   {     (MR_Integer) 4 },
  /* row 1460 */   {     (MR_Integer) 4 },
  /* row 1461 */   {     (MR_Integer) 4 },
  /* row 1462 */   {     (MR_Integer) 4 },
  /* row 1463 */   {     (MR_Integer) 4 },
  /* row 1464 */   {     (MR_Integer) 4 },
  /* row 1465 */   {     (MR_Integer) 13 },
  /* row 1466 */   {     (MR_Integer) 5 },
  /* row 1467 */   {     (MR_Integer) 13 },
  /* row 1468 */   {     (MR_Integer) 13 },
  /* row 1469 */   {     (MR_Integer) 13 },
  /* row 1470 */   {     (MR_Integer) 13 },
  /* row 1471 */   {     (MR_Integer) 13 },
  /* row 1472 */   {     (MR_Integer) 2 },
  /* row 1473 */   {     (MR_Integer) 2 },
  /* row 1474 */   {     (MR_Integer) 2 },
  /* row 1475 */   {     (MR_Integer) 2 },
  /* row 1476 */   {     (MR_Integer) 2 },
  /* row 1477 */   {     (MR_Integer) 2 },
  /* row 1478 */   {     (MR_Integer) 2 },
  /* row 1479 */   {     (MR_Integer) 2 },
  /* row 1480 */   {     (MR_Integer) 2 },
  /* row 1481 */   {     (MR_Integer) 2 },
  /* row 1482 */   {     (MR_Integer) 2 },
  /* row 1483 */   {     (MR_Integer) 2 },
  /* row 1484 */   {     (MR_Integer) 2 },
  /* row 1485 */   {     (MR_Integer) 2 },
  /* row 1486 */   {     (MR_Integer) 2 },
  /* row 1487 */   {     (MR_Integer) 2 },
  /* row 1488 */   {     (MR_Integer) 2 },
  /* row 1489 */   {     (MR_Integer) 2 },
  /* row 1490 */   {     (MR_Integer) 2 },
  /* row 1491 */   {     (MR_Integer) 2 },
  /* row 1492 */   {     (MR_Integer) 2 },
  /* row 1493 */   {     (MR_Integer) 2 },
  /* row 1494 */   {     (MR_Integer) 2 },
  /* row 1495 */   {     (MR_Integer) 2 },
  /* row 1496 */   {     (MR_Integer) 2 },
  /* row 1497 */   {     (MR_Integer) 2 },
  /* row 1498 */   {     (MR_Integer) 5 },
  /* row 1499 */   {     (MR_Integer) 13 },
  /* row 1500 */   {     (MR_Integer) 5 },
  /* row 1501 */   {     (MR_Integer) 13 },
  /* row 1502 */   {     (MR_Integer) 2 },
  /* row 1503 */   {     (MR_Integer) 11 },
  /* row 1504 */   {     (MR_Integer) 1 },
  /* row 1505 */   {     (MR_Integer) 1 },
  /* row 1506 */   {     (MR_Integer) 1 },
  /* row 1507 */   {     (MR_Integer) 1 },
  /* row 1508 */   {     (MR_Integer) 1 },
  /* row 1509 */   {     (MR_Integer) 1 },
  /* row 1510 */   {     (MR_Integer) 1 },
  /* row 1511 */   {     (MR_Integer) 1 },
  /* row 1512 */   {     (MR_Integer) 1 },
  /* row 1513 */   {     (MR_Integer) 1 },
  /* row 1514 */   {     (MR_Integer) 1 },
  /* row 1515 */   {     (MR_Integer) 1 },
  /* row 1516 */   {     (MR_Integer) 1 },
  /* row 1517 */   {     (MR_Integer) 1 },
  /* row 1518 */   {     (MR_Integer) 1 },
  /* row 1519 */   {     (MR_Integer) 1 },
  /* row 1520 */   {     (MR_Integer) 1 },
  /* row 1521 */   {     (MR_Integer) 1 },
  /* row 1522 */   {     (MR_Integer) 1 },
  /* row 1523 */   {     (MR_Integer) 1 },
  /* row 1524 */   {     (MR_Integer) 1 },
  /* row 1525 */   {     (MR_Integer) 1 },
  /* row 1526 */   {     (MR_Integer) 1 },
  /* row 1527 */   {     (MR_Integer) 1 },
  /* row 1528 */   {     (MR_Integer) 1 },
  /* row 1529 */   {     (MR_Integer) 1 },
  /* row 1530 */   {     (MR_Integer) 5 },
  /* row 1531 */   {     (MR_Integer) 5 },
  /* row 1532 */   {     (MR_Integer) 5 },
  /* row 1533 */   {     (MR_Integer) 13 },
};

static /* final */ const struct mercury__lexer__vector_common_type_6_0_s mercury__lexer_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_String) "0b"
  },
  /* row 1 */
  {
    (MR_Integer) 8,
    (MR_String) "0o"
  },
  /* row 2 */
  {
    (MR_Integer) 10,
    (MR_String) ""
  },
  /* row 3 */
  {
    (MR_Integer) 16,
    (MR_String) "0x"
  },
};

static /* final */ const struct mercury__lexer__vector_common_type_9_0_s mercury__lexer_vector_common_9[4] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 8 },
  /* row 2 */   {     (MR_Integer) 10 },
  /* row 3 */   {     (MR_Integer) 16 },
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
#include "version_array.mh"



static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_0 = {
  (MR_String) "action_whitespace",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_1 = {
  (MR_String) "action_alpha_lower",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_2 = {
  (MR_String) "action_alpha_upper_uscore",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_3 = {
  (MR_String) "action_zero",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_4 = {
  (MR_String) "action_nonzero_digit",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_5 = {
  (MR_String) "action_special_token",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_6 = {
  (MR_String) "action_dot",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_7 = {
  (MR_String) "action_percent",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_8 = {
  (MR_String) "action_quote",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_9 = {
  (MR_String) "action_slash",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_10 = {
  (MR_String) "action_hash",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_11 = {
  (MR_String) "action_backquote",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_12 = {
  (MR_String) "action_dollar",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_get_token_action_0_13 = {
  (MR_String) "action_graphic_token",
  (MR_Integer) 13
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_get_token_action_0[14] = {
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_0,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_1,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_2,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_3,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_4,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_5,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_6,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_7,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_8,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_9,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_10,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_11,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_12,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_13
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_get_token_action_0[14] = {
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_1,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_2,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_11,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_12,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_6,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_13,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_10,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_4,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_7,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_8,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_9,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_5,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_0,
  &mercury__lexer__lexer__enum_functor_desc_get_token_action_0_3
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_get_token_action_0[14] = {
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 7,
  (MR_Integer) 11,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_get_token_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__lexer____Unify____get_token_action_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____get_token_action_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "get_token_action",
  {     mercury__lexer__lexer__enum_name_ordered_get_token_action_0 },
  {     mercury__lexer__lexer__enum_value_ordered_get_token_action_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_get_token_action_0
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_integer_base_0[4] = {
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_0,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_1,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_2,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_3
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_integer_base_0[4] = {
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_2,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_3,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_0,
  &mercury__lexer__lexer__enum_functor_desc_integer_base_0_1
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_integer_base_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_integer_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__lexer____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____integer_base_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "integer_base",
  {     mercury__lexer__lexer__enum_name_ordered_integer_base_0 },
  {     mercury__lexer__lexer__enum_value_ordered_integer_base_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_integer_base_0
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_maybe_have_valid_token_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__lexer__lexer__notag_functor_desc_maybe_have_valid_token_0 = {
  (MR_String) "maybe_have_valid_token",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_maybe_have_valid_token_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__lexer____Unify____maybe_have_valid_token_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____maybe_have_valid_token_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "maybe_have_valid_token",
  {     &mercury__lexer__lexer__notag_functor_desc_maybe_have_valid_token_0 },
  {     &mercury__lexer__lexer__notag_functor_desc_maybe_have_valid_token_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_maybe_have_valid_token_0
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_offset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__lexer____Unify____offset_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____offset_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "offset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_0 = {
  (MR_String) "scanned_past_whitespace",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_1 = {
  (MR_String) "not_scanned_past_whitespace",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_value_ordered_scanned_past_whitespace_0[2] = {
  &mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_0,
  &mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_1
};

static const MR_EnumFunctorDescPtr mercury__lexer__lexer__enum_name_ordered_scanned_past_whitespace_0[2] = {
  &mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_1,
  &mercury__lexer__lexer__enum_functor_desc_scanned_past_whitespace_0_0
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_scanned_past_whitespace_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_scanned_past_whitespace_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__lexer____Unify____scanned_past_whitespace_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____scanned_past_whitespace_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "scanned_past_whitespace",
  {     mercury__lexer__lexer__enum_name_ordered_scanned_past_whitespace_0 },
  {     mercury__lexer__lexer__enum_value_ordered_scanned_past_whitespace_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_scanned_past_whitespace_0
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_string_token_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__lexer____Unify____string_token_context_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____string_token_context_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "string_token_context",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_0 = {
  (MR_String) "name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lexer__lexer__field_types_token_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_1 = {
  (MR_String) "variable",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__lexer__lexer__field_types_token_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_2 = {
  (MR_String) "integer",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mercury__lexer__lexer__field_types_token_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_integer_base_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_3 = {
  (MR_String) "big_integer",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__lexer__lexer__field_types_token_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_4 = {
  (MR_String) "float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__lexer__lexer__field_types_token_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_5 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__lexer__lexer__field_types_token_0_5,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_6 = {
  (MR_String) "implementation_defined",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  mercury__lexer__lexer__field_types_token_0_6,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_7 = {
  (MR_String) "open",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_8 = {
  (MR_String) "open_ct",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_9 = {
  (MR_String) "close",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_10 = {
  (MR_String) "open_list",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_11 = {
  (MR_String) "close_list",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_12 = {
  (MR_String) "open_curly",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_13 = {
  (MR_String) "close_curly",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_14 = {
  (MR_String) "ht_sep",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_15 = {
  (MR_String) "comma",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_16 = {
  (MR_String) "end",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_17 = {
  (MR_String) "junk",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 17,
  mercury__lexer__lexer__field_types_token_0_17,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_18[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_18 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 18,
  mercury__lexer__lexer__field_types_token_0_18,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_19 = {
  (MR_String) "io_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 19,
  mercury__lexer__lexer__field_types_token_0_19,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_20 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_0_21 = {
  (MR_String) "integer_dot",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 21,
  mercury__lexer__lexer__field_types_token_0_21,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_0[11] = {
  &mercury__lexer__lexer__du_functor_desc_token_0_7,
  &mercury__lexer__lexer__du_functor_desc_token_0_8,
  &mercury__lexer__lexer__du_functor_desc_token_0_9,
  &mercury__lexer__lexer__du_functor_desc_token_0_10,
  &mercury__lexer__lexer__du_functor_desc_token_0_11,
  &mercury__lexer__lexer__du_functor_desc_token_0_12,
  &mercury__lexer__lexer__du_functor_desc_token_0_13,
  &mercury__lexer__lexer__du_functor_desc_token_0_14,
  &mercury__lexer__lexer__du_functor_desc_token_0_15,
  &mercury__lexer__lexer__du_functor_desc_token_0_16,
  &mercury__lexer__lexer__du_functor_desc_token_0_20
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_1[1] = {
  &mercury__lexer__lexer__du_functor_desc_token_0_0
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_2[1] = {
  &mercury__lexer__lexer__du_functor_desc_token_0_1
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_0_3[9] = {
  &mercury__lexer__lexer__du_functor_desc_token_0_2,
  &mercury__lexer__lexer__du_functor_desc_token_0_3,
  &mercury__lexer__lexer__du_functor_desc_token_0_4,
  &mercury__lexer__lexer__du_functor_desc_token_0_5,
  &mercury__lexer__lexer__du_functor_desc_token_0_6,
  &mercury__lexer__lexer__du_functor_desc_token_0_17,
  &mercury__lexer__lexer__du_functor_desc_token_0_18,
  &mercury__lexer__lexer__du_functor_desc_token_0_19,
  &mercury__lexer__lexer__du_functor_desc_token_0_21
};

static const MR_DuPtagLayout mercury__lexer__lexer__du_ptag_ordered_token_0[4] = {
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__lexer__lexer__du_stag_ordered_token_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lexer__lexer__du_stag_ordered_token_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lexer__lexer__du_stag_ordered_token_0_2
  },
  {
    (MR_Integer) 9,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__lexer__lexer__du_stag_ordered_token_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_name_ordered_token_0[22] = {
  &mercury__lexer__lexer__du_functor_desc_token_0_3,
  &mercury__lexer__lexer__du_functor_desc_token_0_9,
  &mercury__lexer__lexer__du_functor_desc_token_0_13,
  &mercury__lexer__lexer__du_functor_desc_token_0_11,
  &mercury__lexer__lexer__du_functor_desc_token_0_15,
  &mercury__lexer__lexer__du_functor_desc_token_0_16,
  &mercury__lexer__lexer__du_functor_desc_token_0_20,
  &mercury__lexer__lexer__du_functor_desc_token_0_18,
  &mercury__lexer__lexer__du_functor_desc_token_0_4,
  &mercury__lexer__lexer__du_functor_desc_token_0_14,
  &mercury__lexer__lexer__du_functor_desc_token_0_6,
  &mercury__lexer__lexer__du_functor_desc_token_0_2,
  &mercury__lexer__lexer__du_functor_desc_token_0_21,
  &mercury__lexer__lexer__du_functor_desc_token_0_19,
  &mercury__lexer__lexer__du_functor_desc_token_0_17,
  &mercury__lexer__lexer__du_functor_desc_token_0_0,
  &mercury__lexer__lexer__du_functor_desc_token_0_7,
  &mercury__lexer__lexer__du_functor_desc_token_0_8,
  &mercury__lexer__lexer__du_functor_desc_token_0_12,
  &mercury__lexer__lexer__du_functor_desc_token_0_10,
  &mercury__lexer__lexer__du_functor_desc_token_0_5,
  &mercury__lexer__lexer__du_functor_desc_token_0_1
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_token_0[22] = {
  (MR_Integer) 15,
  (MR_Integer) 21,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 20,
  (MR_Integer) 10,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 1,
  (MR_Integer) 19,
  (MR_Integer) 3,
  (MR_Integer) 18,
  (MR_Integer) 2,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 7,
  (MR_Integer) 13,
  (MR_Integer) 6,
  (MR_Integer) 12
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_token_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__lexer____Unify____token_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____token_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "token",
  {     mercury__lexer__lexer__du_name_ordered_token_0 },
  {     mercury__lexer__lexer__du_ptag_ordered_token_0 },
  (MR_Integer) 22,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_token_0
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_token_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__lexer____Unify____token_context_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____token_context_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "token_context",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__lexer__lexer__field_types_token_list_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__lexer__lexer__type_ctor_info_token_list_0
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_list_0_0 = {
  (MR_String) "token_cons",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__lexer__lexer__field_types_token_list_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mercury__lexer__lexer__du_functor_desc_token_list_0_1 = {
  (MR_String) "token_nil",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_list_0_0[1] = {
  &mercury__lexer__lexer__du_functor_desc_token_list_0_1
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_stag_ordered_token_list_0_1[1] = {
  &mercury__lexer__lexer__du_functor_desc_token_list_0_0
};

static const MR_DuPtagLayout mercury__lexer__lexer__du_ptag_ordered_token_list_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__lexer__lexer__du_stag_ordered_token_list_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__lexer__lexer__du_stag_ordered_token_list_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__lexer__lexer__du_name_ordered_token_list_0[2] = {
  &mercury__lexer__lexer__du_functor_desc_token_list_0_0,
  &mercury__lexer__lexer__du_functor_desc_token_list_0_1
};

static const MR_Integer mercury__lexer__lexer__functor_number_map_token_list_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__lexer__lexer__type_ctor_info_token_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__lexer____Unify____token_list_0_0_10001)),
  ((MR_Box) (mercury__lexer____Compare____token_list_0_0_10001)),
  (MR_String) "lexer",
  (MR_String) "token_list",
  {     mercury__lexer__lexer__du_name_ordered_token_list_0 },
  {     mercury__lexer__lexer__du_ptag_ordered_token_list_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__lexer__lexer__functor_number_map_token_list_0
};

static MR_bool MR_CALL 
mercury__lexer____Unify____get_token_action_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____get_token_action_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____get_token_action_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____get_token_action_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____integer_base_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____integer_base_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____integer_base_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____integer_base_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____maybe_have_valid_token_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____maybe_have_valid_token_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____maybe_have_valid_token_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____maybe_have_valid_token_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____offset_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____offset_0_0(((MR_Integer) mercury__lexer__wrapper_arg_1), ((MR_Integer) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____offset_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____offset_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Integer) mercury__lexer__wrapper_arg_2), ((MR_Integer) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____scanned_past_whitespace_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____scanned_past_whitespace_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____scanned_past_whitespace_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____scanned_past_whitespace_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____string_token_context_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____string_token_context_0_0(((MR_Integer) mercury__lexer__wrapper_arg_1), ((MR_Integer) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____string_token_context_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____string_token_context_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Integer) mercury__lexer__wrapper_arg_2), ((MR_Integer) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____token_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____token_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____token_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____token_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____token_context_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____token_context_0_0(((MR_Integer) mercury__lexer__wrapper_arg_1), ((MR_Integer) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____token_context_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____token_context_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Integer) mercury__lexer__wrapper_arg_2), ((MR_Integer) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__lexer____Unify____token_list_0_0_10001(
  MR_Box mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    {
      mercury__lexer__succeeded = mercury__lexer____Unify____token_list_0_0(((MR_Word) mercury__lexer__wrapper_arg_1), ((MR_Word) mercury__lexer__wrapper_arg_2));
    }
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer____Compare____token_list_0_0_10001(
  MR_Box * mercury__lexer__wrapper_arg_1,
  MR_Box mercury__lexer__wrapper_arg_2,
  MR_Box mercury__lexer__wrapper_arg_3)
{
  {
    MR_Word mercury__lexer__conv0_HeadVar__1_1;

    {
      mercury__lexer____Compare____token_list_0_0(&mercury__lexer__conv0_HeadVar__1_1, ((MR_Word) mercury__lexer__wrapper_arg_2), ((MR_Word) mercury__lexer__wrapper_arg_3));
    }
    *mercury__lexer__wrapper_arg_1 = ((MR_Box) (mercury__lexer__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
mercury__lexer__LCMCpr_string_get_token_list_max_1_5_p_0(
  MR_String mercury__lexer__String_6,
  MR_Integer mercury__lexer__Len_7,
  MR_Word * mercury__lexer__AddrOfTokens_85,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_25,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Token_10;
        MR_Integer mercury__lexer__Context_11;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_27_27;
        MR_Char mercury__lexer__Char_48;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_50;
        MR_Integer mercury__lexer__LineNum0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_62;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_61 < mercury__lexer__Len_7);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__LCMCpr_string_get_token_list_max_1_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_6 ;
	Index =  mercury__lexer__Offset0_61 ;
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
	 mercury__lexer__Offset_62  = NextIndex;
	 mercury__lexer__Char_48  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_48 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_63 = (mercury__lexer__LineNum0_59 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_19_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 0) = ((MR_Box) (mercury__lexer__LineNum_63));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 1) = ((MR_Box) (mercury__lexer__Offset_62));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 2) = ((MR_Box) (mercury__lexer__Offset_62));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_19_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 0) = ((MR_Box) (mercury__lexer__LineNum0_59));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 1) = ((MR_Box) (mercury__lexer__LineOffset0_60));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 2) = ((MR_Box) (mercury__lexer__Offset_62));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            MR_Word mercury__lexer__Action_49;

            if ((((MR_Unsigned) (mercury__lexer__Char_48 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
              if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_48 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_48 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                {
                  mercury__lexer__Action_49 = ((&mercury__lexer_vector_common_4[1416 + (mercury__lexer__Char_48 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                  mercury__lexer__succeeded = MR_TRUE;
                }
              else
                mercury__lexer__succeeded = MR_FALSE;
            else
              mercury__lexer__succeeded = MR_FALSE;
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__execute_string_get_token_action_10_p_0(mercury__lexer__String_6, mercury__lexer__Len_7, mercury__lexer__STATE_VARIABLE_Posn_0_25, mercury__lexer__Char_48, mercury__lexer__Action_49, (MR_Integer) 1, &mercury__lexer__Token_10, &mercury__lexer__Context_11, mercury__lexer__STATE_VARIABLE_Posn_19_50, &mercury__lexer__STATE_VARIABLE_Posn_27_27);
              }
            else
              {
                MR_Integer mercury__lexer__V_74_74;
                MR_Integer mercury__lexer__V_75_75;

                mercury__lexer__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
                mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
                mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
                mercury__lexer__STATE_VARIABLE_Posn_27_27 = mercury__lexer__STATE_VARIABLE_Posn_19_50;
                {
                  mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_48));
                }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_82_82;
            MR_Integer mercury__lexer__V_83_83;

            mercury__lexer__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
            mercury__lexer__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
            mercury__lexer__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
            mercury__lexer__STATE_VARIABLE_Posn_27_27 = mercury__lexer__STATE_VARIABLE_Posn_0_25;
            mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
          }
        switch (MR_tag((MR_Word) mercury__lexer__Token_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Token_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  MR_Word mercury__lexer__Tokens_8;
                  MR_Word * mercury__lexer__AddrTokens1_84;

                  {
                    mercury__lexer__Tokens_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 0) = ((MR_Box) (mercury__lexer__Token_10));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 1) = ((MR_Box) (mercury__lexer__Context_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 2) = NULL;
                  }
                  mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, (MR_Integer) 2));
                  *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_8;
                  /* direct tailcall eliminated */
                  {
                    MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_85 = mercury__lexer__AddrTokens1_84;
                    MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25 = mercury__lexer__STATE_VARIABLE_Posn_27_27;

                    mercury__lexer__STATE_VARIABLE_Posn_0_25 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25;
                    mercury__lexer__AddrOfTokens_85 = mercury__lexer__AddrOfTokens__tmp_copy_85;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__lexer__Tokens_86;

                  {
                    mercury__lexer__Tokens_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 0) = ((MR_Box) (mercury__lexer__Token_10));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 1) = ((MR_Box) (mercury__lexer__Context_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 2) = ((MR_Box) (mercury__lexer__V_29_29));
                  }
                  *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_86;
                  *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word mercury__lexer__Tokens_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_87;
                  *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word mercury__lexer__Tokens_8;
              MR_Word * mercury__lexer__AddrTokens1_84;

              {
                mercury__lexer__Tokens_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 0) = ((MR_Box) (mercury__lexer__Token_10));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 1) = ((MR_Box) (mercury__lexer__Context_11));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, (MR_Integer) 2));
              *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_8;
              /* direct tailcall eliminated */
              {
                MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_85 = mercury__lexer__AddrTokens1_84;
                MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25 = mercury__lexer__STATE_VARIABLE_Posn_27_27;

                mercury__lexer__STATE_VARIABLE_Posn_0_25 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25;
                mercury__lexer__AddrOfTokens_85 = mercury__lexer__AddrOfTokens__tmp_copy_85;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 8:
                {
                  MR_Word mercury__lexer__Tokens_8;
                  MR_Word * mercury__lexer__AddrTokens1_84;

                  {
                    mercury__lexer__Tokens_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 0) = ((MR_Box) (mercury__lexer__Token_10));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 1) = ((MR_Box) (mercury__lexer__Context_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, 2) = NULL;
                  }
                  mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_8, (MR_Integer) 2));
                  *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_8;
                  /* direct tailcall eliminated */
                  {
                    MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_85 = mercury__lexer__AddrTokens1_84;
                    MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25 = mercury__lexer__STATE_VARIABLE_Posn_27_27;

                    mercury__lexer__STATE_VARIABLE_Posn_0_25 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_25;
                    mercury__lexer__AddrOfTokens_85 = mercury__lexer__AddrOfTokens__tmp_copy_85;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                {
                  MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__lexer__Tokens_86;

                  {
                    mercury__lexer__Tokens_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 0) = ((MR_Box) (mercury__lexer__Token_10));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 1) = ((MR_Box) (mercury__lexer__Context_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_86, 2) = ((MR_Box) (mercury__lexer__V_29_29));
                  }
                  *mercury__lexer__AddrOfTokens_85 = mercury__lexer__Tokens_86;
                  *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Word mercury__lexer__Token0_8,
  MR_Integer mercury__lexer__Context0_9,
  MR_Word * mercury__lexer__AddrOfTokens_51)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;

        switch (MR_tag((MR_Word) mercury__lexer__Token0_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Token0_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                {
                  MR_Integer mercury__lexer__Context1_36;
                  MR_Word mercury__lexer__Token1_37;
                  MR_Word mercury__lexer__Tokens_10;
                  MR_Word * mercury__lexer__AddrTokens1_49;

                  {
                    mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
                  }
                  {
                    mercury__lexer__Tokens_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 2) = NULL;
                  }
                  mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, (MR_Integer) 2));
                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_10;
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__lexer__Token0__tmp_copy_8 = mercury__lexer__Token1_37;
                    MR_Integer mercury__lexer__Context0__tmp_copy_9 = mercury__lexer__Context1_36;
                    MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_51 = mercury__lexer__AddrTokens1_49;

                    mercury__lexer__AddrOfTokens_51 = mercury__lexer__AddrOfTokens__tmp_copy_51;
                    mercury__lexer__Context0_9 = mercury__lexer__Context0__tmp_copy_9;
                    mercury__lexer__Token0_8 = mercury__lexer__Token0__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word mercury__lexer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__lexer__Tokens_52;

                  {
                    mercury__lexer__Tokens_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 2) = ((MR_Box) (mercury__lexer__V_35_35));
                  }
                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_52;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word mercury__lexer__Tokens_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_53;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer mercury__lexer__Context1_36;
              MR_Word mercury__lexer__Token1_37;
              MR_Word mercury__lexer__Tokens_10;
              MR_Word * mercury__lexer__AddrTokens1_49;

              {
                mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
              }
              {
                mercury__lexer__Tokens_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, (MR_Integer) 2));
              *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_10;
              /* direct tailcall eliminated */
              {
                MR_Word mercury__lexer__Token0__tmp_copy_8 = mercury__lexer__Token1_37;
                MR_Integer mercury__lexer__Context0__tmp_copy_9 = mercury__lexer__Context1_36;
                MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_51 = mercury__lexer__AddrTokens1_49;

                mercury__lexer__AddrOfTokens_51 = mercury__lexer__AddrOfTokens__tmp_copy_51;
                mercury__lexer__Context0_9 = mercury__lexer__Context0__tmp_copy_9;
                mercury__lexer__Token0_8 = mercury__lexer__Token0__tmp_copy_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
                {
                  MR_Integer mercury__lexer__Context1_36;
                  MR_Word mercury__lexer__Token1_37;
                  MR_Word mercury__lexer__Tokens_10;
                  MR_Word * mercury__lexer__AddrTokens1_49;

                  {
                    mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
                  }
                  {
                    mercury__lexer__Tokens_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, 2) = NULL;
                  }
                  mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_10, (MR_Integer) 2));
                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_10;
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__lexer__Token0__tmp_copy_8 = mercury__lexer__Token1_37;
                    MR_Integer mercury__lexer__Context0__tmp_copy_9 = mercury__lexer__Context1_36;
                    MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_51 = mercury__lexer__AddrTokens1_49;

                    mercury__lexer__AddrOfTokens_51 = mercury__lexer__AddrOfTokens__tmp_copy_51;
                    mercury__lexer__Context0_9 = mercury__lexer__Context0__tmp_copy_9;
                    mercury__lexer__Token0_8 = mercury__lexer__Token0__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                {
                  MR_Word mercury__lexer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__lexer__Tokens_52;

                  {
                    mercury__lexer__Tokens_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_52, 2) = ((MR_Box) (mercury__lexer__V_35_35));
                  }
                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_52;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer mercury__lexer__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_8, (MR_Integer) 1)));
                  MR_Integer mercury__lexer__Context1_15;
                  MR_Word mercury__lexer__Token1_16;
                  MR_Word mercury__lexer__V_34_34;
                  MR_Box mercury__lexer__V_5_48 = (MR_Box) mercury__lexer__Stream_7;
                  MR_Word * mercury__lexer__AddrTokens1_50;
                  MR_Word mercury__lexer__Tokens_54;

{
#define MR_PROC_LABEL mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_48 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context1_15  = LineNum;
}
                  {
                    mercury__lexer__get_dot_4_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_16);
                  }
                  {
                    mercury__lexer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__lexer__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__lexer__V_34_34, 1) = ((MR_Box) (mercury__lexer__Int_14));
                  }
                  {
                    mercury__lexer__Tokens_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_54, 0) = ((MR_Box) (mercury__lexer__V_34_34));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_54, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_54, 2) = NULL;
                  }
                  mercury__lexer__AddrTokens1_50 = (MR_Word *) &(MR_hl_field(MR_mktag(1), mercury__lexer__Tokens_54, (MR_Integer) 2));
                  *mercury__lexer__AddrOfTokens_51 = mercury__lexer__Tokens_54;
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__lexer__Token0__tmp_copy_8 = mercury__lexer__Token1_16;
                    MR_Integer mercury__lexer__Context0__tmp_copy_9 = mercury__lexer__Context1_15;
                    MR_Word * mercury__lexer__AddrOfTokens__tmp_copy_51 = mercury__lexer__AddrTokens1_50;

                    mercury__lexer__AddrOfTokens_51 = mercury__lexer__AddrOfTokens__tmp_copy_51;
                    mercury__lexer__Context0_9 = mercury__lexer__Context0__tmp_copy_9;
                    mercury__lexer__Token0_8 = mercury__lexer__Token0__tmp_copy_8;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__lexer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__lexer__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__lexer____Compare____token_list_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Integer mercury__lexer__CastX_18 = (MR_Integer) mercury__lexer__HeadVar__2_2;
        MR_Integer mercury__lexer__CastY_19 = (MR_Integer) mercury__lexer__HeadVar__3_3;

        mercury__lexer__succeeded = (mercury__lexer__CastX_18 == mercury__lexer__CastY_19);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__lexer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__lexer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__lexer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__lexer__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));

            if ((mercury__lexer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                MR_Word mercury__lexer__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)));
                MR_Integer mercury__lexer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word mercury__lexer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__3_3, (MR_Integer) 2)));
                MR_Word mercury__lexer__V_10_10;

                {
                  mercury__lexer____Compare____token_0_0(&mercury__lexer__V_10_10, mercury__lexer__V_25_25, mercury__lexer__V_7_7);
                }
                mercury__lexer__succeeded = (mercury__lexer__V_10_10 == (MR_Integer) 0);
                mercury__lexer__succeeded = !(mercury__lexer__succeeded);
                if (mercury__lexer__succeeded)
                  *mercury__lexer__HeadVar__1_1 = mercury__lexer__V_10_10;
                else
                  {
                    MR_Word mercury__lexer__V_11_11;

                    mercury__lexer__succeeded = (mercury__lexer__V_24_24 < mercury__lexer__V_8_8);
                    if (mercury__lexer__succeeded)
                      mercury__lexer__V_11_11 = (MR_Integer) 1;
                    else
                      {
                        mercury__lexer__succeeded = (mercury__lexer__V_24_24 == mercury__lexer__V_8_8);
                        if (mercury__lexer__succeeded)
                          mercury__lexer__V_11_11 = (MR_Integer) 0;
                        else
                          mercury__lexer__V_11_11 = (MR_Integer) 2;
                      }
                    mercury__lexer__succeeded = (mercury__lexer__V_11_11 == (MR_Integer) 0);
                    mercury__lexer__succeeded = !(mercury__lexer__succeeded);
                    if (mercury__lexer__succeeded)
                      *mercury__lexer__HeadVar__1_1 = mercury__lexer__V_11_11;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__lexer__HeadVar__2__tmp_copy_2 = mercury__lexer__V_23_23;
                          MR_Word mercury__lexer__HeadVar__3__tmp_copy_3 = mercury__lexer__V_9_9;

                          mercury__lexer__HeadVar__3_3 = mercury__lexer__HeadVar__3__tmp_copy_3;
                          mercury__lexer__HeadVar__2_2 = mercury__lexer__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__lexer____Unify____token_list_0_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Integer mercury__lexer__CastX_11 = (MR_Integer) mercury__lexer__HeadVar__1_1;
        MR_Integer mercury__lexer__CastY_12 = (MR_Integer) mercury__lexer__HeadVar__2_2;

        mercury__lexer__succeeded = (mercury__lexer__CastX_11 == mercury__lexer__CastY_12);
        if (mercury__lexer__succeeded)
          mercury__lexer__succeeded = MR_TRUE;
        else
        if ((mercury__lexer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__lexer__CastX_9 = (MR_Integer) mercury__lexer__HeadVar__1_1;
            MR_Integer mercury__lexer__CastY_10 = (MR_Integer) mercury__lexer__HeadVar__2_2;

            mercury__lexer__succeeded = (mercury__lexer__CastY_10 == mercury__lexer__CastX_9);
          }
        else
          {
            MR_Word mercury__lexer__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__lexer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__lexer__V_6_6;
            MR_Integer mercury__lexer__V_7_7;
            MR_Word mercury__lexer__V_8_8;

            mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));
                mercury__lexer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                mercury__lexer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mercury__lexer__succeeded = mercury__lexer____Unify____token_0_0(mercury__lexer__V_3_3, mercury__lexer__V_6_6);
                }
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__succeeded = (mercury__lexer__V_4_4 == mercury__lexer__V_7_7);
                    if (mercury__lexer__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__lexer__HeadVar__1__tmp_copy_1 = mercury__lexer__V_5_5;
                          MR_Word mercury__lexer__HeadVar__2__tmp_copy_2 = mercury__lexer__V_8_8;

                          mercury__lexer__HeadVar__2_2 = mercury__lexer__HeadVar__2__tmp_copy_2;
                          mercury__lexer__HeadVar__1_1 = mercury__lexer__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__lexer__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__lexer____Compare____token_context_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2,
  MR_Integer mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____token_context_0_0(
  MR_Integer mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_3 = mercury__lexer__HeadVar__1_1;
    MR_Integer mercury__lexer__Cast_HeadVar2_4 = mercury__lexer__HeadVar__2_2;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_3 == mercury__lexer__Cast_HeadVar2_4);
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____token_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__CastX_32 = (MR_Integer) mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__CastY_33 = (MR_Integer) mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__CastX_32 == mercury__lexer__CastY_33);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__lexer__V_4_4;
        MR_Integer mercury__lexer__V_5_5;

        {
          mercury__lexer____Index____token_0_0(mercury__lexer__HeadVar__2_2, &mercury__lexer__V_4_4);
        }
        {
          mercury__lexer____Index____token_0_0(mercury__lexer__HeadVar__3_3, &mercury__lexer__V_5_5);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_4_4 < mercury__lexer__V_5_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__lexer__succeeded = (mercury__lexer__V_4_4 > mercury__lexer__V_5_5);
            if (mercury__lexer__succeeded)
              *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word mercury__lexer__V_6_6;

                switch (MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__lexer__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          mercury__lexer__V_6_6 = (MR_Integer) 0;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String mercury__lexer__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));
                      MR_String mercury__lexer__V_8_8;
                      MR_Integer mercury__lexer__V_7_85;
                      MR_Integer mercury__lexer__V_8_86;

                      mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_7_7 ;
	S2 =  mercury__lexer__V_8_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_85  = Res;
}
                          mercury__lexer__V_8_86 = (MR_Integer) 0;
                          mercury__lexer__succeeded = (mercury__lexer__V_7_85 < mercury__lexer__V_8_86);
                          if (mercury__lexer__succeeded)
                            mercury__lexer__V_6_6 = (MR_Integer) 1;
                          else
                            {
                              mercury__lexer__succeeded = (mercury__lexer__V_7_85 == (MR_Integer) 0);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 0;
                              else
                                mercury__lexer__V_6_6 = (MR_Integer) 2;
                            }
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String mercury__lexer__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));
                      MR_String mercury__lexer__V_10_10;
                      MR_Integer mercury__lexer__V_7_95;
                      MR_Integer mercury__lexer__V_8_96;

                      mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_9_9 ;
	S2 =  mercury__lexer__V_10_10 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_95  = Res;
}
                          mercury__lexer__V_8_96 = (MR_Integer) 0;
                          mercury__lexer__succeeded = (mercury__lexer__V_7_95 < mercury__lexer__V_8_96);
                          if (mercury__lexer__succeeded)
                            mercury__lexer__V_6_6 = (MR_Integer) 1;
                          else
                            {
                              mercury__lexer__succeeded = (mercury__lexer__V_7_95 == (MR_Integer) 0);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 0;
                              else
                                mercury__lexer__V_6_6 = (MR_Integer) 2;
                            }
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mercury__lexer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer mercury__lexer__V_12_12;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                              mercury__lexer__succeeded = (mercury__lexer__V_11_11 < mercury__lexer__V_12_12);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_11_11 == mercury__lexer__V_12_12);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__lexer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mercury__lexer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word mercury__lexer__V_15_15;
                          MR_Word mercury__lexer__V_16_16;
                          MR_Word mercury__lexer__V_17_17;
                          MR_Integer mercury__lexer__V_46_46;
                          MR_Integer mercury__lexer__V_47_47;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                              mercury__lexer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 2)));
                              mercury__lexer__V_46_46 = (MR_Integer) mercury__lexer__V_13_13;
                              mercury__lexer__V_47_47 = (MR_Integer) mercury__lexer__V_15_15;
                              mercury__lexer__succeeded = (mercury__lexer__V_46_46 < mercury__lexer__V_47_47);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_17_17 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_46_46 == mercury__lexer__V_47_47);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_17_17 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_17_17 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = (mercury__lexer__V_17_17 == (MR_Integer) 0);
                              mercury__lexer__succeeded = !(mercury__lexer__succeeded);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = mercury__lexer__V_17_17;
                              else
                                {
                                  mercury__integer____Compare____integer_0_0(&mercury__lexer__V_6_6, mercury__lexer__V_14_14, mercury__lexer__V_16_16);
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Float mercury__lexer__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Float mercury__lexer__V_19_19;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                              mercury__lexer__succeeded = (mercury__lexer__V_18_18 < mercury__lexer__V_19_19);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_18_18 > mercury__lexer__V_19_19);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String mercury__lexer__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mercury__lexer__V_21_21;
                          MR_Integer mercury__lexer__V_7_90;
                          MR_Integer mercury__lexer__V_8_91;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_20_20 ;
	S2 =  mercury__lexer__V_21_21 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_90  = Res;
}
                              mercury__lexer__V_8_91 = (MR_Integer) 0;
                              mercury__lexer__succeeded = (mercury__lexer__V_7_90 < mercury__lexer__V_8_91);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_7_90 == (MR_Integer) 0);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String mercury__lexer__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mercury__lexer__V_23_23;
                          MR_Integer mercury__lexer__V_7_64;
                          MR_Integer mercury__lexer__V_8_65;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_22_22 ;
	S2 =  mercury__lexer__V_23_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_64  = Res;
}
                              mercury__lexer__V_8_65 = (MR_Integer) 0;
                              mercury__lexer__succeeded = (mercury__lexer__V_7_64 < mercury__lexer__V_8_65);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_7_64 == (MR_Integer) 0);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Char mercury__lexer__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Char mercury__lexer__V_25_25;
                          MR_Integer mercury__lexer__V_7_80;
                          MR_Integer mercury__lexer__V_8_81;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_25_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__lexer__V_24_24 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_80  = Int;
}
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__lexer__V_25_25 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_8_81  = Int;
}
                              mercury__lexer__succeeded = (mercury__lexer__V_7_80 < mercury__lexer__V_8_81);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_7_80 == mercury__lexer__V_8_81);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_String mercury__lexer__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String mercury__lexer__V_27_27;
                          MR_Integer mercury__lexer__V_7_56;
                          MR_Integer mercury__lexer__V_8_57;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_26_26 ;
	S2 =  mercury__lexer__V_27_27 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_56  = Res;
}
                              mercury__lexer__V_8_57 = (MR_Integer) 0;
                              mercury__lexer__succeeded = (mercury__lexer__V_7_56 < mercury__lexer__V_8_57);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_7_56 == (MR_Integer) 0);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word mercury__lexer__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word mercury__lexer__V_29_29;
                          MR_String mercury__lexer__V_48_48;
                          MR_String mercury__lexer__V_49_49;
                          MR_Integer mercury__lexer__V_7_75;
                          MR_Integer mercury__lexer__V_8_76;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                              mercury__lexer__V_48_48 = (MR_String) mercury__lexer__V_28_28;
                              mercury__lexer__V_49_49 = (MR_String) mercury__lexer__V_29_29;
{
#define MR_PROC_LABEL mercury__lexer____Compare____token_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__lexer__V_48_48 ;
	S2 =  mercury__lexer__V_49_49 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_7_75  = Res;
}
                              mercury__lexer__V_8_76 = (MR_Integer) 0;
                              mercury__lexer__succeeded = (mercury__lexer__V_7_75 < mercury__lexer__V_8_76);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_7_75 == (MR_Integer) 0);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Integer mercury__lexer__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer mercury__lexer__V_31_31;

                          mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__3_3, (MR_Integer) 1)));
                              mercury__lexer__succeeded = (mercury__lexer__V_30_30 < mercury__lexer__V_31_31);
                              if (mercury__lexer__succeeded)
                                mercury__lexer__V_6_6 = (MR_Integer) 1;
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__V_30_30 == mercury__lexer__V_31_31);
                                  if (mercury__lexer__succeeded)
                                    mercury__lexer__V_6_6 = (MR_Integer) 0;
                                  else
                                    mercury__lexer__V_6_6 = (MR_Integer) 2;
                                }
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (mercury__lexer__succeeded)
                  *mercury__lexer__HeadVar__1_1 = mercury__lexer__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__lexer____Index____token_0_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Integer * mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;

    switch (MR_tag((MR_Word) mercury__lexer__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 1:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 2:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 3:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 4:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 5:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 6:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 7:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 8:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 15;
            break;
          case (MR_Integer) 9:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 10:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 20;
            break;
        }
        break;
      case (MR_Integer) 1:
        *mercury__lexer__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        *mercury__lexer__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 2:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 3:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 4:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 5:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 17;
            break;
          case (MR_Integer) 6:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 18;
            break;
          case (MR_Integer) 7:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 19;
            break;
          case (MR_Integer) 8:
            *mercury__lexer__HeadVar__2_2 = (MR_Integer) 21;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____token_0_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__CastX_49 = (MR_Integer) mercury__lexer__HeadVar__1_1;
    MR_Integer mercury__lexer__CastY_50 = (MR_Integer) mercury__lexer__HeadVar__2_2;

    mercury__lexer__succeeded = (mercury__lexer__CastX_49 == mercury__lexer__CastY_50);
    if (mercury__lexer__succeeded)
      mercury__lexer__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__lexer__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__lexer__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__lexer__CastX_19 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_20 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_20 == mercury__lexer__CastX_19);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__lexer__CastX_21 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_22 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_22 == mercury__lexer__CastX_21);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__lexer__CastX_23 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_24 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_24 == mercury__lexer__CastX_23);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__lexer__CastX_25 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_26 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_26 == mercury__lexer__CastX_25);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__lexer__CastX_27 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_28 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_28 == mercury__lexer__CastX_27);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mercury__lexer__CastX_29 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_30 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_30 == mercury__lexer__CastX_29);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer mercury__lexer__CastX_31 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_32 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_32 == mercury__lexer__CastX_31);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer mercury__lexer__CastX_33 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_34 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_34 == mercury__lexer__CastX_33);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mercury__lexer__CastX_35 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_36 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_36 == mercury__lexer__CastX_35);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer mercury__lexer__CastX_37 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_38 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_38 == mercury__lexer__CastX_37);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer mercury__lexer__CastX_45 = (MR_Integer) mercury__lexer__HeadVar__1_1;
                MR_Integer mercury__lexer__CastY_46 = (MR_Integer) mercury__lexer__HeadVar__2_2;

                mercury__lexer__succeeded = (mercury__lexer__CastY_46 == mercury__lexer__CastX_45);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__lexer__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__lexer__V_4_4;

            mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));
                mercury__lexer__succeeded = (strcmp(mercury__lexer__V_3_3, mercury__lexer__V_4_4) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__lexer__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__lexer__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__lexer__V_6_6;

            mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)));
                mercury__lexer__succeeded = (strcmp(mercury__lexer__V_5_5, mercury__lexer__V_6_6) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__lexer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__lexer__V_8_8;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (mercury__lexer__V_7_7 == mercury__lexer__V_8_8);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__lexer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__lexer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__lexer__V_11_11;
                MR_Word mercury__lexer__V_12_12;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__lexer__succeeded = (mercury__lexer__V_9_9 == mercury__lexer__V_11_11);
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__succeeded = mercury__integer____Unify____integer_0_0(mercury__lexer__V_10_10, mercury__lexer__V_12_12);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float mercury__lexer__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Float mercury__lexer__V_14_14;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (mercury__lexer__V_13_13 == mercury__lexer__V_14_14);
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mercury__lexer__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__lexer__V_16_16;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (strcmp(mercury__lexer__V_15_15, mercury__lexer__V_16_16) == 0);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String mercury__lexer__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__lexer__V_18_18;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (strcmp(mercury__lexer__V_17_17, mercury__lexer__V_18_18) == 0);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Char mercury__lexer__V_39_39 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Char mercury__lexer__V_40_40;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (mercury__lexer__V_39_39 == mercury__lexer__V_40_40);
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String mercury__lexer__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__lexer__V_42_42;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (strcmp(mercury__lexer__V_41_41, mercury__lexer__V_42_42) == 0);
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word mercury__lexer__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__lexer__V_44_44;
                MR_String mercury__lexer__V_53_53;
                MR_String mercury__lexer__V_54_54;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__V_53_53 = (MR_String) mercury__lexer__V_43_43;
                    mercury__lexer__V_54_54 = (MR_String) mercury__lexer__V_44_44;
                    mercury__lexer__succeeded = (strcmp(mercury__lexer__V_53_53, mercury__lexer__V_54_54) == 0);
                  }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__lexer__V_48_48;

                mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__lexer__succeeded = (mercury__lexer__V_47_47 == mercury__lexer__V_48_48);
                  }
              }
              break;
          }
          break;
      }
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____string_token_context_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2,
  MR_Integer mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____string_token_context_0_0(
  MR_Integer mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_3 = mercury__lexer__HeadVar__1_1;
    MR_Integer mercury__lexer__Cast_HeadVar2_4 = mercury__lexer__HeadVar__2_2;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_3 == mercury__lexer__Cast_HeadVar2_4);
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____scanned_past_whitespace_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = (MR_Integer) mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = (MR_Integer) mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____scanned_past_whitespace_0_0(
  MR_Word mercury__lexer__HeadVar__2_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded = (mercury__lexer__HeadVar__2_1 == mercury__lexer__HeadVar__2_2);

    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____offset_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2,
  MR_Integer mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____offset_0_0(
  MR_Integer mercury__lexer__HeadVar__1_1,
  MR_Integer mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_3 = mercury__lexer__HeadVar__1_1;
    MR_Integer mercury__lexer__Cast_HeadVar2_4 = mercury__lexer__HeadVar__2_2;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_3 == mercury__lexer__Cast_HeadVar2_4);
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____maybe_have_valid_token_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__CastX_6 = (MR_Integer) mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__CastY_7 = (MR_Integer) mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__CastX_6 == mercury__lexer__CastY_7);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__lexer__V_4_4 = (MR_Integer) mercury__lexer__HeadVar__2_2;
        MR_Integer mercury__lexer__V_5_5 = (MR_Integer) mercury__lexer__HeadVar__3_3;

        mercury__lexer__succeeded = (mercury__lexer__V_4_4 < mercury__lexer__V_5_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__lexer__succeeded = (mercury__lexer__V_4_4 == mercury__lexer__V_5_5);
            if (mercury__lexer__succeeded)
              *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____maybe_have_valid_token_0_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__CastX_5 = (MR_Integer) mercury__lexer__HeadVar__1_1;
    MR_Integer mercury__lexer__CastY_6 = (MR_Integer) mercury__lexer__HeadVar__2_2;

    mercury__lexer__succeeded = (mercury__lexer__CastX_5 == mercury__lexer__CastY_6);
    if (mercury__lexer__succeeded)
      mercury__lexer__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__lexer__V_3_3 = (MR_Integer) mercury__lexer__HeadVar__1_1;
        MR_Integer mercury__lexer__V_4_4 = (MR_Integer) mercury__lexer__HeadVar__2_2;

        mercury__lexer__succeeded = (mercury__lexer__V_3_3 == mercury__lexer__V_4_4);
      }
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____integer_base_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = (MR_Integer) mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = (MR_Integer) mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____integer_base_0_0(
  MR_Word mercury__lexer__HeadVar__2_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded = (mercury__lexer__HeadVar__2_1 == mercury__lexer__HeadVar__2_2);

    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer____Compare____get_token_action_0_0(
  MR_Word * mercury__lexer__HeadVar__1_1,
  MR_Word mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__HeadVar__3_3)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Cast_HeadVar1_4 = (MR_Integer) mercury__lexer__HeadVar__2_2;
    MR_Integer mercury__lexer__Cast_HeadVar2_5 = (MR_Integer) mercury__lexer__HeadVar__3_3;

    mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 < mercury__lexer__Cast_HeadVar2_5);
    if (mercury__lexer__succeeded)
      *mercury__lexer__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Cast_HeadVar1_4 == mercury__lexer__Cast_HeadVar2_5);
        if (mercury__lexer__succeeded)
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__lexer__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__lexer____Unify____get_token_action_0_0(
  MR_Word mercury__lexer__HeadVar__2_1,
  MR_Word mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded = (mercury__lexer__HeadVar__2_1 == mercury__lexer__HeadVar__2_2);

    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer__conv_string_to_int_3_p_0(
  MR_String mercury__lexer__String_4,
  MR_Word mercury__lexer__Base_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__BaseInt_7 = ((&mercury__lexer_vector_common_9[0 + mercury__lexer__Base_5]))->mercury__lexer__vector_common_type_9_0__vct_9_f_0;
    MR_Integer mercury__lexer__Int_8;

    {
      mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__BaseInt_7, mercury__lexer__String_4, &mercury__lexer__Int_8);
    }
    if (mercury__lexer__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__lexer__Token_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Int_8));
      }
    else
      {
        MR_Word mercury__lexer__Integer_9;

        {
          mercury__lexer__succeeded = mercury__integer__from_base_string_3_p_0(mercury__lexer__BaseInt_7, mercury__lexer__String_4, &mercury__lexer__Integer_9);
        }
        if (mercury__lexer__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Base_5));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mercury__lexer__Integer_9));
          }
        else
          {
            *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__string_get_float_exponent_3_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_34;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_3_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__FloatString_15;
                MR_Integer mercury__lexer__Offset0_45;
                MR_Integer mercury__lexer__Offset_48;
                MR_Integer mercury__lexer__V_43_43;
                MR_Integer mercury__lexer__V_44_44;
                MR_Integer mercury__lexer__V_46_46;
                MR_Integer mercury__lexer__V_47_47;
                MR_Float mercury__lexer__Float_51;
                MR_Integer mercury__lexer__V_59_59;
                MR_Integer mercury__lexer__V_60_60;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_3_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_45 ;
	End =  mercury__lexer__Offset_48 ;
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
	 mercury__lexer__FloatString_15  = SubString;
}
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_3_7_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__FloatString_15 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_51  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__lexer__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_51);
                  }
                else
                  {
                    *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                  }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__FloatString_25;
            MR_Integer mercury__lexer__Offset0_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Float mercury__lexer__Float_73;
            MR_Integer mercury__lexer__V_81_81;
            MR_Integer mercury__lexer__V_82_82;

{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_3_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_67 ;
	End =  mercury__lexer__Offset_70 ;
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
	 mercury__lexer__FloatString_25  = SubString;
}
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_3_7_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__FloatString_25 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_73  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_73);
              }
            else
              {
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
              }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_float_exponent_3_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_32;
        MR_Box mercury__lexer__V_5_43 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_43, &mercury__lexer__V_10_32);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_32 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_35;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_3_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_32 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_35  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_35;
              }
            else
              {
                MR_String mercury__lexer__V_12_37;
                MR_Word mercury__lexer__V_19_38;
                MR_Box mercury__lexer__V_8_50;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_3_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_50 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_3_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_50 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_37  = Msg;
}
                mercury__lexer__V_19_38 = (MR_Word) mercury__lexer__V_12_37;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_38));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_22;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_22, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_22, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_22;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_68 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__String_71;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_68, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_71);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Float mercury__lexer__Float_77;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_3_5_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__String_71 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_77  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                          if (mercury__lexer__succeeded)
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__lexer__Token_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_77);
                            }
                          else
                            {
                              *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                            }
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_56;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_56);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Float mercury__lexer__Float_62;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_3_5_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__String_56 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_62  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_62);
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                        }
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_float_exponent_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_10;
    MR_Char mercury__lexer__Char_11;
    MR_Integer mercury__lexer__V_10_34;
    MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_11 = mercury__lexer__V_11_37;
          }
        else
          {
            MR_String mercury__lexer__V_12_39;
            MR_Word mercury__lexer__V_19_40;
            MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_2_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
            mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
            {
              mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_40));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                  {
                    mercury__lexer__STATE_VARIABLE_RevChars_17_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                  }
                  {
                    mercury__lexer__get_float_exponent_3_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_17_24, mercury__lexer__Token_8);
                  }
                }
              else
                {
                  MR_Box mercury__lexer__V_5_60 = (MR_Box) mercury__lexer__Stream_6;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_60, mercury__lexer__Char_11);
                  }
                  *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_float_exponent_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_14;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_34;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        switch (mercury__lexer__Char_14) {
          default:
            mercury__lexer__succeeded = MR_FALSE;
            break;
          case (MR_Char) 43:
            mercury__lexer__succeeded = MR_TRUE;
            break;
          case (MR_Char) 45:
            mercury__lexer__succeeded = MR_TRUE;
            break;
        }
        if (mercury__lexer__succeeded)
          {
            MR_Char mercury__lexer__Char_46;
            MR_Word mercury__lexer__STATE_VARIABLE_Posn_17_47;
            MR_Integer mercury__lexer__LineNum0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, (MR_Integer) 0)));
            MR_Integer mercury__lexer__LineOffset0_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, (MR_Integer) 1)));
            MR_Integer mercury__lexer__Offset0_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_62;

            mercury__lexer__succeeded = (mercury__lexer__Offset0_61 < mercury__lexer__Len_9);
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_61 ;
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
	 mercury__lexer__Offset_62  = NextIndex;
	 mercury__lexer__Char_46  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__succeeded = (mercury__lexer__Char_46 == (MR_Char) 10);
                    if (mercury__lexer__succeeded)
                      {
                        MR_Integer mercury__lexer__LineNum_63 = (mercury__lexer__LineNum0_59 + (MR_Integer) 1);

                        {
                          mercury__lexer__STATE_VARIABLE_Posn_17_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 0) = ((MR_Box) (mercury__lexer__LineNum_63));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 1) = ((MR_Box) (mercury__lexer__Offset_62));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 2) = ((MR_Box) (mercury__lexer__Offset_62));
                        }
                      }
                    else
                      {
                        mercury__lexer__STATE_VARIABLE_Posn_17_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 0) = ((MR_Box) (mercury__lexer__LineNum0_59));
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 1) = ((MR_Box) (mercury__lexer__LineOffset0_60));
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_47, 2) = ((MR_Box) (mercury__lexer__Offset_62));
                      }
                    mercury__lexer__succeeded = MR_TRUE;
                  }
              }
            if (mercury__lexer__succeeded)
              {
                {
                  mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_46);
                }
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_get_float_exponent_3_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_47, mercury__lexer__STATE_VARIABLE_Posn_17);
                  }
                else
                  {
                    MR_Integer mercury__lexer__V_73_73;
                    MR_Integer mercury__lexer__V_74_74;

                    {
                      mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_17_47, mercury__lexer__STATE_VARIABLE_Posn_17);
                    }
                    *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
                    *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                    mercury__lexer__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                    mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                  }
              }
            else
              {
                MR_Integer mercury__lexer__V_81_81;
                MR_Integer mercury__lexer__V_82_82;

                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_18_18;
              }
          }
        else
          {
            {
              mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_float_exponent_3_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
              }
            else
              {
                MR_Integer mercury__lexer__V_90_90;
                MR_Integer mercury__lexer__V_91_91;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
      }
    else
      {
        MR_String mercury__lexer__FloatString_15;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_24_24;
        MR_Float mercury__lexer__Float_94;

        {
          mercury__lexer__grab_string_5_p_0(mercury__lexer__String_8, mercury__lexer__Posn0_10, &mercury__lexer__FloatString_15, mercury__lexer__STATE_VARIABLE_Posn_0_16, &mercury__lexer__STATE_VARIABLE_Posn_24_24);
        }
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_exponent_7_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__FloatString_15 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_94  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_94);
          }
        else
          {
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
          }
        {
          mercury__lexer__string_get_context_4_p_0(mercury__lexer__Posn0_10, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_24_24, mercury__lexer__STATE_VARIABLE_Posn_17);
        }
      }
  }
}

static void MR_CALL 
mercury__lexer__get_float_exponent_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_10;
    MR_Char mercury__lexer__Char_11;
    MR_Integer mercury__lexer__V_10_37;
    MR_Box mercury__lexer__V_5_48 = (MR_Box) mercury__lexer__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_48, &mercury__lexer__V_10_37);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_37 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_40;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_37 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_40  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_11 = mercury__lexer__V_11_40;
          }
        else
          {
            MR_String mercury__lexer__V_12_42;
            MR_Word mercury__lexer__V_19_43;
            MR_Box mercury__lexer__V_8_55;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_55 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_55 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_42  = Msg;
}
            mercury__lexer__V_19_43 = (MR_Word) mercury__lexer__V_12_42;
            {
              mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_43));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (mercury__lexer__Char_11) {
                default:
                  mercury__lexer__succeeded = MR_FALSE;
                  break;
                case (MR_Char) 43:
                  mercury__lexer__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 45:
                  mercury__lexer__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_25;

                  {
                    mercury__lexer__STATE_VARIABLE_RevChars_17_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_25, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                  }
                  {
                    mercury__lexer__get_float_exponent_2_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_17_25, mercury__lexer__Token_8);
                  }
                }
              else
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_26;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_26, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_26, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      {
                        mercury__lexer__get_float_exponent_3_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_17_26, mercury__lexer__Token_8);
                      }
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_73 = (MR_Box) mercury__lexer__Stream_6;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_73, mercury__lexer__Char_11);
                      }
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[35]);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__lexer__String_61;

              {
                mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_61);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Float mercury__lexer__Float_67;

{
#define MR_PROC_LABEL mercury__lexer__get_float_exponent_5_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__String_61 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_67  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_67);
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                    }
                }
              else
                {
                  *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_float_decimals_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_35;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_34 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_decimals_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_34 ;
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
	 mercury__lexer__Offset_35  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_36 = (mercury__lexer__LineNum0_32 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_36));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_35));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_35));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_32));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_33));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_35));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                switch (mercury__lexer__Char_14) {
                  default:
                    mercury__lexer__succeeded = MR_FALSE;
                    break;
                  case (MR_Char) 69:
                    mercury__lexer__succeeded = MR_TRUE;
                    break;
                  case (MR_Char) 101:
                    mercury__lexer__succeeded = MR_TRUE;
                    break;
                }
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_get_float_exponent_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                  }
                else
                  {
                    MR_String mercury__lexer__FloatString_15;
                    MR_Integer mercury__lexer__Offset0_46;
                    MR_Integer mercury__lexer__Offset_49;
                    MR_Integer mercury__lexer__V_44_44;
                    MR_Integer mercury__lexer__V_45_45;
                    MR_Integer mercury__lexer__V_47_47;
                    MR_Integer mercury__lexer__V_48_48;
                    MR_Float mercury__lexer__Float_52;
                    MR_Integer mercury__lexer__V_60_60;
                    MR_Integer mercury__lexer__V_61_61;

                    {
                      mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                    }
                    mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                    mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                    mercury__lexer__Offset0_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                    mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                    mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                    mercury__lexer__Offset_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_decimals_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_46 ;
	End =  mercury__lexer__Offset_49 ;
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
	 mercury__lexer__FloatString_15  = SubString;
}
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_decimals_7_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__FloatString_15 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_52  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                    if (mercury__lexer__succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__lexer__Token_11 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_52);
                      }
                    else
                      {
                        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                      }
                    *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                    mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                    mercury__lexer__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                  }
              }
          }
        else
          {
            MR_String mercury__lexer__FloatString_26;
            MR_Integer mercury__lexer__Offset0_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Float mercury__lexer__Float_74;
            MR_Integer mercury__lexer__V_82_82;
            MR_Integer mercury__lexer__V_83_83;

{
#define MR_PROC_LABEL mercury__lexer__string_get_float_decimals_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_68 ;
	End =  mercury__lexer__Offset_71 ;
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
	 mercury__lexer__FloatString_26  = SubString;
}
{
#define MR_PROC_LABEL mercury__lexer__string_get_float_decimals_7_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__FloatString_26 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_74  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_74);
              }
            else
              {
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
              }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_float_decimals_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_36;
        MR_Box mercury__lexer__V_5_47 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_47, &mercury__lexer__V_10_36);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_36 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_39;

{
#define MR_PROC_LABEL mercury__lexer__get_float_decimals_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_36 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_39  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_39;
              }
            else
              {
                MR_String mercury__lexer__V_12_41;
                MR_Word mercury__lexer__V_19_42;
                MR_Box mercury__lexer__V_8_54;

{
#define MR_PROC_LABEL mercury__lexer__get_float_decimals_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_54 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_float_decimals_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_54 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_41  = Msg;
}
                mercury__lexer__V_19_42 = (MR_Word) mercury__lexer__V_12_41;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_42));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      switch (mercury__lexer__Char_11) {
                        default:
                          mercury__lexer__succeeded = MR_FALSE;
                          break;
                        case (MR_Char) 69:
                          mercury__lexer__succeeded = MR_TRUE;
                          break;
                        case (MR_Char) 101:
                          mercury__lexer__succeeded = MR_TRUE;
                          break;
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_25;

                          {
                            mercury__lexer__STATE_VARIABLE_RevChars_17_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_25, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                          }
                          {
                            mercury__lexer__get_float_exponent_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_17_25, mercury__lexer__Token_8);
                          }
                        }
                      else
                        {
                          MR_Box mercury__lexer__V_5_72 = (MR_Box) mercury__lexer__Stream_6;
                          MR_String mercury__lexer__String_75;

                          {
                            mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_72, mercury__lexer__Char_11);
                          }
                          {
                            mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_75);
                          }
                          if (mercury__lexer__succeeded)
                            {
                              MR_Float mercury__lexer__Float_81;

{
#define MR_PROC_LABEL mercury__lexer__get_float_decimals_5_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__String_75 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_81  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                              if (mercury__lexer__succeeded)
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__lexer__Token_8 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                  MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_81);
                                }
                              else
                                {
                                  *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                                }
                            }
                          else
                            {
                              *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_60;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_60);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Float mercury__lexer__Float_66;

{
#define MR_PROC_LABEL mercury__lexer__get_float_decimals_5_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__lexer__String_60 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Float_66  = FloatVal;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(mercury__lexer__Float_66);
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[34]);
                        }
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_int_dot_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_14;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_38;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_37 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_int_dot_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_37 ;
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
	 mercury__lexer__Offset_38  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_39 = (mercury__lexer__LineNum0_35 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_39));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_38));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_38));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_35));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_36));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_38));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        {
          mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_float_decimals_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
          }
        else
          {
            MR_String mercury__lexer__NumberString_15;
            MR_Word mercury__lexer__STATE_VARIABLE_Posn_20_20;
            MR_Integer mercury__lexer__Offset0_49;
            MR_Integer mercury__lexer__Offset_52;
            MR_Integer mercury__lexer__V_47_47;
            MR_Integer mercury__lexer__V_48_48;
            MR_Integer mercury__lexer__V_50_50;
            MR_Integer mercury__lexer__V_51_51;
            MR_Integer mercury__lexer__V_59_59;
            MR_Integer mercury__lexer__V_60_60;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, &mercury__lexer__STATE_VARIABLE_Posn_20_20);
            }
            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_20_20, mercury__lexer__STATE_VARIABLE_Posn_17);
            }
            mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__Offset0_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            mercury__lexer__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
            mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
            mercury__lexer__Offset_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_int_dot_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_49 ;
	End =  mercury__lexer__Offset_52 ;
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
	 mercury__lexer__NumberString_15  = SubString;
}
            {
              mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__NumberString_15, (MR_Integer) 2, mercury__lexer__Token_11);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
          }
      }
    else
      {
        MR_String mercury__lexer__NumberString_29;
        MR_Integer mercury__lexer__Offset0_67;
        MR_Integer mercury__lexer__Offset_70;
        MR_Integer mercury__lexer__V_65_65;
        MR_Integer mercury__lexer__V_66_66;
        MR_Integer mercury__lexer__V_68_68;
        MR_Integer mercury__lexer__V_69_69;
        MR_Integer mercury__lexer__V_77_77;
        MR_Integer mercury__lexer__V_78_78;

        {
          mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_0_16, mercury__lexer__STATE_VARIABLE_Posn_17);
        }
        mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__Offset0_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        mercury__lexer__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
        mercury__lexer__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
        mercury__lexer__Offset_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_int_dot_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_67 ;
	End =  mercury__lexer__Offset_70 ;
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
	 mercury__lexer__NumberString_29  = SubString;
}
        {
          mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__NumberString_29, (MR_Integer) 2, mercury__lexer__Token_11);
        }
        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
      }
  }
}

static void MR_CALL 
mercury__lexer__get_int_dot_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_8)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_10;
    MR_Char mercury__lexer__Char_11;
    MR_Integer mercury__lexer__V_10_40;
    MR_Box mercury__lexer__V_5_51 = (MR_Box) mercury__lexer__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_51, &mercury__lexer__V_10_40);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_40 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_43;

{
#define MR_PROC_LABEL mercury__lexer__get_int_dot_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_40 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_43  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_11 = mercury__lexer__V_11_43;
          }
        else
          {
            MR_String mercury__lexer__V_12_45;
            MR_Word mercury__lexer__V_19_46;
            MR_Box mercury__lexer__V_8_58;

{
#define MR_PROC_LABEL mercury__lexer__get_int_dot_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_58 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_int_dot_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_58 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_45  = Msg;
}
            mercury__lexer__V_19_46 = (MR_Word) mercury__lexer__V_12_45;
            {
              mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_46));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__V_20_20;
                  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_19_30;

                  {
                    mercury__lexer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Char) 46));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_20_20, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_15));
                  }
                  {
                    mercury__lexer__STATE_VARIABLE_RevChars_19_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_19_30, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_19_30, 1) = ((MR_Box) (mercury__lexer__V_20_20));
                  }
                  {
                    mercury__lexer__get_float_decimals_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_19_30, mercury__lexer__Token_8);
                  }
                }
              else
                {
                  MR_Word mercury__lexer__Token0_13;
                  MR_Box mercury__lexer__V_5_77 = (MR_Box) mercury__lexer__Stream_6;
                  MR_String mercury__lexer__String_81;
                  MR_Integer mercury__lexer__Int_14;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_77, mercury__lexer__Char_11);
                  }
                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__String_81);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_81, (MR_Integer) 2, &mercury__lexer__Token0_13);
                    }
                  else
                    {
                      mercury__lexer__Token0_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                  mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__Token0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_13, (MR_Integer) 1)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__lexer__Token_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Int_14));
                      }
                    }
                  else
                    *mercury__lexer__Token_8 = mercury__lexer__Token0_13;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__lexer__V_5_65 = (MR_Box) mercury__lexer__Stream_6;
              MR_String mercury__lexer__String_69;

              {
                mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_65, (MR_Char) 46);
              }
              {
                mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__String_69);
              }
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_69, (MR_Integer) 2, mercury__lexer__Token_8);
                }
              else
                {
                  *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_number_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_38;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_37 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_number_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_37 ;
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
	 mercury__lexer__Offset_38  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_39 = (mercury__lexer__LineNum0_35 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_39));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_38));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_38));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_35));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_36));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_38));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 46);
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_get_int_dot_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                  }
                else
                  {
                    switch (mercury__lexer__Char_14) {
                      default:
                        mercury__lexer__succeeded = MR_FALSE;
                        break;
                      case (MR_Char) 69:
                        mercury__lexer__succeeded = MR_TRUE;
                        break;
                      case (MR_Char) 101:
                        mercury__lexer__succeeded = MR_TRUE;
                        break;
                    }
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__string_get_float_exponent_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                      }
                    else
                      {
                        MR_String mercury__lexer__NumberString_15;
                        MR_Integer mercury__lexer__Offset0_49;
                        MR_Integer mercury__lexer__Offset_52;
                        MR_Integer mercury__lexer__V_47_47;
                        MR_Integer mercury__lexer__V_48_48;
                        MR_Integer mercury__lexer__V_50_50;
                        MR_Integer mercury__lexer__V_51_51;
                        MR_Integer mercury__lexer__V_59_59;
                        MR_Integer mercury__lexer__V_60_60;

                        {
                          mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                        }
                        mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                        mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                        mercury__lexer__Offset0_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                        mercury__lexer__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                        mercury__lexer__Offset_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_number_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_49 ;
	End =  mercury__lexer__Offset_52 ;
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
	 mercury__lexer__NumberString_15  = SubString;
}
                        {
                          mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__NumberString_15, (MR_Integer) 2, mercury__lexer__Token_11);
                        }
                        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                        mercury__lexer__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                        mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                      }
                  }
              }
          }
        else
          {
            MR_String mercury__lexer__NumberString_29;
            MR_Integer mercury__lexer__Offset0_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_77_77;
            MR_Integer mercury__lexer__V_78_78;

{
#define MR_PROC_LABEL mercury__lexer__string_get_number_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_67 ;
	End =  mercury__lexer__Offset_70 ;
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
	 mercury__lexer__NumberString_29  = SubString;
}
            {
              mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__NumberString_29, (MR_Integer) 2, mercury__lexer__Token_11);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_number_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_42;
        MR_Box mercury__lexer__V_5_53 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_53, &mercury__lexer__V_10_42);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_42 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_45;

{
#define MR_PROC_LABEL mercury__lexer__get_number_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_42 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_45  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_45;
              }
            else
              {
                MR_String mercury__lexer__V_12_47;
                MR_Word mercury__lexer__V_19_48;
                MR_Box mercury__lexer__V_8_60;

{
#define MR_PROC_LABEL mercury__lexer__get_number_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_60 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_number_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_60 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_47  = Msg;
}
                mercury__lexer__V_19_48 = (MR_Word) mercury__lexer__V_12_47;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_48));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_27;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_27, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_27, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_27;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 46);
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__get_int_dot_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_0_13, mercury__lexer__Token_8);
                        }
                      else
                        {
                          switch (mercury__lexer__Char_11) {
                            default:
                              mercury__lexer__succeeded = MR_FALSE;
                              break;
                            case (MR_Char) 69:
                              mercury__lexer__succeeded = MR_TRUE;
                              break;
                            case (MR_Char) 101:
                              mercury__lexer__succeeded = MR_TRUE;
                              break;
                          }
                          if (mercury__lexer__succeeded)
                            {
                              MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_30;

                              {
                                mercury__lexer__STATE_VARIABLE_RevChars_17_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_30, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                                MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_30, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                              }
                              {
                                mercury__lexer__get_float_exponent_5_p_0(mercury__lexer__Stream_6, mercury__lexer__STATE_VARIABLE_RevChars_17_30, mercury__lexer__Token_8);
                              }
                            }
                          else
                            {
                              MR_Box mercury__lexer__V_5_75 = (MR_Box) mercury__lexer__Stream_6;
                              MR_String mercury__lexer__String_79;

                              {
                                mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_75, mercury__lexer__Char_11);
                              }
                              {
                                mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_79);
                              }
                              if (mercury__lexer__succeeded)
                                {
                                  mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_79, (MR_Integer) 2, mercury__lexer__Token_8);
                                }
                              else
                                {
                                  *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_67;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_67);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_67, (MR_Integer) 2, mercury__lexer__Token_8);
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_hex_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_36;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_35 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_hex_2_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_35 ;
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
	 mercury__lexer__Offset_36  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_37 = (mercury__lexer__LineNum0_33 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_37));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_36));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_33));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_34));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__BinaryString_15;
                MR_Integer mercury__lexer__Offset0_46;
                MR_Integer mercury__lexer__Offset_49;
                MR_Integer mercury__lexer__V_44_44;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_47_47;
                MR_Integer mercury__lexer__V_48_48;
                MR_Integer mercury__lexer__V_56_56;
                MR_Integer mercury__lexer__V_57_57;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
                mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_hex_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_46 ;
	End =  mercury__lexer__Offset_49 ;
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
	 mercury__lexer__BinaryString_15  = SubString;
}
                {
                  mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_15, (MR_Integer) 3, mercury__lexer__Token_11);
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__BinaryString_27;
            MR_Integer mercury__lexer__Offset0_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_74_74;
            MR_Integer mercury__lexer__V_75_75;

{
#define MR_PROC_LABEL mercury__lexer__string_get_hex_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_64 ;
	End =  mercury__lexer__Offset_67 ;
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
	 mercury__lexer__BinaryString_27  = SubString;
}
            {
              mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_27, (MR_Integer) 3, mercury__lexer__Token_11);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_hex_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_34;
        MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_37;
              }
            else
              {
                MR_String mercury__lexer__V_12_39;
                MR_Word mercury__lexer__V_19_40;
                MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_2_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_hex_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
                mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_40));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__String_70;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_70);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_70, (MR_Integer) 3, mercury__lexer__Token_8);
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_59;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_59);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_59, (MR_Integer) 3, mercury__lexer__Token_8);
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_hex_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_15;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_33;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_32 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_hex_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_32 ;
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
	 mercury__lexer__Offset_33  = NextIndex;
	 mercury__lexer__Char_15  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_34 = (mercury__lexer__LineNum0_30 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_33));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_30));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        {
          mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_15);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_hex_2_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__STATE_VARIABLE_Posn_0_16, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
          }
        else
          {
            MR_Integer mercury__lexer__V_43_43;
            MR_Integer mercury__lexer__V_44_44;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
            }
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[33]);
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_51_51;
        MR_Integer mercury__lexer__V_52_52;

        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[33]);
        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
      }
  }
}

static void MR_CALL 
mercury__lexer__get_hex_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_25;
    MR_Box mercury__lexer__V_5_36 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_36, &mercury__lexer__V_10_25);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_25 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_28;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_25 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_28  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_28;
          }
        else
          {
            MR_String mercury__lexer__V_12_30;
            MR_Word mercury__lexer__V_19_31;
            MR_Box mercury__lexer__V_8_43;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_43 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_hex_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_43 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_30  = Msg;
}
            mercury__lexer__V_19_31 = (MR_Word) mercury__lexer__V_12_30;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_31));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_9);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__V_14_14;
                  MR_Word mercury__lexer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__lexer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 1) = ((MR_Box) (mercury__lexer__V_16_16));
                  }
                  {
                    mercury__lexer__get_hex_2_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_14_14, mercury__lexer__Token_6);
                  }
                }
              else
                {
                  MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_5;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_50, mercury__lexer__Char_9);
                  }
                  *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[33]);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[33]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_octal_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_36;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_35 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_octal_2_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_35 ;
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
	 mercury__lexer__Offset_36  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_37 = (mercury__lexer__LineNum0_33 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_37));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_36));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_33));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_34));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__BinaryString_15;
                MR_Integer mercury__lexer__Offset0_46;
                MR_Integer mercury__lexer__Offset_49;
                MR_Integer mercury__lexer__V_44_44;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_47_47;
                MR_Integer mercury__lexer__V_48_48;
                MR_Integer mercury__lexer__V_56_56;
                MR_Integer mercury__lexer__V_57_57;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
                mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_octal_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_46 ;
	End =  mercury__lexer__Offset_49 ;
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
	 mercury__lexer__BinaryString_15  = SubString;
}
                {
                  mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_15, (MR_Integer) 1, mercury__lexer__Token_11);
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__BinaryString_27;
            MR_Integer mercury__lexer__Offset0_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_74_74;
            MR_Integer mercury__lexer__V_75_75;

{
#define MR_PROC_LABEL mercury__lexer__string_get_octal_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_64 ;
	End =  mercury__lexer__Offset_67 ;
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
	 mercury__lexer__BinaryString_27  = SubString;
}
            {
              mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_27, (MR_Integer) 1, mercury__lexer__Token_11);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_octal_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_34;
        MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_37;
              }
            else
              {
                MR_String mercury__lexer__V_12_39;
                MR_Word mercury__lexer__V_19_40;
                MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_2_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_octal_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
                mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_40));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__String_70;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_70);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_70, (MR_Integer) 1, mercury__lexer__Token_8);
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_59;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_59);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_59, (MR_Integer) 1, mercury__lexer__Token_8);
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_octal_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_15;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_33;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_32 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_octal_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_32 ;
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
	 mercury__lexer__Offset_33  = NextIndex;
	 mercury__lexer__Char_15  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_34 = (mercury__lexer__LineNum0_30 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_33));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_30));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        {
          mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_15);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_octal_2_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__STATE_VARIABLE_Posn_0_16, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
          }
        else
          {
            MR_Integer mercury__lexer__V_43_43;
            MR_Integer mercury__lexer__V_44_44;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
            }
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[32]);
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_51_51;
        MR_Integer mercury__lexer__V_52_52;

        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[32]);
        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
      }
  }
}

static void MR_CALL 
mercury__lexer__get_octal_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_25;
    MR_Box mercury__lexer__V_5_36 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_36, &mercury__lexer__V_10_25);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_25 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_28;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_25 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_28  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_28;
          }
        else
          {
            MR_String mercury__lexer__V_12_30;
            MR_Word mercury__lexer__V_19_31;
            MR_Box mercury__lexer__V_8_43;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_43 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_octal_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_43 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_30  = Msg;
}
            mercury__lexer__V_19_31 = (MR_Word) mercury__lexer__V_12_30;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_31));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_9);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__V_14_14;
                  MR_Word mercury__lexer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__lexer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 1) = ((MR_Box) (mercury__lexer__V_16_16));
                  }
                  {
                    mercury__lexer__get_octal_2_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_14_14, mercury__lexer__Token_6);
                  }
                }
              else
                {
                  MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_5;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_50, mercury__lexer__Char_9);
                  }
                  *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[32]);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[32]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_binary_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_36;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_35 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_binary_2_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_35 ;
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
	 mercury__lexer__Offset_36  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_37 = (mercury__lexer__LineNum0_33 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_37));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_36));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_33));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_34));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            switch (mercury__lexer__Char_14) {
              default:
                mercury__lexer__succeeded = MR_FALSE;
                break;
              case (MR_Char) 48:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 49:
                mercury__lexer__succeeded = MR_TRUE;
                break;
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__BinaryString_15;
                MR_Integer mercury__lexer__Offset0_46;
                MR_Integer mercury__lexer__Offset_49;
                MR_Integer mercury__lexer__V_44_44;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_47_47;
                MR_Integer mercury__lexer__V_48_48;
                MR_Integer mercury__lexer__V_56_56;
                MR_Integer mercury__lexer__V_57_57;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
                mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_binary_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_46 ;
	End =  mercury__lexer__Offset_49 ;
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
	 mercury__lexer__BinaryString_15  = SubString;
}
                {
                  mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_15, (MR_Integer) 0, mercury__lexer__Token_11);
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                mercury__lexer__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                mercury__lexer__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__BinaryString_27;
            MR_Integer mercury__lexer__Offset0_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_74_74;
            MR_Integer mercury__lexer__V_75_75;

{
#define MR_PROC_LABEL mercury__lexer__string_get_binary_2_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_64 ;
	End =  mercury__lexer__Offset_67 ;
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
	 mercury__lexer__BinaryString_27  = SubString;
}
            {
              mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__BinaryString_27, (MR_Integer) 0, mercury__lexer__Token_11);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
            mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
            mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_binary_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_13,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_34;
        MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_binary_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_37;
              }
            else
              {
                MR_String mercury__lexer__V_12_39;
                MR_Word mercury__lexer__V_19_40;
                MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_binary_2_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_binary_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
                mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_40));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  switch (mercury__lexer__Char_11) {
                    default:
                      mercury__lexer__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 48:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 49:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_17_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_17_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_13));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_RevChars_17_24;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_13 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__String_70;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_70);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_70, (MR_Integer) 0, mercury__lexer__Token_8);
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__String_59;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_13, &mercury__lexer__String_59);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__conv_string_to_int_3_p_0(mercury__lexer__String_59, (MR_Integer) 0, mercury__lexer__Token_8);
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[31]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_binary_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_15;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_33;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_32 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_binary_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_32 ;
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
	 mercury__lexer__Offset_33  = NextIndex;
	 mercury__lexer__Char_15  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_34 = (mercury__lexer__LineNum0_30 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_33));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_30));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_33));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        switch (mercury__lexer__Char_15) {
          default:
            mercury__lexer__succeeded = MR_FALSE;
            break;
          case (MR_Char) 48:
            mercury__lexer__succeeded = MR_TRUE;
            break;
          case (MR_Char) 49:
            mercury__lexer__succeeded = MR_TRUE;
            break;
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_binary_2_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__STATE_VARIABLE_Posn_0_16, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
          }
        else
          {
            MR_Integer mercury__lexer__V_43_43;
            MR_Integer mercury__lexer__V_44_44;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
            }
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[30]);
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_51_51;
        MR_Integer mercury__lexer__V_52_52;

        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[30]);
        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
      }
  }
}

static void MR_CALL 
mercury__lexer__get_binary_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_25;
    MR_Box mercury__lexer__V_5_36 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_36, &mercury__lexer__V_10_25);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_25 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_28;

{
#define MR_PROC_LABEL mercury__lexer__get_binary_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_25 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_28  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_28;
          }
        else
          {
            MR_String mercury__lexer__V_12_30;
            MR_Word mercury__lexer__V_19_31;
            MR_Box mercury__lexer__V_8_43;

{
#define MR_PROC_LABEL mercury__lexer__get_binary_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_43 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_binary_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_43 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_30  = Msg;
}
            mercury__lexer__V_19_31 = (MR_Word) mercury__lexer__V_12_30;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_31));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (mercury__lexer__Char_9) {
                default:
                  mercury__lexer__succeeded = MR_FALSE;
                  break;
                case (MR_Char) 48:
                  mercury__lexer__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 49:
                  mercury__lexer__succeeded = MR_TRUE;
                  break;
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__V_14_14;
                  MR_Word mercury__lexer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__lexer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 1) = ((MR_Box) (mercury__lexer__V_16_16));
                  }
                  {
                    mercury__lexer__get_binary_2_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_14_14, mercury__lexer__Token_6);
                  }
                }
              else
                {
                  MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_5;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_50, mercury__lexer__Char_9);
                  }
                  *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[30]);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[30]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__get_char_code_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_21;
    MR_Box mercury__lexer__V_5_32 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_32, &mercury__lexer__V_10_21);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_21 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_24;

{
#define MR_PROC_LABEL mercury__lexer__get_char_code_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_21 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_24  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_24;
          }
        else
          {
            MR_String mercury__lexer__V_12_26;
            MR_Word mercury__lexer__V_19_27;
            MR_Box mercury__lexer__V_8_39;

{
#define MR_PROC_LABEL mercury__lexer__get_char_code_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_39 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_char_code_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_39 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_26  = Msg;
}
            mercury__lexer__V_19_27 = (MR_Word) mercury__lexer__V_12_26;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_27));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__lexer__CharCode_11;

{
#define MR_PROC_LABEL mercury__lexer__get_char_code_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__lexer__Char_9 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__CharCode_11  = Int;
}
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__CharCode_11));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[29]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_zero_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_14;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_17_17;
    MR_Integer mercury__lexer__LineNum0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_38;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_37 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_zero_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_37 ;
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
	 mercury__lexer__Offset_38  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_39 = (mercury__lexer__LineNum0_35 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum_39));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__Offset_38));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_38));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum0_35));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__LineOffset0_36));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_38));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        {
          mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_number_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
          }
        else
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 39);
            if (mercury__lexer__succeeded)
              {
                MR_Char mercury__lexer__Char_51;
                MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_53;
                MR_Integer mercury__lexer__LineNum0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, (MR_Integer) 0)));
                MR_Integer mercury__lexer__LineOffset0_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, (MR_Integer) 1)));
                MR_Integer mercury__lexer__Offset0_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, (MR_Integer) 2)));
                MR_Integer mercury__lexer__Offset_65;

                mercury__lexer__succeeded = (mercury__lexer__Offset0_64 < mercury__lexer__Len_9);
                if (mercury__lexer__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__lexer__string_get_zero_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_64 ;
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
	 mercury__lexer__Offset_65  = NextIndex;
	 mercury__lexer__Char_51  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__succeeded = (mercury__lexer__Char_51 == (MR_Char) 10);
                        if (mercury__lexer__succeeded)
                          {
                            MR_Integer mercury__lexer__LineNum_66 = (mercury__lexer__LineNum0_62 + (MR_Integer) 1);

                            {
                              mercury__lexer__STATE_VARIABLE_Posn_18_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 0) = ((MR_Box) (mercury__lexer__LineNum_66));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 1) = ((MR_Box) (mercury__lexer__Offset_65));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 2) = ((MR_Box) (mercury__lexer__Offset_65));
                            }
                          }
                        else
                          {
                            mercury__lexer__STATE_VARIABLE_Posn_18_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 0) = ((MR_Box) (mercury__lexer__LineNum0_62));
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 1) = ((MR_Box) (mercury__lexer__LineOffset0_63));
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_53, 2) = ((MR_Box) (mercury__lexer__Offset_65));
                          }
                        mercury__lexer__succeeded = MR_TRUE;
                      }
                  }
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__CharCode_52;
                    MR_Integer mercury__lexer__V_75_75;
                    MR_Integer mercury__lexer__V_76_76;

{
#define MR_PROC_LABEL mercury__lexer__string_get_zero_7_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__lexer__Char_51 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__CharCode_52  = Int;
}
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_11 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__CharCode_52));
                    }
                    *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                    mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                    mercury__lexer__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                    *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_18_53;
                  }
                else
                  {
                    MR_Integer mercury__lexer__V_83_83;
                    MR_Integer mercury__lexer__V_84_84;

                    *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[29]);
                    *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                    mercury__lexer__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                    mercury__lexer__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                    *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_17_17;
                  }
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 98);
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_get_binary_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                  }
                else
                  {
                    mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 111);
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__string_get_octal_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                      }
                    else
                      {
                        mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 120);
                        if (mercury__lexer__succeeded)
                          {
                            mercury__lexer__string_get_hex_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                          }
                        else
                          {
                            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 46);
                            if (mercury__lexer__succeeded)
                              {
                                mercury__lexer__string_get_int_dot_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                              }
                            else
                              {
                                switch (mercury__lexer__Char_14) {
                                  default:
                                    mercury__lexer__succeeded = MR_FALSE;
                                    break;
                                  case (MR_Char) 69:
                                    mercury__lexer__succeeded = MR_TRUE;
                                    break;
                                  case (MR_Char) 101:
                                    mercury__lexer__succeeded = MR_TRUE;
                                    break;
                                }
                                if (mercury__lexer__succeeded)
                                  {
                                    mercury__lexer__string_get_float_exponent_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                                  }
                                else
                                  {
                                    MR_Integer mercury__lexer__V_91_91;
                                    MR_Integer mercury__lexer__V_92_92;

                                    {
                                      mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                                    }
                                    *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                                    mercury__lexer__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                                    mercury__lexer__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                                    *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[27]);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    else
      {
        {
          mercury__lexer__string_get_context_4_p_0(mercury__lexer__Posn0_10, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_0_15, mercury__lexer__STATE_VARIABLE_Posn_16);
        }
        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[27]);
      }
  }
}

static void MR_CALL 
mercury__lexer__get_zero_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_38;
    MR_Box mercury__lexer__V_5_49 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_49, &mercury__lexer__V_10_38);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_38 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_41;

{
#define MR_PROC_LABEL mercury__lexer__get_zero_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_38 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_41  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_41;
          }
        else
          {
            MR_String mercury__lexer__V_12_43;
            MR_Word mercury__lexer__V_19_44;
            MR_Box mercury__lexer__V_8_56;

{
#define MR_PROC_LABEL mercury__lexer__get_zero_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_56 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_zero_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_56 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_43  = Msg;
}
            mercury__lexer__V_19_44 = (MR_Word) mercury__lexer__V_12_43;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_44));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_9);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__V_14_14;
                  MR_Word mercury__lexer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  {
                    mercury__lexer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_14_14, 1) = ((MR_Box) (mercury__lexer__V_16_16));
                  }
                  {
                    mercury__lexer__get_number_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_14_14, mercury__lexer__Token_6);
                  }
                }
              else
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 39);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__get_char_code_4_p_0(mercury__lexer__Stream_5, mercury__lexer__Token_6);
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 98);
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__get_binary_4_p_0(mercury__lexer__Stream_5, mercury__lexer__Token_6);
                        }
                      else
                        {
                          mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 111);
                          if (mercury__lexer__succeeded)
                            {
                              mercury__lexer__get_octal_4_p_0(mercury__lexer__Stream_5, mercury__lexer__Token_6);
                            }
                          else
                            {
                              mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 120);
                              if (mercury__lexer__succeeded)
                                {
                                  mercury__lexer__get_hex_4_p_0(mercury__lexer__Stream_5, mercury__lexer__Token_6);
                                }
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 46);
                                  if (mercury__lexer__succeeded)
                                    {
                                      MR_Word mercury__lexer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[28]);
                                      MR_Word mercury__lexer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                      {
                                        mercury__lexer__get_int_dot_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_21_21, mercury__lexer__Token_6);
                                      }
                                    }
                                  else
                                    {
                                      switch (mercury__lexer__Char_9) {
                                        default:
                                          mercury__lexer__succeeded = MR_FALSE;
                                          break;
                                        case (MR_Char) 69:
                                          mercury__lexer__succeeded = MR_TRUE;
                                          break;
                                        case (MR_Char) 101:
                                          mercury__lexer__succeeded = MR_TRUE;
                                          break;
                                      }
                                      if (mercury__lexer__succeeded)
                                        {
                                          MR_Word mercury__lexer__V_25_25;
                                          MR_Word mercury__lexer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[28]);
                                          MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                          {
                                            mercury__lexer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), mercury__lexer__V_25_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                                            MR_hl_field(MR_mktag(1), mercury__lexer__V_25_25, 1) = ((MR_Box) (mercury__lexer__V_27_27));
                                          }
                                          {
                                            mercury__lexer__get_float_exponent_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_25_25, mercury__lexer__Token_6);
                                          }
                                        }
                                      else
                                        {
                                          MR_Box mercury__lexer__V_5_64 = (MR_Box) mercury__lexer__Stream_5;

                                          {
                                            mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_64, mercury__lexer__Char_9);
                                          }
                                          *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[27]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[27]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_variable_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_34;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_variable_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__VariableName_15;
                MR_Integer mercury__lexer__Offset0_44;
                MR_Integer mercury__lexer__Offset_47;
                MR_Integer mercury__lexer__V_42_42;
                MR_Integer mercury__lexer__V_43_43;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_46_46;
                MR_Integer mercury__lexer__V_54_54;
                MR_Integer mercury__lexer__V_55_55;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_variable_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_44 ;
	End =  mercury__lexer__Offset_47 ;
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
	 mercury__lexer__VariableName_15  = SubString;
}
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__lexer__Token_11 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__lexer__VariableName_15));
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__VariableName_25;
            MR_Integer mercury__lexer__Offset0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_72_72;
            MR_Integer mercury__lexer__V_73_73;

{
#define MR_PROC_LABEL mercury__lexer__string_get_variable_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_62 ;
	End =  mercury__lexer__Offset_65 ;
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
	 mercury__lexer__VariableName_25  = SubString;
}
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__lexer__Token_11 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__lexer__VariableName_25));
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_variable_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_39;
        MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_50, &mercury__lexer__V_10_39);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_39 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_42;

{
#define MR_PROC_LABEL mercury__lexer__get_variable_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_39 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_42  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_42;
              }
            else
              {
                MR_String mercury__lexer__V_12_44;
                MR_Word mercury__lexer__V_19_45;
                MR_Box mercury__lexer__V_8_57;

{
#define MR_PROC_LABEL mercury__lexer__get_variable_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_57 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_variable_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_57 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_44  = Msg;
}
                mercury__lexer__V_19_45 = (MR_Word) mercury__lexer__V_12_44;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_45));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_18_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_14));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14 = mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_14 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__VariableName_26;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__VariableName_26);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_8 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__lexer__VariableName_26));
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[26]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__VariableName_13;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__VariableName_13);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_8 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__lexer__VariableName_13));
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[26]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_graphic_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_34;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_graphic_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            switch (mercury__lexer__Char_14) {
              default:
                mercury__lexer__succeeded = MR_FALSE;
                break;
              case (MR_Char) 33:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 35:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 36:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 38:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 42:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 43:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 45:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 46:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 47:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 58:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 60:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 61:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 62:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 63:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 64:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 92:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 94:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 126:
                mercury__lexer__succeeded = MR_TRUE;
                break;
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__Name_15;
                MR_Integer mercury__lexer__Offset0_44;
                MR_Integer mercury__lexer__Offset_47;
                MR_Integer mercury__lexer__V_42_42;
                MR_Integer mercury__lexer__V_43_43;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_46_46;
                MR_Integer mercury__lexer__V_54_54;
                MR_Integer mercury__lexer__V_55_55;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_graphic_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_44 ;
	End =  mercury__lexer__Offset_47 ;
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
	 mercury__lexer__Name_15  = SubString;
}
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__lexer__Token_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_15));
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__Name_25;
            MR_Integer mercury__lexer__Offset0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_72_72;
            MR_Integer mercury__lexer__V_73_73;

{
#define MR_PROC_LABEL mercury__lexer__string_get_graphic_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_62 ;
	End =  mercury__lexer__Offset_65 ;
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
	 mercury__lexer__Name_25  = SubString;
}
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__lexer__Token_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_25));
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_graphic_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_39;
        MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_50, &mercury__lexer__V_10_39);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_39 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_42;

{
#define MR_PROC_LABEL mercury__lexer__get_graphic_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_39 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_42  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_42;
              }
            else
              {
                MR_String mercury__lexer__V_12_44;
                MR_Word mercury__lexer__V_19_45;
                MR_Box mercury__lexer__V_8_57;

{
#define MR_PROC_LABEL mercury__lexer__get_graphic_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_57 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_graphic_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_57 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_44  = Msg;
}
                mercury__lexer__V_19_45 = (MR_Word) mercury__lexer__V_12_44;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_45));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  switch (mercury__lexer__Char_11) {
                    default:
                      mercury__lexer__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 33:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 35:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 36:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 38:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 42:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 43:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 45:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 46:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 47:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 58:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 60:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 61:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 62:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 63:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 64:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 92:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 94:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 126:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_18_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_14));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14 = mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_14 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__Name_26;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__Name_26);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_26));
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[25]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__Name_13;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__Name_13);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_13));
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[25]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_source_line_number_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn1_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_19,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_21_21;
        MR_Integer mercury__lexer__LineNum0_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_19, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_19, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_19, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_55;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_54 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_source_line_number_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_54 ;
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
	 mercury__lexer__Offset_55  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_56 = (mercury__lexer__LineNum0_52 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 0) = ((MR_Box) (mercury__lexer__LineNum_56));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 1) = ((MR_Box) (mercury__lexer__Offset_55));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 2) = ((MR_Box) (mercury__lexer__Offset_55));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 0) = ((MR_Box) (mercury__lexer__LineNum0_52));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 1) = ((MR_Box) (mercury__lexer__LineOffset0_53));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, 2) = ((MR_Box) (mercury__lexer__Offset_55));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_19 = mercury__lexer__STATE_VARIABLE_Posn_21_21;

                  mercury__lexer__STATE_VARIABLE_Posn_0_19 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_19;
                }
                continue;
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_String mercury__lexer__LineNumString_15;
                    MR_Integer mercury__lexer__Offset0_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));
                    MR_Integer mercury__lexer__Offset_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 2)));
                    MR_Integer mercury__lexer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                    MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                    MR_Integer mercury__lexer__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 0)));
                    MR_Integer mercury__lexer__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 1)));
                    MR_Integer mercury__lexer__LineNum_16;
                    MR_Integer mercury__lexer__V_25_25;

{
#define MR_PROC_LABEL mercury__lexer__string_get_source_line_number_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_66 ;
	End =  mercury__lexer__Offset_69 ;
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
	 mercury__lexer__LineNumString_15  = SubString;
}
                    {
                      mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__lexer__LineNumString_15, &mercury__lexer__LineNum_16);
                    }
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__V_25_25 = (MR_Integer) 0;
                        mercury__lexer__succeeded = (mercury__lexer__LineNum_16 > mercury__lexer__V_25_25);
                      }
                    if (mercury__lexer__succeeded)
                      {
                        MR_Integer mercury__lexer__Offset_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 2)));
                        MR_Integer mercury__lexer__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 0)));
                        MR_Integer mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_21_21, (MR_Integer) 1)));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          *mercury__lexer__STATE_VARIABLE_Posn_20 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__lexer__LineNum_16));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__lexer__Offset_75));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__lexer__Offset_75));
                        }
                        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                        *mercury__lexer__HaveToken_12 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                      }
                    else
                      {
                        MR_String mercury__lexer__Message_17;
                        MR_Word mercury__lexer__V_28_28;
                        MR_Word mercury__lexer__V_30_30;
                        MR_Word mercury__lexer__V_31_31;
                        MR_Word mercury__lexer__V_33_33;
                        MR_Integer mercury__lexer__Context_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 0)));
                        MR_Integer mercury__lexer__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 1)));
                        MR_Integer mercury__lexer__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn1_10, (MR_Integer) 2)));

                        *mercury__lexer__STATE_VARIABLE_Posn_20 = mercury__lexer__STATE_VARIABLE_Posn_21_21;
                        *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_83;
                        mercury__lexer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        mercury__lexer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[23]);
                        {
                          mercury__lexer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 0) = ((MR_Box) (mercury__lexer__LineNumString_15));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 1) = ((MR_Box) (mercury__lexer__V_31_31));
                        }
                        {
                          mercury__lexer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 0) = ((MR_Box) ((MR_String) "invalid line number \140"));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 1) = ((MR_Box) (mercury__lexer__V_30_30));
                        }
                        {
                          mercury__lexer__Message_17 = mercury__string__append_list_1_f_0(mercury__lexer__V_28_28);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_11 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Message_17));
                        }
                      }
                  }
                else
                  {
                    MR_String mercury__lexer__DirectiveString_18;
                    MR_Word mercury__lexer__V_38_38;
                    MR_Word mercury__lexer__V_40_40;
                    MR_Word mercury__lexer__V_41_41;
                    MR_Word mercury__lexer__V_43_43;
                    MR_String mercury__lexer__Message_46;

                    {
                      mercury__lexer__string_have_token_4_p_0(mercury__lexer__Posn1_10, mercury__lexer__HaveToken_12, mercury__lexer__STATE_VARIABLE_Posn_21_21, mercury__lexer__STATE_VARIABLE_Posn_20);
                    }
{
#define MR_PROC_LABEL mercury__lexer__string_get_source_line_number_7_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__lexer__Char_14 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                    if (mercury__lexer__succeeded)
                      mercury__lexer__DirectiveString_18 = (MR_String) "NUL";
                    else
                      {
                        MR_Word mercury__lexer__V_36_36;
                        MR_Word mercury__lexer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        {
                          mercury__lexer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_14));
                          MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 1) = ((MR_Box) (mercury__lexer__V_37_37));
                        }
                        {
                          mercury__string__from_char_list_2_p_0(mercury__lexer__V_36_36, &mercury__lexer__DirectiveString_18);
                        }
                      }
                    mercury__lexer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__lexer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[23]);
                    {
                      mercury__lexer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__V_40_40, 0) = ((MR_Box) (mercury__lexer__DirectiveString_18));
                      MR_hl_field(MR_mktag(1), mercury__lexer__V_40_40, 1) = ((MR_Box) (mercury__lexer__V_41_41));
                    }
                    {
                      mercury__lexer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 0) = ((MR_Box) ((MR_String) "invalid character \140"));
                      MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 1) = ((MR_Box) (mercury__lexer__V_40_40));
                    }
                    {
                      mercury__lexer__Message_46 = mercury__string__append_list_1_f_0(mercury__lexer__V_38_38);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_11 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Message_46));
                    }
                  }
              }
          }
        else
          {
            {
              mercury__lexer__string_have_token_4_p_0(mercury__lexer__Posn1_10, mercury__lexer__HaveToken_12, mercury__lexer__STATE_VARIABLE_Posn_0_19, mercury__lexer__STATE_VARIABLE_Posn_20);
            }
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[22]);
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_source_line_number_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_18,
  MR_Word * mercury__lexer__Token_9,
  MR_Word * mercury__lexer__HaveToken_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_12;
        MR_Char mercury__lexer__Char_13;
        MR_Integer mercury__lexer__V_10_63;
        MR_Box mercury__lexer__V_5_74 = (MR_Box) mercury__lexer__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_74, &mercury__lexer__V_10_63);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_63 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_66;

{
#define MR_PROC_LABEL mercury__lexer__get_source_line_number_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_63 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_66  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_13 = mercury__lexer__V_11_66;
              }
            else
              {
                MR_String mercury__lexer__V_12_68;
                MR_Word mercury__lexer__V_19_69;
                MR_Box mercury__lexer__V_8_81;

{
#define MR_PROC_LABEL mercury__lexer__get_source_line_number_6_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_81 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_source_line_number_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_81 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_68  = Msg;
}
                mercury__lexer__V_19_69 = (MR_Word) mercury__lexer__V_12_68;
                {
                  mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, 0) = ((MR_Box) (mercury__lexer__V_19_69));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__lexer__Char_13);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_22_51;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_22_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_22_51, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_22_51, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_18));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_18 = mercury__lexer__STATE_VARIABLE_RevChars_22_51;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_18 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_18;
                      }
                      continue;
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 10);
                      if (mercury__lexer__succeeded)
                        {
                          MR_String mercury__lexer__String_15;

                          {
                            mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_18, &mercury__lexer__String_15);
                          }
                          if (mercury__lexer__succeeded)
                            {
                              MR_Integer mercury__lexer__Int_16;
                              MR_Integer mercury__lexer__V_25_25;

                              {
                                mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__lexer__String_15, &mercury__lexer__Int_16);
                              }
                              if (mercury__lexer__succeeded)
                                {
                                  mercury__lexer__V_25_25 = (MR_Integer) 0;
                                  mercury__lexer__succeeded = (mercury__lexer__Int_16 > mercury__lexer__V_25_25);
                                }
                              if (mercury__lexer__succeeded)
                                {
                                  MR_Box mercury__lexer__V_5_91 = (MR_Box) mercury__lexer__Stream_7;

{
#define MR_PROC_LABEL mercury__lexer__get_source_line_number_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_91 ;
	LineNum =  mercury__lexer__Int_16 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
                                  *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                                  *mercury__lexer__HaveToken_10 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                                }
                              else
                                {
                                  MR_String mercury__lexer__Message_17;
                                  MR_Word mercury__lexer__V_28_28;
                                  MR_Word mercury__lexer__V_30_30;
                                  MR_Word mercury__lexer__V_31_31;
                                  MR_Word mercury__lexer__V_33_33;

                                  {
                                    mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_7, mercury__lexer__HaveToken_10);
                                  }
                                  mercury__lexer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                  mercury__lexer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[23]);
                                  {
                                    mercury__lexer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 0) = ((MR_Box) (mercury__lexer__String_15));
                                    MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 1) = ((MR_Box) (mercury__lexer__V_31_31));
                                  }
                                  {
                                    mercury__lexer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 0) = ((MR_Box) ((MR_String) "invalid line number \140"));
                                    MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 1) = ((MR_Box) (mercury__lexer__V_30_30));
                                  }
                                  {
                                    mercury__lexer__Message_17 = mercury__string__append_list_1_f_0(mercury__lexer__V_28_28);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *mercury__lexer__Token_9 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Message_17));
                                  }
                                }
                            }
                          else
                            {
                              {
                                mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_7, mercury__lexer__HaveToken_10);
                              }
                              *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[24]);
                            }
                        }
                      else
                        {
                          MR_Word mercury__lexer__V_40_40;
                          MR_Word mercury__lexer__V_42_42;
                          MR_Word mercury__lexer__V_43_43;
                          MR_Word mercury__lexer__V_45_45;
                          MR_String mercury__lexer__String_52;
                          MR_String mercury__lexer__Message_53;

                          {
                            mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_7, mercury__lexer__HaveToken_10);
                          }
{
#define MR_PROC_LABEL mercury__lexer__get_source_line_number_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__lexer__Char_13 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                          if (mercury__lexer__succeeded)
                            mercury__lexer__String_52 = (MR_String) "NUL";
                          else
                            {
                              MR_Word mercury__lexer__V_38_38;
                              MR_Word mercury__lexer__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                              {
                                mercury__lexer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                                MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 1) = ((MR_Box) (mercury__lexer__V_39_39));
                              }
                              {
                                mercury__string__from_char_list_2_p_0(mercury__lexer__V_38_38, &mercury__lexer__String_52);
                              }
                            }
                          mercury__lexer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          mercury__lexer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[23]);
                          {
                            mercury__lexer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__V_42_42, 0) = ((MR_Box) (mercury__lexer__String_52));
                            MR_hl_field(MR_mktag(1), mercury__lexer__V_42_42, 1) = ((MR_Box) (mercury__lexer__V_43_43));
                          }
                          {
                            mercury__lexer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__V_40_40, 0) = ((MR_Box) ((MR_String) "invalid character \140"));
                            MR_hl_field(MR_mktag(1), mercury__lexer__V_40_40, 1) = ((MR_Box) (mercury__lexer__V_42_42));
                          }
                          {
                            mercury__lexer__Message_53 = mercury__string__append_list_1_f_0(mercury__lexer__V_40_40);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__lexer__Token_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Message_53));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_7, mercury__lexer__HaveToken_10);
                  }
                  *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[22]);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, (MR_Integer) 0)));

              {
                mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_7, mercury__lexer__HaveToken_10);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_14));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_implementation_defined_literal_rest_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_18,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_19)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_15;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_20_20;
    MR_Integer mercury__lexer__LineNum0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_18, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_18, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_18, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_36;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_35 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_implementation_defined_literal_rest_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_35 ;
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
	 mercury__lexer__Offset_36  = NextIndex;
	 mercury__lexer__Char_15  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_37 = (mercury__lexer__LineNum0_33 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 0) = ((MR_Box) (mercury__lexer__LineNum_37));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 1) = ((MR_Box) (mercury__lexer__Offset_36));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 2) = ((MR_Box) (mercury__lexer__Offset_36));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 0) = ((MR_Box) (mercury__lexer__LineNum0_33));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 1) = ((MR_Box) (mercury__lexer__LineOffset0_34));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_20_20, 2) = ((MR_Box) (mercury__lexer__Offset_36));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        MR_Char mercury__lexer__V_3_41;

        {
          mercury__lexer__succeeded = mercury__char__lower_upper_2_p_0(mercury__lexer__Char_15, &mercury__lexer__V_3_41);
        }
        if (mercury__lexer__succeeded)
          {
            MR_Word mercury__lexer__Token0_16;
            MR_String mercury__lexer__S_17;

            {
              mercury__lexer__string_get_name_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__STATE_VARIABLE_Posn_0_18, &mercury__lexer__Token0_16, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_20_20, mercury__lexer__STATE_VARIABLE_Posn_19);
            }
            mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__Token0_16)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__S_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__Token0_16, (MR_Integer) 0)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__lexer__Token_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__S_17));
                }
              }
            else
              *mercury__lexer__Token_11 = mercury__lexer__Token0_16;
          }
        else
          {
            switch (mercury__lexer__Char_15) {
              default:
                mercury__lexer__succeeded = MR_FALSE;
                break;
              case (MR_Char) 33:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 35:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 36:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 38:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 42:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 43:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 45:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 46:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 47:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 58:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 60:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 61:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 62:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 63:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 64:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 92:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 94:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 126:
                mercury__lexer__succeeded = MR_TRUE;
                break;
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_graphic_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_20_20, mercury__lexer__STATE_VARIABLE_Posn_19);
              }
            else
              {
                MR_Integer mercury__lexer__V_48_48;
                MR_Integer mercury__lexer__V_49_49;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_20_20, mercury__lexer__STATE_VARIABLE_Posn_19);
                }
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[4]);
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_56_56;
        MR_Integer mercury__lexer__V_57_57;

        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[4]);
        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_19 = mercury__lexer__STATE_VARIABLE_Posn_0_18;
      }
  }
}

static void MR_CALL 
mercury__lexer__get_implementation_defined_literal_rest_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_32;
    MR_Box mercury__lexer__V_5_43 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_43, &mercury__lexer__V_10_32);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_32 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_35;

{
#define MR_PROC_LABEL mercury__lexer__get_implementation_defined_literal_rest_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_32 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_35  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_35;
          }
        else
          {
            MR_String mercury__lexer__V_12_37;
            MR_Word mercury__lexer__V_19_38;
            MR_Box mercury__lexer__V_8_50;

{
#define MR_PROC_LABEL mercury__lexer__get_implementation_defined_literal_rest_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_50 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_implementation_defined_literal_rest_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_50 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_37  = Msg;
}
            mercury__lexer__V_19_38 = (MR_Word) mercury__lexer__V_12_37;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_38));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Char mercury__lexer__V_3_55;

              {
                mercury__lexer__succeeded = mercury__char__lower_upper_2_p_0(mercury__lexer__Char_9, &mercury__lexer__V_3_55);
              }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__Token0_11;
                  MR_Word mercury__lexer__V_16_16;
                  MR_Word mercury__lexer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_String mercury__lexer__S_12;

                  {
                    mercury__lexer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_16_16, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                    MR_hl_field(MR_mktag(1), mercury__lexer__V_16_16, 1) = ((MR_Box) (mercury__lexer__V_18_18));
                  }
                  {
                    mercury__lexer__get_name_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_16_16, &mercury__lexer__Token0_11);
                  }
                  mercury__lexer__succeeded = ((MR_tag((MR_Word) mercury__lexer__Token0_11)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__S_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__Token0_11, (MR_Integer) 0)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__lexer__Token_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__S_12));
                      }
                    }
                  else
                    *mercury__lexer__Token_6 = mercury__lexer__Token0_11;
                }
              else
                {
                  switch (mercury__lexer__Char_9) {
                    default:
                      mercury__lexer__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 33:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 35:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 36:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 38:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 42:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 43:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 45:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 46:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 47:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 58:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 60:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 61:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 62:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 63:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 64:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 92:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 94:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 126:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__V_19_19;
                      MR_Word mercury__lexer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[21]);
                      MR_Word mercury__lexer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                      {
                        mercury__lexer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_19_19, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_19_19, 1) = ((MR_Box) (mercury__lexer__V_21_21));
                      }
                      {
                        mercury__lexer__get_graphic_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_19_19, mercury__lexer__Token_6);
                      }
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_59 = (MR_Box) mercury__lexer__Stream_5;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_59, mercury__lexer__Char_9);
                      }
                      *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[4]);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[4]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_name_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
        MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_34;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_name_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__lexer__Char_14);
            }
            if (mercury__lexer__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16 = mercury__lexer__STATE_VARIABLE_Posn_18_18;

                  mercury__lexer__STATE_VARIABLE_Posn_0_16 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_16;
                }
                continue;
              }
            else
              {
                MR_String mercury__lexer__Name_15;
                MR_Integer mercury__lexer__Offset0_44;
                MR_Integer mercury__lexer__Offset_47;
                MR_Integer mercury__lexer__V_42_42;
                MR_Integer mercury__lexer__V_43_43;
                MR_Integer mercury__lexer__V_45_45;
                MR_Integer mercury__lexer__V_46_46;
                MR_Integer mercury__lexer__V_54_54;
                MR_Integer mercury__lexer__V_55_55;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__Offset0_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 0)));
                mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 1)));
                mercury__lexer__Offset_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mercury__lexer__STATE_VARIABLE_Posn_17, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__string_get_name_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_44 ;
	End =  mercury__lexer__Offset_47 ;
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
	 mercury__lexer__Name_15  = SubString;
}
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__lexer__Token_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_15));
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
              }
          }
        else
          {
            MR_String mercury__lexer__Name_25;
            MR_Integer mercury__lexer__Offset0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
            MR_Integer mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_72_72;
            MR_Integer mercury__lexer__V_73_73;

{
#define MR_PROC_LABEL mercury__lexer__string_get_name_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_8 ;
	Start =  mercury__lexer__Offset0_62 ;
	End =  mercury__lexer__Offset_65 ;
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
	 mercury__lexer__Name_25  = SubString;
}
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__lexer__Token_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_25));
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_name_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_14,
  MR_Word * mercury__lexer__Token_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_39;
        MR_Box mercury__lexer__V_5_50 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_50, &mercury__lexer__V_10_39);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_39 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_42;

{
#define MR_PROC_LABEL mercury__lexer__get_name_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_39 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_42  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_42;
              }
            else
              {
                MR_String mercury__lexer__V_12_44;
                MR_Word mercury__lexer__V_19_45;
                MR_Box mercury__lexer__V_8_57;

{
#define MR_PROC_LABEL mercury__lexer__get_name_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_57 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_name_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_57 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_44  = Msg;
}
                mercury__lexer__V_19_45 = (MR_Word) mercury__lexer__V_12_44;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_45));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(mercury__lexer__Char_11);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                      {
                        mercury__lexer__STATE_VARIABLE_RevChars_18_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_18_25, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_14));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14 = mercury__lexer__STATE_VARIABLE_RevChars_18_25;

                        mercury__lexer__STATE_VARIABLE_RevChars_0_14 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_14;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;
                      MR_String mercury__lexer__Name_26;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_66, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__Name_26);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_26));
                        }
                      else
                        {
                          *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[20]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__lexer__Name_13;

                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_14, &mercury__lexer__Name_13);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Name_13));
                    }
                  else
                    {
                      *mercury__lexer__Token_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[20]);
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_finish_octal_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_25,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_26,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_27,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_28)
{
  {
    MR_bool mercury__lexer__succeeded;

    if ((mercury__lexer__STATE_VARIABLE_RevOctalChars_0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__lexer__V_51_51;
        MR_Integer mercury__lexer__V_52_52;

        *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[18]);
        *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
        mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
      }
    else
      {
        MR_Integer mercury__lexer__Int_23;
        MR_Char mercury__lexer__Char_24;
        MR_String mercury__lexer__OctalString_22;
        MR_Integer mercury__lexer__V_29_29;

        {
          mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevOctalChars_0_26, &mercury__lexer__OctalString_22);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__V_29_29 = (MR_Integer) 8;
            {
              mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_29_29, mercury__lexer__OctalString_22, &mercury__lexer__Int_23);
            }
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__string_finish_octal_escape_10_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__Int_23 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Char_24  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Int_23 == (MR_Integer) 0);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__V_62_62;
                MR_Integer mercury__lexer__V_63_63;

                *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
                *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
                mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
                mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
                *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
              }
            else
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevChars_31_39;

                {
                  mercury__lexer__STATE_VARIABLE_RevChars_31_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_31_39, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_24));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_31_39, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_25));
                }
                {
                  mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__QuoteChar_13, mercury__lexer__STATE_VARIABLE_RevChars_31_39, mercury__lexer__Posn0_16, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_27, mercury__lexer__STATE_VARIABLE_Posn_28);
                }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_70_70;
            MR_Integer mercury__lexer__V_71_71;

            *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[19]);
            *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
            mercury__lexer__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
            mercury__lexer__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__finish_octal_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_20,
  MR_Word * mercury__lexer__Token_12)
{
  {
    MR_bool mercury__lexer__succeeded;

    if ((mercury__lexer__STATE_VARIABLE_RevOctalChars_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[18]);
      }
    else
      {
        MR_Integer mercury__lexer__Int_17;
        MR_Char mercury__lexer__Char_18;
        MR_String mercury__lexer__OctalString_16;
        MR_Integer mercury__lexer__V_23_23;

        {
          mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevOctalChars_0_20, &mercury__lexer__OctalString_16);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__V_23_23 = (MR_Integer) 8;
            {
              mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_23_23, mercury__lexer__OctalString_16, &mercury__lexer__Int_17);
            }
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__finish_octal_escape_7_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__Int_17 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Char_18  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Int_17 == (MR_Integer) 0);
            if (mercury__lexer__succeeded)
              {
                *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
              }
            else
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevChars_24_30;

                {
                  mercury__lexer__STATE_VARIABLE_RevChars_24_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_24_30, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_18));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_24_30, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_19));
                }
                {
                  mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_8, mercury__lexer__QuoteChar_9, mercury__lexer__STATE_VARIABLE_RevChars_24_30, mercury__lexer__Token_12);
                }
              }
          }
        else
          {
            *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[19]);
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__string_get_octal_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_21,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_22,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_20;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_25_25;
        MR_Integer mercury__lexer__LineNum0_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_44;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_43 < mercury__lexer__Len_12);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_octal_escape_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_43 ;
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
	 mercury__lexer__Offset_44  = NextIndex;
	 mercury__lexer__Char_20  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_20 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_45 = (mercury__lexer__LineNum0_41 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 0) = ((MR_Box) (mercury__lexer__LineNum_45));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 1) = ((MR_Box) (mercury__lexer__Offset_44));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 2) = ((MR_Box) (mercury__lexer__Offset_44));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 0) = ((MR_Box) (mercury__lexer__LineNum0_41));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 1) = ((MR_Box) (mercury__lexer__LineOffset0_42));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 2) = ((MR_Box) (mercury__lexer__Offset_44));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_20);
            }
            if (mercury__lexer__succeeded)
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_26_26;

                {
                  mercury__lexer__STATE_VARIABLE_RevOctalChars_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevOctalChars_26_26, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_20));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevOctalChars_26_26, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevOctalChars_0_22));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0__tmp_copy_22 = mercury__lexer__STATE_VARIABLE_RevOctalChars_26_26;
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_25_25;

                  mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                  mercury__lexer__STATE_VARIABLE_RevOctalChars_0_22 = mercury__lexer__STATE_VARIABLE_RevOctalChars_0__tmp_copy_22;
                }
                continue;
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_20 == (MR_Char) 92);
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_finish_octal_escape_10_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__QuoteChar_13, mercury__lexer__STATE_VARIABLE_RevChars_0_21, mercury__lexer__STATE_VARIABLE_RevOctalChars_0_22, mercury__lexer__Posn0_16, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_25_25, mercury__lexer__STATE_VARIABLE_Posn_24);
                  }
                else
                  {
                    MR_Integer mercury__lexer__V_54_54;
                    MR_Integer mercury__lexer__V_55_55;

                    *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
                    mercury__lexer__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
                    mercury__lexer__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
                    *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_25_25;
                    *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[17]);
                  }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_62_62;
            MR_Integer mercury__lexer__V_63_63;

            *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
            mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
            mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_0_23;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_octal_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_17,
  MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0_18,
  MR_Word * mercury__lexer__Token_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_14;
        MR_Char mercury__lexer__Char_15;
        MR_Integer mercury__lexer__V_10_38;
        MR_Box mercury__lexer__V_5_49 = (MR_Box) mercury__lexer__Stream_8;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_49, &mercury__lexer__V_10_38);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_38 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_15);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_41;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_escape_7_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_38 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_41  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_15 = mercury__lexer__V_11_41;
              }
            else
              {
                MR_String mercury__lexer__V_12_43;
                MR_Word mercury__lexer__V_19_44;
                MR_Box mercury__lexer__V_8_56;

{
#define MR_PROC_LABEL mercury__lexer__get_octal_escape_7_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_56 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_octal_escape_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_56 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_43  = Msg;
}
                mercury__lexer__V_19_44 = (MR_Word) mercury__lexer__V_12_43;
                {
                  mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_14, 0) = ((MR_Box) (mercury__lexer__V_19_44));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_15);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_15);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_22_28;

                      {
                        mercury__lexer__STATE_VARIABLE_RevOctalChars_22_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevOctalChars_22_28, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_15));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevOctalChars_22_28, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevOctalChars_0_18));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevOctalChars_0__tmp_copy_18 = mercury__lexer__STATE_VARIABLE_RevOctalChars_22_28;

                        mercury__lexer__STATE_VARIABLE_RevOctalChars_0_18 = mercury__lexer__STATE_VARIABLE_RevOctalChars_0__tmp_copy_18;
                      }
                      continue;
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 92);
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__finish_octal_escape_7_p_0(mercury__lexer__Stream_8, mercury__lexer__QuoteChar_9, mercury__lexer__STATE_VARIABLE_RevChars_0_17, mercury__lexer__STATE_VARIABLE_RevOctalChars_0_18, mercury__lexer__Token_12);
                        }
                      else
                        {
                          *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[17]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_14, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_finish_hex_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_25,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_26,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_27,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_28)
{
  {
    MR_bool mercury__lexer__succeeded;

    if ((mercury__lexer__STATE_VARIABLE_RevHexChars_0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__lexer__V_51_51;
        MR_Integer mercury__lexer__V_52_52;

        *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
        mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
        mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
        *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[15]);
      }
    else
      {
        MR_Integer mercury__lexer__Int_23;
        MR_Char mercury__lexer__Char_24;
        MR_String mercury__lexer__HexString_22;
        MR_Integer mercury__lexer__V_29_29;

        {
          mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevHexChars_0_26, &mercury__lexer__HexString_22);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__V_29_29 = (MR_Integer) 16;
            {
              mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_29_29, mercury__lexer__HexString_22, &mercury__lexer__Int_23);
            }
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__string_finish_hex_escape_10_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__Int_23 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Char_24  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Int_23 == (MR_Integer) 0);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__V_62_62;
                MR_Integer mercury__lexer__V_63_63;

                *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
                *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
                mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
                mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
                *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
              }
            else
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevChars_31_39;

                {
                  mercury__lexer__STATE_VARIABLE_RevChars_31_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_31_39, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_24));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_31_39, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_25));
                }
                {
                  mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__QuoteChar_13, mercury__lexer__STATE_VARIABLE_RevChars_31_39, mercury__lexer__Posn0_16, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_27, mercury__lexer__STATE_VARIABLE_Posn_28);
                }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_70_70;
            MR_Integer mercury__lexer__V_71_71;

            *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
            mercury__lexer__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
            mercury__lexer__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_28 = mercury__lexer__STATE_VARIABLE_Posn_0_27;
            *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[16]);
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__finish_hex_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_20,
  MR_Word * mercury__lexer__Token_12)
{
  {
    MR_bool mercury__lexer__succeeded;

    if ((mercury__lexer__STATE_VARIABLE_RevHexChars_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[15]);
      }
    else
      {
        MR_Integer mercury__lexer__Int_17;
        MR_Char mercury__lexer__Char_18;
        MR_String mercury__lexer__HexString_16;
        MR_Integer mercury__lexer__V_23_23;

        {
          mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevHexChars_0_20, &mercury__lexer__HexString_16);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__V_23_23 = (MR_Integer) 16;
            {
              mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_23_23, mercury__lexer__HexString_16, &mercury__lexer__Int_17);
            }
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__finish_hex_escape_7_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__Int_17 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Char_18  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Int_17 == (MR_Integer) 0);
            if (mercury__lexer__succeeded)
              {
                *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
              }
            else
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevChars_24_30;

                {
                  mercury__lexer__STATE_VARIABLE_RevChars_24_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_24_30, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_18));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_24_30, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_19));
                }
                {
                  mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_8, mercury__lexer__QuoteChar_9, mercury__lexer__STATE_VARIABLE_RevChars_24_30, mercury__lexer__Token_12);
                }
              }
          }
        else
          {
            *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[16]);
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__string_get_hex_escape_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Char mercury__lexer__QuoteChar_13,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_21,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_22,
  MR_Word mercury__lexer__Posn0_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_20;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_25_25;
        MR_Integer mercury__lexer__LineNum0_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_44;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_43 < mercury__lexer__Len_12);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_hex_escape_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_43 ;
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
	 mercury__lexer__Offset_44  = NextIndex;
	 mercury__lexer__Char_20  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_20 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_45 = (mercury__lexer__LineNum0_41 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 0) = ((MR_Box) (mercury__lexer__LineNum_45));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 1) = ((MR_Box) (mercury__lexer__Offset_44));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 2) = ((MR_Box) (mercury__lexer__Offset_44));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 0) = ((MR_Box) (mercury__lexer__LineNum0_41));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 1) = ((MR_Box) (mercury__lexer__LineOffset0_42));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_25_25, 2) = ((MR_Box) (mercury__lexer__Offset_44));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            {
              mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_20);
            }
            if (mercury__lexer__succeeded)
              {
                MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_26_26;

                {
                  mercury__lexer__STATE_VARIABLE_RevHexChars_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_26_26, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_20));
                  MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_26_26, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevHexChars_0_22));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_22 = mercury__lexer__STATE_VARIABLE_RevHexChars_26_26;
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_25_25;

                  mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                  mercury__lexer__STATE_VARIABLE_RevHexChars_0_22 = mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_22;
                }
                continue;
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_20 == (MR_Char) 92);
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_finish_hex_escape_10_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__QuoteChar_13, mercury__lexer__STATE_VARIABLE_RevChars_0_21, mercury__lexer__STATE_VARIABLE_RevHexChars_0_22, mercury__lexer__Posn0_16, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_25_25, mercury__lexer__STATE_VARIABLE_Posn_24);
                  }
                else
                  {
                    MR_Integer mercury__lexer__V_54_54;
                    MR_Integer mercury__lexer__V_55_55;

                    *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
                    mercury__lexer__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
                    mercury__lexer__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
                    *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_25_25;
                    *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[14]);
                  }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_62_62;
            MR_Integer mercury__lexer__V_63_63;

            *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 0)));
            mercury__lexer__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 1)));
            mercury__lexer__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_16, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_0_23;
            *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_hex_escape_7_p_0(
  MR_Word mercury__lexer__Stream_8,
  MR_Char mercury__lexer__QuoteChar_9,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_17,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_18,
  MR_Word * mercury__lexer__Token_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_14;
        MR_Char mercury__lexer__Char_15;
        MR_Integer mercury__lexer__V_10_38;
        MR_Box mercury__lexer__V_5_49 = (MR_Box) mercury__lexer__Stream_8;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_49, &mercury__lexer__V_10_38);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_38 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_15);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_41;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_escape_7_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_38 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_41  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_15 = mercury__lexer__V_11_41;
              }
            else
              {
                MR_String mercury__lexer__V_12_43;
                MR_Word mercury__lexer__V_19_44;
                MR_Box mercury__lexer__V_8_56;

{
#define MR_PROC_LABEL mercury__lexer__get_hex_escape_7_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_56 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_hex_escape_7_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_56 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_43  = Msg;
}
                mercury__lexer__V_19_44 = (MR_Word) mercury__lexer__V_12_43;
                {
                  mercury__lexer__Result_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_14, 0) = ((MR_Box) (mercury__lexer__V_19_44));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_15);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_15);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_22_28;

                      {
                        mercury__lexer__STATE_VARIABLE_RevHexChars_22_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_22_28, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_15));
                        MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_22_28, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevHexChars_0_18));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_18 = mercury__lexer__STATE_VARIABLE_RevHexChars_22_28;

                        mercury__lexer__STATE_VARIABLE_RevHexChars_0_18 = mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_18;
                      }
                      continue;
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_15 == (MR_Char) 92);
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__finish_hex_escape_7_p_0(mercury__lexer__Stream_8, mercury__lexer__QuoteChar_9, mercury__lexer__STATE_VARIABLE_RevChars_0_17, mercury__lexer__STATE_VARIABLE_RevHexChars_0_18, mercury__lexer__Token_12);
                        }
                      else
                        {
                          *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[14]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__lexer__Token_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_14, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_16));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_unicode_escape_11_p_0(
  MR_Integer mercury__lexer__NumHexChars_12,
  MR_String mercury__lexer__String_13,
  MR_Integer mercury__lexer__Len_14,
  MR_Char mercury__lexer__QuoteChar_15,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_26,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_27,
  MR_Word mercury__lexer__Posn0_18,
  MR_Word * mercury__lexer__Token_19,
  MR_Integer * mercury__lexer__Context_20,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_28,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_29)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Integer mercury__lexer__V_56_56;

        {
          mercury__list__length_acc_3_p_0(mercury__lexer__TypeCtorInfo_55_55, mercury__lexer__STATE_VARIABLE_RevHexChars_0_27, (MR_Integer) 0, &mercury__lexer__V_56_56);
        }
        mercury__lexer__succeeded = (mercury__lexer__NumHexChars_12 == mercury__lexer__V_56_56);
        if (mercury__lexer__succeeded)
          {
            MR_Integer mercury__lexer__UnicodeCharCode_23;
            MR_Char mercury__lexer__UnicodeChar_24;
            MR_String mercury__lexer__HexString_22;
            MR_Integer mercury__lexer__V_30_30;
            MR_Integer mercury__lexer__V_65_65;
            MR_Integer mercury__lexer__V_66_66;
            MR_Integer mercury__lexer__V_67_67;
            MR_Integer mercury__lexer__V_68_68;

            {
              mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevHexChars_0_27, &mercury__lexer__HexString_22);
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__V_30_30 = (MR_Integer) 16;
                {
                  mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_30_30, mercury__lexer__HexString_22, &mercury__lexer__UnicodeCharCode_23);
                }
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_65_65 = (MR_Integer) 0;
                    mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_23 >= mercury__lexer__V_65_65);
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__V_66_66 = (MR_Integer) 1114111;
                        mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_23 <= mercury__lexer__V_66_66);
                        if (mercury__lexer__succeeded)
                          {
                            mercury__lexer__V_67_67 = (MR_Integer) 55296;
                            mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_23 >= mercury__lexer__V_67_67);
                            if (mercury__lexer__succeeded)
                              {
                                mercury__lexer__V_68_68 = (MR_Integer) 57343;
                                mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_23 <= mercury__lexer__V_68_68);
                              }
                            mercury__lexer__succeeded = !(mercury__lexer__succeeded);
                            if (mercury__lexer__succeeded)
                              {
{
#define MR_PROC_LABEL mercury__lexer__string_get_unicode_escape_11_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__UnicodeCharCode_23 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__UnicodeChar_24  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                              }
                          }
                      }
                  }
              }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_23 == (MR_Integer) 0);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__V_77_77;
                    MR_Integer mercury__lexer__V_78_78;

                    *mercury__lexer__Context_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 0)));
                    mercury__lexer__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 1)));
                    mercury__lexer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 2)));
                    *mercury__lexer__STATE_VARIABLE_Posn_29 = mercury__lexer__STATE_VARIABLE_Posn_0_28;
                    *mercury__lexer__Token_19 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
                  }
                else
                  {
                    MR_Word mercury__lexer__STATE_VARIABLE_RevChars_32_42;

                    {
                      mercury__lexer__STATE_VARIABLE_RevChars_32_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_32_42, 0) = ((MR_Box) (MR_Word) (mercury__lexer__UnicodeChar_24));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_32_42, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_26));
                    }
                    {
                      mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_13, mercury__lexer__Len_14, mercury__lexer__QuoteChar_15, mercury__lexer__STATE_VARIABLE_RevChars_32_42, mercury__lexer__Posn0_18, mercury__lexer__Token_19, mercury__lexer__Context_20, mercury__lexer__STATE_VARIABLE_Posn_0_28, mercury__lexer__STATE_VARIABLE_Posn_29);
                    }
                  }
              }
            else
              {
                MR_Integer mercury__lexer__V_86_86;
                MR_Integer mercury__lexer__V_87_87;

                *mercury__lexer__Context_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 0)));
                mercury__lexer__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 1)));
                mercury__lexer__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_18, (MR_Integer) 2)));
                *mercury__lexer__STATE_VARIABLE_Posn_29 = mercury__lexer__STATE_VARIABLE_Posn_0_28;
                *mercury__lexer__Token_19 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[12]);
              }
          }
        else
          {
            MR_Char mercury__lexer__Char_25;
            MR_Word mercury__lexer__STATE_VARIABLE_Posn_36_36;
            MR_Integer mercury__lexer__LineNum0_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_28, (MR_Integer) 0)));
            MR_Integer mercury__lexer__LineOffset0_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_28, (MR_Integer) 1)));
            MR_Integer mercury__lexer__Offset0_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_28, (MR_Integer) 2)));
            MR_Integer mercury__lexer__Offset_96;

            mercury__lexer__succeeded = (mercury__lexer__Offset0_95 < mercury__lexer__Len_14);
            if (mercury__lexer__succeeded)
              {
{
#define MR_PROC_LABEL mercury__lexer__string_get_unicode_escape_11_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_13 ;
	Index =  mercury__lexer__Offset0_95 ;
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
	 mercury__lexer__Offset_96  = NextIndex;
	 mercury__lexer__Char_25  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__succeeded = (mercury__lexer__Char_25 == (MR_Char) 10);
                    if (mercury__lexer__succeeded)
                      {
                        MR_Integer mercury__lexer__LineNum_97 = (mercury__lexer__LineNum0_93 + (MR_Integer) 1);

                        {
                          mercury__lexer__STATE_VARIABLE_Posn_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 0) = ((MR_Box) (mercury__lexer__LineNum_97));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 1) = ((MR_Box) (mercury__lexer__Offset_96));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 2) = ((MR_Box) (mercury__lexer__Offset_96));
                        }
                      }
                    else
                      {
                        mercury__lexer__STATE_VARIABLE_Posn_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 0) = ((MR_Box) (mercury__lexer__LineNum0_93));
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 1) = ((MR_Box) (mercury__lexer__LineOffset0_94));
                        MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_36_36, 2) = ((MR_Box) (mercury__lexer__Offset_96));
                      }
                    mercury__lexer__succeeded = MR_TRUE;
                  }
              }
            if (mercury__lexer__succeeded)
              {
                {
                  mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_25);
                }
                if (mercury__lexer__succeeded)
                  {
                    MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_37_45;

                    {
                      mercury__lexer__STATE_VARIABLE_RevHexChars_37_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_37_45, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_25));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_37_45, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevHexChars_0_27));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_27 = mercury__lexer__STATE_VARIABLE_RevHexChars_37_45;
                      MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_28 = mercury__lexer__STATE_VARIABLE_Posn_36_36;

                      mercury__lexer__STATE_VARIABLE_Posn_0_28 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_28;
                      mercury__lexer__STATE_VARIABLE_RevHexChars_0_27 = mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_27;
                    }
                    continue;
                  }
                else
                  {
                    {
                      mercury__lexer__string_get_context_4_p_0(mercury__lexer__Posn0_18, mercury__lexer__Context_20, mercury__lexer__STATE_VARIABLE_Posn_36_36, mercury__lexer__STATE_VARIABLE_Posn_29);
                    }
                    *mercury__lexer__Token_19 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[13]);
                  }
              }
            else
              {
                {
                  mercury__lexer__string_get_context_4_p_0(mercury__lexer__Posn0_18, mercury__lexer__Context_20, mercury__lexer__STATE_VARIABLE_Posn_0_28, mercury__lexer__STATE_VARIABLE_Posn_29);
                }
                *mercury__lexer__Token_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_unicode_escape_8_p_0(
  MR_Word mercury__lexer__Stream_9,
  MR_Integer mercury__lexer__NumHexChars_10,
  MR_Char mercury__lexer__QuoteChar_11,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_22,
  MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0_23,
  MR_Word * mercury__lexer__Token_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Integer mercury__lexer__V_51_51;

        {
          mercury__list__length_acc_3_p_0(mercury__lexer__TypeCtorInfo_50_50, mercury__lexer__STATE_VARIABLE_RevHexChars_0_23, (MR_Integer) 0, &mercury__lexer__V_51_51);
        }
        mercury__lexer__succeeded = (mercury__lexer__NumHexChars_10 == mercury__lexer__V_51_51);
        if (mercury__lexer__succeeded)
          {
            MR_Integer mercury__lexer__UnicodeCharCode_17;
            MR_Char mercury__lexer__UnicodeChar_18;
            MR_String mercury__lexer__HexString_16;
            MR_Integer mercury__lexer__V_26_26;
            MR_Integer mercury__lexer__V_60_60;
            MR_Integer mercury__lexer__V_61_61;
            MR_Integer mercury__lexer__V_62_62;
            MR_Integer mercury__lexer__V_63_63;

            {
              mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevHexChars_0_23, &mercury__lexer__HexString_16);
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__V_26_26 = (MR_Integer) 16;
                {
                  mercury__lexer__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__lexer__V_26_26, mercury__lexer__HexString_16, &mercury__lexer__UnicodeCharCode_17);
                }
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__V_60_60 = (MR_Integer) 0;
                    mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_17 >= mercury__lexer__V_60_60);
                    if (mercury__lexer__succeeded)
                      {
                        mercury__lexer__V_61_61 = (MR_Integer) 1114111;
                        mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_17 <= mercury__lexer__V_61_61);
                        if (mercury__lexer__succeeded)
                          {
                            mercury__lexer__V_62_62 = (MR_Integer) 55296;
                            mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_17 >= mercury__lexer__V_62_62);
                            if (mercury__lexer__succeeded)
                              {
                                mercury__lexer__V_63_63 = (MR_Integer) 57343;
                                mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_17 <= mercury__lexer__V_63_63);
                              }
                            mercury__lexer__succeeded = !(mercury__lexer__succeeded);
                            if (mercury__lexer__succeeded)
                              {
{
#define MR_PROC_LABEL mercury__lexer__get_unicode_escape_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__UnicodeCharCode_17 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__UnicodeChar_18  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                              }
                          }
                      }
                  }
              }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__UnicodeCharCode_17 == (MR_Integer) 0);
                if (mercury__lexer__succeeded)
                  {
                    *mercury__lexer__Token_14 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[11]);
                  }
                else
                  {
                    MR_Word mercury__lexer__STATE_VARIABLE_RevChars_27_34;

                    {
                      mercury__lexer__STATE_VARIABLE_RevChars_27_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_27_34, 0) = ((MR_Box) (MR_Word) (mercury__lexer__UnicodeChar_18));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_27_34, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_22));
                    }
                    {
                      mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_9, mercury__lexer__QuoteChar_11, mercury__lexer__STATE_VARIABLE_RevChars_27_34, mercury__lexer__Token_14);
                    }
                  }
              }
            else
              {
                *mercury__lexer__Token_14 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[12]);
              }
          }
        else
          {
            MR_Word mercury__lexer__Result_19;
            MR_Char mercury__lexer__Char_20;
            MR_Integer mercury__lexer__V_10_72;
            MR_Box mercury__lexer__V_5_83 = (MR_Box) mercury__lexer__Stream_9;

            {
              mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_83, &mercury__lexer__V_10_72);
            }
            mercury__lexer__succeeded = (mercury__lexer__V_10_72 == (MR_Integer) -1);
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_20);
                }
              }
            else
              {
                MR_Char mercury__lexer__V_11_75;

{
#define MR_PROC_LABEL mercury__lexer__get_unicode_escape_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_72 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_75  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__Result_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__lexer__Char_20 = mercury__lexer__V_11_75;
                  }
                else
                  {
                    MR_String mercury__lexer__V_12_77;
                    MR_Word mercury__lexer__V_19_78;
                    MR_Box mercury__lexer__V_8_90;

{
#define MR_PROC_LABEL mercury__lexer__get_unicode_escape_8_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_90 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_unicode_escape_8_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_90 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_77  = Msg;
}
                    mercury__lexer__V_19_78 = (MR_Word) mercury__lexer__V_12_77;
                    {
                      mercury__lexer__Result_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__Result_19, 0) = ((MR_Box) (mercury__lexer__V_19_78));
                    }
                    {
                      mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_20);
                    }
                  }
              }
            switch (MR_tag((MR_Word) mercury__lexer__Result_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__lexer__Result_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__lexer__succeeded = mercury__char__is_hex_digit_1_p_0(mercury__lexer__Char_20);
                      }
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_31_41;

                          {
                            mercury__lexer__STATE_VARIABLE_RevHexChars_31_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_31_41, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_20));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevHexChars_31_41, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevHexChars_0_23));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_RevHexChars_31_41;

                            mercury__lexer__STATE_VARIABLE_RevHexChars_0_23 = mercury__lexer__STATE_VARIABLE_RevHexChars_0__tmp_copy_23;
                          }
                          continue;
                        }
                      else
                        {
                          *mercury__lexer__Token_14 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[13]);
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__lexer__Token_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__lexer__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_19, (MR_Integer) 0)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_14 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_21));
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_quoted_name_escape_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_20,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_21,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_18;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_23_23;
        MR_Integer mercury__lexer__LineNum0_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_21, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_21, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_21, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_60;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_59 < mercury__lexer__Len_11);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_quoted_name_escape_9_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_10 ;
	Index =  mercury__lexer__Offset0_59 ;
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
	 mercury__lexer__Offset_60  = NextIndex;
	 mercury__lexer__Char_18  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_61 = (mercury__lexer__LineNum0_57 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 0) = ((MR_Box) (mercury__lexer__LineNum_61));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 1) = ((MR_Box) (mercury__lexer__Offset_60));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 2) = ((MR_Box) (mercury__lexer__Offset_60));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 0) = ((MR_Box) (mercury__lexer__LineNum0_57));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 1) = ((MR_Box) (mercury__lexer__LineOffset0_58));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, 2) = ((MR_Box) (mercury__lexer__Offset_60));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_20, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 13);
                if (mercury__lexer__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_21 = mercury__lexer__STATE_VARIABLE_Posn_23_23;

                      mercury__lexer__STATE_VARIABLE_Posn_0_21 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_21;
                    }
                    continue;
                  }
                else
                  {
                    MR_Char mercury__lexer__EscapedChar_19;

                    switch (mercury__lexer__Char_18) {
                      default:
                        mercury__lexer__succeeded = MR_FALSE;
                        break;
                      case (MR_Char) 34:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 34;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 39:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 39;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 92:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 92;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 96:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 96;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 97:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 7;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 98:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 8;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 102:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 12;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 110:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 10;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 114:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 13;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 116:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 9;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Char) 118:
                        {
                          mercury__lexer__EscapedChar_19 = (MR_Char) 11;
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    if (mercury__lexer__succeeded)
                      {
                        MR_Word mercury__lexer__STATE_VARIABLE_RevChars_26_45;

                        {
                          mercury__lexer__STATE_VARIABLE_RevChars_26_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_26_45, 0) = ((MR_Box) (MR_Word) (mercury__lexer__EscapedChar_19));
                          MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_26_45, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_20));
                        }
                        {
                          mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_26_45, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
                        }
                      }
                    else
                      {
                        mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 120);
                        if (mercury__lexer__succeeded)
                          {
                            MR_Word mercury__lexer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                            {
                              mercury__lexer__string_get_hex_escape_10_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_20, mercury__lexer__V_28_28, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
                            }
                          }
                        else
                          {
                            mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 117);
                            if (mercury__lexer__succeeded)
                              {
                                MR_Word mercury__lexer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                {
                                  mercury__lexer__string_get_unicode_escape_11_p_0((MR_Integer) 4, mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_20, mercury__lexer__V_31_31, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
                                }
                              }
                            else
                              {
                                mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 85);
                                if (mercury__lexer__succeeded)
                                  {
                                    MR_Word mercury__lexer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                    {
                                      mercury__lexer__string_get_unicode_escape_11_p_0((MR_Integer) 8, mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_20, mercury__lexer__V_34_34, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
                                    }
                                  }
                                else
                                  {
                                    {
                                      mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_18);
                                    }
                                    if (mercury__lexer__succeeded)
                                      {
                                        MR_Word mercury__lexer__V_36_36;
                                        MR_Word mercury__lexer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                        {
                                          mercury__lexer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_18));
                                          MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 1) = ((MR_Box) (mercury__lexer__V_38_38));
                                        }
                                        {
                                          mercury__lexer__string_get_octal_escape_10_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_20, mercury__lexer__V_36_36, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_23_23, mercury__lexer__STATE_VARIABLE_Posn_22);
                                        }
                                      }
                                    else
                                      {
                                        MR_Integer mercury__lexer__V_70_70;
                                        MR_Integer mercury__lexer__V_71_71;

                                        *mercury__lexer__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, (MR_Integer) 0)));
                                        mercury__lexer__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, (MR_Integer) 1)));
                                        mercury__lexer__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_23_23, (MR_Integer) 2)));
                                        *mercury__lexer__STATE_VARIABLE_Posn_22 = mercury__lexer__STATE_VARIABLE_Posn_23_23;
                                        *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[10]);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_78_78;
            MR_Integer mercury__lexer__V_79_79;

            *mercury__lexer__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 0)));
            mercury__lexer__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 1)));
            mercury__lexer__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_22 = mercury__lexer__STATE_VARIABLE_Posn_0_21;
            *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_quoted_name_escape_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_16,
  MR_Word * mercury__lexer__Token_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_12;
        MR_Char mercury__lexer__Char_13;
        MR_Integer mercury__lexer__V_10_54;
        MR_Box mercury__lexer__V_5_65 = (MR_Box) mercury__lexer__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_65, &mercury__lexer__V_10_54);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_54 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_57;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_escape_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_54 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_57  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_13 = mercury__lexer__V_11_57;
              }
            else
              {
                MR_String mercury__lexer__V_12_59;
                MR_Word mercury__lexer__V_19_60;
                MR_Box mercury__lexer__V_8_72;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_escape_6_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_72 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_escape_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_72 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_59  = Msg;
}
                mercury__lexer__V_19_60 = (MR_Word) mercury__lexer__V_12_59;
                {
                  mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, 0) = ((MR_Box) (mercury__lexer__V_19_60));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 10);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_16, mercury__lexer__Token_10);
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 13);
                      if (mercury__lexer__succeeded)
                        {
                          /* direct tailcall eliminated */
                          continue;
                        }
                      else
                        {
                          MR_Char mercury__lexer__EscapedChar_15;

                          switch (mercury__lexer__Char_13) {
                            default:
                              mercury__lexer__succeeded = MR_FALSE;
                              break;
                            case (MR_Char) 34:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 34;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 39:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 39;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 92:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 92;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 96:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 96;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 97:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 7;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 98:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 8;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 102:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 12;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 110:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 10;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 114:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 13;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 116:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 9;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                            case (MR_Char) 118:
                              {
                                mercury__lexer__EscapedChar_15 = (MR_Char) 11;
                                mercury__lexer__succeeded = MR_TRUE;
                              }
                              break;
                          }
                          if (mercury__lexer__succeeded)
                            {
                              MR_Word mercury__lexer__STATE_VARIABLE_RevChars_22_42;

                              {
                                mercury__lexer__STATE_VARIABLE_RevChars_22_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_22_42, 0) = ((MR_Box) (MR_Word) (mercury__lexer__EscapedChar_15));
                                MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_22_42, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_16));
                              }
                              {
                                mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_22_42, mercury__lexer__Token_10);
                              }
                            }
                          else
                            {
                              mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 120);
                              if (mercury__lexer__succeeded)
                                {
                                  MR_Word mercury__lexer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                  {
                                    mercury__lexer__get_hex_escape_7_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_16, mercury__lexer__V_24_24, mercury__lexer__Token_10);
                                  }
                                }
                              else
                                {
                                  mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 117);
                                  if (mercury__lexer__succeeded)
                                    {
                                      MR_Word mercury__lexer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                      {
                                        mercury__lexer__get_unicode_escape_8_p_0(mercury__lexer__Stream_7, (MR_Integer) 4, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_16, mercury__lexer__V_27_27, mercury__lexer__Token_10);
                                      }
                                    }
                                  else
                                    {
                                      mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 85);
                                      if (mercury__lexer__succeeded)
                                        {
                                          MR_Word mercury__lexer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                          {
                                            mercury__lexer__get_unicode_escape_8_p_0(mercury__lexer__Stream_7, (MR_Integer) 8, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_16, mercury__lexer__V_30_30, mercury__lexer__Token_10);
                                          }
                                        }
                                      else
                                        {
                                          {
                                            mercury__lexer__succeeded = mercury__char__is_octal_digit_1_p_0(mercury__lexer__Char_13);
                                          }
                                          if (mercury__lexer__succeeded)
                                            {
                                              MR_Word mercury__lexer__V_32_32;
                                              MR_Word mercury__lexer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                                              {
                                                mercury__lexer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(1), mercury__lexer__V_32_32, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                                                MR_hl_field(MR_mktag(1), mercury__lexer__V_32_32, 1) = ((MR_Box) (mercury__lexer__V_34_34));
                                              }
                                              {
                                                mercury__lexer__get_octal_escape_7_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_16, mercury__lexer__V_32_32, mercury__lexer__Token_10);
                                              }
                                            }
                                          else
                                            {
                                              *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[10]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_14));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_quoted_name_quote_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_20,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_21)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_18;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_22_22;
    MR_Integer mercury__lexer__LineNum0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_40;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_39 < mercury__lexer__Len_11);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_quoted_name_quote_9_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_10 ;
	Index =  mercury__lexer__Offset0_39 ;
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
	 mercury__lexer__Offset_40  = NextIndex;
	 mercury__lexer__Char_18  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_41 = (mercury__lexer__LineNum0_37 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 0) = ((MR_Box) (mercury__lexer__LineNum_41));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 1) = ((MR_Box) (mercury__lexer__Offset_40));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 2) = ((MR_Box) (mercury__lexer__Offset_40));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 0) = ((MR_Box) (mercury__lexer__LineNum0_37));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 1) = ((MR_Box) (mercury__lexer__LineOffset0_38));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 2) = ((MR_Box) (mercury__lexer__Offset_40));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__succeeded = (mercury__lexer__Char_18 == mercury__lexer__QuoteChar_12);
        if (mercury__lexer__succeeded)
          {
            MR_Word mercury__lexer__STATE_VARIABLE_RevChars_23_23;

            {
              mercury__lexer__STATE_VARIABLE_RevChars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_23_23, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_18));
              MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_23_23, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_19));
            }
            {
              mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_23_23, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_22_22, mercury__lexer__STATE_VARIABLE_Posn_21);
            }
          }
        else
          {
            MR_Integer mercury__lexer__V_50_50;
            MR_Integer mercury__lexer__V_51_51;
            MR_String mercury__lexer__String_55;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_10, mercury__lexer__STATE_VARIABLE_Posn_22_22, mercury__lexer__STATE_VARIABLE_Posn_21);
            }
            *mercury__lexer__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 0)));
            mercury__lexer__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 1)));
            mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 2)));
            {
              mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_19, &mercury__lexer__String_55);
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__QuoteChar_12 == (MR_Char) 39);
                if (mercury__lexer__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_15 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__String_55));
                  }
                else
                  {
                    mercury__lexer__succeeded = (mercury__lexer__QuoteChar_12 == (MR_Char) 34);
                    if (mercury__lexer__succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__lexer__Token_15 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__String_55));
                      }
                    else
                      {
                        {
                          mercury__require__error_1_p_0((MR_String) "lexer.m: unknown quote character");
                          return;
                        }
                      }
                  }
              }
            else
              {
                *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[9]);
              }
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_66_66;
        MR_Integer mercury__lexer__V_67_67;
        MR_String mercury__lexer__String_71;

        *mercury__lexer__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 0)));
        mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 1)));
        mercury__lexer__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_21 = mercury__lexer__STATE_VARIABLE_Posn_0_20;
        {
          mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_19, &mercury__lexer__String_71);
        }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__QuoteChar_12 == (MR_Char) 39);
            if (mercury__lexer__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_15 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__String_71));
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__QuoteChar_12 == (MR_Char) 34);
                if (mercury__lexer__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_15 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__String_71));
                  }
                else
                  {
                    {
                      mercury__require__error_1_p_0((MR_String) "lexer.m: unknown quote character");
                      return;
                    }
                  }
              }
          }
        else
          {
            *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[9]);
          }
      }
  }
}

static void MR_CALL 
mercury__lexer__get_quoted_name_quote_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_12;
    MR_Char mercury__lexer__Char_13;
    MR_Integer mercury__lexer__V_10_34;
    MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_7;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_quote_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_13 = mercury__lexer__V_11_37;
          }
        else
          {
            MR_String mercury__lexer__V_12_39;
            MR_Word mercury__lexer__V_19_40;
            MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_quote_6_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_quote_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
            mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
            {
              mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, 0) = ((MR_Box) (mercury__lexer__V_19_40));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__lexer__succeeded = (mercury__lexer__Char_13 == mercury__lexer__QuoteChar_8);
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_19_24;

                  {
                    mercury__lexer__STATE_VARIABLE_RevChars_19_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_19_24, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                    MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_19_24, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_15));
                  }
                  {
                    mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_19_24, mercury__lexer__Token_10);
                  }
                }
              else
                {
                  MR_Box mercury__lexer__V_5_67 = (MR_Box) mercury__lexer__Stream_7;
                  MR_String mercury__lexer__String_71;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_67, mercury__lexer__Char_13);
                  }
                  {
                    mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__String_71);
                  }
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__succeeded = (mercury__lexer__QuoteChar_8 == (MR_Char) 39);
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__String_71));
                        }
                      else
                        {
                          mercury__lexer__succeeded = (mercury__lexer__QuoteChar_8 == (MR_Char) 34);
                          if (mercury__lexer__succeeded)
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__lexer__Token_10 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__String_71));
                            }
                          else
                            {
                              {
                                mercury__require__error_1_p_0((MR_String) "lexer.m: unknown quote character");
                                return;
                              }
                            }
                        }
                    }
                  else
                    {
                      *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[9]);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__lexer__String_59;

              {
                mercury__lexer__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__String_59);
              }
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__succeeded = (mercury__lexer__QuoteChar_8 == (MR_Char) 39);
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__String_59));
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__QuoteChar_8 == (MR_Char) 34);
                      if (mercury__lexer__succeeded)
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_10 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__String_59));
                        }
                      else
                        {
                          {
                            mercury__require__error_1_p_0((MR_String) "lexer.m: unknown quote character");
                            return;
                          }
                        }
                    }
                }
              else
                {
                  *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[9]);
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_14));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_get_quoted_name_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_19,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_20,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_21)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_18;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_22_22;
        MR_Integer mercury__lexer__LineNum0_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_20, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_42;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_41 < mercury__lexer__Len_11);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_quoted_name_9_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_10 ;
	Index =  mercury__lexer__Offset0_41 ;
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
	 mercury__lexer__Offset_42  = NextIndex;
	 mercury__lexer__Char_18  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_43 = (mercury__lexer__LineNum0_39 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 0) = ((MR_Box) (mercury__lexer__LineNum_43));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 1) = ((MR_Box) (mercury__lexer__Offset_42));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 2) = ((MR_Box) (mercury__lexer__Offset_42));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 0) = ((MR_Box) (mercury__lexer__LineNum0_39));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 1) = ((MR_Box) (mercury__lexer__LineOffset0_40));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_22_22, 2) = ((MR_Box) (mercury__lexer__Offset_42));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_18 == mercury__lexer__QuoteChar_12);
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_quoted_name_quote_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_19, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_22_22, mercury__lexer__STATE_VARIABLE_Posn_21);
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_18 == (MR_Char) 92);
                if (mercury__lexer__succeeded)
                  {
                    mercury__lexer__string_get_quoted_name_escape_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_19, mercury__lexer__Posn0_14, mercury__lexer__Token_15, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_22_22, mercury__lexer__STATE_VARIABLE_Posn_21);
                  }
                else
                  {
                    MR_Word mercury__lexer__STATE_VARIABLE_RevChars_25_30;

                    {
                      mercury__lexer__STATE_VARIABLE_RevChars_25_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_25_30, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_18));
                      MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_25_30, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_19));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_19 = mercury__lexer__STATE_VARIABLE_RevChars_25_30;
                      MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_20 = mercury__lexer__STATE_VARIABLE_Posn_22_22;

                      mercury__lexer__STATE_VARIABLE_Posn_0_20 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_20;
                      mercury__lexer__STATE_VARIABLE_RevChars_0_19 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_19;
                    }
                    continue;
                  }
              }
          }
        else
          {
            MR_Integer mercury__lexer__V_52_52;
            MR_Integer mercury__lexer__V_53_53;

            *mercury__lexer__Context_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 0)));
            mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 1)));
            mercury__lexer__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_14, (MR_Integer) 2)));
            *mercury__lexer__STATE_VARIABLE_Posn_21 = mercury__lexer__STATE_VARIABLE_Posn_0_20;
            *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_quoted_name_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_12;
        MR_Char mercury__lexer__Char_13;
        MR_Integer mercury__lexer__V_10_38;
        MR_Box mercury__lexer__V_5_49 = (MR_Box) mercury__lexer__Stream_7;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_49, &mercury__lexer__V_10_38);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_38 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_41;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_38 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_41  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_13 = mercury__lexer__V_11_41;
              }
            else
              {
                MR_String mercury__lexer__V_12_43;
                MR_Word mercury__lexer__V_19_44;
                MR_Box mercury__lexer__V_8_56;

{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_6_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_56 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_quoted_name_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_56 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_43  = Msg;
}
                mercury__lexer__V_19_44 = (MR_Word) mercury__lexer__V_12_43;
                {
                  mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, 0) = ((MR_Box) (mercury__lexer__V_19_44));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_13 == mercury__lexer__QuoteChar_8);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__get_quoted_name_quote_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_15, mercury__lexer__Token_10);
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_13 == (MR_Char) 92);
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__get_quoted_name_escape_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_15, mercury__lexer__Token_10);
                        }
                      else
                        {
                          MR_Word mercury__lexer__STATE_VARIABLE_RevChars_21_29;

                          {
                            mercury__lexer__STATE_VARIABLE_RevChars_21_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_21_29, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                            MR_hl_field(MR_mktag(1), mercury__lexer__STATE_VARIABLE_RevChars_21_29, 1) = ((MR_Box) (mercury__lexer__STATE_VARIABLE_RevChars_0_15));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_15 = mercury__lexer__STATE_VARIABLE_RevChars_21_29;

                            mercury__lexer__STATE_VARIABLE_RevChars_0_15 = mercury__lexer__STATE_VARIABLE_RevChars_0__tmp_copy_15;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_14));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_start_quoted_name_9_p_0(
  MR_String mercury__lexer__String_10,
  MR_Integer mercury__lexer__Len_11,
  MR_Char mercury__lexer__QuoteChar_12,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_22,
  MR_Word mercury__lexer__Posn0_14,
  MR_Word * mercury__lexer__Token_15,
  MR_Integer * mercury__lexer__Context_16,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Token0_18;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_25_25;
    MR_String mercury__lexer__V_19_19;

    {
      mercury__lexer__string_get_quoted_name_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_22, mercury__lexer__Posn0_14, &mercury__lexer__Token0_18, mercury__lexer__Context_16, mercury__lexer__STATE_VARIABLE_Posn_0_23, &mercury__lexer__STATE_VARIABLE_Posn_25_25);
    }
    mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__Token0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_18, (MR_Integer) 1)));
        {
          MR_Word mercury__lexer__V_20_20;
          MR_Integer mercury__lexer__V_21_21;

          {
            mercury__lexer__string_start_quoted_name_9_p_0(mercury__lexer__String_10, mercury__lexer__Len_11, mercury__lexer__QuoteChar_12, mercury__lexer__STATE_VARIABLE_RevChars_0_22, mercury__lexer__Posn0_14, &mercury__lexer__V_20_20, &mercury__lexer__V_21_21, mercury__lexer__STATE_VARIABLE_Posn_25_25, mercury__lexer__STATE_VARIABLE_Posn_24);
          }
          *mercury__lexer__Token_15 = mercury__lexer__Token0_18;
        }
      }
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Token0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
        if (mercury__lexer__succeeded)
          {
            *mercury__lexer__Token_15 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[8]);
          }
        else
          *mercury__lexer__Token_15 = mercury__lexer__Token0_18;
        *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_25_25;
      }
  }
}

static void MR_CALL 
mercury__lexer__start_quoted_name_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Char mercury__lexer__QuoteChar_8,
  MR_Word mercury__lexer__STATE_VARIABLE_RevChars_0_15,
  MR_Word * mercury__lexer__Token_10)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Token0_12;
    MR_String mercury__lexer__V_13_13;

    {
      mercury__lexer__get_quoted_name_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__Token0_12);
    }
    mercury__lexer__succeeded = ((((MR_tag((MR_Word) mercury__lexer__Token0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_12, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_12, (MR_Integer) 1)));
        {
          MR_Word mercury__lexer__V_14_14;

          {
            mercury__lexer__start_quoted_name_6_p_0(mercury__lexer__Stream_7, mercury__lexer__QuoteChar_8, mercury__lexer__STATE_VARIABLE_RevChars_0_15, &mercury__lexer__V_14_14);
          }
          *mercury__lexer__Token_10 = mercury__lexer__Token0_12;
        }
      }
    else
      {
        mercury__lexer__succeeded = (mercury__lexer__Token0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
        if (mercury__lexer__succeeded)
          {
            *mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[8]);
          }
        else
          *mercury__lexer__Token_10 = mercury__lexer__Token0_12;
      }
  }
}

static void MR_CALL 
mercury__lexer__string_get_comment_2_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_17_17;
        MR_Integer mercury__lexer__LineNum0_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_30;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_29 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_comment_2_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_29 ;
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
	 mercury__lexer__Offset_30  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_31 = (mercury__lexer__LineNum0_27 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum_31));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__Offset_30));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_30));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum0_27));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__LineOffset0_28));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_30));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 47);
            if (mercury__lexer__succeeded)
              {
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                *mercury__lexer__HaveToken_12 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_17_17;
              }
            else
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 42);
                if (mercury__lexer__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_15 = mercury__lexer__STATE_VARIABLE_Posn_17_17;

                      mercury__lexer__STATE_VARIABLE_Posn_0_15 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_15;
                    }
                    continue;
                  }
                else
                  {
                    mercury__lexer__string_get_comment_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__HaveToken_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                  }
              }
          }
        else
          {
            MR_Integer mercury__lexer__Context_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));

            *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_0_15;
            *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_40;
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[7]);
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_comment_2_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_26;
        MR_Box mercury__lexer__V_5_37 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_37, &mercury__lexer__V_10_26);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_26 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_29;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_2_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_26 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_29  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_29;
              }
            else
              {
                MR_String mercury__lexer__V_12_31;
                MR_Word mercury__lexer__V_19_32;
                MR_Box mercury__lexer__V_8_44;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_2_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_44 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_comment_2_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_44 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_31  = Msg;
}
                mercury__lexer__V_19_32 = (MR_Word) mercury__lexer__V_12_31;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_32));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 47);
                  if (mercury__lexer__succeeded)
                    {
                      *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                      *mercury__lexer__HaveToken_8 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                    }
                  else
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 42);
                      if (mercury__lexer__succeeded)
                        {
                          /* direct tailcall eliminated */
                          continue;
                        }
                      else
                        {
                          mercury__lexer__get_comment_5_p_0(mercury__lexer__Stream_6, mercury__lexer__Token_7, mercury__lexer__HaveToken_8);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__lexer__Context_51;
                  MR_Box mercury__lexer__V_5_63 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_63 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_51  = LineNum;
}
                  *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_51;
                  *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[7]);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));
              MR_Integer mercury__lexer__Context_67;
              MR_Box mercury__lexer__V_5_79 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_2_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_79 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_67  = LineNum;
}
              *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_67;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_7 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_comment_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_14;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_17_17;
        MR_Integer mercury__lexer__LineNum0_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_30;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_29 < mercury__lexer__Len_9);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_get_comment_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_29 ;
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
	 mercury__lexer__Offset_30  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_31 = (mercury__lexer__LineNum0_27 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum_31));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__Offset_30));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_30));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum0_27));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__LineOffset0_28));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_30));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 42);
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_comment_2_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__HaveToken_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_15 = mercury__lexer__STATE_VARIABLE_Posn_17_17;

                  mercury__lexer__STATE_VARIABLE_Posn_0_15 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_15;
                }
                continue;
              }
          }
        else
          {
            MR_Integer mercury__lexer__Context_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));

            *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_0_15;
            *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_37;
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[7]);
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__get_comment_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_26;
        MR_Box mercury__lexer__V_5_37 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_37, &mercury__lexer__V_10_26);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_26 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_29;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_26 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_29  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_29;
              }
            else
              {
                MR_String mercury__lexer__V_12_31;
                MR_Word mercury__lexer__V_19_32;
                MR_Box mercury__lexer__V_8_44;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_44 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_comment_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_44 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_31  = Msg;
}
                mercury__lexer__V_19_32 = (MR_Word) mercury__lexer__V_12_31;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_32));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 42);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__get_comment_2_5_p_0(mercury__lexer__Stream_6, mercury__lexer__Token_7, mercury__lexer__HaveToken_8);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      continue;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__lexer__Context_51;
                  MR_Box mercury__lexer__V_5_63 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_63 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_51  = LineNum;
}
                  *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_51;
                  *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__lexer_scalar_common_7[7]);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));
              MR_Integer mercury__lexer__Context_67;
              MR_Box mercury__lexer__V_5_79 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_comment_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_79 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_67  = LineNum;
}
              *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_67;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_7 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_slash_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Word * mercury__lexer__HaveToken_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_16,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_17)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_14;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_18_18;
    MR_Integer mercury__lexer__LineNum0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_16, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_34;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_33 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_slash_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_33 ;
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
	 mercury__lexer__Offset_34  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_35 = (mercury__lexer__LineNum0_31 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum_35));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__Offset_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 0) = ((MR_Box) (mercury__lexer__LineNum0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 1) = ((MR_Box) (mercury__lexer__LineOffset0_32));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_18_18, 2) = ((MR_Box) (mercury__lexer__Offset_34));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 42);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__string_get_comment_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__HaveToken_12, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
          }
        else
          {
            switch (mercury__lexer__Char_14) {
              default:
                mercury__lexer__succeeded = MR_FALSE;
                break;
              case (MR_Char) 33:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 35:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 36:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 38:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 42:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 43:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 45:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 46:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 47:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 58:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 60:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 61:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 62:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 63:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 64:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 92:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 94:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 126:
                mercury__lexer__succeeded = MR_TRUE;
                break;
            }
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__Context_15;

                {
                  mercury__lexer__string_get_graphic_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, &mercury__lexer__Context_15, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_15;
              }
            else
              {
                MR_Integer mercury__lexer__Context_41;
                MR_Integer mercury__lexer__V_50_50;
                MR_Integer mercury__lexer__V_51_51;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_18_18, mercury__lexer__STATE_VARIABLE_Posn_17);
                }
                mercury__lexer__Context_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_41;
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[3]);
              }
          }
      }
    else
      {
        MR_Integer mercury__lexer__Context_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        MR_Integer mercury__lexer__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        MR_Integer mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));

        *mercury__lexer__STATE_VARIABLE_Posn_17 = mercury__lexer__STATE_VARIABLE_Posn_0_16;
        *mercury__lexer__HaveToken_12 = (MR_Word) mercury__lexer__Context_55;
        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[3]);
      }
  }
}

static void MR_CALL 
mercury__lexer__get_slash_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_10;
    MR_Char mercury__lexer__Char_11;
    MR_Integer mercury__lexer__V_10_34;
    MR_Box mercury__lexer__V_5_45 = (MR_Box) mercury__lexer__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_45, &mercury__lexer__V_10_34);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_34 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_37;

{
#define MR_PROC_LABEL mercury__lexer__get_slash_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_34 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_37  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_11 = mercury__lexer__V_11_37;
          }
        else
          {
            MR_String mercury__lexer__V_12_39;
            MR_Word mercury__lexer__V_19_40;
            MR_Box mercury__lexer__V_8_52;

{
#define MR_PROC_LABEL mercury__lexer__get_slash_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_52 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_slash_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_52 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_39  = Msg;
}
            mercury__lexer__V_19_40 = (MR_Word) mercury__lexer__V_12_39;
            {
              mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_40));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 42);
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__get_comment_5_p_0(mercury__lexer__Stream_6, mercury__lexer__Token_7, mercury__lexer__HaveToken_8);
                }
              else
                {
                  switch (mercury__lexer__Char_11) {
                    default:
                      mercury__lexer__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 33:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 35:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 36:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 38:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 42:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 43:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 45:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 46:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 47:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 58:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 60:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 61:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 62:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 63:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 64:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 92:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 94:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 126:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__V_17_17;
                      MR_Word mercury__lexer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[6]);
                      MR_Word mercury__lexer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                      {
                        mercury__lexer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_17_17, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_11));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_17_17, 1) = ((MR_Box) (mercury__lexer__V_19_19));
                      }
                      {
                        mercury__lexer__get_graphic_5_p_0(mercury__lexer__Stream_6, mercury__lexer__V_17_17, mercury__lexer__Token_7);
                      }
                      {
                        mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_6, mercury__lexer__HaveToken_8);
                      }
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_91 = (MR_Box) mercury__lexer__Stream_6;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_91, mercury__lexer__Char_11);
                      }
                      {
                        mercury__lexer__have_token_4_p_0(mercury__lexer__Stream_6, mercury__lexer__HaveToken_8);
                      }
                      *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[3]);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mercury__lexer__Context_59;
              MR_Box mercury__lexer__V_5_71 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_slash_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_71 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_59  = LineNum;
}
              *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_59;
              *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[3]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));
          MR_Integer mercury__lexer__Context_75;
          MR_Box mercury__lexer__V_5_87 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_slash_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_87 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_75  = LineNum;
}
          *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_75;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_7 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__string_skip_to_eol_6_p_0(
  MR_String mercury__lexer__String_7,
  MR_Integer mercury__lexer__Len_8,
  MR_Word * mercury__lexer__Token_9,
  MR_Word * mercury__lexer__HaveToken_10,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_13,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Char mercury__lexer__Char_12;
        MR_Word mercury__lexer__STATE_VARIABLE_Posn_15_15;
        MR_Integer mercury__lexer__LineNum0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 0)));
        MR_Integer mercury__lexer__LineOffset0_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 1)));
        MR_Integer mercury__lexer__Offset0_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 2)));
        MR_Integer mercury__lexer__Offset_27;

        mercury__lexer__succeeded = (mercury__lexer__Offset0_26 < mercury__lexer__Len_8);
        if (mercury__lexer__succeeded)
          {
{
#define MR_PROC_LABEL mercury__lexer__string_skip_to_eol_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_7 ;
	Index =  mercury__lexer__Offset0_26 ;
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
	 mercury__lexer__Offset_27  = NextIndex;
	 mercury__lexer__Char_12  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__succeeded = (mercury__lexer__Char_12 == (MR_Char) 10);
                if (mercury__lexer__succeeded)
                  {
                    MR_Integer mercury__lexer__LineNum_28 = (mercury__lexer__LineNum0_24 + (MR_Integer) 1);

                    {
                      mercury__lexer__STATE_VARIABLE_Posn_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 0) = ((MR_Box) (mercury__lexer__LineNum_28));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 1) = ((MR_Box) (mercury__lexer__Offset_27));
                      MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 2) = ((MR_Box) (mercury__lexer__Offset_27));
                    }
                  }
                else
                  {
                    mercury__lexer__STATE_VARIABLE_Posn_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 0) = ((MR_Box) (mercury__lexer__LineNum0_24));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 1) = ((MR_Box) (mercury__lexer__LineOffset0_25));
                    MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_15_15, 2) = ((MR_Box) (mercury__lexer__Offset_27));
                  }
                mercury__lexer__succeeded = MR_TRUE;
              }
          }
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_12 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                *mercury__lexer__HaveToken_10 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                *mercury__lexer__STATE_VARIABLE_Posn_14 = mercury__lexer__STATE_VARIABLE_Posn_15_15;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_Posn_15_15;

                  mercury__lexer__STATE_VARIABLE_Posn_0_13 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_13;
                }
                continue;
              }
          }
        else
          {
            MR_Integer mercury__lexer__Context_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 0)));
            MR_Integer mercury__lexer__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 1)));
            MR_Integer mercury__lexer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_13, (MR_Integer) 2)));

            *mercury__lexer__STATE_VARIABLE_Posn_14 = mercury__lexer__STATE_VARIABLE_Posn_0_13;
            *mercury__lexer__HaveToken_10 = (MR_Word) mercury__lexer__Context_37;
            *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__skip_to_eol_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Word * mercury__lexer__HaveToken_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;
        MR_Word mercury__lexer__Result_10;
        MR_Char mercury__lexer__Char_11;
        MR_Integer mercury__lexer__V_10_24;
        MR_Box mercury__lexer__V_5_35 = (MR_Box) mercury__lexer__Stream_6;

        {
          mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_35, &mercury__lexer__V_10_24);
        }
        mercury__lexer__succeeded = (mercury__lexer__V_10_24 == (MR_Integer) -1);
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
            }
          }
        else
          {
            MR_Char mercury__lexer__V_11_27;

{
#define MR_PROC_LABEL mercury__lexer__skip_to_eol_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_24 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_27  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__lexer__Char_11 = mercury__lexer__V_11_27;
              }
            else
              {
                MR_String mercury__lexer__V_12_29;
                MR_Word mercury__lexer__V_19_30;
                MR_Box mercury__lexer__V_8_42;

{
#define MR_PROC_LABEL mercury__lexer__skip_to_eol_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_42 );
}
{
#define MR_PROC_LABEL mercury__lexer__skip_to_eol_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_42 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_29  = Msg;
}
                mercury__lexer__V_19_30 = (MR_Word) mercury__lexer__V_12_29;
                {
                  mercury__lexer__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, 0) = ((MR_Box) (mercury__lexer__V_19_30));
                }
                {
                  mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_11);
                }
              }
          }
        switch (MR_tag((MR_Word) mercury__lexer__Result_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__lexer__Result_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 10);
                  if (mercury__lexer__succeeded)
                    {
                      *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                      *mercury__lexer__HaveToken_8 = (MR_Word) ((MR_Box) ((MR_Integer) -1));
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      continue;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__lexer__Context_49;
                  MR_Box mercury__lexer__V_5_61 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__skip_to_eol_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_61 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_49  = LineNum;
}
                  *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_49;
                  *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_10, (MR_Integer) 0)));
              MR_Integer mercury__lexer__Context_65;
              MR_Box mercury__lexer__V_5_77 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__skip_to_eol_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_77 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_65  = LineNum;
}
              *mercury__lexer__HaveToken_8 = (MR_Word) mercury__lexer__Context_65;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Token_7 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_12));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__lexer__string_get_dot_7_p_0(
  MR_String mercury__lexer__String_8,
  MR_Integer mercury__lexer__Len_9,
  MR_Word mercury__lexer__Posn0_10,
  MR_Word * mercury__lexer__Token_11,
  MR_Integer * mercury__lexer__Context_12,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_15,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_16)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Char mercury__lexer__Char_14;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_17_17;
    MR_Integer mercury__lexer__LineNum0_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_15, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_33;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_32 < mercury__lexer__Len_9);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_dot_7_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_8 ;
	Index =  mercury__lexer__Offset0_32 ;
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
	 mercury__lexer__Offset_33  = NextIndex;
	 mercury__lexer__Char_14  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_34 = (mercury__lexer__LineNum0_30 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum_34));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__Offset_33));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_33));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 0) = ((MR_Box) (mercury__lexer__LineNum0_30));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 1) = ((MR_Box) (mercury__lexer__LineOffset0_31));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_17_17, 2) = ((MR_Box) (mercury__lexer__Offset_33));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        {
          mercury__lexer__succeeded = mercury__char__is_whitespace_1_p_0(mercury__lexer__Char_14);
        }
        if (!(mercury__lexer__succeeded))
          mercury__lexer__succeeded = (mercury__lexer__Char_14 == (MR_Char) 37);
        if (mercury__lexer__succeeded)
          {
            MR_Integer mercury__lexer__V_44_44;
            MR_Integer mercury__lexer__V_45_45;

            {
              mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
            }
            *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
            mercury__lexer__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
            mercury__lexer__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
            *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
          }
        else
          {
            switch (mercury__lexer__Char_14) {
              default:
                mercury__lexer__succeeded = MR_FALSE;
                break;
              case (MR_Char) 33:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 35:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 36:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 38:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 42:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 43:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 45:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 46:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 47:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 58:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 60:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 61:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 62:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 63:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 64:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 92:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 94:
                mercury__lexer__succeeded = MR_TRUE;
                break;
              case (MR_Char) 126:
                mercury__lexer__succeeded = MR_TRUE;
                break;
            }
            if (mercury__lexer__succeeded)
              {
                mercury__lexer__string_get_graphic_7_p_0(mercury__lexer__String_8, mercury__lexer__Len_9, mercury__lexer__Posn0_10, mercury__lexer__Token_11, mercury__lexer__Context_12, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
              }
            else
              {
                MR_Integer mercury__lexer__V_52_52;
                MR_Integer mercury__lexer__V_53_53;

                {
                  mercury__lexer__string_ungetchar_3_p_0(mercury__lexer__String_8, mercury__lexer__STATE_VARIABLE_Posn_17_17, mercury__lexer__STATE_VARIABLE_Posn_16);
                }
                *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
                mercury__lexer__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
                mercury__lexer__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
                *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[2]);
              }
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_60_60;
        MR_Integer mercury__lexer__V_61_61;

        *mercury__lexer__Context_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 0)));
        mercury__lexer__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 1)));
        mercury__lexer__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_10, (MR_Integer) 2)));
        *mercury__lexer__STATE_VARIABLE_Posn_16 = mercury__lexer__STATE_VARIABLE_Posn_0_15;
        *mercury__lexer__Token_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
      }
  }
}

static void MR_CALL 
mercury__lexer__get_dot_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__Token_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_8;
    MR_Char mercury__lexer__Char_9;
    MR_Integer mercury__lexer__V_10_27;
    MR_Box mercury__lexer__V_5_38 = (MR_Box) mercury__lexer__Stream_5;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_38, &mercury__lexer__V_10_27);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_27 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_30;

{
#define MR_PROC_LABEL mercury__lexer__get_dot_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_27 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_30  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_9 = mercury__lexer__V_11_30;
          }
        else
          {
            MR_String mercury__lexer__V_12_32;
            MR_Word mercury__lexer__V_19_33;
            MR_Box mercury__lexer__V_8_45;

{
#define MR_PROC_LABEL mercury__lexer__get_dot_4_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_45 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_dot_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_45 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_32  = Msg;
}
            mercury__lexer__V_19_33 = (MR_Word) mercury__lexer__V_12_32;
            {
              mercury__lexer__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, 0) = ((MR_Box) (mercury__lexer__V_19_33));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_9);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__lexer__succeeded = mercury__char__is_whitespace_1_p_0(mercury__lexer__Char_9);
              }
              if (!(mercury__lexer__succeeded))
                mercury__lexer__succeeded = (mercury__lexer__Char_9 == (MR_Char) 37);
              if (mercury__lexer__succeeded)
                {
                  MR_Box mercury__lexer__V_5_53 = (MR_Box) mercury__lexer__Stream_5;

                  {
                    mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_53, mercury__lexer__Char_9);
                  }
                  *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
                }
              else
                {
                  switch (mercury__lexer__Char_9) {
                    default:
                      mercury__lexer__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 33:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 35:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 36:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 38:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 42:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 43:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 45:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 46:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 47:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 58:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 60:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 61:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 62:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 63:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 64:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 92:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 94:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                    case (MR_Char) 126:
                      mercury__lexer__succeeded = MR_TRUE;
                      break;
                  }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__V_15_15;
                      MR_Word mercury__lexer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[5]);
                      MR_Word mercury__lexer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                      {
                        mercury__lexer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_15_15, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_9));
                        MR_hl_field(MR_mktag(1), mercury__lexer__V_15_15, 1) = ((MR_Box) (mercury__lexer__V_17_17));
                      }
                      {
                        mercury__lexer__get_graphic_5_p_0(mercury__lexer__Stream_5, mercury__lexer__V_15_15, mercury__lexer__Token_6);
                      }
                    }
                  else
                    {
                      MR_Box mercury__lexer__V_5_57 = (MR_Box) mercury__lexer__Stream_5;

                      {
                        mercury__io__putback_char_2_4_p_0(mercury__lexer__V_5_57, mercury__lexer__Char_9);
                      }
                      *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[2]);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            *mercury__lexer__Token_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_10));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__execute_string_get_token_action_10_p_0(
  MR_String mercury__lexer__String_11,
  MR_Integer mercury__lexer__Len_12,
  MR_Word mercury__lexer__Posn0_13,
  MR_Char mercury__lexer__Char_14,
  MR_Word mercury__lexer__Action_15,
  MR_Word mercury__lexer__ScannedPastWhiteSpace_16,
  MR_Word * mercury__lexer__Token_17,
  MR_Integer * mercury__lexer__Context_18,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_23,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;

        switch (mercury__lexer__Action_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__lexer__string_get_name_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__lexer__string_get_variable_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer mercury__lexer__V_65_65;
              MR_Integer mercury__lexer__V_66_66;

              *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_13, (MR_Integer) 0)));
              mercury__lexer__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_13, (MR_Integer) 1)));
              mercury__lexer__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_13, (MR_Integer) 2)));
              *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_0_23;
              *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[0]);
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__lexer__string_get_implementation_defined_literal_rest_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__lexer__string_get_dot_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__lexer__string_get_graphic_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word mercury__lexer__STATE_VARIABLE_Posn_30_30;
              MR_Word mercury__lexer__Token0_48;
              MR_Word mercury__lexer__HaveToken0_49;
              MR_Integer mercury__lexer__Context0_47;

              {
                mercury__lexer__string_get_source_line_number_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__STATE_VARIABLE_Posn_0_23, &mercury__lexer__Token0_48, &mercury__lexer__HaveToken0_49, mercury__lexer__STATE_VARIABLE_Posn_0_23, &mercury__lexer__STATE_VARIABLE_Posn_30_30);
              }
              mercury__lexer__Context0_47 = (MR_Integer) mercury__lexer__HaveToken0_49;
              mercury__lexer__succeeded = (mercury__lexer__Context0_47 == (MR_Integer) -1);
              mercury__lexer__succeeded = !(mercury__lexer__succeeded);
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_17 = mercury__lexer__Token0_48;
                  *mercury__lexer__Context_18 = mercury__lexer__Context0_47;
                  *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_30_30;
                }
              else
                {
                  MR_Char mercury__lexer__Char_77;
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_79;
                  MR_Integer mercury__lexer__LineNum0_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 0)));
                  MR_Integer mercury__lexer__LineOffset0_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 1)));
                  MR_Integer mercury__lexer__Offset0_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 2)));
                  MR_Integer mercury__lexer__Offset_91;

                  mercury__lexer__succeeded = (mercury__lexer__Offset0_90 < mercury__lexer__Len_12);
                  if (mercury__lexer__succeeded)
                    {
{
#define MR_PROC_LABEL mercury__lexer__execute_string_get_token_action_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_90 ;
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
	 mercury__lexer__Offset_91  = NextIndex;
	 mercury__lexer__Char_77  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__succeeded = (mercury__lexer__Char_77 == (MR_Char) 10);
                          if (mercury__lexer__succeeded)
                            {
                              MR_Integer mercury__lexer__LineNum_92 = (mercury__lexer__LineNum0_88 + (MR_Integer) 1);

                              {
                                mercury__lexer__STATE_VARIABLE_Posn_19_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 0) = ((MR_Box) (mercury__lexer__LineNum_92));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 1) = ((MR_Box) (mercury__lexer__Offset_91));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 2) = ((MR_Box) (mercury__lexer__Offset_91));
                              }
                            }
                          else
                            {
                              mercury__lexer__STATE_VARIABLE_Posn_19_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 0) = ((MR_Box) (mercury__lexer__LineNum0_88));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 1) = ((MR_Box) (mercury__lexer__LineOffset0_89));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_79, 2) = ((MR_Box) (mercury__lexer__Offset_91));
                            }
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                    }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__Action_78;

                      if ((((MR_Unsigned) (mercury__lexer__Char_77 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                        if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_77 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_77 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                          {
                            mercury__lexer__Action_78 = ((&mercury__lexer_vector_common_4[944 + (mercury__lexer__Char_77 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                            mercury__lexer__succeeded = MR_TRUE;
                          }
                        else
                          mercury__lexer__succeeded = MR_FALSE;
                      else
                        mercury__lexer__succeeded = MR_FALSE;
                      if (mercury__lexer__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__lexer__Posn0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_Posn_30_30;
                            MR_Char mercury__lexer__Char__tmp_copy_14 = mercury__lexer__Char_77;
                            MR_Word mercury__lexer__Action__tmp_copy_15 = mercury__lexer__Action_78;
                            MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_19_79;

                            mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                            mercury__lexer__ScannedPastWhiteSpace_16 = (MR_Integer) 1;
                            mercury__lexer__Action_15 = mercury__lexer__Action__tmp_copy_15;
                            mercury__lexer__Char_14 = mercury__lexer__Char__tmp_copy_14;
                            mercury__lexer__Posn0_13 = mercury__lexer__Posn0__tmp_copy_13;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Integer mercury__lexer__V_103_103;
                          MR_Integer mercury__lexer__V_104_104;

                          *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 0)));
                          mercury__lexer__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 1)));
                          mercury__lexer__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 2)));
                          *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_19_79;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__lexer__Token_17 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_77));
                          }
                        }
                    }
                  else
                    {
                      MR_Integer mercury__lexer__V_111_111;
                      MR_Integer mercury__lexer__V_112_112;

                      *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 0)));
                      mercury__lexer__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 1)));
                      mercury__lexer__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_30_30, (MR_Integer) 2)));
                      *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_30_30;
                      *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                    }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__lexer__string_get_number_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word mercury__lexer__Token0_20;
              MR_Word mercury__lexer__HaveToken0_21;
              MR_Word mercury__lexer__STATE_VARIABLE_Posn_34_34;
              MR_Integer mercury__lexer__Context0_22;

              {
                mercury__lexer__string_skip_to_eol_6_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, &mercury__lexer__Token0_20, &mercury__lexer__HaveToken0_21, mercury__lexer__STATE_VARIABLE_Posn_0_23, &mercury__lexer__STATE_VARIABLE_Posn_34_34);
              }
              {
                mercury__lexer__succeeded = mercury__lexer__have_token_with_context_2_p_0(mercury__lexer__HaveToken0_21, &mercury__lexer__Context0_22);
              }
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_17 = mercury__lexer__Token0_20;
                  *mercury__lexer__Context_18 = mercury__lexer__Context0_22;
                  *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_34_34;
                }
              else
                {
                  MR_Char mercury__lexer__Char_122;
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_124;
                  MR_Integer mercury__lexer__LineNum0_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 0)));
                  MR_Integer mercury__lexer__LineOffset0_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 1)));
                  MR_Integer mercury__lexer__Offset0_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 2)));
                  MR_Integer mercury__lexer__Offset_136;

                  mercury__lexer__succeeded = (mercury__lexer__Offset0_135 < mercury__lexer__Len_12);
                  if (mercury__lexer__succeeded)
                    {
{
#define MR_PROC_LABEL mercury__lexer__execute_string_get_token_action_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_135 ;
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
	 mercury__lexer__Offset_136  = NextIndex;
	 mercury__lexer__Char_122  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__succeeded = (mercury__lexer__Char_122 == (MR_Char) 10);
                          if (mercury__lexer__succeeded)
                            {
                              MR_Integer mercury__lexer__LineNum_137 = (mercury__lexer__LineNum0_133 + (MR_Integer) 1);

                              {
                                mercury__lexer__STATE_VARIABLE_Posn_19_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 0) = ((MR_Box) (mercury__lexer__LineNum_137));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 1) = ((MR_Box) (mercury__lexer__Offset_136));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 2) = ((MR_Box) (mercury__lexer__Offset_136));
                              }
                            }
                          else
                            {
                              mercury__lexer__STATE_VARIABLE_Posn_19_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 0) = ((MR_Box) (mercury__lexer__LineNum0_133));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 1) = ((MR_Box) (mercury__lexer__LineOffset0_134));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_124, 2) = ((MR_Box) (mercury__lexer__Offset_136));
                            }
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                    }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__Action_123;

                      if ((((MR_Unsigned) (mercury__lexer__Char_122 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                        if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_122 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_122 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                          {
                            mercury__lexer__Action_123 = ((&mercury__lexer_vector_common_4[1062 + (mercury__lexer__Char_122 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                            mercury__lexer__succeeded = MR_TRUE;
                          }
                        else
                          mercury__lexer__succeeded = MR_FALSE;
                      else
                        mercury__lexer__succeeded = MR_FALSE;
                      if (mercury__lexer__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__lexer__Posn0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_Posn_34_34;
                            MR_Char mercury__lexer__Char__tmp_copy_14 = mercury__lexer__Char_122;
                            MR_Word mercury__lexer__Action__tmp_copy_15 = mercury__lexer__Action_123;
                            MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_19_124;

                            mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                            mercury__lexer__ScannedPastWhiteSpace_16 = (MR_Integer) 0;
                            mercury__lexer__Action_15 = mercury__lexer__Action__tmp_copy_15;
                            mercury__lexer__Char_14 = mercury__lexer__Char__tmp_copy_14;
                            mercury__lexer__Posn0_13 = mercury__lexer__Posn0__tmp_copy_13;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Integer mercury__lexer__V_148_148;
                          MR_Integer mercury__lexer__V_149_149;

                          *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 0)));
                          mercury__lexer__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 1)));
                          mercury__lexer__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 2)));
                          *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_19_124;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__lexer__Token_17 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_122));
                          }
                        }
                    }
                  else
                    {
                      MR_Integer mercury__lexer__V_156_156;
                      MR_Integer mercury__lexer__V_157_157;

                      *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 0)));
                      mercury__lexer__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 1)));
                      mercury__lexer__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_34, (MR_Integer) 2)));
                      *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_34_34;
                      *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                    }
                }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word mercury__lexer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__lexer__string_start_quoted_name_9_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Char_14, mercury__lexer__V_37_37, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mercury__lexer__Token0_54;
              MR_Word mercury__lexer__HaveToken0_55;
              MR_Word mercury__lexer__STATE_VARIABLE_Posn_34_57;
              MR_Integer mercury__lexer__Context0_52;

              {
                mercury__lexer__string_get_slash_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, &mercury__lexer__Token0_54, &mercury__lexer__HaveToken0_55, mercury__lexer__STATE_VARIABLE_Posn_0_23, &mercury__lexer__STATE_VARIABLE_Posn_34_57);
              }
              {
                mercury__lexer__succeeded = mercury__lexer__have_token_with_context_2_p_0(mercury__lexer__HaveToken0_55, &mercury__lexer__Context0_52);
              }
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_17 = mercury__lexer__Token0_54;
                  *mercury__lexer__Context_18 = mercury__lexer__Context0_52;
                  *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_34_57;
                }
              else
                {
                  MR_Char mercury__lexer__Char_167;
                  MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_169;
                  MR_Integer mercury__lexer__LineNum0_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 0)));
                  MR_Integer mercury__lexer__LineOffset0_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 1)));
                  MR_Integer mercury__lexer__Offset0_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 2)));
                  MR_Integer mercury__lexer__Offset_181;

                  mercury__lexer__succeeded = (mercury__lexer__Offset0_180 < mercury__lexer__Len_12);
                  if (mercury__lexer__succeeded)
                    {
{
#define MR_PROC_LABEL mercury__lexer__execute_string_get_token_action_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_180 ;
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
	 mercury__lexer__Offset_181  = NextIndex;
	 mercury__lexer__Char_167  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__succeeded = (mercury__lexer__Char_167 == (MR_Char) 10);
                          if (mercury__lexer__succeeded)
                            {
                              MR_Integer mercury__lexer__LineNum_182 = (mercury__lexer__LineNum0_178 + (MR_Integer) 1);

                              {
                                mercury__lexer__STATE_VARIABLE_Posn_19_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 0) = ((MR_Box) (mercury__lexer__LineNum_182));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 1) = ((MR_Box) (mercury__lexer__Offset_181));
                                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 2) = ((MR_Box) (mercury__lexer__Offset_181));
                              }
                            }
                          else
                            {
                              mercury__lexer__STATE_VARIABLE_Posn_19_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 0) = ((MR_Box) (mercury__lexer__LineNum0_178));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 1) = ((MR_Box) (mercury__lexer__LineOffset0_179));
                              MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_169, 2) = ((MR_Box) (mercury__lexer__Offset_181));
                            }
                          mercury__lexer__succeeded = MR_TRUE;
                        }
                    }
                  if (mercury__lexer__succeeded)
                    {
                      MR_Word mercury__lexer__Action_168;

                      if ((((MR_Unsigned) (mercury__lexer__Char_167 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                        if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_167 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_167 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                          {
                            mercury__lexer__Action_168 = ((&mercury__lexer_vector_common_4[1180 + (mercury__lexer__Char_167 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                            mercury__lexer__succeeded = MR_TRUE;
                          }
                        else
                          mercury__lexer__succeeded = MR_FALSE;
                      else
                        mercury__lexer__succeeded = MR_FALSE;
                      if (mercury__lexer__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__lexer__Posn0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_Posn_34_57;
                            MR_Char mercury__lexer__Char__tmp_copy_14 = mercury__lexer__Char_167;
                            MR_Word mercury__lexer__Action__tmp_copy_15 = mercury__lexer__Action_168;
                            MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_19_169;

                            mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                            mercury__lexer__ScannedPastWhiteSpace_16 = (MR_Integer) 0;
                            mercury__lexer__Action_15 = mercury__lexer__Action__tmp_copy_15;
                            mercury__lexer__Char_14 = mercury__lexer__Char__tmp_copy_14;
                            mercury__lexer__Posn0_13 = mercury__lexer__Posn0__tmp_copy_13;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Integer mercury__lexer__V_193_193;
                          MR_Integer mercury__lexer__V_194_194;

                          *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 0)));
                          mercury__lexer__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 1)));
                          mercury__lexer__V_194_194 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 2)));
                          *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_19_169;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__lexer__Token_17 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_167));
                          }
                        }
                    }
                  else
                    {
                      MR_Integer mercury__lexer__V_201_201;
                      MR_Integer mercury__lexer__V_202_202;

                      *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 0)));
                      mercury__lexer__V_201_201 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 1)));
                      mercury__lexer__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_34_57, (MR_Integer) 2)));
                      *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_34_57;
                      *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                    }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mercury__lexer__SpecialToken_206;

              {
                mercury__lexer__string_get_context_4_p_0(mercury__lexer__Posn0_13, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
              }
              switch (mercury__lexer__Char_14) {
                default:
                  mercury__lexer__succeeded = MR_FALSE;
                  break;
                case (MR_Char) 40:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 41:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 44:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 59:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[1]);
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 91:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 93:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 123:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 124:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 125:
                  {
                    mercury__lexer__SpecialToken_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (mercury__lexer__succeeded)
                switch (mercury__lexer__ScannedPastWhiteSpace_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__lexer__succeeded = (mercury__lexer__SpecialToken_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (mercury__lexer__succeeded)
                        *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      else
                        *mercury__lexer__Token_17 = mercury__lexer__SpecialToken_206;
                    }
                    break;
                  case (MR_Integer) 0:
                    *mercury__lexer__Token_17 = mercury__lexer__SpecialToken_206;
                    break;
                }
              else
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "lexer.m, handle_special_token: unknown special token");
                    return;
                  }
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Char mercury__lexer__Char_218;
              MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_220;
              MR_Integer mercury__lexer__LineNum0_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 0)));
              MR_Integer mercury__lexer__LineOffset0_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 1)));
              MR_Integer mercury__lexer__Offset0_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 2)));
              MR_Integer mercury__lexer__Offset_232;

              mercury__lexer__succeeded = (mercury__lexer__Offset0_231 < mercury__lexer__Len_12);
              if (mercury__lexer__succeeded)
                {
{
#define MR_PROC_LABEL mercury__lexer__execute_string_get_token_action_10_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_11 ;
	Index =  mercury__lexer__Offset0_231 ;
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
	 mercury__lexer__Offset_232  = NextIndex;
	 mercury__lexer__Char_218  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__succeeded = (mercury__lexer__Char_218 == (MR_Char) 10);
                      if (mercury__lexer__succeeded)
                        {
                          MR_Integer mercury__lexer__LineNum_233 = (mercury__lexer__LineNum0_229 + (MR_Integer) 1);

                          {
                            mercury__lexer__STATE_VARIABLE_Posn_19_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 0) = ((MR_Box) (mercury__lexer__LineNum_233));
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 1) = ((MR_Box) (mercury__lexer__Offset_232));
                            MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 2) = ((MR_Box) (mercury__lexer__Offset_232));
                          }
                        }
                      else
                        {
                          mercury__lexer__STATE_VARIABLE_Posn_19_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 0) = ((MR_Box) (mercury__lexer__LineNum0_229));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 1) = ((MR_Box) (mercury__lexer__LineOffset0_230));
                          MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_220, 2) = ((MR_Box) (mercury__lexer__Offset_232));
                        }
                      mercury__lexer__succeeded = MR_TRUE;
                    }
                }
              if (mercury__lexer__succeeded)
                {
                  MR_Word mercury__lexer__Action_219;

                  if ((((MR_Unsigned) (mercury__lexer__Char_218 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                    if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_218 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_218 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                      {
                        mercury__lexer__Action_219 = ((&mercury__lexer_vector_common_4[1298 + (mercury__lexer__Char_218 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                        mercury__lexer__succeeded = MR_TRUE;
                      }
                    else
                      mercury__lexer__succeeded = MR_FALSE;
                  else
                    mercury__lexer__succeeded = MR_FALSE;
                  if (mercury__lexer__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__lexer__Posn0__tmp_copy_13 = mercury__lexer__STATE_VARIABLE_Posn_0_23;
                        MR_Char mercury__lexer__Char__tmp_copy_14 = mercury__lexer__Char_218;
                        MR_Word mercury__lexer__Action__tmp_copy_15 = mercury__lexer__Action_219;
                        MR_Word mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23 = mercury__lexer__STATE_VARIABLE_Posn_19_220;

                        mercury__lexer__STATE_VARIABLE_Posn_0_23 = mercury__lexer__STATE_VARIABLE_Posn_0__tmp_copy_23;
                        mercury__lexer__ScannedPastWhiteSpace_16 = (MR_Integer) 0;
                        mercury__lexer__Action_15 = mercury__lexer__Action__tmp_copy_15;
                        mercury__lexer__Char_14 = mercury__lexer__Char__tmp_copy_14;
                        mercury__lexer__Posn0_13 = mercury__lexer__Posn0__tmp_copy_13;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Integer mercury__lexer__V_244_244;
                      MR_Integer mercury__lexer__V_245_245;

                      *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 0)));
                      mercury__lexer__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 1)));
                      mercury__lexer__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 2)));
                      *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_19_220;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__lexer__Token_17 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_218));
                      }
                    }
                }
              else
                {
                  MR_Integer mercury__lexer__V_252_252;
                  MR_Integer mercury__lexer__V_253_253;

                  *mercury__lexer__Context_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 0)));
                  mercury__lexer__V_252_252 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 1)));
                  mercury__lexer__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_23, (MR_Integer) 2)));
                  *mercury__lexer__STATE_VARIABLE_Posn_24 = mercury__lexer__STATE_VARIABLE_Posn_0_23;
                  *mercury__lexer__Token_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__lexer__string_get_zero_7_p_0(mercury__lexer__String_11, mercury__lexer__Len_12, mercury__lexer__Posn0_13, mercury__lexer__Token_17, mercury__lexer__Context_18, mercury__lexer__STATE_VARIABLE_Posn_0_23, mercury__lexer__STATE_VARIABLE_Posn_24);
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__lexer__execute_get_token_action_8_p_0(
  MR_Word mercury__lexer__Stream_9,
  MR_Char mercury__lexer__Char_10,
  MR_Word mercury__lexer__Action_11,
  MR_Word mercury__lexer__ScannedPastWhiteSpace_12,
  MR_Word * mercury__lexer__Token_13,
  MR_Integer * mercury__lexer__Context_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__lexer__succeeded;

        switch (mercury__lexer__Action_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__V_50_50;
              MR_Word mercury__lexer__V_52_52;
              MR_Box mercury__lexer__V_5_80 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_80 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
              mercury__lexer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__lexer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_50_50, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_10));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_50_50, 1) = ((MR_Box) (mercury__lexer__V_52_52));
              }
              {
                mercury__lexer__get_name_5_p_0(mercury__lexer__Stream_9, mercury__lexer__V_50_50, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__lexer__V_54_54;
              MR_Word mercury__lexer__V_56_56;
              MR_Box mercury__lexer__V_5_90 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_90 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
              mercury__lexer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__lexer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_54_54, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_10));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_54_54, 1) = ((MR_Box) (mercury__lexer__V_56_56));
              }
              {
                mercury__lexer__get_variable_5_p_0(mercury__lexer__Stream_9, mercury__lexer__V_54_54, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[0]);
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              {
                mercury__lexer__get_implementation_defined_literal_rest_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              {
                mercury__lexer__get_dot_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word mercury__lexer__V_22_22;
              MR_Word mercury__lexer__V_24_24;

              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              mercury__lexer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__lexer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_22_22, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_10));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_22_22, 1) = ((MR_Box) (mercury__lexer__V_24_24));
              }
              {
                mercury__lexer__get_graphic_5_p_0(mercury__lexer__Stream_9, mercury__lexer__V_22_22, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__lexer__Token0_60;
              MR_Word mercury__lexer__HaveToken0_61;
              MR_Integer mercury__lexer__Context0_59;

              {
                mercury__lexer__get_source_line_number_6_p_0(mercury__lexer__Stream_9, mercury__lexer__V_29_29, &mercury__lexer__Token0_60, &mercury__lexer__HaveToken0_61);
              }
              mercury__lexer__Context0_59 = (MR_Integer) mercury__lexer__HaveToken0_61;
              mercury__lexer__succeeded = (mercury__lexer__Context0_59 == (MR_Integer) -1);
              mercury__lexer__succeeded = !(mercury__lexer__succeeded);
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_13 = mercury__lexer__Token0_60;
                  *mercury__lexer__Context_14 = mercury__lexer__Context0_59;
                }
              else
                {
                  MR_Word mercury__lexer__Result_99;
                  MR_Char mercury__lexer__Char_100;
                  MR_Integer mercury__lexer__V_10_113;
                  MR_Box mercury__lexer__V_5_124 = (MR_Box) mercury__lexer__Stream_9;

                  {
                    mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_124, &mercury__lexer__V_10_113);
                  }
                  mercury__lexer__succeeded = (mercury__lexer__V_10_113 == (MR_Integer) -1);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__Result_99 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      {
                        mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_100);
                      }
                    }
                  else
                    {
                      MR_Char mercury__lexer__V_11_116;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_113 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_116  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__Result_99 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          mercury__lexer__Char_100 = mercury__lexer__V_11_116;
                        }
                      else
                        {
                          MR_String mercury__lexer__V_12_118;
                          MR_Word mercury__lexer__V_19_119;
                          MR_Box mercury__lexer__V_8_131;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_131 );
}
{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_131 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_118  = Msg;
}
                          mercury__lexer__V_19_119 = (MR_Word) mercury__lexer__V_12_118;
                          {
                            mercury__lexer__Result_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__Result_99, 0) = ((MR_Box) (mercury__lexer__V_19_119));
                          }
                          {
                            mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_100);
                          }
                        }
                    }
                  switch (MR_tag((MR_Word) mercury__lexer__Result_99)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__lexer__Result_99)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word mercury__lexer__Action_102;

                            if ((((MR_Unsigned) (mercury__lexer__Char_100 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                              if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_100 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_100 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                                {
                                  mercury__lexer__Action_102 = ((&mercury__lexer_vector_common_4[472 + (mercury__lexer__Char_100 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                                  mercury__lexer__succeeded = MR_TRUE;
                                }
                              else
                                mercury__lexer__succeeded = MR_FALSE;
                            else
                              mercury__lexer__succeeded = MR_FALSE;
                            if (mercury__lexer__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Char mercury__lexer__Char__tmp_copy_10 = mercury__lexer__Char_100;
                                  MR_Word mercury__lexer__Action__tmp_copy_11 = mercury__lexer__Action_102;

                                  mercury__lexer__ScannedPastWhiteSpace_12 = (MR_Integer) 1;
                                  mercury__lexer__Action_11 = mercury__lexer__Action__tmp_copy_11;
                                  mercury__lexer__Char_10 = mercury__lexer__Char__tmp_copy_10;
                                }
                                continue;
                              }
                            else
                              {
                                MR_Box mercury__lexer__V_5_166 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_166 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__lexer__Token_13 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_100));
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box mercury__lexer__V_5_144 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_144 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                            *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__lexer__Error_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_99, (MR_Integer) 0)));
                        MR_Box mercury__lexer__V_5_154 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_154 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_101));
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mercury__lexer__V_44_44;
              MR_Word mercury__lexer__V_46_46;

              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              mercury__lexer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__lexer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_44_44, 0) = ((MR_Box) (MR_Word) (mercury__lexer__Char_10));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_44_44, 1) = ((MR_Box) (mercury__lexer__V_46_46));
              }
              {
                mercury__lexer__get_number_5_p_0(mercury__lexer__Stream_9, mercury__lexer__V_44_44, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word mercury__lexer__Token0_16;
              MR_Word mercury__lexer__HaveToken0_17;
              MR_Integer mercury__lexer__Context0_18;

              {
                mercury__lexer__skip_to_eol_5_p_0(mercury__lexer__Stream_9, &mercury__lexer__Token0_16, &mercury__lexer__HaveToken0_17);
              }
              {
                mercury__lexer__succeeded = mercury__lexer__have_token_with_context_2_p_0(mercury__lexer__HaveToken0_17, &mercury__lexer__Context0_18);
              }
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_13 = mercury__lexer__Token0_16;
                  *mercury__lexer__Context_14 = mercury__lexer__Context0_18;
                }
              else
                {
                  MR_Word mercury__lexer__Result_174;
                  MR_Char mercury__lexer__Char_175;
                  MR_Integer mercury__lexer__V_10_188;
                  MR_Box mercury__lexer__V_5_199 = (MR_Box) mercury__lexer__Stream_9;

                  {
                    mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_199, &mercury__lexer__V_10_188);
                  }
                  mercury__lexer__succeeded = (mercury__lexer__V_10_188 == (MR_Integer) -1);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__Result_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      {
                        mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_175);
                      }
                    }
                  else
                    {
                      MR_Char mercury__lexer__V_11_191;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_188 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_191  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__Result_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          mercury__lexer__Char_175 = mercury__lexer__V_11_191;
                        }
                      else
                        {
                          MR_String mercury__lexer__V_12_193;
                          MR_Word mercury__lexer__V_19_194;
                          MR_Box mercury__lexer__V_8_206;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_206 );
}
{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_206 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_193  = Msg;
}
                          mercury__lexer__V_19_194 = (MR_Word) mercury__lexer__V_12_193;
                          {
                            mercury__lexer__Result_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__Result_174, 0) = ((MR_Box) (mercury__lexer__V_19_194));
                          }
                          {
                            mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_175);
                          }
                        }
                    }
                  switch (MR_tag((MR_Word) mercury__lexer__Result_174)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__lexer__Result_174)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word mercury__lexer__Action_177;

                            if ((((MR_Unsigned) (mercury__lexer__Char_175 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                              if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_175 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_175 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                                {
                                  mercury__lexer__Action_177 = ((&mercury__lexer_vector_common_4[590 + (mercury__lexer__Char_175 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                                  mercury__lexer__succeeded = MR_TRUE;
                                }
                              else
                                mercury__lexer__succeeded = MR_FALSE;
                            else
                              mercury__lexer__succeeded = MR_FALSE;
                            if (mercury__lexer__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Char mercury__lexer__Char__tmp_copy_10 = mercury__lexer__Char_175;
                                  MR_Word mercury__lexer__Action__tmp_copy_11 = mercury__lexer__Action_177;

                                  mercury__lexer__ScannedPastWhiteSpace_12 = (MR_Integer) 0;
                                  mercury__lexer__Action_11 = mercury__lexer__Action__tmp_copy_11;
                                  mercury__lexer__Char_10 = mercury__lexer__Char__tmp_copy_10;
                                }
                                continue;
                              }
                            else
                              {
                                MR_Box mercury__lexer__V_5_241 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_241 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__lexer__Token_13 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_175));
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box mercury__lexer__V_5_219 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_219 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                            *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__lexer__Error_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_174, (MR_Integer) 0)));
                        MR_Box mercury__lexer__V_5_229 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_229 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_176));
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word mercury__lexer__V_38_38;

              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              mercury__lexer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                mercury__lexer__start_quoted_name_6_p_0(mercury__lexer__Stream_9, mercury__lexer__Char_10, mercury__lexer__V_38_38, mercury__lexer__Token_13);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mercury__lexer__Token0_66;
              MR_Word mercury__lexer__HaveToken0_67;
              MR_Integer mercury__lexer__Context0_64;

              {
                mercury__lexer__get_slash_5_p_0(mercury__lexer__Stream_9, &mercury__lexer__Token0_66, &mercury__lexer__HaveToken0_67);
              }
              {
                mercury__lexer__succeeded = mercury__lexer__have_token_with_context_2_p_0(mercury__lexer__HaveToken0_67, &mercury__lexer__Context0_64);
              }
              if (mercury__lexer__succeeded)
                {
                  *mercury__lexer__Token_13 = mercury__lexer__Token0_66;
                  *mercury__lexer__Context_14 = mercury__lexer__Context0_64;
                }
              else
                {
                  MR_Word mercury__lexer__Result_249;
                  MR_Char mercury__lexer__Char_250;
                  MR_Integer mercury__lexer__V_10_263;
                  MR_Box mercury__lexer__V_5_274 = (MR_Box) mercury__lexer__Stream_9;

                  {
                    mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_274, &mercury__lexer__V_10_263);
                  }
                  mercury__lexer__succeeded = (mercury__lexer__V_10_263 == (MR_Integer) -1);
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__Result_249 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      {
                        mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_250);
                      }
                    }
                  else
                    {
                      MR_Char mercury__lexer__V_11_266;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_263 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_266  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                      if (mercury__lexer__succeeded)
                        {
                          mercury__lexer__Result_249 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          mercury__lexer__Char_250 = mercury__lexer__V_11_266;
                        }
                      else
                        {
                          MR_String mercury__lexer__V_12_268;
                          MR_Word mercury__lexer__V_19_269;
                          MR_Box mercury__lexer__V_8_281;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_281 );
}
{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_281 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_268  = Msg;
}
                          mercury__lexer__V_19_269 = (MR_Word) mercury__lexer__V_12_268;
                          {
                            mercury__lexer__Result_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__lexer__Result_249, 0) = ((MR_Box) (mercury__lexer__V_19_269));
                          }
                          {
                            mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_250);
                          }
                        }
                    }
                  switch (MR_tag((MR_Word) mercury__lexer__Result_249)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__lexer__Result_249)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word mercury__lexer__Action_252;

                            if ((((MR_Unsigned) (mercury__lexer__Char_250 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                              if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_250 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_250 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                                {
                                  mercury__lexer__Action_252 = ((&mercury__lexer_vector_common_4[708 + (mercury__lexer__Char_250 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                                  mercury__lexer__succeeded = MR_TRUE;
                                }
                              else
                                mercury__lexer__succeeded = MR_FALSE;
                            else
                              mercury__lexer__succeeded = MR_FALSE;
                            if (mercury__lexer__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Char mercury__lexer__Char__tmp_copy_10 = mercury__lexer__Char_250;
                                  MR_Word mercury__lexer__Action__tmp_copy_11 = mercury__lexer__Action_252;

                                  mercury__lexer__ScannedPastWhiteSpace_12 = (MR_Integer) 0;
                                  mercury__lexer__Action_11 = mercury__lexer__Action__tmp_copy_11;
                                  mercury__lexer__Char_10 = mercury__lexer__Char__tmp_copy_10;
                                }
                                continue;
                              }
                            else
                              {
                                MR_Box mercury__lexer__V_5_316 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_316 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__lexer__Token_13 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_250));
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Box mercury__lexer__V_5_294 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_294 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                            *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__lexer__Error_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_249, (MR_Integer) 0)));
                        MR_Box mercury__lexer__V_5_304 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_304 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__lexer__Token_13 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_251));
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word mercury__lexer__SpecialToken_320;

              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              switch (mercury__lexer__Char_10) {
                default:
                  mercury__lexer__succeeded = MR_FALSE;
                  break;
                case (MR_Char) 40:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 41:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 44:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 59:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_8[1]);
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 91:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 93:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 123:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 124:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Char) 125:
                  {
                    mercury__lexer__SpecialToken_320 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (mercury__lexer__succeeded)
                switch (mercury__lexer__ScannedPastWhiteSpace_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__lexer__succeeded = (mercury__lexer__SpecialToken_320 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (mercury__lexer__succeeded)
                        *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      else
                        *mercury__lexer__Token_13 = mercury__lexer__SpecialToken_320;
                    }
                    break;
                  case (MR_Integer) 0:
                    *mercury__lexer__Token_13 = mercury__lexer__SpecialToken_320;
                    break;
                }
              else
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "lexer.m, handle_special_token: unknown special token");
                    return;
                  }
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word mercury__lexer__Result_330;
              MR_Char mercury__lexer__Char_331;
              MR_Integer mercury__lexer__V_10_344;
              MR_Box mercury__lexer__V_5_355 = (MR_Box) mercury__lexer__Stream_9;

              {
                mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_355, &mercury__lexer__V_10_344);
              }
              mercury__lexer__succeeded = (mercury__lexer__V_10_344 == (MR_Integer) -1);
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__Result_330 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  {
                    mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_331);
                  }
                }
              else
                {
                  MR_Char mercury__lexer__V_11_347;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_344 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_347  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__lexer__succeeded)
                    {
                      mercury__lexer__Result_330 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      mercury__lexer__Char_331 = mercury__lexer__V_11_347;
                    }
                  else
                    {
                      MR_String mercury__lexer__V_12_349;
                      MR_Word mercury__lexer__V_19_350;
                      MR_Box mercury__lexer__V_8_362;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_362 );
}
{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_362 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_349  = Msg;
}
                      mercury__lexer__V_19_350 = (MR_Word) mercury__lexer__V_12_349;
                      {
                        mercury__lexer__Result_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__lexer__Result_330, 0) = ((MR_Box) (mercury__lexer__V_19_350));
                      }
                      {
                        mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_331);
                      }
                    }
                }
              switch (MR_tag((MR_Word) mercury__lexer__Result_330)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__lexer__Result_330)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__lexer__Action_333;

                        if ((((MR_Unsigned) (mercury__lexer__Char_331 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                          if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_331 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_331 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                            {
                              mercury__lexer__Action_333 = ((&mercury__lexer_vector_common_4[826 + (mercury__lexer__Char_331 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                              mercury__lexer__succeeded = MR_TRUE;
                            }
                          else
                            mercury__lexer__succeeded = MR_FALSE;
                        else
                          mercury__lexer__succeeded = MR_FALSE;
                        if (mercury__lexer__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Char mercury__lexer__Char__tmp_copy_10 = mercury__lexer__Char_331;
                              MR_Word mercury__lexer__Action__tmp_copy_11 = mercury__lexer__Action_333;

                              mercury__lexer__ScannedPastWhiteSpace_12 = (MR_Integer) 0;
                              mercury__lexer__Action_11 = mercury__lexer__Action__tmp_copy_11;
                              mercury__lexer__Char_10 = mercury__lexer__Char__tmp_copy_10;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Box mercury__lexer__V_5_397 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_397 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *mercury__lexer__Token_13 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_331));
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Box mercury__lexer__V_5_375 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_375 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                        *mercury__lexer__Token_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__lexer__Error_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_330, (MR_Integer) 0)));
                    MR_Box mercury__lexer__V_5_385 = (MR_Box) mercury__lexer__Stream_9;

{
#define MR_PROC_LABEL mercury__lexer__execute_get_token_action_8_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_385 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_14  = LineNum;
}
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__lexer__Token_13 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_332));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__lexer__get_context_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Context_14);
              }
              {
                mercury__lexer__get_zero_4_p_0(mercury__lexer__Stream_9, mercury__lexer__Token_13);
              }
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__lexer__have_token_with_context_2_p_0(
  MR_Word mercury__lexer__HeadVar__1_1,
  MR_Integer * mercury__lexer__Context_3)
{
  {
    MR_bool mercury__lexer__succeeded;

    *mercury__lexer__Context_3 = (MR_Integer) mercury__lexer__HeadVar__1_1;
    mercury__lexer__succeeded = (*mercury__lexer__Context_3 == (MR_Integer) -1);
    mercury__lexer__succeeded = !(mercury__lexer__succeeded);
    return mercury__lexer__succeeded;
  }
}

static void MR_CALL 
mercury__lexer__string_have_token_4_p_0(
  MR_Word mercury__lexer__Posn0_5,
  MR_Word * mercury__lexer__HeadVar__2_2,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_8,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_9)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Context_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 0)));
    MR_Integer mercury__lexer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 1)));
    MR_Integer mercury__lexer__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 2)));

    *mercury__lexer__STATE_VARIABLE_Posn_9 = mercury__lexer__STATE_VARIABLE_Posn_0_8;
    *mercury__lexer__HeadVar__2_2 = (MR_Word) mercury__lexer__Context_6;
  }
}

static void MR_CALL 
mercury__lexer__have_token_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Word * mercury__lexer__HeadVar__2_2)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Context_6;
    MR_Box mercury__lexer__V_5_20 = (MR_Box) mercury__lexer__Stream_5;

{
#define MR_PROC_LABEL mercury__lexer__have_token_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_20 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context_6  = LineNum;
}
    *mercury__lexer__HeadVar__2_2 = (MR_Word) mercury__lexer__Context_6;
  }
}

MR_bool MR_CALL 
mercury__lexer__lookup_token_action_2_p_0(
  MR_Char mercury__lexer__Char_3,
  MR_Word * mercury__lexer__Action_4)
{
  {
    MR_bool mercury__lexer__succeeded;

    if ((((MR_Unsigned) (mercury__lexer__Char_3 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
      if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_3 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_3 - (MR_Integer) 9)) & (MR_Integer) 31))))))
        {
          *mercury__lexer__Action_4 = ((&mercury__lexer_vector_common_4[354 + (mercury__lexer__Char_3 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
          mercury__lexer__succeeded = MR_TRUE;
        }
      else
        mercury__lexer__succeeded = MR_FALSE;
    else
      mercury__lexer__succeeded = MR_FALSE;
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer__get_token_2_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Word mercury__lexer__ScannedPastWhiteSpace_8,
  MR_Word * mercury__lexer__Token_9,
  MR_Integer * mercury__lexer__Context_10)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_12;
    MR_Char mercury__lexer__Char_13;
    MR_Integer mercury__lexer__V_10_28;
    MR_Box mercury__lexer__V_5_39 = (MR_Box) mercury__lexer__Stream_7;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_39, &mercury__lexer__V_10_28);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_28 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_31;

{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_28 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_31  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_13 = mercury__lexer__V_11_31;
          }
        else
          {
            MR_String mercury__lexer__V_12_33;
            MR_Word mercury__lexer__V_19_34;
            MR_Box mercury__lexer__V_8_46;

{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_46 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_46 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_33  = Msg;
}
            mercury__lexer__V_19_34 = (MR_Word) mercury__lexer__V_12_33;
            {
              mercury__lexer__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, 0) = ((MR_Box) (mercury__lexer__V_19_34));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_13);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__lexer__Action_15;

              if ((((MR_Unsigned) (mercury__lexer__Char_13 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_13 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_13 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                  {
                    mercury__lexer__Action_15 = ((&mercury__lexer_vector_common_4[236 + (mercury__lexer__Char_13 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                else
                  mercury__lexer__succeeded = MR_FALSE;
              else
                mercury__lexer__succeeded = MR_FALSE;
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__execute_get_token_action_8_p_0(mercury__lexer__Stream_7, mercury__lexer__Char_13, mercury__lexer__Action_15, mercury__lexer__ScannedPastWhiteSpace_8, mercury__lexer__Token_9, mercury__lexer__Context_10);
                }
              else
                {
                  MR_Box mercury__lexer__V_5_81 = (MR_Box) mercury__lexer__Stream_7;

{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_81 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_10  = LineNum;
}
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_13));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__lexer__V_5_59 = (MR_Box) mercury__lexer__Stream_7;

{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_59 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_10  = LineNum;
}
              *mercury__lexer__Token_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_12, (MR_Integer) 0)));
          MR_Box mercury__lexer__V_5_69 = (MR_Box) mercury__lexer__Stream_7;

{
#define MR_PROC_LABEL mercury__lexer__get_token_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_69 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_10  = LineNum;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_14));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__lexer__get_token_5_p_0(
  MR_Word mercury__lexer__Stream_6,
  MR_Word * mercury__lexer__Token_7,
  MR_Integer * mercury__lexer__Context_8)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Result_21;
    MR_Char mercury__lexer__Char_22;
    MR_Integer mercury__lexer__V_10_35;
    MR_Box mercury__lexer__V_5_46 = (MR_Box) mercury__lexer__Stream_6;

    {
      mercury__io__read_char_code_2_4_p_0(mercury__lexer__V_5_46, &mercury__lexer__V_10_35);
    }
    mercury__lexer__succeeded = (mercury__lexer__V_10_35 == (MR_Integer) -1);
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__Result_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_22);
        }
      }
    else
      {
        MR_Char mercury__lexer__V_11_38;

{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__lexer__V_10_35 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__V_11_38  = Character;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__Result_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__lexer__Char_22 = mercury__lexer__V_11_38;
          }
        else
          {
            MR_String mercury__lexer__V_12_40;
            MR_Word mercury__lexer__V_19_41;
            MR_Box mercury__lexer__V_8_53;

{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MR_Integer Error;

		{
{
    /*
    ** XXX If the Mercury context that called the failing C function is now
    ** running on a different OS thread, this errno won't be the one
    ** we are looking for. Or, if a different Mercury context was run on
    ** the same thread in the meantime, the errno could have been clobbered.
    */
    Error = errno;
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__lexer__V_8_53 );
}
{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__lexer__V_8_53 , Error);
	Msg0 =  (MR_String) "read failed: " ;
		{

    ML_maybe_make_err_msg(MR_TRUE, Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_12_40  = Msg;
}
            mercury__lexer__V_19_41 = (MR_Word) mercury__lexer__V_12_40;
            {
              mercury__lexer__Result_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__lexer__Result_21, 0) = ((MR_Box) (mercury__lexer__V_19_41));
            }
            {
              mercury__char__det_from_int_2_p_0((MR_Integer) 0, &mercury__lexer__Char_22);
            }
          }
      }
    switch (MR_tag((MR_Word) mercury__lexer__Result_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Result_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__lexer__Action_24;

              if ((((MR_Unsigned) (mercury__lexer__Char_22 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
                if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_22 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_22 - (MR_Integer) 9)) & (MR_Integer) 31))))))
                  {
                    mercury__lexer__Action_24 = ((&mercury__lexer_vector_common_4[118 + (mercury__lexer__Char_22 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
                    mercury__lexer__succeeded = MR_TRUE;
                  }
                else
                  mercury__lexer__succeeded = MR_FALSE;
              else
                mercury__lexer__succeeded = MR_FALSE;
              if (mercury__lexer__succeeded)
                {
                  mercury__lexer__execute_get_token_action_8_p_0(mercury__lexer__Stream_6, mercury__lexer__Char_22, mercury__lexer__Action_24, (MR_Integer) 1, mercury__lexer__Token_7, mercury__lexer__Context_8);
                }
              else
                {
                  MR_Box mercury__lexer__V_5_88 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_88 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_8  = LineNum;
}
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__lexer__Token_7 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_22));
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__lexer__V_5_66 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_66 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_8  = LineNum;
}
              *mercury__lexer__Token_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__lexer__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__lexer__Result_21, (MR_Integer) 0)));
          MR_Box mercury__lexer__V_5_76 = (MR_Box) mercury__lexer__Stream_6;

{
#define MR_PROC_LABEL mercury__lexer__get_token_5_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_76 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_8  = LineNum;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Token_7 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__lexer__Error_23));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__lexer__grab_string_5_p_0(
  MR_String mercury__lexer__String_6,
  MR_Word mercury__lexer__Posn0_7,
  MR_String * mercury__lexer__SubString_8,
  MR_Word mercury__lexer__Posn_9,
  MR_Word * mercury__lexer__Posn_5)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Offset0_12;
    MR_Integer mercury__lexer__Offset_15;
    MR_Integer mercury__lexer__V_10_10;
    MR_Integer mercury__lexer__V_11_11;
    MR_Integer mercury__lexer__V_13_13;
    MR_Integer mercury__lexer__V_14_14;

    *mercury__lexer__Posn_5 = mercury__lexer__Posn_9;
    mercury__lexer__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_7, (MR_Integer) 0)));
    mercury__lexer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_7, (MR_Integer) 1)));
    mercury__lexer__Offset0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_7, (MR_Integer) 2)));
    mercury__lexer__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn_9, (MR_Integer) 0)));
    mercury__lexer__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn_9, (MR_Integer) 1)));
    mercury__lexer__Offset_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn_9, (MR_Integer) 2)));
{
#define MR_PROC_LABEL mercury__lexer__grab_string_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__lexer__String_6 ;
	Start =  mercury__lexer__Offset0_12 ;
	End =  mercury__lexer__Offset_15 ;
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
	 *mercury__lexer__SubString_8  = SubString;
}
  }
}

static void MR_CALL 
mercury__lexer__string_ungetchar_3_p_0(
  MR_String mercury__lexer__String_4,
  MR_Word mercury__lexer__Posn0_5,
  MR_Word * mercury__lexer__Posn_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__LineNum0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__Posn0_5, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_10;
    MR_Char mercury__lexer__Char_11;

{
#define MR_PROC_LABEL mercury__lexer__string_ungetchar_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_4 ;
	Index =  mercury__lexer__Offset0_9 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__lexer__Offset_10  = PrevIndex;
	 mercury__lexer__Char_11  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__lexer__succeeded)
      {
        mercury__lexer__succeeded = (mercury__lexer__Char_11 == (MR_Char) 10);
        if (mercury__lexer__succeeded)
          {
            MR_Integer mercury__lexer__LineNum_12 = (mercury__lexer__LineNum0_7 - (MR_Integer) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__lexer__Posn_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__lexer__LineNum_12));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__lexer__Offset_10));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__lexer__Offset_10));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *mercury__lexer__Posn_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__lexer__LineNum0_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__lexer__LineOffset0_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__lexer__Offset_10));
          }
      }
    else
      *mercury__lexer__Posn_6 = mercury__lexer__Posn0_5;
  }
}

static void MR_CALL 
mercury__lexer__string_get_context_4_p_0(
  MR_Word mercury__lexer__StartPosn_5,
  MR_Integer * mercury__lexer__Context_6,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_11,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_12)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__V_9_9;
    MR_Integer mercury__lexer__V_10_10;

    *mercury__lexer__Context_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__StartPosn_5, (MR_Integer) 0)));
    mercury__lexer__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__StartPosn_5, (MR_Integer) 1)));
    mercury__lexer__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__StartPosn_5, (MR_Integer) 2)));
    *mercury__lexer__STATE_VARIABLE_Posn_12 = mercury__lexer__STATE_VARIABLE_Posn_0_11;
  }
}

void MR_CALL 
mercury__lexer__get_context_4_p_0(
  MR_Word mercury__lexer__Stream_5,
  MR_Integer * mercury__lexer__Context_6)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Box mercury__lexer__V_5_14 = (MR_Box) mercury__lexer__Stream_5;

{
#define MR_PROC_LABEL mercury__lexer__get_context_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_14 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 *mercury__lexer__Context_6  = LineNum;
}
  }
}

void MR_CALL 
mercury__lexer__get_token_list_2_6_p_0(
  MR_Word mercury__lexer__Stream_7,
  MR_Word mercury__lexer__Token0_8,
  MR_Integer mercury__lexer__Context0_9,
  MR_Word * mercury__lexer__Tokens_10)
{
  {
    MR_bool mercury__lexer__succeeded;

    switch (MR_tag((MR_Word) mercury__lexer__Token0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Token0_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Integer mercury__lexer__Context1_36;
              MR_Word mercury__lexer__Token1_37;
              MR_Word * mercury__lexer__AddrTokens1_49;

              {
                mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), base, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_10, (MR_Integer) 2));
              {
                mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0(mercury__lexer__Stream_7, mercury__lexer__Token1_37, mercury__lexer__Context1_36, mercury__lexer__AddrTokens1_49);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mercury__lexer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__lexer__V_35_35));
              }
            }
            break;
          case (MR_Integer) 10:
            *mercury__lexer__Tokens_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Integer mercury__lexer__Context1_36;
          MR_Word mercury__lexer__Token1_37;
          MR_Word * mercury__lexer__AddrTokens1_49;

          {
            mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Tokens_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token0_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
            MR_hl_field(MR_mktag(1), base, 2) = NULL;
          }
          mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_10, (MR_Integer) 2));
          {
            mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0(mercury__lexer__Stream_7, mercury__lexer__Token1_37, mercury__lexer__Context1_36, mercury__lexer__AddrTokens1_49);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Integer mercury__lexer__Context1_36;
              MR_Word mercury__lexer__Token1_37;
              MR_Word * mercury__lexer__AddrTokens1_49;

              {
                mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_37, &mercury__lexer__Context1_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), base, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_49 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_10, (MR_Integer) 2));
              {
                mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0(mercury__lexer__Stream_7, mercury__lexer__Token1_37, mercury__lexer__Context1_36, mercury__lexer__AddrTokens1_49);
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word mercury__lexer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token0_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__lexer__V_35_35));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer mercury__lexer__Int_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__Token0_8, (MR_Integer) 1)));
              MR_Integer mercury__lexer__Context1_15;
              MR_Word mercury__lexer__Token1_16;
              MR_Word mercury__lexer__V_34_34;
              MR_Box mercury__lexer__V_5_48 = (MR_Box) mercury__lexer__Stream_7;
              MR_Word * mercury__lexer__AddrTokens1_50;

{
#define MR_PROC_LABEL mercury__lexer__get_token_list_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) mercury__lexer__V_5_48 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Context1_15  = LineNum;
}
              {
                mercury__lexer__get_dot_4_p_0(mercury__lexer__Stream_7, &mercury__lexer__Token1_16);
              }
              {
                mercury__lexer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mercury__lexer__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), mercury__lexer__V_34_34, 1) = ((MR_Box) (mercury__lexer__Int_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__V_34_34));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context0_9));
                MR_hl_field(MR_mktag(1), base, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_50 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_10, (MR_Integer) 2));
              {
                mercury__lexer__LCMCpr_get_token_list_2_1_6_p_0(mercury__lexer__Stream_7, mercury__lexer__Token1_16, mercury__lexer__Context1_15, mercury__lexer__AddrTokens1_50);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__lexer__graphic_token_char_1_p_0(
  MR_Char mercury__lexer__HeadVar__1_1)
{
  {
    MR_bool mercury__lexer__succeeded;

    switch (mercury__lexer__HeadVar__1_1) {
      default:
        mercury__lexer__succeeded = MR_FALSE;
        break;
      case (MR_Char) 33:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 35:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 36:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 38:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 42:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 43:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 45:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 46:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 47:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 58:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 60:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 61:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 62:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 63:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 64:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 92:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 94:
        mercury__lexer__succeeded = MR_TRUE;
        break;
      case (MR_Char) 126:
        mercury__lexer__succeeded = MR_TRUE;
        break;
    }
    return mercury__lexer__succeeded;
  }
}

void MR_CALL 
mercury__lexer__token_to_string_2_p_0(
  MR_Word mercury__lexer__Token_3,
  MR_String * mercury__lexer__String_4)
{
  {
    MR_bool mercury__lexer__succeeded;

    switch (MR_tag((MR_Word) mercury__lexer__Token_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Token_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__lexer__String_4 = (MR_String) "token \140 (\'";
            break;
          case (MR_Integer) 1:
            *mercury__lexer__String_4 = (MR_String) "token \140(\'";
            break;
          case (MR_Integer) 2:
            *mercury__lexer__String_4 = (MR_String) "token \140)\'";
            break;
          case (MR_Integer) 3:
            *mercury__lexer__String_4 = (MR_String) "token \140[\'";
            break;
          case (MR_Integer) 4:
            *mercury__lexer__String_4 = (MR_String) "token \140]\'";
            break;
          case (MR_Integer) 5:
            *mercury__lexer__String_4 = (MR_String) "token \140{\'";
            break;
          case (MR_Integer) 6:
            *mercury__lexer__String_4 = (MR_String) "token \140}\'";
            break;
          case (MR_Integer) 7:
            *mercury__lexer__String_4 = (MR_String) "token \140|\'";
            break;
          case (MR_Integer) 8:
            *mercury__lexer__String_4 = (MR_String) "token \140,\'";
            break;
          case (MR_Integer) 9:
            *mercury__lexer__String_4 = (MR_String) "token \140. \'";
            break;
          case (MR_Integer) 10:
            *mercury__lexer__String_4 = (MR_String) "end-of-file";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__lexer__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__lexer__Token_3, (MR_Integer) 0)));
          MR_Word mercury__lexer__V_79_79;
          MR_Word mercury__lexer__V_81_81;
          MR_Word mercury__lexer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
          MR_Word mercury__lexer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__lexer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_81_81, 0) = ((MR_Box) (mercury__lexer__Name_5));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_81_81, 1) = ((MR_Box) (mercury__lexer__V_82_82));
          }
          {
            mercury__lexer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_79_79, 0) = ((MR_Box) ((MR_String) "token \'"));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_79_79, 1) = ((MR_Box) (mercury__lexer__V_81_81));
          }
          {
            mercury__string__append_list_2_p_0(mercury__lexer__V_79_79, mercury__lexer__String_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__lexer__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__lexer__Token_3, (MR_Integer) 0)));
          MR_Word mercury__lexer__V_73_73;
          MR_Word mercury__lexer__V_75_75;
          MR_Word mercury__lexer__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
          MR_Word mercury__lexer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__lexer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_75_75, 0) = ((MR_Box) (mercury__lexer__Var_6));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_75_75, 1) = ((MR_Box) (mercury__lexer__V_76_76));
          }
          {
            mercury__lexer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_73_73, 0) = ((MR_Box) ((MR_String) "variable \140"));
            MR_hl_field(MR_mktag(1), mercury__lexer__V_73_73, 1) = ((MR_Box) (mercury__lexer__V_75_75));
          }
          {
            mercury__string__append_list_2_p_0(mercury__lexer__V_73_73, mercury__lexer__String_4);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__lexer__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_String mercury__lexer__IntString_8;
              MR_Word mercury__lexer__V_67_67;
              MR_Word mercury__lexer__V_69_69;
              MR_Word mercury__lexer__V_70_70;
              MR_Word mercury__lexer__V_72_72;

              {
                mercury__string__int_to_string_2_p_0(mercury__lexer__Int_7, &mercury__lexer__IntString_8);
              }
              mercury__lexer__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__lexer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
              {
                mercury__lexer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_69_69, 0) = ((MR_Box) (mercury__lexer__IntString_8));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_69_69, 1) = ((MR_Box) (mercury__lexer__V_70_70));
              }
              {
                mercury__lexer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_67_67, 0) = ((MR_Box) ((MR_String) "integer \140"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_67_67, 1) = ((MR_Box) (mercury__lexer__V_69_69));
              }
              {
                *mercury__lexer__String_4 = mercury__string__append_list_1_f_0(mercury__lexer__V_67_67);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__lexer__Base_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_Word mercury__lexer__Integer_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 2)));
              MR_Integer mercury__lexer__BaseInt_11 = ((&mercury__lexer_vector_common_6[0 + mercury__lexer__Base_9]))->mercury__lexer__vector_common_type_6_0__vct_6_f_0;
              MR_String mercury__lexer__Prefix_12 = ((&mercury__lexer_vector_common_6[0 + mercury__lexer__Base_9]))->mercury__lexer__vector_common_type_6_0__vct_6_f_1;
              MR_Word mercury__lexer__V_60_60;
              MR_Word mercury__lexer__V_62_62;
              MR_Word mercury__lexer__V_63_63;
              MR_Word mercury__lexer__V_64_64;
              MR_Word mercury__lexer__V_66_66;
              MR_String mercury__lexer__IntString_85;

              {
                mercury__lexer__IntString_85 = mercury__integer__to_base_string_2_f_0(mercury__lexer__Integer_10, mercury__lexer__BaseInt_11);
              }
              mercury__lexer__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__lexer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
              {
                mercury__lexer__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_63_63, 0) = ((MR_Box) (mercury__lexer__IntString_85));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_63_63, 1) = ((MR_Box) (mercury__lexer__V_64_64));
              }
              {
                mercury__lexer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_62_62, 0) = ((MR_Box) (mercury__lexer__Prefix_12));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_62_62, 1) = ((MR_Box) (mercury__lexer__V_63_63));
              }
              {
                mercury__lexer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_60_60, 0) = ((MR_Box) ((MR_String) "integer \140"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_60_60, 1) = ((MR_Box) (mercury__lexer__V_62_62));
              }
              {
                *mercury__lexer__String_4 = mercury__string__append_list_1_f_0(mercury__lexer__V_60_60);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Float mercury__lexer__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_String mercury__lexer__FloatString_14;
              MR_Word mercury__lexer__V_54_54;
              MR_Word mercury__lexer__V_56_56;
              MR_Word mercury__lexer__V_57_57;
              MR_Word mercury__lexer__V_59_59;

{
#define MR_PROC_LABEL mercury__lexer__token_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__lexer__Float_13 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__lexer__FloatString_14  = Str;
}
              mercury__lexer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__lexer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
              {
                mercury__lexer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_56_56, 0) = ((MR_Box) (mercury__lexer__FloatString_14));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_56_56, 1) = ((MR_Box) (mercury__lexer__V_57_57));
              }
              {
                mercury__lexer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_54_54, 0) = ((MR_Box) ((MR_String) "float \140"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_54_54, 1) = ((MR_Box) (mercury__lexer__V_56_56));
              }
              {
                *mercury__lexer__String_4 = mercury__string__append_list_1_f_0(mercury__lexer__V_54_54);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String mercury__lexer__TokenString_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_Word mercury__lexer__V_48_48;
              MR_Word mercury__lexer__V_50_50;
              MR_Word mercury__lexer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[4]);
              MR_Word mercury__lexer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__lexer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_50_50, 0) = ((MR_Box) (mercury__lexer__TokenString_15));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_50_50, 1) = ((MR_Box) (mercury__lexer__V_51_51));
              }
              {
                mercury__lexer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_48_48, 0) = ((MR_Box) ((MR_String) "string \""));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_48_48, 1) = ((MR_Box) (mercury__lexer__V_50_50));
              }
              {
                mercury__string__append_list_2_p_0(mercury__lexer__V_48_48, mercury__lexer__String_4);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word mercury__lexer__V_42_42;
              MR_Word mercury__lexer__V_44_44;
              MR_Word mercury__lexer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[0]);
              MR_Word mercury__lexer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_String mercury__lexer__Name_86 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));

              {
                mercury__lexer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_44_44, 0) = ((MR_Box) (mercury__lexer__Name_86));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_44_44, 1) = ((MR_Box) (mercury__lexer__V_45_45));
              }
              {
                mercury__lexer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_42_42, 0) = ((MR_Box) ((MR_String) "implementation-defined \140\044"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_42_42, 1) = ((MR_Box) (mercury__lexer__V_44_44));
              }
              {
                *mercury__lexer__String_4 = mercury__string__append_list_1_f_0(mercury__lexer__V_42_42);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Char mercury__lexer__JunkChar_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_Integer mercury__lexer__Code_17;
              MR_String mercury__lexer__Hex_18;
              MR_Word mercury__lexer__V_36_36;
              MR_Word mercury__lexer__V_38_38;
              MR_Word mercury__lexer__V_39_39;
              MR_Word mercury__lexer__V_41_41;

{
#define MR_PROC_LABEL mercury__lexer__token_to_string_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__lexer__JunkChar_16 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Code_17  = Int;
}
              {
                mercury__string__int_to_base_string_3_p_0(mercury__lexer__Code_17, (MR_Integer) 16, &mercury__lexer__Hex_18);
              }
              mercury__lexer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__lexer__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[3]);
              {
                mercury__lexer__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 0) = ((MR_Box) (mercury__lexer__Hex_18));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_38_38, 1) = ((MR_Box) (mercury__lexer__V_39_39));
              }
              {
                mercury__lexer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 0) = ((MR_Box) ((MR_String) "illegal character <<0x"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_36_36, 1) = ((MR_Box) (mercury__lexer__V_38_38));
              }
              {
                mercury__string__append_list_2_p_0(mercury__lexer__V_36_36, mercury__lexer__String_4);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String mercury__lexer__Message_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_Word mercury__lexer__V_28_28;
              MR_Word mercury__lexer__V_30_30;
              MR_Word mercury__lexer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[1]);
              MR_Word mercury__lexer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__lexer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 0) = ((MR_Box) (mercury__lexer__Message_21));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_30_30, 1) = ((MR_Box) (mercury__lexer__V_31_31));
              }
              {
                mercury__lexer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 0) = ((MR_Box) ((MR_String) "illegal token ("));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_28_28, 1) = ((MR_Box) (mercury__lexer__V_30_30));
              }
              {
                *mercury__lexer__String_4 = mercury__string__append_list_1_f_0(mercury__lexer__V_28_28);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word mercury__lexer__IO_Error_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_String mercury__lexer__IO_ErrorMessage_20;

              {
                mercury__io__error_message_2_p_0(mercury__lexer__IO_Error_19, &mercury__lexer__IO_ErrorMessage_20);
              }
              {
                mercury__string__append_3_p_2((MR_String) "I/O error: ", mercury__lexer__IO_ErrorMessage_20, mercury__lexer__String_4);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word mercury__lexer__V_22_22;
              MR_Word mercury__lexer__V_24_24;
              MR_Word mercury__lexer__V_25_25;
              MR_Word mercury__lexer__V_27_27;
              MR_Integer mercury__lexer__Int_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_3, (MR_Integer) 1)));
              MR_String mercury__lexer__IntString_88;

              {
                mercury__string__int_to_string_2_p_0(mercury__lexer__Int_87, &mercury__lexer__IntString_88);
              }
              mercury__lexer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__lexer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__lexer_scalar_common_7[2]);
              {
                mercury__lexer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_24_24, 0) = ((MR_Box) (mercury__lexer__IntString_88));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_24_24, 1) = ((MR_Box) (mercury__lexer__V_25_25));
              }
              {
                mercury__lexer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_22_22, 0) = ((MR_Box) ((MR_String) "integer \140"));
                MR_hl_field(MR_mktag(1), mercury__lexer__V_22_22, 1) = ((MR_Box) (mercury__lexer__V_24_24));
              }
              {
                mercury__string__append_list_2_p_0(mercury__lexer__V_22_22, mercury__lexer__String_4);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__lexer__string_get_token_list_4_p_0(
  MR_String mercury__lexer__String_5,
  MR_Word * mercury__lexer__Tokens_6,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_9,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_10)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Integer mercury__lexer__Len_8;

{
#define MR_PROC_LABEL mercury__lexer__string_get_token_list_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__lexer__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__Len_8  = Length;
}
    {
      mercury__lexer__string_get_token_list_max_5_p_0(mercury__lexer__String_5, mercury__lexer__Len_8, mercury__lexer__Tokens_6, mercury__lexer__STATE_VARIABLE_Posn_0_9, mercury__lexer__STATE_VARIABLE_Posn_10);
    }
  }
}

void MR_CALL 
mercury__lexer__string_get_token_list_max_5_p_0(
  MR_String mercury__lexer__String_6,
  MR_Integer mercury__lexer__Len_7,
  MR_Word * mercury__lexer__Tokens_8,
  MR_Word mercury__lexer__STATE_VARIABLE_Posn_0_25,
  MR_Word * mercury__lexer__STATE_VARIABLE_Posn_26)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Token_10;
    MR_Integer mercury__lexer__Context_11;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_27_27;
    MR_Char mercury__lexer__Char_48;
    MR_Word mercury__lexer__STATE_VARIABLE_Posn_19_50;
    MR_Integer mercury__lexer__LineNum0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
    MR_Integer mercury__lexer__LineOffset0_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
    MR_Integer mercury__lexer__Offset0_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
    MR_Integer mercury__lexer__Offset_62;

    mercury__lexer__succeeded = (mercury__lexer__Offset0_61 < mercury__lexer__Len_7);
    if (mercury__lexer__succeeded)
      {
{
#define MR_PROC_LABEL mercury__lexer__string_get_token_list_max_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__lexer__String_6 ;
	Index =  mercury__lexer__Offset0_61 ;
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
	 mercury__lexer__Offset_62  = NextIndex;
	 mercury__lexer__Char_48  = Ch;
	}
mercury__lexer__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__succeeded = (mercury__lexer__Char_48 == (MR_Char) 10);
            if (mercury__lexer__succeeded)
              {
                MR_Integer mercury__lexer__LineNum_63 = (mercury__lexer__LineNum0_59 + (MR_Integer) 1);

                {
                  mercury__lexer__STATE_VARIABLE_Posn_19_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 0) = ((MR_Box) (mercury__lexer__LineNum_63));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 1) = ((MR_Box) (mercury__lexer__Offset_62));
                  MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 2) = ((MR_Box) (mercury__lexer__Offset_62));
                }
              }
            else
              {
                mercury__lexer__STATE_VARIABLE_Posn_19_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 0) = ((MR_Box) (mercury__lexer__LineNum0_59));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 1) = ((MR_Box) (mercury__lexer__LineOffset0_60));
                MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_19_50, 2) = ((MR_Box) (mercury__lexer__Offset_62));
              }
            mercury__lexer__succeeded = MR_TRUE;
          }
      }
    if (mercury__lexer__succeeded)
      {
        MR_Word mercury__lexer__Action_49;

        if ((((MR_Unsigned) (mercury__lexer__Char_48 - (MR_Integer) 9)) <= ((MR_Unsigned) (MR_Integer) 117)))
          if ((((mercury__lexer_scalar_common_5[0])[(((mercury__lexer__Char_48 - (MR_Integer) 9)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__lexer__Char_48 - (MR_Integer) 9)) & (MR_Integer) 31))))))
            {
              mercury__lexer__Action_49 = ((&mercury__lexer_vector_common_4[0 + (mercury__lexer__Char_48 - (MR_Integer) 9)]))->mercury__lexer__vector_common_type_4_0__vct_4_f_0;
              mercury__lexer__succeeded = MR_TRUE;
            }
          else
            mercury__lexer__succeeded = MR_FALSE;
        else
          mercury__lexer__succeeded = MR_FALSE;
        if (mercury__lexer__succeeded)
          {
            mercury__lexer__execute_string_get_token_action_10_p_0(mercury__lexer__String_6, mercury__lexer__Len_7, mercury__lexer__STATE_VARIABLE_Posn_0_25, mercury__lexer__Char_48, mercury__lexer__Action_49, (MR_Integer) 1, &mercury__lexer__Token_10, &mercury__lexer__Context_11, mercury__lexer__STATE_VARIABLE_Posn_19_50, &mercury__lexer__STATE_VARIABLE_Posn_27_27);
          }
        else
          {
            MR_Integer mercury__lexer__V_74_74;
            MR_Integer mercury__lexer__V_75_75;

            mercury__lexer__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
            mercury__lexer__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
            mercury__lexer__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
            mercury__lexer__STATE_VARIABLE_Posn_27_27 = mercury__lexer__STATE_VARIABLE_Posn_19_50;
            {
              mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, 1) = ((MR_Box) (MR_Word) (mercury__lexer__Char_48));
            }
          }
      }
    else
      {
        MR_Integer mercury__lexer__V_82_82;
        MR_Integer mercury__lexer__V_83_83;

        mercury__lexer__Context_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 0)));
        mercury__lexer__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 1)));
        mercury__lexer__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__lexer__STATE_VARIABLE_Posn_0_25, (MR_Integer) 2)));
        mercury__lexer__STATE_VARIABLE_Posn_27_27 = mercury__lexer__STATE_VARIABLE_Posn_0_25;
        mercury__lexer__Token_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
      }
    switch (MR_tag((MR_Word) mercury__lexer__Token_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__lexer__Token_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word * mercury__lexer__AddrTokens1_84;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context_11));
                MR_hl_field(MR_mktag(1), base, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_8, (MR_Integer) 2));
              {
                mercury__lexer__LCMCpr_string_get_token_list_max_1_5_p_0(mercury__lexer__String_6, mercury__lexer__Len_7, mercury__lexer__AddrTokens1_84, mercury__lexer__STATE_VARIABLE_Posn_27_27, mercury__lexer__STATE_VARIABLE_Posn_26);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context_11));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__lexer__V_29_29));
              }
              *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
            }
            break;
          case (MR_Integer) 10:
            {
              *mercury__lexer__Tokens_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * mercury__lexer__AddrTokens1_84;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *mercury__lexer__Tokens_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context_11));
            MR_hl_field(MR_mktag(1), base, 2) = NULL;
          }
          mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_8, (MR_Integer) 2));
          {
            mercury__lexer__LCMCpr_string_get_token_list_max_1_5_p_0(mercury__lexer__String_6, mercury__lexer__Len_7, mercury__lexer__AddrTokens1_84, mercury__lexer__STATE_VARIABLE_Posn_27_27, mercury__lexer__STATE_VARIABLE_Posn_26);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__lexer__Token_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 8:
            {
              MR_Word * mercury__lexer__AddrTokens1_84;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context_11));
                MR_hl_field(MR_mktag(1), base, 2) = NULL;
              }
              mercury__lexer__AddrTokens1_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *mercury__lexer__Tokens_8, (MR_Integer) 2));
              {
                mercury__lexer__LCMCpr_string_get_token_list_max_1_5_p_0(mercury__lexer__String_6, mercury__lexer__Len_7, mercury__lexer__AddrTokens1_84, mercury__lexer__STATE_VARIABLE_Posn_27_27, mercury__lexer__STATE_VARIABLE_Posn_26);
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word mercury__lexer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *mercury__lexer__Tokens_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__lexer__Token_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__lexer__Context_11));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__lexer__V_29_29));
              }
              *mercury__lexer__STATE_VARIABLE_Posn_26 = mercury__lexer__STATE_VARIABLE_Posn_27_27;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__lexer__get_token_list_3_p_0(
  MR_Word * mercury__lexer__Tokens_4)
{
  {
    MR_bool mercury__lexer__succeeded;
    MR_Word mercury__lexer__Stream_6;
    MR_Word mercury__lexer__Token_7;
    MR_Integer mercury__lexer__Context_8;
    MR_Box mercury__lexer__V_4_16;

{
#define MR_PROC_LABEL mercury__lexer__get_token_list_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__lexer__V_4_16  = (MR_Box) Stream;
}
    mercury__lexer__Stream_6 = (MR_Word) mercury__lexer__V_4_16;
    {
      mercury__lexer__get_token_5_p_0(mercury__lexer__Stream_6, &mercury__lexer__Token_7, &mercury__lexer__Context_8);
    }
    {
      mercury__lexer__get_token_list_2_6_p_0(mercury__lexer__Stream_6, mercury__lexer__Token_7, mercury__lexer__Context_8, mercury__lexer__Tokens_4);
    }
  }
}

void mercury__lexer__init(void)
{
}

void mercury__lexer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_get_token_action_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_integer_base_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_maybe_have_valid_token_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_offset_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_scanned_past_whitespace_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_string_token_context_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_token_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_token_context_0);
	MR_register_type_ctor_info(&mercury__lexer__lexer__type_ctor_info_token_list_0);
}

void mercury__lexer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module lexer. */
