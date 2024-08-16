/*
** Automatically generated from `string.parse_util.m'
** by the Mercury compiler,
** version rotd-2024-08-16
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


// :- module string.parse_util.
// :- implementation.

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

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_4;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_5;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_6;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_7;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_8;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_9;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_10;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_11;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_12;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_poly_kind_0[13];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[13];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[13];

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3];

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_2[3];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2];

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_4[2];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1];

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5;

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2];

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_6[2];

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

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_hash_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_minus_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_plus_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_space_0[2];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_zero_0[2];

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

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_float_kind_0[6];

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6];

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6];

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3;

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4;

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_int_base_0[5];

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

static MR_String MR_CALL 
mercury__string__parse_util__acceptable_specifier_chars_for_poly_kind_msg_1_f_0(
  MR_Word Kind_3);

static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
  MR_Char SpecChar_3);

static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
  MR_Integer N_3);

static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
  MR_Integer SpecNum_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[1][5];


struct mercury__string__parse_util__vector_common_type_5_0_s {
  const MR_String mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[52];



static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[52] = {
  /* row   0 */   { (MR_String) "The only specifier applicable to characters is %c." },
  /* row   1 */   { (MR_String) "The only specifier applicable to strings is %s." },
  /* row   2 */   { (MR_String) "The specifiers applicable to ints are %d, %i, %o, %x, %X, %u, and %p." },
  /* row   3 */   { (MR_String) "The specifiers applicable to int8s are %d, %i, %o, %x, %X, %u, and %p." },
  /* row   4 */   { (MR_String) "The specifiers applicable to int16s are %d, %i, %o, %x, %X, %u, and %p." },
  /* row   5 */   { (MR_String) "The specifiers applicable to int32s are %d, %i, %o, %x, %X, %u, and %p." },
  /* row   6 */   { (MR_String) "The specifiers applicable to int64s are %d, %i, %o, %x, %X, %u, and %p." },
  /* row   7 */   { (MR_String) "The specifiers applicable to uints are %o, %x, %X, %u, and %p." },
  /* row   8 */   { (MR_String) "The specifiers applicable to uint8s are %o, %x, %X, %u, and %p." },
  /* row   9 */   { (MR_String) "The specifiers applicable to uint16s are %o, %x, %X, %u, and %p." },
  /* row  10 */   { (MR_String) "The specifiers applicable to uint32s are %o, %x, %X, %u, and %p." },
  /* row  11 */   { (MR_String) "The specifiers applicable to uint64s are %o, %x, %X, %u, and %p." },
  /* row  12 */   { (MR_String) "The specifiers applicable to floats are %f, %e, %E, %g and %G." },
  /* row  13 */   { (MR_String) "a character" },
  /* row  14 */   { (MR_String) "a string" },
  /* row  15 */   { (MR_String) "an integer" },
  /* row  16 */   { (MR_String) "an 8-bit integer" },
  /* row  17 */   { (MR_String) "a 16-bit integer" },
  /* row  18 */   { (MR_String) "a 32-bit integer" },
  /* row  19 */   { (MR_String) "a 64-bit integer" },
  /* row  20 */   { (MR_String) "an unsigned integer" },
  /* row  21 */   { (MR_String) "an 8-bit unsigned integer" },
  /* row  22 */   { (MR_String) "a 16-bit unsigned integer" },
  /* row  23 */   { (MR_String) "a 32-bit unsigned integer" },
  /* row  24 */   { (MR_String) "a 64-bit unsigned integer" },
  /* row  25 */   { (MR_String) "a float" },
  /* row  26 */   { (MR_String) "a character" },
  /* row  27 */   { (MR_String) "a string" },
  /* row  28 */   { (MR_String) "an integer" },
  /* row  29 */   { (MR_String) "an 8-bit integer" },
  /* row  30 */   { (MR_String) "a 16-bit integer" },
  /* row  31 */   { (MR_String) "a 32-bit integer" },
  /* row  32 */   { (MR_String) "a 64-bit integer" },
  /* row  33 */   { (MR_String) "an unsigned integer" },
  /* row  34 */   { (MR_String) "an 8-bit unsigned integer" },
  /* row  35 */   { (MR_String) "a 16-bit unsigned integer" },
  /* row  36 */   { (MR_String) "a 32-bit unsigned integer" },
  /* row  37 */   { (MR_String) "a 64-bit unsigned integer" },
  /* row  38 */   { (MR_String) "a float" },
  /* row  39 */   { (MR_String) "a character" },
  /* row  40 */   { (MR_String) "a string" },
  /* row  41 */   { (MR_String) "an integer" },
  /* row  42 */   { (MR_String) "an 8-bit integer" },
  /* row  43 */   { (MR_String) "a 16-bit integer" },
  /* row  44 */   { (MR_String) "a 32-bit integer" },
  /* row  45 */   { (MR_String) "a 64-bit integer" },
  /* row  46 */   { (MR_String) "an unsigned integer" },
  /* row  47 */   { (MR_String) "an 8-bit unsigned integer" },
  /* row  48 */   { (MR_String) "a 16-bit unsigned integer" },
  /* row  49 */   { (MR_String) "a 32-bit unsigned integer" },
  /* row  50 */   { (MR_String) "a 64-bit unsigned integer" },
  /* row  51 */   { (MR_String) "a float" },
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


static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0 = {
  (MR_String) "found_end_of_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) }
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0) };

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1 = {
  (MR_String) "found_percent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1 };

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____gather_ended_by_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____gather_ended_by_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "gather_ended_by",
  { mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0 },
  { mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_int8",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_4 = {
  (MR_String) "poly_kind_int16",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_5 = {
  (MR_String) "poly_kind_int32",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_6 = {
  (MR_String) "poly_kind_int64",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_7 = {
  (MR_String) "poly_kind_uint",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_8 = {
  (MR_String) "poly_kind_uint8",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_9 = {
  (MR_String) "poly_kind_uint16",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_10 = {
  (MR_String) "poly_kind_uint32",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_11 = {
  (MR_String) "poly_kind_uint64",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_12 = {
  (MR_String) "poly_kind_float",
  INT32_C(12)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_poly_kind_0[13] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_5,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_6,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_7,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_8,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_9,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_10,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_11,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_12
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[13] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_12,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_5,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_6,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_7,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_9,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_10,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_11,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_8
};

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[13] = {
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____poly_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____poly_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "poly_kind",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_poly_kind_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0,

};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0 = {
  (MR_String) "error_no_specifier",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1 = {
  (MR_String) "error_unknown_specifier",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0)
};

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_2[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2 = {
  (MR_String) "error_wrong_polytype",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2,
  NULL,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3 = {
  (MR_String) "error_no_polytype",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0)
};

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4 = {
  (MR_String) "error_nonint_star_width",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4,
  NULL,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5 = {
  (MR_String) "error_missing_star_width",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0)
};

static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_6[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6 = {
  (MR_String) "error_nonint_star_prec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6,
  NULL,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_error_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7 = {
  (MR_String) "error_missing_star_prec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8 = {
  (MR_String) "error_extra_polytypes",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1 };

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2 };

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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_error_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_error_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_error",
  { mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0 },
  { mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_hash_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_hash",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_hash_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_minus_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_minus",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_minus_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_plus_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_plus",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_plus_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_space_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_space",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_space_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_zero_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_zero",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_flag_zero_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0,

};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0)
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
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0 = {
  (MR_String) "string_format_flags",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0 };

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0 };

static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flags_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flags_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flags",
  { mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0 },
  { mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_float_kind_0[6] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_float_kind",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_float_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0,

};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_int_base_0[5] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_int_base_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_int_base_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_int_base",
  { mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0 },
  { mercury__string__parse_util__string__parse_util__enum_ordinal_ordered_string_format_int_base_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0,

};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0 = {
  (MR_String) "no_specified_prec",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1 = {
  (MR_String) "specified_prec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1 };

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_prec",
  { mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0 },
  { mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0,

};

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0 = {
  (MR_String) "no_specified_width",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1 = {
  (MR_String) "specified_width",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = { &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1 };

static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_width",
  { mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0 },
  { mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0,

};

void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_25 == Var_26);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_27 == Var_28);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_29 == Var_30);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_31 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_32 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_31 == Var_32);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_33 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_34 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_33 == Var_34);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 0;
              else
                *HeadVar__1_1 = (MR_Integer) 2;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_46 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_47 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_46 == CastY_47);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_6;

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                SubResult1_6 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 == ArgY1_5);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 0;
                else
                  SubResult1_6 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                succeeded = (ArgX2_7 < ArgY2_8);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_7 == ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Char ArgX2_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1)));
              MR_Char ArgY2_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
              MR_Word SubResult1_11;

              succeeded = (ArgX1_9 < ArgY1_10);
              if (succeeded)
                SubResult1_11 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                  SubResult1_11 = (MR_Integer) 0;
                else
                  SubResult1_11 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Integer Var_75;
                MR_Integer Var_76;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgX2_12 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_75  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY2_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_76  = Int;
}
                succeeded = (Var_75 < Var_76);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_75 == Var_76);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_14 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Char ArgX2_17 = ((MR_Char) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1)));
              MR_Char ArgY2_18 = ((MR_Char) (MR_Word) (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1)));
              MR_Word ArgX3_20 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
              MR_Word ArgY3_21 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 15);
              MR_Word SubResult1_16;

              succeeded = (ArgX1_14 < ArgY1_15);
              if (succeeded)
                SubResult1_16 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_14 == ArgY1_15);
                if (succeeded)
                  SubResult1_16 = (MR_Integer) 0;
                else
                  SubResult1_16 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Word SubResult2_19;
                MR_Integer Var_73;
                MR_Integer Var_74;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgX2_17 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_73  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY2_18 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_74  = Int;
}
                succeeded = (Var_73 < Var_74);
                if (succeeded)
                  SubResult2_19 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_73 == Var_74);
                  if (succeeded)
                    SubResult2_19 = (MR_Integer) 0;
                  else
                    SubResult2_19 = (MR_Integer) 2;
                }
                succeeded = (SubResult2_19 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_19;
                else
                {
                  MR_Integer Var_69 = (MR_Integer) (ArgX3_20);
                  MR_Integer Var_70 = (MR_Integer) (ArgY3_21);

                  succeeded = (Var_69 < Var_70);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_69 == Var_70);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ArgX1_22 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Char ArgX2_25 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2)));
                      MR_Char ArgY2_26 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2)));
                      MR_Word SubResult1_24;

                      succeeded = (ArgX1_22 < ArgY1_23);
                      if (succeeded)
                        SubResult1_24 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_22 == ArgY1_23);
                        if (succeeded)
                          SubResult1_24 = (MR_Integer) 0;
                        else
                          SubResult1_24 = (MR_Integer) 2;
                      }
                      succeeded = (SubResult1_24 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_24;
                      else
                      {
                        MR_Integer Var_71;
                        MR_Integer Var_72;

{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgX2_25 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_71  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY2_26 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_72  = Int;
}
                        succeeded = (Var_71 < Var_72);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_71 == Var_72);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                      MR_Word ArgY2_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 15);
                      MR_Word SubResult1_29;

                      succeeded = (ArgX1_27 < ArgY1_28);
                      if (succeeded)
                        SubResult1_29 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_27 == ArgY1_28);
                        if (succeeded)
                          SubResult1_29 = (MR_Integer) 0;
                        else
                          SubResult1_29 = (MR_Integer) 2;
                      }
                      succeeded = (SubResult1_29 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_29;
                      else
                      {
                        MR_Integer Var_67 = (MR_Integer) (ArgX2_30);
                        MR_Integer Var_68 = (MR_Integer) (ArgY2_31);

                        succeeded = (Var_67 < Var_68);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_67 == Var_68);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer ArgX1_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      succeeded = (ArgX1_32 < ArgY1_33);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_32 == ArgY1_33);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Integer ArgX1_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                      MR_Word ArgY2_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 15);
                      MR_Word SubResult1_36;

                      succeeded = (ArgX1_34 < ArgY1_35);
                      if (succeeded)
                        SubResult1_36 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_34 == ArgY1_35);
                        if (succeeded)
                          SubResult1_36 = (MR_Integer) 0;
                        else
                          SubResult1_36 = (MR_Integer) 2;
                      }
                      succeeded = (SubResult1_36 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_36;
                      else
                      {
                        MR_Integer Var_65 = (MR_Integer) (ArgX2_37);
                        MR_Integer Var_66 = (MR_Integer) (ArgY2_38);

                        succeeded = (Var_65 < Var_66);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_65 == Var_66);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Integer ArgX1_39 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      succeeded = (ArgX1_39 < ArgY1_40);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_39 == ArgY1_40);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Integer ArgX1_41 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Integer ArgY1_42 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer ArgX2_44 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Integer ArgY2_45 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_43;

                      succeeded = (ArgX1_41 < ArgY1_42);
                      if (succeeded)
                        SubResult1_43 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_41 == ArgY1_42);
                        if (succeeded)
                          SubResult1_43 = (MR_Integer) 0;
                        else
                          SubResult1_43 = (MR_Integer) 2;
                      }
                      succeeded = (SubResult1_43 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_43;
                      else
                      {
                        succeeded = (ArgX2_44 < ArgY2_45);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_44 == ArgY2_45);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_37 == CastY_38);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;
          MR_Char ArgX2_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1)));
          MR_Char ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1)));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_12;
          MR_Char ArgX2_13 = ((MR_Char) (MR_Word) (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1)));
          MR_Char ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 15);
          MR_Word ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Char) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1)));
            ArgY3_16 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
            {
              succeeded = (ArgX2_13 == ArgY2_14);
              if (succeeded)
                succeeded = (ArgX3_15 == ArgY3_16);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_18;
              MR_Char ArgX2_19 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2)));
              MR_Char ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2)));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                  succeeded = (ArgX2_19 == ArgY2_20);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 15);
              MR_Word ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                succeeded = (ArgX1_21 == ArgY1_22);
                if (succeeded)
                  succeeded = (ArgX2_23 == ArgY2_24);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_25 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_25 == ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 15);
              MR_Word ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 15);
                succeeded = (ArgX1_27 == ArgY1_28);
                if (succeeded)
                  succeeded = (ArgX2_29 == ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_31 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_31 == ArgY1_32);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ArgX1_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_34;
              MR_Integer ArgX2_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_33 == ArgY1_34);
                if (succeeded)
                  succeeded = (ArgX2_35 == ArgY2_36);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string__parse_util_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mercury__string__parse_util_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

MR_String MR_CALL 
mercury__string__parse_util__string_format_error_to_msg_1_f_0(
  MR_Word Error_3)
{
  MR_bool succeeded;
  MR_String Msg_4;

  switch (MR_tag((MR_Word) Error_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer SpecNum_5 = ((MR_Integer) ((MR_hl_field(0, Error_3, (MR_Integer) 0))));
        MR_Integer NumExtraPolyTypes_6 = ((MR_Integer) ((MR_hl_field(0, Error_3, (MR_Integer) 1))));

        succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_11;

          Var_11 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_5);
          mercury__string__append_3_p_2(Var_11, (MR_String) " is missing, along with its input.", &Msg_4);
        }
        else
        {
          succeeded = (NumExtraPolyTypes_6 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_String Var_13;

            Var_13 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_5);
            mercury__string__append_3_p_2(Var_13, (MR_String) " is missing.", &Msg_4);
          }
          else
          {
            MR_String Var_15;
            MR_String Var_16;
            MR_String Var_18;
            MR_String Var_19;
            MR_Integer Var_20;

            Var_15 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_5);
            Var_20 = (MR_Integer) ((MR_Unsigned) NumExtraPolyTypes_6 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__parse_util__string_format_error_to_msg_1_f_0

	MR_Integer I;
	MR_String S;

	I = Var_20 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_19  = S;
}
            mercury__string__append_3_p_2(Var_19, (MR_String) " extra inputs.", &Var_18);
            mercury__string__append_3_p_2((MR_String) " is missing, and there are ", Var_18, &Var_16);
            mercury__string__append_3_p_2(Var_15, Var_16, &Msg_4);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char SpecChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, Error_3, (MR_Integer) 1)));
        MR_String Var_23;
        MR_String Var_24;
        MR_String Var_26;
        MR_String Var_27;
        MR_Integer SpecNum_87 = ((MR_Integer) ((MR_hl_field(1, Error_3, (MR_Integer) 0))));

        Var_23 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_87);
        Var_27 = mercury__string__parse_util__specifier_char_1_f_0(SpecChar_7);
        mercury__string__append_3_p_2(Var_27, (MR_String) ".", &Var_26);
        mercury__string__append_3_p_2((MR_String) " uses the unknown ", Var_26, &Var_24);
        mercury__string__append_3_p_2(Var_23, Var_24, &Msg_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PolyKind_8 = ((MR_Unsigned) ((MR_hl_field(2, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_34;
        MR_String Var_36;
        MR_String Var_37;
        MR_String Var_38;
        MR_String Var_40;
        MR_Integer SpecNum_88 = ((MR_Integer) ((MR_hl_field(2, Error_3, (MR_Integer) 0))));
        MR_Char SpecChar_89 = ((MR_Char) (MR_Word) (MR_hl_field(2, Error_3, (MR_Integer) 1)));

        Var_29 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_88);
        Var_33 = mercury__string__parse_util__specifier_char_1_f_0(SpecChar_89);
        Var_37 = ((&mercury__string__parse_util_vector_common_5[39 + PolyKind_8]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
        Var_40 = mercury__string__parse_util__acceptable_specifier_chars_for_poly_kind_msg_1_f_0(PolyKind_8);
        mercury__string__append_3_p_2((MR_String) ". ", Var_40, &Var_38);
        mercury__string__append_3_p_2(Var_37, Var_38, &Var_36);
        mercury__string__append_3_p_2((MR_String) ", but the corresponding input is ", Var_36, &Var_34);
        mercury__string__append_3_p_2(Var_33, Var_34, &Var_32);
        mercury__string__append_3_p_2((MR_String) " uses the ", Var_32, &Var_30);
        mercury__string__append_3_p_2(Var_29, Var_30, &Msg_4);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_41;
            MR_String Var_42;
            MR_String Var_44;
            MR_String Var_45;
            MR_Integer SpecNum_90 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Char SpecChar_91 = ((MR_Char) (MR_Word) (MR_hl_field(3, Error_3, (MR_Integer) 2)));

            Var_41 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_90);
            Var_45 = mercury__string__parse_util__specifier_char_1_f_0(SpecChar_91);
            mercury__string__append_3_p_2(Var_45, (MR_String) ", is missing its input.", &Var_44);
            mercury__string__append_3_p_2((MR_String) ", which uses ", Var_44, &Var_42);
            mercury__string__append_3_p_2(Var_41, Var_42, &Msg_4);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_47;
            MR_String Var_48;
            MR_String Var_50;
            MR_String Var_52;
            MR_String Var_53;
            MR_Integer SpecNum_92 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Word PolyKind_93 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);

            Var_47 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_92);
            Var_53 = ((&mercury__string__parse_util_vector_common_5[26 + PolyKind_93]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
            mercury__string__append_3_p_2(Var_53, (MR_String) ", not an integer.", &Var_52);
            mercury__string__append_3_p_2((MR_String) " but the next input is ", Var_52, &Var_50);
            mercury__string__append_3_p_2((MR_String) " says the width is a runtime input,", Var_50, &Var_48);
            mercury__string__append_3_p_2(Var_47, Var_48, &Msg_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_63;
            MR_Integer SpecNum_96 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));

            Var_63 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_96);
            mercury__string__append_3_p_2(Var_63, (MR_String) " says the width is a runtime input, but there is no next input.", &Msg_4);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_55;
            MR_String Var_56;
            MR_String Var_58;
            MR_String Var_60;
            MR_String Var_61;
            MR_Integer SpecNum_94 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Word PolyKind_95 = ((MR_Unsigned) ((MR_hl_field(3, Error_3, (MR_Integer) 2))) & (MR_Integer) 15);

            Var_55 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_94);
            Var_61 = ((&mercury__string__parse_util_vector_common_5[13 + PolyKind_95]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
            mercury__string__append_3_p_2(Var_61, (MR_String) ", not an integer.", &Var_60);
            mercury__string__append_3_p_2((MR_String) " but the next input is ", Var_60, &Var_58);
            mercury__string__append_3_p_2((MR_String) " says the precision is a runtime input,", Var_58, &Var_56);
            mercury__string__append_3_p_2(Var_55, Var_56, &Msg_4);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_67;
            MR_Integer SpecNum_97 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));

            Var_67 = mercury__string__parse_util__nth_specifier_1_f_0(SpecNum_97);
            mercury__string__append_3_p_2(Var_67, (MR_String) " says the precision is a runtime input, but there is no next input.", &Msg_4);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Extra_9;
            MR_String Msg0_10;
            MR_String Var_72;
            MR_String Var_73;
            MR_Integer SpecNum_98 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 1))));
            MR_Integer NumExtraPolyTypes_99 = ((MR_Integer) ((MR_hl_field(3, Error_3, (MR_Integer) 2))));

            succeeded = (SpecNum_98 == (MR_Integer) 1);
            if (succeeded)
              Extra_9 = (MR_String) "";
            else
              Extra_9 = (MR_String) "extra ";
            Var_73 = mercury__string__parse_util__nth_1_f_0(SpecNum_98);
            mercury__string__append_3_p_2(Var_73, (MR_String) " conversion specifier,", &Var_72);
            mercury__string__append_3_p_2((MR_String) "There is no ", Var_72, &Msg0_10);
            succeeded = (NumExtraPolyTypes_99 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_String Var_75;
              MR_String Var_77;

              mercury__string__append_3_p_2(Extra_9, (MR_String) "input.", &Var_77);
              mercury__string__append_3_p_2((MR_String) " but there is an ", Var_77, &Var_75);
              mercury__string__append_3_p_2(Msg0_10, Var_75, &Msg_4);
            }
            else
            {
              MR_String Var_79;
              MR_String Var_81;
              MR_String Var_82;
              MR_String Var_83;
              MR_String Var_85;

{
#define MR_PROC_LABEL mercury__string__parse_util__string_format_error_to_msg_1_f_0

	MR_Integer I;
	MR_String S;

	I = NumExtraPolyTypes_99 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_82  = S;
}
              mercury__string__append_3_p_2(Extra_9, (MR_String) "inputs.", &Var_85);
              mercury__string__append_3_p_2((MR_String) " ", Var_85, &Var_83);
              mercury__string__append_3_p_2(Var_82, Var_83, &Var_81);
              mercury__string__append_3_p_2((MR_String) " but there are ", Var_81, &Var_79);
              mercury__string__append_3_p_2(Msg0_10, Var_79, &Msg_4);
            }
          }
          break;
      }
      break;
  }
  return Msg_4;
}

static MR_String MR_CALL 
mercury__string__parse_util__acceptable_specifier_chars_for_poly_kind_msg_1_f_0(
  MR_Word Kind_3)
{
  MR_String Msg_4 = ((&mercury__string__parse_util_vector_common_5[0 + Kind_3]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;

  return Msg_4;
}

static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
  MR_Char SpecChar_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;
  MR_String Var_6;

  mercury__string__char_to_string_2_p_0(SpecChar_3, &Var_6);
  mercury__string__append_3_p_2(Var_6, (MR_String) "\'", &Var_5);
  mercury__string__append_3_p_2((MR_String) "specifier character \140", Var_5, &HeadVar__2_2);
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded = (N_3 == (MR_Integer) 1);
  MR_String NStr_4;

  if (succeeded)
    NStr_4 = (MR_String) "first";
  else
  {
    succeeded = (N_3 == (MR_Integer) 2);
    if (succeeded)
      NStr_4 = (MR_String) "second";
    else
    {
      succeeded = (N_3 == (MR_Integer) 3);
      if (succeeded)
        NStr_4 = (MR_String) "third";
      else
      {
        succeeded = (N_3 == (MR_Integer) 4);
        if (succeeded)
          NStr_4 = (MR_String) "fourth";
        else
        {
          succeeded = (N_3 == (MR_Integer) 5);
          if (succeeded)
            NStr_4 = (MR_String) "fifth";
          else
          {
            succeeded = (N_3 == (MR_Integer) 6);
            if (succeeded)
              NStr_4 = (MR_String) "sixth";
            else
            {
              succeeded = (N_3 == (MR_Integer) 7);
              if (succeeded)
                NStr_4 = (MR_String) "seventh";
              else
              {
                succeeded = (N_3 == (MR_Integer) 8);
                if (succeeded)
                  NStr_4 = (MR_String) "eighth";
                else
                {
                  succeeded = (N_3 == (MR_Integer) 9);
                  if (succeeded)
                    NStr_4 = (MR_String) "ninth";
                  else
                  {
                    succeeded = (N_3 == (MR_Integer) 10);
                    if (succeeded)
                      NStr_4 = (MR_String) "tenth";
                    else
                    {
                      MR_String Var_5;

{
#define MR_PROC_LABEL mercury__string__parse_util__nth_1_f_0

	MR_Integer I;
	MR_String S;

	I = N_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_5  = S;
}
                      mercury__string__append_3_p_2(Var_5, (MR_String) "th", &NStr_4);
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
  return NStr_4;
}

static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
  MR_Integer SpecNum_3)
{
  MR_bool succeeded = (SpecNum_3 == (MR_Integer) 1);
  MR_String HeadVar__2_2;
  MR_String Var_5;
  MR_String Var_6;

  if (succeeded)
    Var_6 = (MR_String) "first";
  else
  {
    succeeded = (SpecNum_3 == (MR_Integer) 2);
    if (succeeded)
      Var_6 = (MR_String) "second";
    else
    {
      succeeded = (SpecNum_3 == (MR_Integer) 3);
      if (succeeded)
        Var_6 = (MR_String) "third";
      else
      {
        succeeded = (SpecNum_3 == (MR_Integer) 4);
        if (succeeded)
          Var_6 = (MR_String) "fourth";
        else
        {
          succeeded = (SpecNum_3 == (MR_Integer) 5);
          if (succeeded)
            Var_6 = (MR_String) "fifth";
          else
          {
            succeeded = (SpecNum_3 == (MR_Integer) 6);
            if (succeeded)
              Var_6 = (MR_String) "sixth";
            else
            {
              succeeded = (SpecNum_3 == (MR_Integer) 7);
              if (succeeded)
                Var_6 = (MR_String) "seventh";
              else
              {
                succeeded = (SpecNum_3 == (MR_Integer) 8);
                if (succeeded)
                  Var_6 = (MR_String) "eighth";
                else
                {
                  succeeded = (SpecNum_3 == (MR_Integer) 9);
                  if (succeeded)
                    Var_6 = (MR_String) "ninth";
                  else
                  {
                    succeeded = (SpecNum_3 == (MR_Integer) 10);
                    if (succeeded)
                      Var_6 = (MR_String) "tenth";
                    else
                    {
                      MR_String Var_8;

{
#define MR_PROC_LABEL mercury__string__parse_util__nth_specifier_1_f_0

	MR_Integer I;
	MR_String S;

	I = SpecNum_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_8  = S;
}
                      mercury__string__append_3_p_2(Var_8, (MR_String) "th", &Var_6);
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
  mercury__string__append_3_p_2(Var_6, (MR_String) " conversion specifier", &Var_5);
  mercury__string__append_3_p_2((MR_String) "The ", Var_5, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(
  MR_Word STATE_VARIABLE_Chars_0_8,
  MR_Word * STATE_VARIABLE_Chars_9,
  MR_Integer * N_5)
{
  MR_bool succeeded = (STATE_VARIABLE_Chars_0_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Char Char_6;
  MR_Integer CharValue_7;
  MR_Word STATE_VARIABLE_Chars_10_10;

  if (succeeded)
  {
    Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
    STATE_VARIABLE_Chars_10_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_0_8, (MR_Integer) 1))));
    succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_6, &CharValue_7);
    if (succeeded)
    {
      succeeded = (Char_6 != (MR_Char) 48);
      if (succeeded)
      {
        mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_10_10, STATE_VARIABLE_Chars_9, CharValue_7, N_5);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_util__get_number_prefix_3_p_0(
  MR_Word STATE_VARIABLE_Chars_0_6,
  MR_Word * STATE_VARIABLE_Chars_7,
  MR_Integer * N_5)
{
  mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_0_6, STATE_VARIABLE_Chars_7, (MR_Integer) 0, N_5);
}

void MR_CALL 
mercury__string__parse_util__get_number_prefix_loop_4_p_0(
  MR_Word STATE_VARIABLE_Chars_0_11,
  MR_Word * STATE_VARIABLE_Chars_12,
  MR_Integer N0_6,
  MR_Integer * N_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer CharValue_9;
    MR_Word STATE_VARIABLE_Chars_13_13;
    MR_Char Char_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_13_13 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_0_11, (MR_Integer) 1))));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_8, &CharValue_9);
    }
    if (succeeded)
    {
      MR_Integer N1_10;
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) N0_6 * (MR_Unsigned) 10);
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_11;
      MR_Integer next_value_of_N0_6;

      N1_10 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) CharValue_9);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Chars_0_11 = STATE_VARIABLE_Chars_13_13;
      next_value_of_N0_6 = N1_10;
      STATE_VARIABLE_Chars_0_11 = next_value_of_STATE_VARIABLE_Chars_0_11;
      N0_6 = next_value_of_N0_6;
      continue;
    }
    else
    {
      *N_7 = N0_6;
      *STATE_VARIABLE_Chars_12 = STATE_VARIABLE_Chars_0_11;
    }
    break;
  }
}

void MR_CALL 
mercury__string__parse_util__gather_flag_chars_4_p_0(
  MR_Word STATE_VARIABLE_Chars_0_8,
  MR_Word * STATE_VARIABLE_Chars_9,
  MR_Word STATE_VARIABLE_Flags_0_10,
  MR_Word * STATE_VARIABLE_Flags_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_8 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Chars_12_12;
    MR_Word STATE_VARIABLE_Flags_13_13;
    MR_Char Char_7;
    MR_Unsigned packed_word_0;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_12_12 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_0_8, (MR_Integer) 1))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)));
      switch (Char_7) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 32:
          {
            {
              STATE_VARIABLE_Flags_13_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Flags_13_13, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 35:
          {
            {
              STATE_VARIABLE_Flags_13_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Flags_13_13, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 43:
          {
            {
              STATE_VARIABLE_Flags_13_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Flags_13_13, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 45:
          {
            {
              STATE_VARIABLE_Flags_13_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Flags_13_13, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 1))));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 48:
          {
            {
              STATE_VARIABLE_Flags_13_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Flags_13_13, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
            }
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_STATE_VARIABLE_Chars_0_8 = STATE_VARIABLE_Chars_12_12;
      MR_Word next_value_of_STATE_VARIABLE_Flags_0_10 = STATE_VARIABLE_Flags_13_13;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_Chars_0_8 = next_value_of_STATE_VARIABLE_Chars_0_8;
      STATE_VARIABLE_Flags_0_10 = next_value_of_STATE_VARIABLE_Flags_0_10;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Flags_11 = STATE_VARIABLE_Flags_0_10;
      *STATE_VARIABLE_Chars_9 = STATE_VARIABLE_Chars_0_8;
    }
    break;
  }
}

void MR_CALL 
mercury__string__parse_util__gather_non_percent_chars_3_p_0(
  MR_Word Chars_4,
  MR_Word * NonConversionSpecChars_5,
  MR_Word * GatherEndedBy_6)
{
  MR_bool succeeded;

  if ((Chars_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *NonConversionSpecChars_5 = (MR_Word) ((MR_Unsigned) 0U);
    *GatherEndedBy_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Char HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_4, (MR_Integer) 0)));
    MR_Word TailChars_8 = ((MR_Word) ((MR_hl_field(1, Chars_4, (MR_Integer) 1))));

    succeeded = (HeadChar_7 == (MR_Char) 37);
    if (succeeded)
    {
      *NonConversionSpecChars_5 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *GatherEndedBy_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TailChars_8));
      }
    }
    else
    {
      MR_Word * AddrTailNonConversionSpecChars_10;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *NonConversionSpecChars_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (HeadChar_7));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrTailNonConversionSpecChars_10 = (MR_Word *) (&(MR_hl_field(1, *NonConversionSpecChars_5, (MR_Integer) 1)));
      mercury__string__parse_util__LCMC__pred__gather_non_percent_chars__1_3_p_0(TailChars_8, AddrTailNonConversionSpecChars_10, GatherEndedBy_6);
    }
  }
}

void MR_CALL 
mercury__string__parse_util__LCMC__pred__gather_non_percent_chars__1_3_p_0(
  MR_Word Chars_4,
  MR_Word * AddrOfNonConversionSpecChars_11,
  MR_Word * GatherEndedBy_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Chars_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfNonConversionSpecChars_11 = (MR_Word) ((MR_Unsigned) 0U);
      *GatherEndedBy_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, Chars_4, (MR_Integer) 0)));
      MR_Word TailChars_8 = ((MR_Word) ((MR_hl_field(1, Chars_4, (MR_Integer) 1))));

      succeeded = (HeadChar_7 == (MR_Char) 37);
      if (succeeded)
      {
        *AddrOfNonConversionSpecChars_11 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *GatherEndedBy_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TailChars_8));
        }
      }
      else
      {
        MR_Word * AddrTailNonConversionSpecChars_10;
        MR_Word NonConversionSpecChars_13;
        MR_Word next_value_of_Chars_4;
        MR_Word * next_value_of_AddrOfNonConversionSpecChars_11;

        {
          NonConversionSpecChars_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NonConversionSpecChars_13, 0) = ((MR_Box) (MR_Word) (HeadChar_7));
          MR_hl_field(1, NonConversionSpecChars_13, 1) = NULL;
        }
        AddrTailNonConversionSpecChars_10 = (MR_Word *) (&(MR_hl_field(1, NonConversionSpecChars_13, (MR_Integer) 1)));
        *AddrOfNonConversionSpecChars_11 = NonConversionSpecChars_13;
        // direct tailcall eliminated
        ;
        next_value_of_Chars_4 = TailChars_8;
        next_value_of_AddrOfNonConversionSpecChars_11 = AddrTailNonConversionSpecChars_10;
        Chars_4 = next_value_of_Chars_4;
        AddrOfNonConversionSpecChars_11 = next_value_of_AddrOfNonConversionSpecChars_11;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____gather_ended_by_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____poly_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flag_space_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_flags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_float_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_int_base_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module string.parse_util.
