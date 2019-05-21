/*
** Automatically generated from `string.parse_util.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module string.parse_util. */
/* :- implementation. */

/*
INIT mercury__string__parse_util__init
ENDINIT
*/

#include "string.parse_util.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0;

static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1;

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1];

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4];

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8;

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6];

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0[4];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0[9];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0[9];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2];

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5];

static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5];

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0[5];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0;

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1];

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1;

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1];

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1;

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1];

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2];

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2];

static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
  MR_Char mercury__string__parse_util__SpecChar_3);

static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
  MR_Integer mercury__string__parse_util__N_3);

static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
  MR_Integer mercury__string__parse_util__SpecNum_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3);


static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5];


/* sealed */ struct mercury__string__parse_util__vector_common_type_5_0_s {
  const MR_String mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[12];



static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[12] = {
  /* row 0 */   {     (MR_String) "a character" },
  /* row 1 */   {     (MR_String) "a string" },
  /* row 2 */   {     (MR_String) "an integer" },
  /* row 3 */   {     (MR_String) "a float" },
  /* row 4 */   {     (MR_String) "a character" },
  /* row 5 */   {     (MR_String) "a string" },
  /* row 6 */   {     (MR_String) "an integer" },
  /* row 7 */   {     (MR_String) "a float" },
  /* row 8 */   {     (MR_String) "a character" },
  /* row 9 */   {     (MR_String) "a string" },
  /* row 10 */   {     (MR_String) "an integer" },
  /* row 11 */   {     (MR_String) "a float" },
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



static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0 = {
  (MR_String) "found_end_of_string",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1 = {
  (MR_String) "found_percent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_gather_ended_by_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____gather_ended_by_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____gather_ended_by_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "gather_ended_by",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____poly_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____poly_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "poly_kind",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0 = {
  (MR_String) "error_no_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1 = {
  (MR_String) "error_unknown_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2 = {
  (MR_String) "error_wrong_polytype",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3 = {
  (MR_String) "error_no_polytype",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4 = {
  (MR_String) "error_nonint_star_width",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5 = {
  (MR_String) "error_missing_star_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6 = {
  (MR_String) "error_nonint_star_prec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7 = {
  (MR_String) "error_missing_star_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8 = {
  (MR_String) "error_extra_polytypes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8
};

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2
  },
  {
    (MR_Integer) 6,
    MR_SECTAG_REMOTE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0[9] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0[9] = {
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_error_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_error_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_error",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_hash",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_minus",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_plus",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_space",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_zero",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0
};

static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0 = {
  (MR_String) "string_format_flags",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flags_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flags_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flags",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_float_kind",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_int_base_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_int_base_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_int_base",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0 = {
  (MR_String) "no_specified_prec",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1 = {
  (MR_String) "specified_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_prec",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0 = {
  (MR_String) "no_specified_width",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1 = {
  (MR_String) "specified_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_width",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0
};

static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer mercury__string__parse_util__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer mercury__string__parse_util__ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_11 < mercury__string__parse_util__ArgY1_7);
        if (mercury__string__parse_util__succeeded)
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_11 == mercury__string__parse_util__ArgY1_7);
          if (mercury__string__parse_util__succeeded)
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0(
  MR_Word mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__succeeded = MR_TRUE;
    else
    if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
      MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
    }
    else
    {
      MR_Integer mercury__string__parse_util__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__string__parse_util__ArgY1_6;

      mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_5 == mercury__string__parse_util__ArgY1_6);
      }
    }
    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer mercury__string__parse_util__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer mercury__string__parse_util__ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_11 < mercury__string__parse_util__ArgY1_7);
        if (mercury__string__parse_util__succeeded)
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_11 == mercury__string__parse_util__ArgY1_7);
          if (mercury__string__parse_util__succeeded)
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(
  MR_Word mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__succeeded = MR_TRUE;
    else
    if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
      MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
    }
    else
    {
      MR_Integer mercury__string__parse_util__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__string__parse_util__ArgY1_6;

      mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_5 == mercury__string__parse_util__ArgY1_6);
      }
    }
    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_18 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__CastY_19 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_18 == mercury__string__parse_util__CastY_19);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__string__parse_util__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__Var_14;
      MR_Integer mercury__string__parse_util__Var_25 = (MR_Integer) mercury__string__parse_util__ArgX1_4;
      MR_Integer mercury__string__parse_util__Var_26 = (MR_Integer) mercury__string__parse_util__ArgY1_5;

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_25 < mercury__string__parse_util__Var_26);
      if (mercury__string__parse_util__succeeded)
        mercury__string__parse_util__Var_14 = (MR_Integer) 1;
      else
      {
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_25 == mercury__string__parse_util__Var_26);
        if (mercury__string__parse_util__succeeded)
          mercury__string__parse_util__Var_14 = (MR_Integer) 0;
        else
          mercury__string__parse_util__Var_14 = (MR_Integer) 2;
      }
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_14 == (MR_Integer) 0);
      mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_14;
      else
      {
        MR_Word mercury__string__parse_util__Var_15;
        MR_Integer mercury__string__parse_util__Var_27 = (MR_Integer) mercury__string__parse_util__ArgX2_6;
        MR_Integer mercury__string__parse_util__Var_28 = (MR_Integer) mercury__string__parse_util__ArgY2_7;

        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_27 < mercury__string__parse_util__Var_28);
        if (mercury__string__parse_util__succeeded)
          mercury__string__parse_util__Var_15 = (MR_Integer) 1;
        else
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_27 == mercury__string__parse_util__Var_28);
          if (mercury__string__parse_util__succeeded)
            mercury__string__parse_util__Var_15 = (MR_Integer) 0;
          else
            mercury__string__parse_util__Var_15 = (MR_Integer) 2;
        }
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_15 == (MR_Integer) 0);
        mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
        if (mercury__string__parse_util__succeeded)
          *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_15;
        else
        {
          MR_Word mercury__string__parse_util__Var_16;
          MR_Integer mercury__string__parse_util__Var_29 = (MR_Integer) mercury__string__parse_util__ArgX3_8;
          MR_Integer mercury__string__parse_util__Var_30 = (MR_Integer) mercury__string__parse_util__ArgY3_9;

          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_29 < mercury__string__parse_util__Var_30);
          if (mercury__string__parse_util__succeeded)
            mercury__string__parse_util__Var_16 = (MR_Integer) 1;
          else
          {
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_29 == mercury__string__parse_util__Var_30);
            if (mercury__string__parse_util__succeeded)
              mercury__string__parse_util__Var_16 = (MR_Integer) 0;
            else
              mercury__string__parse_util__Var_16 = (MR_Integer) 2;
          }
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_16 == (MR_Integer) 0);
          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
          if (mercury__string__parse_util__succeeded)
            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_16;
          else
          {
            MR_Word mercury__string__parse_util__Var_17;
            MR_Integer mercury__string__parse_util__Var_31 = (MR_Integer) mercury__string__parse_util__ArgX4_10;
            MR_Integer mercury__string__parse_util__Var_32 = (MR_Integer) mercury__string__parse_util__ArgY4_11;

            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_31 < mercury__string__parse_util__Var_32);
            if (mercury__string__parse_util__succeeded)
              mercury__string__parse_util__Var_17 = (MR_Integer) 1;
            else
            {
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_31 == mercury__string__parse_util__Var_32);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__Var_17 = (MR_Integer) 0;
              else
                mercury__string__parse_util__Var_17 = (MR_Integer) 2;
            }
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_17 == (MR_Integer) 0);
            mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
            if (mercury__string__parse_util__succeeded)
              *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_17;
            else
            {
              MR_Integer mercury__string__parse_util__Var_33 = (MR_Integer) mercury__string__parse_util__ArgX5_12;
              MR_Integer mercury__string__parse_util__Var_34 = (MR_Integer) mercury__string__parse_util__ArgY5_13;

              mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_33 < mercury__string__parse_util__Var_34);
              if (mercury__string__parse_util__succeeded)
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_33 == mercury__string__parse_util__Var_34);
                if (mercury__string__parse_util__succeeded)
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0(
  MR_Word mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_13 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
    MR_Integer mercury__string__parse_util__CastY_14 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_13 == mercury__string__parse_util__CastY_14);
    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__string__parse_util__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word mercury__string__parse_util__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_3 == mercury__string__parse_util__ArgY1_4);
      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_5 == mercury__string__parse_util__ArgY2_6);
        if (mercury__string__parse_util__succeeded)
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX3_7 == mercury__string__parse_util__ArgY3_8);
          if (mercury__string__parse_util__succeeded)
          {
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX4_9 == mercury__string__parse_util__ArgY4_10);
            if (mercury__string__parse_util__succeeded)
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX5_11 == mercury__string__parse_util__ArgY5_12);
          }
        }
      }
    }
    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_318 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__CastY_319 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_318 == mercury__string__parse_util__CastY_319);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__string__parse_util__Var_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__string__parse_util__Var_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mercury__string__parse_util__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_util__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__string__parse_util__Var_8;

                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_344 < mercury__string__parse_util__ArgY1_5);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__Var_8 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_344 == mercury__string__parse_util__ArgY1_5);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__Var_8 = (MR_Integer) 0;
                    else
                      mercury__string__parse_util__Var_8 = (MR_Integer) 2;
                  }
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_8 == (MR_Integer) 0);
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                  if (mercury__string__parse_util__succeeded)
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_8;
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_343 < mercury__string__parse_util__ArgY2_7);
                    if (mercury__string__parse_util__succeeded)
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_343 == mercury__string__parse_util__ArgY2_7);
                      if (mercury__string__parse_util__succeeded)
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char mercury__string__parse_util__Var_349 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__string__parse_util__Var_350 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__string__parse_util__ArgY1_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Char mercury__string__parse_util__ArgY2_47 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__string__parse_util__Var_48;

                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_350 < mercury__string__parse_util__ArgY1_45);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__Var_48 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_350 == mercury__string__parse_util__ArgY1_45);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__Var_48 = (MR_Integer) 0;
                    else
                      mercury__string__parse_util__Var_48 = (MR_Integer) 2;
                  }
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_48 == (MR_Integer) 0);
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                  if (mercury__string__parse_util__succeeded)
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_48;
                  else
                  {
                    MR_Integer mercury__string__parse_util__V_7_404;
                    MR_Integer mercury__string__parse_util__V_8_405;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__Var_349 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_404  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__ArgY2_47 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_405  = Int;
}
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_404 < mercury__string__parse_util__V_8_405);
                    if (mercury__string__parse_util__succeeded)
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_404 == mercury__string__parse_util__V_8_405);
                      if (mercury__string__parse_util__succeeded)
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__string__parse_util__Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
            MR_Char mercury__string__parse_util__Var_352 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__string__parse_util__Var_353 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__string__parse_util__ArgY1_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Char mercury__string__parse_util__ArgY2_89 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__string__parse_util__ArgY3_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__string__parse_util__Var_92;

                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_353 < mercury__string__parse_util__ArgY1_87);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__Var_92 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_353 == mercury__string__parse_util__ArgY1_87);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__Var_92 = (MR_Integer) 0;
                    else
                      mercury__string__parse_util__Var_92 = (MR_Integer) 2;
                  }
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_92 == (MR_Integer) 0);
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                  if (mercury__string__parse_util__succeeded)
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_92;
                  else
                  {
                    MR_Word mercury__string__parse_util__Var_93;
                    MR_Integer mercury__string__parse_util__V_7_412;
                    MR_Integer mercury__string__parse_util__V_8_413;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__Var_352 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_412  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__ArgY2_89 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_413  = Int;
}
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_412 < mercury__string__parse_util__V_8_413);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__Var_93 = (MR_Integer) 1;
                    else
                    {
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_412 == mercury__string__parse_util__V_8_413);
                      if (mercury__string__parse_util__succeeded)
                        mercury__string__parse_util__Var_93 = (MR_Integer) 0;
                      else
                        mercury__string__parse_util__Var_93 = (MR_Integer) 2;
                    }
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_93 == (MR_Integer) 0);
                    mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                    if (mercury__string__parse_util__succeeded)
                      *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_93;
                    else
                    {
                      MR_Integer mercury__string__parse_util__Var_358 = (MR_Integer) mercury__string__parse_util__Var_351;
                      MR_Integer mercury__string__parse_util__Var_359 = (MR_Integer) mercury__string__parse_util__ArgY3_91;

                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_358 < mercury__string__parse_util__Var_359);
                      if (mercury__string__parse_util__succeeded)
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_358 == mercury__string__parse_util__Var_359);
                        if (mercury__string__parse_util__succeeded)
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Char mercury__string__parse_util__Var_341 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__string__parse_util__Var_342 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Char mercury__string__parse_util__ArgY2_138 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_util__Var_139;

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_342 < mercury__string__parse_util__ArgY1_136);
                          if (mercury__string__parse_util__succeeded)
                            mercury__string__parse_util__Var_139 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_342 == mercury__string__parse_util__ArgY1_136);
                            if (mercury__string__parse_util__succeeded)
                              mercury__string__parse_util__Var_139 = (MR_Integer) 0;
                            else
                              mercury__string__parse_util__Var_139 = (MR_Integer) 2;
                          }
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_139 == (MR_Integer) 0);
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_139;
                          else
                          {
                            MR_Integer mercury__string__parse_util__V_7_378;
                            MR_Integer mercury__string__parse_util__V_8_379;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__Var_341 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_378  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__ArgY2_138 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_379  = Int;
}
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_378 < mercury__string__parse_util__V_8_379);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_378 == mercury__string__parse_util__V_8_379);
                              if (mercury__string__parse_util__succeeded)
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__string__parse_util__Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__string__parse_util__Var_348 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_176 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__string__parse_util__ArgY2_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_util__Var_179;

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_348 < mercury__string__parse_util__ArgY1_176);
                          if (mercury__string__parse_util__succeeded)
                            mercury__string__parse_util__Var_179 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_348 == mercury__string__parse_util__ArgY1_176);
                            if (mercury__string__parse_util__succeeded)
                              mercury__string__parse_util__Var_179 = (MR_Integer) 0;
                            else
                              mercury__string__parse_util__Var_179 = (MR_Integer) 2;
                          }
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_179 == (MR_Integer) 0);
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_179;
                          else
                          {
                            MR_Integer mercury__string__parse_util__Var_356 = (MR_Integer) mercury__string__parse_util__Var_347;
                            MR_Integer mercury__string__parse_util__Var_357 = (MR_Integer) mercury__string__parse_util__ArgY2_178;

                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_356 < mercury__string__parse_util__Var_357);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_356 == mercury__string__parse_util__Var_357);
                              if (mercury__string__parse_util__succeeded)
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__string__parse_util__Var_340 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_340 < mercury__string__parse_util__ArgY1_211);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_340 == mercury__string__parse_util__ArgY1_211);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__string__parse_util__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__string__parse_util__Var_346 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_245 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__string__parse_util__ArgY2_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_util__Var_248;

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_346 < mercury__string__parse_util__ArgY1_245);
                          if (mercury__string__parse_util__succeeded)
                            mercury__string__parse_util__Var_248 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_346 == mercury__string__parse_util__ArgY1_245);
                            if (mercury__string__parse_util__succeeded)
                              mercury__string__parse_util__Var_248 = (MR_Integer) 0;
                            else
                              mercury__string__parse_util__Var_248 = (MR_Integer) 2;
                          }
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_248 == (MR_Integer) 0);
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_248;
                          else
                          {
                            MR_Integer mercury__string__parse_util__Var_354 = (MR_Integer) mercury__string__parse_util__Var_345;
                            MR_Integer mercury__string__parse_util__Var_355 = (MR_Integer) mercury__string__parse_util__ArgY2_247;

                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_354 < mercury__string__parse_util__Var_355);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_354 == mercury__string__parse_util__Var_355);
                              if (mercury__string__parse_util__succeeded)
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__string__parse_util__Var_339 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_278 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_339 < mercury__string__parse_util__ArgY1_278);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_339 == mercury__string__parse_util__ArgY1_278);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mercury__string__parse_util__Var_337 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__string__parse_util__Var_338 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Integer mercury__string__parse_util__ArgY1_314 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__string__parse_util__ArgY2_316 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_util__Var_317;

                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_338 < mercury__string__parse_util__ArgY1_314);
                          if (mercury__string__parse_util__succeeded)
                            mercury__string__parse_util__Var_317 = (MR_Integer) 1;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_338 == mercury__string__parse_util__ArgY1_314);
                            if (mercury__string__parse_util__succeeded)
                              mercury__string__parse_util__Var_317 = (MR_Integer) 0;
                            else
                              mercury__string__parse_util__Var_317 = (MR_Integer) 2;
                          }
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_317 == (MR_Integer) 0);
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
                          if (mercury__string__parse_util__succeeded)
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__Var_317;
                          else
                          {
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_337 < mercury__string__parse_util__ArgY2_316);
                            if (mercury__string__parse_util__succeeded)
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__Var_337 == mercury__string__parse_util__ArgY2_316);
                              if (mercury__string__parse_util__succeeded)
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0(
  MR_Word mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_37 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
    MR_Integer mercury__string__parse_util__CastY_38 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_37 == mercury__string__parse_util__CastY_38);
    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__string__parse_util__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__string__parse_util__ArgY1_4;
            MR_Integer mercury__string__parse_util__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__string__parse_util__ArgY2_6;

            mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__string__parse_util__succeeded)
            {
              mercury__string__parse_util__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__parse_util__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_3 == mercury__string__parse_util__ArgY1_4);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_5 == mercury__string__parse_util__ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__string__parse_util__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__string__parse_util__ArgY1_8;
            MR_Char mercury__string__parse_util__ArgX2_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Char mercury__string__parse_util__ArgY2_10;

            mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__parse_util__succeeded)
            {
              mercury__string__parse_util__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__parse_util__ArgY2_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_7 == mercury__string__parse_util__ArgY1_8);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_9 == mercury__string__parse_util__ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__string__parse_util__ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__string__parse_util__ArgY1_12;
            MR_Char mercury__string__parse_util__ArgX2_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Char mercury__string__parse_util__ArgY2_14;
            MR_Word mercury__string__parse_util__ArgX3_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__string__parse_util__ArgY3_16;

            mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__string__parse_util__succeeded)
            {
              mercury__string__parse_util__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__parse_util__ArgY2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
              mercury__string__parse_util__ArgY3_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_11 == mercury__string__parse_util__ArgY1_12);
              if (mercury__string__parse_util__succeeded)
              {
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_13 == mercury__string__parse_util__ArgY2_14);
                if (mercury__string__parse_util__succeeded)
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX3_15 == mercury__string__parse_util__ArgY3_16);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__string__parse_util__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_18;
                MR_Char mercury__string__parse_util__ArgX2_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Char mercury__string__parse_util__ArgY2_20;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__ArgY2_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_17 == mercury__string__parse_util__ArgY1_18);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_19 == mercury__string__parse_util__ArgY2_20);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__string__parse_util__ArgX1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_22;
                MR_Word mercury__string__parse_util__ArgX2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__string__parse_util__ArgY2_24;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__ArgY2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_21 == mercury__string__parse_util__ArgY1_22);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_23 == mercury__string__parse_util__ArgY2_24);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__string__parse_util__ArgX1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_26;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_25 == mercury__string__parse_util__ArgY1_26);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__string__parse_util__ArgX1_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_28;
                MR_Word mercury__string__parse_util__ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__string__parse_util__ArgY2_30;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_27 == mercury__string__parse_util__ArgY1_28);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_29 == mercury__string__parse_util__ArgY2_30);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__string__parse_util__ArgX1_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_32;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_31 == mercury__string__parse_util__ArgY1_32);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mercury__string__parse_util__ArgX1_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer mercury__string__parse_util__ArgY1_34;
                MR_Integer mercury__string__parse_util__ArgX2_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mercury__string__parse_util__ArgY2_36;

                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (mercury__string__parse_util__succeeded)
                {
                  mercury__string__parse_util__ArgY1_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__string__parse_util__ArgY2_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX1_33 == mercury__string__parse_util__ArgY1_34);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__ArgX2_35 == mercury__string__parse_util__ArgY2_36);
                }
              }
              break;
          }
          break;
      }
    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
      if (mercury__string__parse_util__succeeded)
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0(
  MR_Word mercury__string__parse_util__HeadVar__2_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0(
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2,
  MR_Word mercury__string__parse_util__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
    if (mercury__string__parse_util__succeeded)
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word mercury__string__parse_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

      if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word mercury__string__parse_util__TypeInfo_10_10 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
        MR_Word mercury__string__parse_util__ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

        {
          mercury__builtin__compare_3_p_0(mercury__string__parse_util__TypeInfo_10_10, mercury__string__parse_util__HeadVar__1_1, ((MR_Box) (mercury__string__parse_util__Var_11)), ((MR_Box) (mercury__string__parse_util__ArgY1_7)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0(
  MR_Word mercury__string__parse_util__HeadVar__1_1,
  MR_Word mercury__string__parse_util__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__succeeded = MR_TRUE;
    else
    if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
      MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
    }
    else
    {
      MR_Word mercury__string__parse_util__TypeInfo_9_9;
      MR_Word mercury__string__parse_util__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__string__parse_util__ArgY1_6;

      mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
        mercury__string__parse_util__TypeInfo_9_9 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
        {
          mercury__string__parse_util__succeeded = mercury__builtin__unify_2_p_0(mercury__string__parse_util__TypeInfo_9_9, ((MR_Box) (mercury__string__parse_util__ArgX1_5)), ((MR_Box) (mercury__string__parse_util__ArgY1_6)));
        }
      }
    }
    return mercury__string__parse_util__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_8,
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_9,
  MR_Integer * mercury__string__parse_util__N_5)
{
  {
    MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
    MR_Char mercury__string__parse_util__Char_6;
    MR_Integer mercury__string__parse_util__CharValue_7;
    MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_10_10;

    if (mercury__string__parse_util__succeeded)
    {
      mercury__string__parse_util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
      mercury__string__parse_util__STATE_VARIABLE_Chars_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
      {
        mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_6, &mercury__string__parse_util__CharValue_7);
      }
      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Char_6 == (MR_Char) 48);
        mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
        if (mercury__string__parse_util__succeeded)
        {
          {
            mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_10_10, mercury__string__parse_util__STATE_VARIABLE_Chars_9, mercury__string__parse_util__CharValue_7, mercury__string__parse_util__N_5);
          }
          mercury__string__parse_util__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__string__parse_util__succeeded;
  }
}

void MR_CALL 
mercury__string__parse_util__get_number_prefix_3_p_0(
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_6,
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_7,
  MR_Integer * mercury__string__parse_util__N_5)
{
  {
    {
      mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_0_6, mercury__string__parse_util__STATE_VARIABLE_Chars_7, (MR_Integer) 0, mercury__string__parse_util__N_5);
    }
  }
}

void MR_CALL 
mercury__string__parse_util__get_number_prefix_loop_4_p_0(
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_11,
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_12,
  MR_Integer mercury__string__parse_util__N0_6,
  MR_Integer * mercury__string__parse_util__N_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_11)) == (MR_mktag((MR_Integer) 1)));
      MR_Integer mercury__string__parse_util__CharValue_9;
      MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
      MR_Char mercury__string__parse_util__Char_8;

      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
        mercury__string__parse_util__STATE_VARIABLE_Chars_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 1)));
        {
          mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_8, &mercury__string__parse_util__CharValue_9);
        }
      }
      if (mercury__string__parse_util__succeeded)
      {
        MR_Integer mercury__string__parse_util__N1_10;
        MR_Integer mercury__string__parse_util__Var_14 = (mercury__string__parse_util__N0_6 * (MR_Integer) 10);

        mercury__string__parse_util__N1_10 = (mercury__string__parse_util__Var_14 + mercury__string__parse_util__CharValue_9);
        /* direct tailcall eliminated */
        {
          MR_Word mercury__string__parse_util__next_value_of_STATE_VARIABLE_Chars_0_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
          MR_Integer mercury__string__parse_util__next_value_of_N0_6 = mercury__string__parse_util__N1_10;

          mercury__string__parse_util__N0_6 = mercury__string__parse_util__next_value_of_N0_6;
          mercury__string__parse_util__STATE_VARIABLE_Chars_0_11 = mercury__string__parse_util__next_value_of_STATE_VARIABLE_Chars_0_11;
        }
        continue;
      }
      else
      {
        *mercury__string__parse_util__N_7 = mercury__string__parse_util__N0_6;
        *mercury__string__parse_util__STATE_VARIABLE_Chars_12 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_11;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__parse_util__gather_flag_chars_4_p_0(
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_8,
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_9,
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_0_10,
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Flags_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
      MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
      MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;
      MR_Char mercury__string__parse_util__Char_7;
      MR_Word mercury__string__parse_util__Var_50;
      MR_Word mercury__string__parse_util__Var_51;
      MR_Word mercury__string__parse_util__Var_52;
      MR_Word mercury__string__parse_util__Var_53;
      MR_Word mercury__string__parse_util__Var_54;

      if (mercury__string__parse_util__succeeded)
      {
        mercury__string__parse_util__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
        mercury__string__parse_util__STATE_VARIABLE_Chars_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
        mercury__string__parse_util__Var_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
        mercury__string__parse_util__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        mercury__string__parse_util__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        mercury__string__parse_util__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        mercury__string__parse_util__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        switch (mercury__string__parse_util__Char_7) {
          default:
            mercury__string__parse_util__succeeded = MR_FALSE;
            break;
          case (MR_Char) 32:
            {
              {
                mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__Var_54 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((mercury__string__parse_util__Var_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__Var_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__Var_50 << (MR_Integer) 4)))))))))));
              }
              mercury__string__parse_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 35:
            {
              {
                mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_util__Var_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__Var_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__Var_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__Var_50 << (MR_Integer) 4)))))))))));
              }
              mercury__string__parse_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 43:
            {
              {
                mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__Var_54 | ((((mercury__string__parse_util__Var_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__Var_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__Var_51 << (MR_Integer) 3)) | (((MR_Integer) 1 << (MR_Integer) 4)))))))))));
              }
              mercury__string__parse_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 45:
            {
              {
                mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__Var_54 | ((((mercury__string__parse_util__Var_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__Var_52 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((mercury__string__parse_util__Var_50 << (MR_Integer) 4)))))))))));
              }
              mercury__string__parse_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 48:
            {
              {
                mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__Var_54 | ((((mercury__string__parse_util__Var_53 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((mercury__string__parse_util__Var_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__Var_50 << (MR_Integer) 4)))))))))));
              }
              mercury__string__parse_util__succeeded = MR_TRUE;
            }
            break;
        }
      }
      if (mercury__string__parse_util__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Word mercury__string__parse_util__next_value_of_STATE_VARIABLE_Chars_0_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
          MR_Word mercury__string__parse_util__next_value_of_STATE_VARIABLE_Flags_0_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;

          mercury__string__parse_util__STATE_VARIABLE_Flags_0_10 = mercury__string__parse_util__next_value_of_STATE_VARIABLE_Flags_0_10;
          mercury__string__parse_util__STATE_VARIABLE_Chars_0_8 = mercury__string__parse_util__next_value_of_STATE_VARIABLE_Chars_0_8;
        }
        continue;
      }
      else
      {
        *mercury__string__parse_util__STATE_VARIABLE_Flags_11 = mercury__string__parse_util__STATE_VARIABLE_Flags_0_10;
        *mercury__string__parse_util__STATE_VARIABLE_Chars_9 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_8;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__parse_util__gather_non_percent_chars_3_p_0(
  MR_Word mercury__string__parse_util__Chars_4,
  MR_Word * mercury__string__parse_util__NonConversionSpecChars_5,
  MR_Word * mercury__string__parse_util__GatherEndedBy_6)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    if ((mercury__string__parse_util__Chars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__string__parse_util__GatherEndedBy_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char mercury__string__parse_util__HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 0)));
      MR_Word mercury__string__parse_util__TailChars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 1)));

      mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadChar_7 == (MR_Char) 37);
      if (mercury__string__parse_util__succeeded)
      {
        *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__parse_util__GatherEndedBy_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_util__TailChars_8));
        }
      }
      else
      {
        MR_Word mercury__string__parse_util__TailNonConversionSpecChars_9;

        {
          mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_util__TailChars_8, &mercury__string__parse_util__TailNonConversionSpecChars_9, mercury__string__parse_util__GatherEndedBy_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__parse_util__NonConversionSpecChars_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__HeadChar_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_util__TailNonConversionSpecChars_9));
        }
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__parse_util__string_format_error_to_msg_1_f_0(
  MR_Word mercury__string__parse_util__Error_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded;
    MR_String mercury__string__parse_util__Msg_4;

    switch (MR_tag((MR_Word) mercury__string__parse_util__Error_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer mercury__string__parse_util__SpecNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
          MR_Integer mercury__string__parse_util__NumExtraPolyTypes_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
          MR_String mercury__string__parse_util__Msg0_7;
          MR_String mercury__string__parse_util__Var_73;

          {
            mercury__string__parse_util__Var_73 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_5);
          }
          {
            mercury__string__parse_util__Msg0_7 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_73, (MR_String) " is missing");
          }
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 0);
          if (mercury__string__parse_util__succeeded)
          {
            {
              mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ", along with its input.");
            }
          }
          else
          {
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 1);
            if (mercury__string__parse_util__succeeded)
            {
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ".");
              }
            }
            else
            {
              MR_String mercury__string__parse_util__Var_77;
              MR_String mercury__string__parse_util__Var_79;
              MR_String mercury__string__parse_util__Var_80;
              MR_Integer mercury__string__parse_util__Var_81 = (mercury__string__parse_util__NumExtraPolyTypes_6 - (MR_Integer) 1);

              {
                mercury__string__parse_util__Var_80 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__Var_81);
              }
              {
                mercury__string__parse_util__Var_79 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_80, (MR_String) " extra inputs.");
              }
              {
                mercury__string__parse_util__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ", and there are ", mercury__string__parse_util__Var_79);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, mercury__string__parse_util__Var_77);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char mercury__string__parse_util__SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
          MR_String mercury__string__parse_util__Var_67;
          MR_String mercury__string__parse_util__Var_68;
          MR_String mercury__string__parse_util__Var_70;
          MR_String mercury__string__parse_util__Var_71;
          MR_Integer mercury__string__parse_util__SpecNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 0)));

          {
            mercury__string__parse_util__Var_67 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_84);
          }
          {
            mercury__string__parse_util__Var_71 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_8);
          }
          {
            mercury__string__parse_util__Var_70 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_71, (MR_String) ".");
          }
          {
            mercury__string__parse_util__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) " uses the unknown ", mercury__string__parse_util__Var_70);
          }
          {
            mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_67, mercury__string__parse_util__Var_68);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__string__parse_util__PolyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
          MR_String mercury__string__parse_util__Var_57;
          MR_String mercury__string__parse_util__Var_58;
          MR_String mercury__string__parse_util__Var_60;
          MR_String mercury__string__parse_util__Var_61;
          MR_String mercury__string__parse_util__Var_62;
          MR_String mercury__string__parse_util__Var_64;
          MR_String mercury__string__parse_util__Var_65;
          MR_Integer mercury__string__parse_util__SpecNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
          MR_Char mercury__string__parse_util__SpecChar_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

          {
            mercury__string__parse_util__Var_57 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_85);
          }
          {
            mercury__string__parse_util__Var_61 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_86);
          }
          mercury__string__parse_util__Var_65 = ((&mercury__string__parse_util_vector_common_5[8 + mercury__string__parse_util__PolyKind_9]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
          {
            mercury__string__parse_util__Var_64 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_65, (MR_String) ".");
          }
          {
            mercury__string__parse_util__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", but the corresponding input is ", mercury__string__parse_util__Var_64);
          }
          {
            mercury__string__parse_util__Var_60 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_61, mercury__string__parse_util__Var_62);
          }
          {
            mercury__string__parse_util__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " uses the ", mercury__string__parse_util__Var_60);
          }
          {
            mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_57, mercury__string__parse_util__Var_58);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mercury__string__parse_util__Var_51;
              MR_String mercury__string__parse_util__Var_52;
              MR_String mercury__string__parse_util__Var_54;
              MR_String mercury__string__parse_util__Var_55;
              MR_Integer mercury__string__parse_util__SpecNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
              MR_Char mercury__string__parse_util__SpecChar_88 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

              {
                mercury__string__parse_util__Var_51 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_87);
              }
              {
                mercury__string__parse_util__Var_55 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_88);
              }
              {
                mercury__string__parse_util__Var_54 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_55, (MR_String) ", is missing its input.");
              }
              {
                mercury__string__parse_util__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", which uses ", mercury__string__parse_util__Var_54);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_51, mercury__string__parse_util__Var_52);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__string__parse_util__Var_43;
              MR_String mercury__string__parse_util__Var_44;
              MR_String mercury__string__parse_util__Var_46;
              MR_String mercury__string__parse_util__Var_48;
              MR_String mercury__string__parse_util__Var_49;
              MR_Integer mercury__string__parse_util__SpecNum_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
              MR_Word mercury__string__parse_util__PolyKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

              {
                mercury__string__parse_util__Var_43 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_89);
              }
              mercury__string__parse_util__Var_49 = ((&mercury__string__parse_util_vector_common_5[4 + mercury__string__parse_util__PolyKind_90]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
              {
                mercury__string__parse_util__Var_48 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_49, (MR_String) ", not an integer.");
              }
              {
                mercury__string__parse_util__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__Var_48);
              }
              {
                mercury__string__parse_util__Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " says the width is a runtime input,", mercury__string__parse_util__Var_46);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_43, mercury__string__parse_util__Var_44);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__string__parse_util__Var_39;
              MR_Integer mercury__string__parse_util__SpecNum_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

              {
                mercury__string__parse_util__Var_39 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_91);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_39, (MR_String) " says the width is a runtime input, but there is no next input.");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String mercury__string__parse_util__Var_31;
              MR_String mercury__string__parse_util__Var_32;
              MR_String mercury__string__parse_util__Var_34;
              MR_String mercury__string__parse_util__Var_36;
              MR_String mercury__string__parse_util__Var_37;
              MR_Integer mercury__string__parse_util__SpecNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
              MR_Word mercury__string__parse_util__PolyKind_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

              {
                mercury__string__parse_util__Var_31 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_92);
              }
              mercury__string__parse_util__Var_37 = ((&mercury__string__parse_util_vector_common_5[0 + mercury__string__parse_util__PolyKind_93]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
              {
                mercury__string__parse_util__Var_36 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_37, (MR_String) ", not an integer.");
              }
              {
                mercury__string__parse_util__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__Var_36);
              }
              {
                mercury__string__parse_util__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " says the precision is a runtime input,", mercury__string__parse_util__Var_34);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_31, mercury__string__parse_util__Var_32);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String mercury__string__parse_util__Var_27;
              MR_Integer mercury__string__parse_util__SpecNum_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

              {
                mercury__string__parse_util__Var_27 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_94);
              }
              {
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_27, (MR_String) " says the precision is a runtime input, but there is no next input.");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String mercury__string__parse_util__Extra_10;
              MR_String mercury__string__parse_util__Var_12;
              MR_String mercury__string__parse_util__Var_13;
              MR_Integer mercury__string__parse_util__SpecNum_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
              MR_Integer mercury__string__parse_util__NumExtraPolyTypes_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
              MR_String mercury__string__parse_util__Msg0_97;

              mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_95 == (MR_Integer) 1);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__Extra_10 = (MR_String) "";
              else
                mercury__string__parse_util__Extra_10 = (MR_String) "extra ";
              {
                mercury__string__parse_util__Var_13 = mercury__string__parse_util__nth_1_f_0(mercury__string__parse_util__SpecNum_95);
              }
              {
                mercury__string__parse_util__Var_12 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_13, (MR_String) " conversion specifier,");
              }
              {
                mercury__string__parse_util__Msg0_97 = mercury__string__f_43_43_2_f_0((MR_String) "There is no ", mercury__string__parse_util__Var_12);
              }
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_96 == (MR_Integer) 1);
              if (mercury__string__parse_util__succeeded)
              {
                MR_String mercury__string__parse_util__Var_15;
                MR_String mercury__string__parse_util__Var_17;

                {
                  mercury__string__parse_util__Var_17 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "input.");
                }
                {
                  mercury__string__parse_util__Var_15 = mercury__string__f_43_43_2_f_0((MR_String) " but there is an ", mercury__string__parse_util__Var_17);
                }
                {
                  mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__Var_15);
                }
              }
              else
              {
                MR_String mercury__string__parse_util__Var_19;
                MR_String mercury__string__parse_util__Var_21;
                MR_String mercury__string__parse_util__Var_22;
                MR_String mercury__string__parse_util__Var_23;
                MR_String mercury__string__parse_util__Var_25;

                {
                  mercury__string__parse_util__Var_22 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__NumExtraPolyTypes_96);
                }
                {
                  mercury__string__parse_util__Var_25 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "inputs.");
                }
                {
                  mercury__string__parse_util__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__string__parse_util__Var_25);
                }
                {
                  mercury__string__parse_util__Var_21 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Var_22, mercury__string__parse_util__Var_23);
                }
                {
                  mercury__string__parse_util__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " but there are ", mercury__string__parse_util__Var_21);
                }
                {
                  mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__Var_19);
                }
              }
            }
            break;
        }
        break;
    }
    return mercury__string__parse_util__Msg_4;
  }
}

static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
  MR_Char mercury__string__parse_util__SpecChar_3)
{
  {
    MR_String mercury__string__parse_util__HeadVar__2_2;
    MR_String mercury__string__parse_util__Var_5;
    MR_String mercury__string__parse_util__Var_6;
    MR_Word mercury__string__parse_util__V_5_12;
    MR_Word mercury__string__parse_util__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__string__parse_util__V_5_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__SpecChar_3));
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 1) = ((MR_Box) (mercury__string__parse_util__V_6_13));
    }
    {
      mercury__string__to_char_list_2_p_1(&mercury__string__parse_util__Var_6, mercury__string__parse_util__V_5_12);
    }
    {
      mercury__string__append_3_p_2(mercury__string__parse_util__Var_6, (MR_String) "\'", &mercury__string__parse_util__Var_5);
    }
    {
      mercury__string__append_3_p_2((MR_String) "specifier character \140", mercury__string__parse_util__Var_5, &mercury__string__parse_util__HeadVar__2_2);
    }
    return mercury__string__parse_util__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
  MR_Integer mercury__string__parse_util__N_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 1);
    MR_String mercury__string__parse_util__NStr_4;

    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__NStr_4 = (MR_String) "first";
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 2);
      if (mercury__string__parse_util__succeeded)
        mercury__string__parse_util__NStr_4 = (MR_String) "second";
      else
      {
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 3);
        if (mercury__string__parse_util__succeeded)
          mercury__string__parse_util__NStr_4 = (MR_String) "third";
        else
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 4);
          if (mercury__string__parse_util__succeeded)
            mercury__string__parse_util__NStr_4 = (MR_String) "fourth";
          else
          {
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 5);
            if (mercury__string__parse_util__succeeded)
              mercury__string__parse_util__NStr_4 = (MR_String) "fifth";
            else
            {
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 6);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__NStr_4 = (MR_String) "sixth";
              else
              {
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 7);
                if (mercury__string__parse_util__succeeded)
                  mercury__string__parse_util__NStr_4 = (MR_String) "seventh";
                else
                {
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 8);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__NStr_4 = (MR_String) "eighth";
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 9);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__NStr_4 = (MR_String) "ninth";
                    else
                    {
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 10);
                      if (mercury__string__parse_util__succeeded)
                        mercury__string__parse_util__NStr_4 = (MR_String) "tenth";
                      else
                      {
                        MR_String mercury__string__parse_util__Var_5;

                        {
                          mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__N_3, (MR_Integer) 10, &mercury__string__parse_util__Var_5);
                        }
                        {
                          mercury__string__append_3_p_2(mercury__string__parse_util__Var_5, (MR_String) "th", &mercury__string__parse_util__NStr_4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return mercury__string__parse_util__NStr_4;
  }
}

static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
  MR_Integer mercury__string__parse_util__SpecNum_3)
{
  {
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 1);
    MR_String mercury__string__parse_util__HeadVar__2_2;
    MR_String mercury__string__parse_util__Var_5;
    MR_String mercury__string__parse_util__Var_6;

    if (mercury__string__parse_util__succeeded)
      mercury__string__parse_util__Var_6 = (MR_String) "first";
    else
    {
      mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 2);
      if (mercury__string__parse_util__succeeded)
        mercury__string__parse_util__Var_6 = (MR_String) "second";
      else
      {
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 3);
        if (mercury__string__parse_util__succeeded)
          mercury__string__parse_util__Var_6 = (MR_String) "third";
        else
        {
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 4);
          if (mercury__string__parse_util__succeeded)
            mercury__string__parse_util__Var_6 = (MR_String) "fourth";
          else
          {
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 5);
            if (mercury__string__parse_util__succeeded)
              mercury__string__parse_util__Var_6 = (MR_String) "fifth";
            else
            {
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 6);
              if (mercury__string__parse_util__succeeded)
                mercury__string__parse_util__Var_6 = (MR_String) "sixth";
              else
              {
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 7);
                if (mercury__string__parse_util__succeeded)
                  mercury__string__parse_util__Var_6 = (MR_String) "seventh";
                else
                {
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 8);
                  if (mercury__string__parse_util__succeeded)
                    mercury__string__parse_util__Var_6 = (MR_String) "eighth";
                  else
                  {
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 9);
                    if (mercury__string__parse_util__succeeded)
                      mercury__string__parse_util__Var_6 = (MR_String) "ninth";
                    else
                    {
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 10);
                      if (mercury__string__parse_util__succeeded)
                        mercury__string__parse_util__Var_6 = (MR_String) "tenth";
                      else
                      {
                        MR_String mercury__string__parse_util__Var_10;

                        {
                          mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__SpecNum_3, (MR_Integer) 10, &mercury__string__parse_util__Var_10);
                        }
                        {
                          mercury__string__append_3_p_2(mercury__string__parse_util__Var_10, (MR_String) "th", &mercury__string__parse_util__Var_6);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    {
      mercury__string__append_3_p_2(mercury__string__parse_util__Var_6, (MR_String) " conversion specifier", &mercury__string__parse_util__Var_5);
    }
    {
      mercury__string__append_3_p_2((MR_String) "The ", mercury__string__parse_util__Var_5, &mercury__string__parse_util__HeadVar__2_2);
    }
    return mercury__string__parse_util__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____gather_ended_by_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____poly_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_error_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flag_space_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_float_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_int_base_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
  MR_Box mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_util__succeeded;

    {
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
    return mercury__string__parse_util__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
  MR_Box mercury__string__parse_util__wrapper_arg_2,
  MR_Box mercury__string__parse_util__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

    {
      mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
  }
}

void mercury__string__parse_util__init(void)
{
}

void mercury__string__parse_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_gather_ended_by_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0);
}

void mercury__string__parse_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__parse_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module string.parse_util. */
